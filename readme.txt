요구사항

ROS2 Humble
Gazebo garden
VRX2.4.1

저장소 복제
git clone https://github.com/GIST-DCASL/USV_VRX.git

빌드
cd ~/USV_VRX
colcon build --merge-install
. install/setup.bash

사용법
1. mission manager 실행

ros2 run mission_manager mission_manager

1. mission publish

예시 실험코드

터미널1 
ros2 run mission_manager mission_manager

터미널2
테스트용 미션 1

ros2 topic pub --once /MissionInfo px4_uv/msg/MissionInfo '{
  mission_id: demo_action_0_to_4,
  description: "4-USV demo for actions 0-4",
  leftup_lat: 35.227445, leftup_lon: 126.839889,
  rightdown_lat: 35.226771, rightdown_lon: 126.840714,
  max_height: 0.0,
  tasks: [

    { task_id: USV_1, target_type: 3, actions: [
        { action: 0, setpoint: { x: 35.226839, y: 126.839971, z: 0.0 }, param1: 3.0 },
        { action: 2, setpoint: { x: 35.226839, y: 126.839971, z: 0.0 }, param1: 0.0 }
    ] },

    { task_id: USV_2, target_type: 3, actions: [
        { action: 1, setpoint: { x: 35.227377, y: 126.839971, z: 0.0 }, param1: 3.0 },
        { action: 0, setpoint: { x: 35.227445, y: 126.839971, z: 0.0 } },
        { action: 3, setpoint: { x: 35.227377, y: 126.839971, z: 0.0 }, param1: 0.0 }
    ] },

    { task_id: USV_3, target_type: 3, actions: [
        { action: 4,
          setpoint: { x: 35.226839, y: 126.840631, z: 0.0 },
          param1: 1.0,
          param2: 35.226839, param3: 126.841796,
          param5: 2.0 }
    ] },

    { task_id: USV_4, target_type: 3, actions: [
        { action: 0, setpoint: { x: 35.227377, y: 126.840631, z: 0.0 }, param1: 2.0 },
        { action: 4,
          setpoint: { x: 35.227377, y: 126.840631, z: 0.0 },
          param1: 1.0,
          param2: 35.227377, param3: 126.841796,
          param5: 1.0 },
        { action: 3, setpoint: { x: 35.227377, y: 126.840631, z: 0.0 }, param1: 0.0 }
    ] }

  ]
}'

테스트용 미션 2

ros2 topic pub --once /MissionInfo px4_uv/msg/MissionInfo 'mission_id: "buoy_circle_demo"
description: "5-USV clockwise buoy tour then return home"
leftup_lat: 35.227500
leftup_lon: 126.839800
rightdown_lat: 35.226600
rightdown_lon: 126.840900
max_height: 0.0
tasks:
- task_id: USV_1
  target_type: 3
  actions:
    - {action: 0, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 3, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 0.0}
- task_id: USV_2
  target_type: 3
  actions:
    - {action: 0, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 1.0}
    - {action: 3, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 0.0}
- task_id: USV_3
  target_type: 3
  actions:
    - {action: 0, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 3, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 0.0}
- task_id: USV_4
  target_type: 3
  actions:
    - {action: 0, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 3, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 0.0}
- task_id: USV_5
  target_type: 3
  actions:
    - {action: 0, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227108, y: 126.840521, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227279, y: 126.840369, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227214, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 0, setpoint: {x: 35.227002, y: 126.840123, z: 0.0}, param1: 1.0}
    - {action: 3, setpoint: {x: 35.226937, y: 126.840369, z: 0.0}, param1: 0.0}
'


테스트용 미션 3

ros2 topic pub --once /MissionInfo px4_uv/msg/MissionInfo '{
  mission_id: patrol_demo,
  description: "Single-USV 15-m patrol, 3 loops, 1-s hover",
  leftup_lat: 35.227300, leftup_lon: 126.840100,
  rightdown_lat: 35.226900, rightdown_lon: 126.840600,
  max_height: 0.0,
  tasks: [
    { task_id: USV_1, target_type: 3, actions: [
        { action: 4,
          setpoint: { x: 35.227108, y: 126.840301, z: 0.0 },   # 중심점 (0,0)
          param1: 1.0,                                         # 각 지점 hover 1 s
          param2: 35.227108, param3: 126.840466,               # 동쪽 15 m 지점
          param5: 3.0 }                                        # 왕복 3회
    ] }
  ]
}'

