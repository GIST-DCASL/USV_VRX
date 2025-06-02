# ───────── wamv_nav/mission_manager.py ─────────
#!/usr/bin/env python3
"""
Simple Mission-Manager
  ① /MissionInfo(std_msgs/String) 수신
  ② 임시 YAML(models) 생성 → Gazebo/VRX launch
  ③ 각 Boat_i Action 시퀀스 publish
"""

import rclpy, yaml, subprocess, tempfile, os, json
from rclpy.node import Node
from std_msgs.msg import String


class MissionManager(Node):
    def __init__(self):
        super().__init__('mission_manager')
        self.create_subscription(String, '/MissionInfo', self.cb_mission, 10)
        self.pub_action = self.create_publisher(String, '/BoatActions', 10)
        self.get_logger().info('MissionManager ready – waiting MissionInfo')

    # ────────────────────────────────────────────────────────────────────
    # helper: 위경도 → ENU(m)  (아주 단순화; 실제 프로젝트 식으로 대체)
    def ll2enu(self, lat, lon, ref=(35.227108, 126.840301)):
        dy = (lat - ref[0]) * 1.113195e5     # 위도 → m
        dx = (lon - ref[1]) * 8.910796e4     # 경도 → m(∵ cosφ≈0.82)
        return dx, dy

    # ────────────────────────────────────────────────────────────────────
    def build_models(self, tasks):
        models = []
        for i, task in enumerate(tasks, 1):
            sp = task['actions'][0]['setpoint']         # 첫 setpoint
            x, y = self.ll2enu(sp['x'], sp['y'])
            models.append({
                'model_name': f'wavm_{i}',               # ← 필수!
                'model_type': 'wam-v',
                'pose'      : [x, y, 0, 0, 0, 0],
            })
        return models

    # ────────────────────────────────────────────────────────────────────
    def cb_mission(self, msg: String):
        """MissionInfo 문자열(YAML/JSON) → dict"""
        try:
            mission = yaml.safe_load(msg.data)
            tasks   = mission.get('tasks', [])
        except Exception as e:
            self.get_logger().error(f'Invalid MissionInfo: {e}')
            return

        # 1) spawn-file 작성
        models = self.build_models(tasks)
        with tempfile.NamedTemporaryFile('w', delete=False, suffix='.yaml') as f:
            yaml.safe_dump({'models': models}, f)
            spawn_file = f.name
        self.get_logger().info(f'Generated spawn-file: {spawn_file}')

        # 2) Gazebo Launcher 호출
        self.get_logger().info(f'Starting Gazebo – {len(models)} USVs')
        subprocess.Popen([
            'ros2', 'launch', 'wamv_nav', 'competition.launch.py',
            f'world:=sydney_regatta',
            f'config_file:={spawn_file}',
            f'headless:=False'
        ])

        # 3) Action 시퀀스 publish (dummy, 실제는 각 task Action 을 순차로 publish)
        self.timer = self.create_timer(5.0, lambda: self.push_actions(tasks))

    # ────────────────────────────────────────────────────────────────────
    def push_actions(self, tasks):
        for t in tasks:
            self.pub_action.publish(String(data=json.dumps(t)))
        self.get_logger().info('Publishing Action sequences …')
        self.timer.cancel()


def main():
    rclpy.init()
    mgr = MissionManager()
    rclpy.spin(mgr)


if __name__ == '__main__':
    main()

