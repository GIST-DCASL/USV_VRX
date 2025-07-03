from setuptools import setup, find_packages

package_name = 'mission_manager'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            [f'resource/{package_name}']),
        (f'share/{package_name}', ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'rclpy',
        'geometry_msgs',
        'px4_uv',
        'multi_usv_ctrl',
    ],
    zip_safe=True,
    maintainer='kjoon',
    maintainer_email='kjoon0807@gm.gist.ac.kr',
    description='Mission manager that spawns USVs and executes MissionInfo actions.',
    license='MIT',
    entry_points={
        'console_scripts': [
            'mission_manager = mission_manager.mission_manager:main',
        ],
    },
)

