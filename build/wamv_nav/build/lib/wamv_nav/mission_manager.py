#!/usr/bin/env python3
# SPDX-License-Identifier: Apache-2.0
"""
Mission Manager
────────────────
· /MissionInfo(std_msgs/String – YAML or JSON) 수신
· 임시 spawn-config YAML 생성 ➜ competition.launch.py 호출
· USV_i action[] → /Boat_i/action(px4_uv/Action) 퍼블리시
"""

from __future__ import annotations
import json, yaml, re, math, tempfile, subprocess, os, signal, time, sys
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Vector3
from px4_uv.msg import Action

# ───────── ENU 원점 ─────────
REF_LAT, REF_LON = 35.227108, 126.840301
R_EARTH          = 6378137.0                      # [m]

class MissionManager(Node):
    def __init__(self):
        super().__init__('mission_manager')
        self.create_subscription(String, '/MissionInfo', self._cb_mission, 10)
        self.gz_proc: subprocess.Popen | None     = None
        self.ctrl_proc: subprocess.Popen | None   = None
        self.pub: dict[int, rclpy.publisher.Publisher] = {}
        self.get_logger().info('MissionManager ready – waiting MissionInfo')

    # ────────────────────────────────────────────────────────────────
    def _cb_mission(self, msg: String):
        if self.gz_proc:                                        # 이미 수행 중
            self.get_logger().warn('Mission already running – ignore')
            return

        try:
            mission = self._to_dict(msg.data)
        except Exception as e:
            self.get_logger().error(f'✖ MissionInfo parse error: {e}')
            return

        tasks = [t for t in mission.get('tasks', [])
                 if re.fullmatch(r'USV_\d+', t.get('task_id', ''))]
        if not tasks:
            self.get_logger().error('✖ no USV_* tasks found')
            return
        usv_ids = sorted(int(t['task_id'].split('_')[1]) for t in tasks)

        cfg_path = self._spawn_yaml(tasks)
        self.get_logger().info(f'✓ spawn-file → {cfg_path}')

        # Gazebo + VRX 시작
        self.gz_proc = subprocess.Popen(
            ['ros2','launch','vrx_gz','competition.launch.py',
             f'world:=sydney_regatta',
             f'sim_mode:=full',
             f'config_file:={cfg_path}',
             f'bridge_competition_topics:=True'],
            preexec_fn=os.setsid)

        time.sleep(5)      # 맵 로딩 대기 (필요시 조정)

        # USV 컨트롤러 실행
        self.ctrl_proc = subprocess.Popen(
            ['ros2','run','wamv_nav','usv_controller',
             '--ros-args','-p',f'num_robots:={len(usv_ids)}'],
            preexec_fn=os.setsid)
        time.sleep(2)

        # Boat_i/action 퍼블리셔 준비
        for i in usv_ids:
            self.pub[i] = self.create_publisher(
                Action, f'/Boat_{i}/action', 10)

        # 액션 시퀀스 전송
        self._dispatch(tasks)

    # ────────────────────────────────────────────────────────────────
    def _to_dict(self, raw: str) -> dict:
        raw = raw.strip()
        try:
            return json.loads(raw)
        except Exception:
            return yaml.safe_load(raw)

    # 위도-경도 → ENU (m)
    def _ll2enu(self, lat: float, lon: float):
        dφ = math.radians(lat - REF_LAT)
        dλ = math.radians(lon - REF_LON)
        x  = dλ * R_EARTH * math.cos(math.radians(REF_LAT))
        y  = dφ * R_EARTH
        return [x, y, 0, 0, 0, 0]

    # spawn-config YAML 작성
    def _spawn_yaml(self, tasks):
        models = []
        for t in tasks:
            idx = int(t['task_id'].split('_')[1])
            first_ll = next((a['setpoint'] for a in t['actions']
                             if {'x','y'} <= set(a.get('setpoint',{}))), None)
            pose = self._ll2enu(first_ll['x'], first_ll['y']) if first_ll else \
                   [idx*5.0, 0, 0, 0, 0, 0]

            models.append({
                'model_name': f'wamv_{idx}',
                'model_type': 'wam-v',
                'pose'      : pose
            })

        tmp = tempfile.NamedTemporaryFile(
            'w', suffix='.yaml', delete=False, encoding='utf-8')
        yaml.safe_dump({'models': models}, tmp, sort_keys=False)
        tmp.close()
        return tmp.name

    # Action → /Boat_i/action 퍼블리시
    def _dispatch(self, tasks):
        self.get_logger().info('Publishing Action sequences …')
        for t in tasks:
            idx = int(t['task_id'].split('_')[1])
            for a in t['actions']:
                msg           = Action()
                msg.action    = int(a['action'])
                sp            = a.get('setpoint', {})
                msg.setpoint  = Vector3(x=float(sp.get('x',0)),
                                        y=float(sp.get('y',0)),
                                        z=float(sp.get('z',0)))
                msg.param1, msg.param2 = map(float, (a.get('param1',0),
                                                     a.get('param2',0)))
                msg.param3, msg.param4, msg.param5 = map(float, (
                    a.get('param3',0), a.get('param4',0), a.get('param5',0)))
                self.pub[idx].publish(msg)
                time.sleep(0.3)

    # 정리
    def destroy_node(self):
        super().destroy_node()
        for p in (self.ctrl_proc, self.gz_proc):
            if p and p.poll() is None:
                os.killpg(os.getpgid(p.pid), signal.SIGINT)


def main(argv=None):
    rclpy.init(args=argv)
    node = MissionManager()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main(sys.argv)

