# SPDX-License-Identifier: Apache-2.0
"""
Gazebo Garden + VRX 맵을 띄우고
spawn_entity 노드를 이용해 WAM-V(Garden-용 SDF) 모델들을 삽입,
각 모델 네임스페이스에 usv_controller 를 실행한다.
"""

from launch          import LaunchDescription
from launch.actions   import ExecuteProcess
from launch_ros.actions import Node

import os, yaml, pathlib

VRX_SHARE = pathlib.Path(
    os.environ['AMENT_PREFIX_PATH'].split(':')[0]) / 'share' / 'vrx_gz'

def generate_launch_description():
    # MissionManager 가 env 로 넘긴 YAML (models: [])
    spawn_file = os.environ['SPAWN_FILE']
    models     = yaml.safe_load(open(spawn_file, 'r'))['models']

    # ① Gazebo Garden 서버+GUI
    gz_cmd = [
        'gz', 'sim', '-v4',  # verbose 4
        str(VRX_SHARE / 'worlds' / 'sydney_regatta.sdf'),
        '--record-topic', '/clock'
    ]
    actions = [ExecuteProcess(cmd=gz_cmd, output='screen')]

    # ② 모델 스폰 + usv_controller 실행
    for m in models:
        model_sdf = (VRX_SHARE / 'models' / m['type'] / 'model.sdf').read_text()
        x, y, z   = m['pose'][:3]

        actions.append(
            Node(package='gz_sim', executable='spawn_entity',
                 arguments=['-name', m['name'],
                            '-xml', model_sdf,
                            '-x', str(x), '-y', str(y), '-z', str(z)],
                 output='screen'))

        actions.append(
            Node(package='wamv_nav', executable='usv_controller',
                 namespace=m['name'],
                 parameters=[{'AgentID': m['name']}],
                 output='screen'))

    return LaunchDescription(actions)

