# SPDX-License-Identifier: Apache-2.0
"""
· config_file(🥇) – YAML (models:) 로 다중 스폰
"""

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration
import yaml
import vrx_gz.launch
from vrx_gz.model import Model


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument('world',  default_value='sydney_regatta'),
        DeclareLaunchArgument('sim_mode', default_value='full'),
        DeclareLaunchArgument('config_file', default_value=''),
        DeclareLaunchArgument('num_robots', default_value='1'),
        DeclareLaunchArgument('headless', default_value='False'),
        DeclareLaunchArgument('paused', default_value='False'),
        DeclareLaunchArgument('bridge_competition_topics', default_value='True'),
        DeclareLaunchArgument('extra_gz_args', default_value=''),
        OpaqueFunction(function=_impl),
    ])


def _impl(ctx, *_):
    L = lambda k: LaunchConfiguration(k).perform(ctx)
    cfg_path  = L('config_file')
    n_robot   = int(L('num_robots'))
    world     = L('world')
    mode      = L('sim_mode')
    headless  = L('headless').lower() == 'true'
    paused    = L('paused').lower()  == 'true'
    bridge    = L('bridge_competition_topics').lower() == 'true'
    extra     = L('extra_gz_args')

    # ── 모델 목록 ─────────────────────────────────────────────────────
    if cfg_path:
        with open(cfg_path, 'r', encoding='utf-8') as f:
            cfg = yaml.safe_load(f)
        models = [Model(m['model_name'], m['model_type'], m['pose'])
                  for m in cfg.get('models', [])]
    else:
        models = [Model(f'wamv_{i+1}','wam-v',[i*5,0,0,0,0,0])
                  for i in range(n_robot)]

    # ── VRX launch stack ───────────────────────────────────────────────
    acts  = []
    acts += vrx_gz.launch.simulation(world, headless, paused, extra)
    acts += vrx_gz.launch.spawn(mode, world, models, '/tmp')
    if bridge and mode in ('full','bridge'):
        acts += vrx_gz.launch.competition_bridges(world, False)
    return acts

