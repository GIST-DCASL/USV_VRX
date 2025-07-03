#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

import tf2_ros
import math

from std_msgs.msg import Float64

class MyControllerNode(Node):
    def __init__(self):
        super().__init__('my_controller')

        # TF 버퍼 & TF Listener
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        # (필요시) 스러스터 퍼블리셔
        self.left_pub = self.create_publisher(Float64, '/wamv/thrusters/left/thrust', 10)
        self.right_pub = self.create_publisher(Float64, '/wamv/thrusters/right/thrust', 10)

        # 주기적 타이머 (0.5초마다)
        self.timer = self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        try:
            # "world" -> "wamv/base_link" 변환 얻기
            trans = self.tf_buffer.lookup_transform(
                'world',
                'wamv/base_link',
                rclpy.time.Time()
            )
            # 위치
            x = trans.transform.translation.x
            y = trans.transform.translation.y
            # 회전 (yaw)
            q = trans.transform.rotation
            siny_cosp = 2.0 * (q.w*q.z + q.x*q.y)
            cosy_cosp = 1.0 - 2.0 * (q.y*q.y + q.z*q.z)
            yaw = math.atan2(siny_cosp, cosy_cosp)

            self.get_logger().info(f"WAM-V: x={x:.2f}, y={y:.2f}, yaw={yaw:.2f}")

            # 예시: x>5이면 엔진 OFF (가상의 로직)
            if x > 5.0:
                self.left_pub.publish(Float64(data=0.0))
                self.right_pub.publish(Float64(data=0.0))
            else:
                # 전진
                self.left_pub.publish(Float64(data=10.0))
                self.right_pub.publish(Float64(data=10.0))

        except tf2_ros.LookupException:
            self.get_logger().warn("TF not found yet")

def main(args=None):
    rclpy.init(args=args)
    node = MyControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

