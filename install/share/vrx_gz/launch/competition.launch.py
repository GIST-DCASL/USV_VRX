# SPDX-License-Identifier: Apache-2.0
"""
VRX 2.4 · Multi-WAM-V Competition Launcher
-----------------------------------------
● YAML 설정 파일 없이도 ‘num_boats’·‘spacing’ 인자로 N 척을 스폰
● 기본 월드  : sydney_regatta
● 실행 예시 :
    ros2 launch vrx_gz competition.launch.py world:=sydney_regatta
    ros2 launch vrx_gz competition.launch.py \
         world:=sydney_regatta num_boats:=7 spacing:=4.0 headless:=True
"""

# ────────────────────── imports ──────────────────────
import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration

from ament_index_python.packages import get_package_share_directory
import vrx_gz.launch                 # VRX가 제공하는 Gazebo·브리지 헬퍼
from vrx_gz.model import Model       # (name, model_type, pose)

# ──────────────────── 런치 내부 함수 ───────────────────
def _spawn_impl(ctx, *args):
    """OpaqueFunction 으로 호출되는 스폰 로직"""

    # 간결하게 쓰기 위한 람다
    L = lambda key: LaunchConfiguration(key).perform(ctx)

    # ── 1) 공통 VRX 런치 인자 ───────────────────
    world           = L('world')                 # 월드 이름(확장자 제외)
    sim_mode        = L('sim_mode')              # full | sim | bridge
    headless        = L('headless').lower() == 'true'
    paused          = L('paused').lower()  == 'true'
    bridge_topics   = L('bridge_competition_topics').lower() == 'true'
    comp_mode       = L('competition_mode').lower() == 'true'
    extra_gz_args   = L('extra_gz_args')
    robot           = L('robot')                 # VRX plugin에서 참조

    # ── 2) 다중 스폰용 사용자 인자 ───────────────
    num_boats       = int(L('num_boats'))        # 몇 척?
    spacing         = float(L('spacing'))        # 간격 [m] (X축 기준)

    # ── 3) model.urdf 생성 경로(tmp) 확보 ────────
    #   Model.prepare() 가 tmp 디렉터리에 URDF를 쓰므로 꼭 존재해야 한다.
    tmp_dir = os.path.join(
        get_package_share_directory('vrx_gazebo'),
        'models', 'wamv', 'tmp')
    os.makedirs(tmp_dir, exist_ok=True)

    # ── 4) 모델 리스트 동적 생성 ─────────────────
    #   Model(name, model_type, pose)
    models = []
    for i in range(num_boats):
        name = f'wamv_{i+1}'                     # 고유 모델 이름
        pose = [i * spacing, 0.0, 0.0, 0.0, 0.0, 90.0]   # x, y, z, R, P, Y
        models.append(Model(name, 'wamv', pose)) # 'wamv' == 모델 폴더명

    # ── 5) Gazebo 서버 + 모델 스폰 + 브리지 ──────
    actions  = vrx_gz.launch.simulation(
        world, headless, paused, extra_gz_args)      # Gazebo/Igni­tion 기동
    actions += vrx_gz.launch.spawn(
        sim_mode, world, models, robot)              # N척 스폰
    if (sim_mode in ('bridge', 'full')) and bridge_topics:
        actions += vrx_gz.launch.competition_bridges(
            world, comp_mode)                        # ROS <-> IGN 브리지

    return actions

# ───────────────── LaunchDescription ─────────────────
def generate_launch_description() -> LaunchDescription:
    """ros2 launch 가 호출하는 엔트리포인트"""
    return LaunchDescription([
        # ▼ 기존 VRX 인자 (그대로 유지)
        DeclareLaunchArgument('world',  default_value='sydney_regatta'),
        DeclareLaunchArgument('sim_mode', default_value='full',
            description='full|sim|bridge'),
        DeclareLaunchArgument('bridge_competition_topics',
                              default_value='True'),
        DeclareLaunchArgument('robot', default_value='',
            description='VRX task plugin에서 참조할 로봇명'),
        DeclareLaunchArgument('headless', default_value='False'),
        DeclareLaunchArgument('paused',   default_value='False'),
        DeclareLaunchArgument('competition_mode', default_value='False'),
        DeclareLaunchArgument('extra_gz_args', default_value=''),

        # ▼ 다중 스폰용 커스텀 인자
        DeclareLaunchArgument('num_boats', default_value='5',
            description='스폰할 WAM-V(보트) 수'),
        DeclareLaunchArgument('spacing', default_value='10.0',
            description='보트 간 간격 [m] (X축 기준)'),

        # 실행 로직
        OpaqueFunction(function=_spawn_impl),
    ])

