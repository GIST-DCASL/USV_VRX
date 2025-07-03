#!/usr/bin/env python3
# ====================================================================== #
#  Mission Manager (USV) 
# ---------------------------------------------------------------------- #
import math, time, subprocess, pathlib
from typing import List, Optional, Tuple

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from px4_uv.msg import MissionInfo, TaskInfo, Action

# ---------- constants --------------------------------------------------- #
ACTION_MOVE, ACTION_TAKEOFF, ACTION_LANDING, ACTION_RETURN_HOME, ACTION_PATROL = range(5)
VEHICLE_USV = 3

REF_LAT, REF_LON, R_EARTH, DEG = 35.227108, 126.840301, 6_378_137.0, 180.0 / math.pi
def ll2enu(lat, lon): dx=math.radians(lon-REF_LON)*R_EARTH*math.cos(math.radians(REF_LAT)); dy=math.radians(lat-REF_LAT)*R_EARTH; return Point(x=dx,y=dy,z=0.0)
def enu2ll(p): lat=REF_LAT+(p.y/R_EARTH)*DEG; lon=REF_LON+(p.x/(R_EARTH*math.cos(math.radians(REF_LAT))))*DEG; return lat,lon

class WP:  # way-point with action code
    def __init__(self, pt: Point, act: int): self.pt, self.act = pt, act

class Boat:
    def __init__(self, ns, pub):
        self.ns, self.pub = ns, pub
        self.pos: Optional[Point] = None
        self.queue: List[WP | Tuple[str,float]] = []
        self.home: Optional[Point] = None
        self.hover_end = 0.0
        self.ready = False
        self.idx = 0

# ======================================================================= #
class MissionManager(Node):
    def __init__(self):
        super().__init__('mission_manager')
        self.get_logger().info('액션 정보를 입력하세요')
        self.declare_parameter('world', 'sydney_regatta')
        self.declare_parameter('spacing', 10.0)
        self.pos_tol = 0.5
        self.boats: dict[str, Boat] = {}
        self.spawned = self.ctrl_started = self.started = self.finished = False
        self.create_subscription(MissionInfo, '/MissionInfo', self._on_mission, 10)
        self.create_timer(0.2, self._loop)

    # ---------- MissionInfo -------------------------------------------- #
    def _on_mission(self, msg: MissionInfo):
        tasks=[t for t in msg.tasks if t.target_type==VEHICLE_USV]; n=len(tasks)
        if not n: self.get_logger().warn('MissionInfo 에 USV 작업이 없습니다.'); return
        self._spawn(n); self._start_ctrl(n)
        for i,t in enumerate(tasks,1):
            b=self.boats[f'wamv_{i}']; b.queue.clear(); b.ready=False; b.idx=0; b.home=None
            self._fill_queue(t,b)
        self.started=self.finished=False

    # ---------- build queue -------------------------------------------- #
    def _fill_queue(self, task:TaskInfo, b:Boat):
        def add(pt,act,hov=0): b.queue.append(WP(pt,act)); b.queue.append(('hover',hov)) if hov else None; b.home=b.home or pt
        for a in task.actions:
            if a.action in (ACTION_MOVE,ACTION_TAKEOFF,ACTION_LANDING):
                add(ll2enu(a.setpoint.x,a.setpoint.y),a.action,a.param1)
            elif a.action==ACTION_RETURN_HOME and b.home:
                add(b.home,a.action,a.param1)
            elif a.action==ACTION_PATROL:
                p1=ll2enu(a.setpoint.x,a.setpoint.y); p2=ll2enu(a.param2,a.param3)
                for _ in range(max(1,int(a.param5))):
                    add(p1,ACTION_PATROL,a.param1); add(p2,ACTION_PATROL,a.param1)
                add(p1,ACTION_PATROL,a.param1)
            else: self.get_logger().warn(f'{b.ns} unsupported action {a.action}')

    # ---------- spawn & controller ------------------------------------- #
    def _spawn(self,n):
        if self.spawned: return
        world=self.get_parameter('world').value; spacing=self.get_parameter('spacing').value
        subprocess.Popen(['ros2','launch','vrx_gz','competition.launch.py',f'world:={world}',f'num_boats:={n}',f'spacing:={spacing}'])
        time.sleep(5)
        for i in range(1,n+1):
            ns=f'wamv_{i}'; pub=self.create_publisher(Point,f'/{ns}/goal',10); b=Boat(ns,pub); self.boats[ns]=b
            self.create_subscription(Odometry,f'/{ns}/sensors/position/ground_truth_odometry',
                lambda m,b=b: setattr(b,'pos',m.pose.pose.position),10)
        self.spawned=True

    def _start_ctrl(self,n):
        if self.ctrl_started: return
        log=pathlib.Path.home()/f'.ros/multi_usv_ctrl_{n}.log'
        subprocess.Popen(['ros2','run','multi_usv_ctrl','multi_usv_pid_controller','--ros-args','-p',f'num_robots:={n}'],
                         stdout=open(log,'w'),stderr=subprocess.STDOUT)
        self.ctrl_started=True

    # ---------- main loop --------------------------------------------- #
    def _loop(self):
        now=time.time()
        # 대기: 모든 보트 첫 WP 도달
        if not self.started:
            ready=True
            for b in self.boats.values():
                if b.ready or b.pos is None or not b.queue: ready&=b.ready; continue
                wp=b.queue[0]
                if self._reach(b.pos,wp.pt):
                    b.queue.pop(0); b.queue.pop(0) if b.queue and isinstance(b.queue[0],tuple) else None
                    b.ready=True; b.idx=1
                    lat,lon=enu2ll(b.pos)
                    self.get_logger().info(f'[{b.ns}] 첫 포인트 도달 lat={lat:.6f} lon={lon:.6f}')
                else: b.pub.publish(wp.pt); ready=False
            if ready and self.boats: self.started=True; self.get_logger().info('=== 미션을 시작합니다 ===')
            return

        if self.finished: return   # 이미 끝났다면 더 할 일 없음
        # 미션 진행
        all_done=True
        for b in self.boats.values():
            if b.pos is None: all_done=False; continue
            if not b.queue: continue
            all_done=False
            head=b.queue[0]
            if isinstance(head,tuple):
                if b.hover_end==0: b.hover_end=now+head[1]
                if now>=b.hover_end: b.queue.pop(0); b.hover_end=0
            else:
                if self._reach(b.pos,head.pt):
                    b.queue.pop(0); b.idx+=1
                    lat,lon=enu2ll(b.pos)
                    self.get_logger().info(f'[{b.ns}] {b.idx}번째 웨이포인트(Action {head.act}) 도달 lat={lat:.6f} lon={lon:.6f}')
                else: b.pub.publish(head.pt)
        if all_done:
            self.finished=True
            self.get_logger().info('=== 모든 미션이 끝났습니다 ===')

    def _reach(self,p,g): return math.hypot(g.x-p.x,g.y-p.y)<self.pos_tol

# ======================================================================= #
def main():
    rclpy.init(); rclpy.spin(MissionManager()); rclpy.shutdown()
if __name__=='__main__': main()

