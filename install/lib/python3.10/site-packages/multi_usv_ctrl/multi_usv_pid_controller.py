#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Multi-USV PID Controller   
토픽:
  /wamv_i/goal              (Point)   입력 목표 (ENU m)
  /wamv_i/thrusters/left/thrust   (Float64)   출력 추력
  /wamv_i/thrusters/right/thrust  (Float64)
"""

import math, rclpy
from rclpy.node import Node
from geometry_msgs.msg import Point
from nav_msgs.msg import Odometry
from std_msgs.msg import Float64


# ───────────────────────────────── PID 클래스 ────────────────────────── #
class PID:
    def __init__(self, kp, ki, kd, limit, dt):
        self.kp, self.ki, self.kd = kp, ki, kd
        self.limit = limit
        self.dt = dt
        self.i_term = 0.0
        self.prev_err = 0.0

    def step(self, err: float) -> float:
        p = self.kp * err
        self.i_term += self.ki * err * self.dt
        d = self.kd * (err - self.prev_err) / self.dt
        self.prev_err = err

        out = p + self.i_term + d
        out = max(-self.limit, min(self.limit, out))
        self.i_term = max(-self.limit, min(self.limit, self.i_term))
        return out


# ────────────────────────────── 단일 USV ─────────────────────────────── #
class SingleUSV:
    def __init__(self, node: Node, ns: str, g: dict, dt: float,
                 tol: float, K_v: float, K_w: float,
                 B: float, yaw_th: float, scale: float):

        self.node, self.ns = node, ns
        self.goal = None
        self.pos_tol = tol
        self.K_v, self.K_w = K_v, K_w
        self.B = B
        self.yaw_th = yaw_th
        self.scale = scale            # ★ 출력 가중치

        # PID( dist , yaw )
        self.pid_dist = PID(*g['dist'], limit=g['vmax'], dt=dt)
        self.pid_yaw  = PID(*g['yaw'] , limit=g['wmax'], dt=dt)

        # publishers
        self.pub_left  = node.create_publisher(
            Float64, f'/{ns}/thrusters/left/thrust', 10)
        self.pub_right = node.create_publisher(
            Float64, f'/{ns}/thrusters/right/thrust', 10)

        # subscribers
        node.create_subscription(Point, f'/{ns}/goal', self.goal_cb, 10)
        node.create_subscription(
            Odometry, f'/{ns}/sensors/position/ground_truth_odometry',
            self.odom_cb, 10)

        self.x = self.y = self.yaw = None
        node.create_timer(dt, self.update)

    def goal_cb(self, msg: Point):
        self.goal = (msg.x, msg.y)

    def odom_cb(self, msg: Odometry):
        p, q = msg.pose.pose.position, msg.pose.pose.orientation
        siny = 2 * (q.w * q.z + q.x * q.y)
        cosy = 1 - 2 * (q.y * q.y + q.z * q.z)
        self.yaw = math.atan2(siny, cosy)
        self.x, self.y = p.x, p.y

    def update(self):
        # 초기화 미완료 or 목표 없음
        if None in (self.x, self.y, self.yaw) or self.goal is None:
            return

        ex, ey = self.goal[0] - self.x, self.goal[1] - self.y
        dist = math.hypot(ex, ey)

        # ── 목표 도달 시 정지 ──
        if dist < self.pos_tol:
            self.pub_left.publish(Float64(data=0.0))
            self.pub_right.publish(Float64(data=0.0))
            return

        target_yaw = math.atan2(ey, ex)
        yaw_err = math.atan2(math.sin(target_yaw - self.yaw),
                             math.cos(target_yaw - self.yaw))

        v_cmd = self.pid_dist.step(dist)
        w_cmd = self.pid_yaw.step(yaw_err)

        # 스러스터 명령 (10× gain)  +  scale
        raw_left  = self.K_v * v_cmd - 15 * self.K_w * w_cmd * self.B / 2
        raw_right = self.K_v * v_cmd + 15 * self.K_w * w_cmd * self.B / 2

        left  = self.scale * max(-200, min(200, raw_left))
        right = self.scale * max(-200, min(200, raw_right))

        self.pub_left.publish(Float64(data=float(left)))
        self.pub_right.publish(Float64(data=float(right)))


# ───────────────────────────── 컨트롤러 노드 ─────────────────────────── #
class MultiUSVController(Node):
    def __init__(self):
        super().__init__('multi_usv_pid_controller')

        n   = self.declare_parameter('num_robots', 1).value
        dt  = self.declare_parameter('dt', 0.05).value
        tol = self.declare_parameter('pos_tol', 0.5).value
        scale = self.declare_parameter('thrust_scale', 1000.0).value  # ★ 추가

        gains = {
            'dist': (self.declare_parameter('kp_dist', 2.0).value,
                     self.declare_parameter('ki_dist', 0.0).value,
                     self.declare_parameter('kd_dist', 0.4).value),
            'yaw' : (self.declare_parameter('kp_yaw', 2.0).value,
                     self.declare_parameter('ki_yaw', 0.0).value,
                     self.declare_parameter('kd_yaw', 0.6).value),
            'vmax': self.declare_parameter('v_max', 100.0).value,   # 10×
            'wmax': self.declare_parameter('w_max', 105.0).value,   # 10×
        }

        K_v = self.declare_parameter('K_v', 800.0).value            # 10×
        K_w = self.declare_parameter('K_w', 2000.0).value           # 10×
        B   = self.declare_parameter('B', 0.4).value
        yaw_th = self.declare_parameter('yaw_th', 0.3).value

        for i in range(n):
            ns = f'wamv_{i+1}'
            SingleUSV(self, ns, gains, dt, tol, K_v, K_w, B, yaw_th, scale)
            self.get_logger().info(f'PID controller for {ns} ready '
                                   f'(thrust_scale={scale})')


def main():
    rclpy.init()
    rclpy.spin(MultiUSVController())
    rclpy.shutdown()


if __name__ == '__main__':
    main()

