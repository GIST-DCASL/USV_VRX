# ~/vrx_ws/src/wamv_nav/setup.py
#
# WAM-V USV navigation package
# ───────────────────────────
# · Installs Python modules  (wamv_nav.*)
# · Generates console-scripts (ros2 run …)
# · Registers the package in the ROS 2 index
#
# ─ 2025-05-29  ─────────────────────────────────────────────────────────

from setuptools import setup, find_packages
from pathlib import Path

package_name = "wamv_nav"

# ─── Package metadata -------------------------------------------------
setup(
    name=package_name,
    version="0.1.0",
    packages=find_packages(),             #  ←  wamv_nav/*  자동 탐색
    python_requires=">=3.8",

    # ROS 2 run-time dependencies
    install_requires=[
        "setuptools",
        "rclpy",
        "geometry_msgs",
        "nav_msgs",
        "std_msgs",
        "px4_uv",                         #  메시지 패키지
    ],

    # ── Data files copied into the install tree ───────────────────────
    data_files=[
        # 1) 패키지 인덱스 (필수)
        ("share/ament_index/resource_index/packages",
         [f"resource/{package_name}"]),
        # 2) 패키지-share 디렉터리:  package.xml 복사
        (f"share/{package_name}", ["package.xml"]),
    ],

    # ── Console-scripts:  ros2 run <pkg> <exe> ────────────────────────
    entry_points={
        "console_scripts": [
            #  ※ 스페이스 ‘한 칸’으로 구분해야 함
            "usv_controller = wamv_nav.usv_controller:main",
            "mission_manager = wamv_nav.mission_manager:main",
        ],
    },

    # ── Misc metadata ────────────────────────────────────────────────
    maintainer="kjoon",
    maintainer_email="kjoon@example.com",
    description="WAM-V USV low-level controller and mission-manager",
    license="Apache-2.0",
    zip_safe=True,
)

