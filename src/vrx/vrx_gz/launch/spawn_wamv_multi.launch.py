#!/usr/bin/env python3
"""
spawn_wamv_multi.launch.py
~~~~~~~~~~~~~~~~~~~~~~~~~~
Gazebo Garden(ros_gz_sim) 환경에서 여러 대의 WAM-V를 한 번에 스폰한다.

* 각 USV는  <namespace  =  "wamv_N">
            <entity-name =  "wamv_N">   로 구분
* URDF는 VRX 패키지의 xacro 파일을 그대로 사용하되, 각 네임스페이스를
  매크로 인자로 넘겨 링크·조인트 이름 충돌을 피한다.
* 로봇 상태 퍼블리셔(robot_state_publisher)는 개별 네임스페이스마다 실행.
* `ros_gz_sim create` 노드로 Gazebo Sim에 엔티티를 삽입.
"""

import os, pathlib
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node

# ❶ VRX xacro 파일 경로 -- 필요에 따라 절대·상대 경로 수정
VRX_XACRO = pathlib.Path(
    os.getenv("HOME", "/")  # 예시: ~/vrx_ws/src/vrx/vrx_urdf/…
    ).joinpath(
        "vrx_ws/src/vrx/vrx_urdf/wamv_gazebo/urdf/wamv_gazebo.urdf.xacro"
)

# ❷ TF 충돌 방지를 위해 /tf, /tf_static → 네임스페이스 내부 토픽으로 리맵
TF_REMAP = [("/tf", "tf"), ("/tf_static", "tf_static")]


def generate_launch_description() -> LaunchDescription:
    usv_cnt_arg  = DeclareLaunchArgument("usv_count", default_value="5")
    spacing_arg  = DeclareLaunchArgument("x_spacing", default_value="5.0")
    yspacing_arg = DeclareLaunchArgument("y_spacing", default_value="0.0")

    usv_count  = int(LaunchConfiguration("usv_count").perform({}))
    x_spacing  = float(LaunchConfiguration("x_spacing").perform({}))
    y_spacing  = float(LaunchConfiguration("y_spacing").perform({}))

    ld = LaunchDescription([usv_cnt_arg, spacing_arg, yspacing_arg])

    # ❸ 여러 로봇을 루프 돌면서 동일 패턴으로 추가
    for idx in range(usv_count):
        ns   = f"wamv_{idx+1}"
        name = f"wamv_{idx+1}"
        x    = idx * x_spacing
        y    = idx * y_spacing
        z    = 0.01                       # 살짝 띄워두면 수면 위에 안착

        # ① robot_state_publisher — URDF 파라미터를 네임스페이스에 올린다.
        rsp = Node(
            package   = "robot_state_publisher",
            executable= "robot_state_publisher",
            namespace = ns,
            name      = "rsp",
            parameters= [{
                # xacro → URDF 문자열 생성 (Command 는 런치 시점에 한 번만 수행)
                "robot_description":
                    Command(["xacro", str(VRX_XACRO),  "namespace:=", ns])
            }],
            remappings= TF_REMAP,
            output    = "screen",
        )

        # ② ros_gz_sim create — 실제 Gazebo 엔티티 삽입
        spawn = Node(
            package   = "ros_gz_sim",
            executable= "create",
            namespace = ns,              # ← 별도의 ROS 네임스페이스
            name      = f"{name}_spawn", # node name
            arguments = [
                "-name",  name,                      # Gazebo 엔티티 이름
                "-topic", f"/{ns}/robot_description",# URDF 제공 토픽
                "-x", str(x), "-y", str(y), "-z", str(z),
                # 필요하면 '-allow_renaming', 'true'
            ],
            output    = "screen",
        )

        ld.add_action(rsp)
        ld.add_action(spawn)

    return ld

