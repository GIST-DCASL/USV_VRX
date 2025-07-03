from setuptools import setup, find_packages

package_name = 'multi_usv_ctrl'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            [f'resource/{package_name}']),
        (f'share/{package_name}', ['package.xml']),
    ],
    # ──────────────────────────────
    # ROS 2-Python 런타임 의존성
    # ──────────────────────────────
    install_requires=[
        'setuptools',
        'rclpy',
        'geometry_msgs',
        'nav_msgs',
    ],
    zip_safe=True,
    maintainer='kjoon',
    maintainer_email='kjoon0807@gm.gist.ac.kr',
    description='Multi-USV PID controller that moves N WAM-Vs to commanded (x,y) goals.',
    license='MIT',
    tests_require=['pytest'],

    # ──────────────────────────────
    # ros2 run … 로 호출할 엔트리포인트
    # ──────────────────────────────
    entry_points={
        'console_scripts': [
            'multi_usv_pid_controller = multi_usv_ctrl.multi_usv_pid_controller:main',
        ],
    },
)

