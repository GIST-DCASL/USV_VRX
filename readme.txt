
ros2 humble, gazebo garden
터미널 1

수정한 경우 빌드까지 
cd ~/vrx_ws
colcon build --merge-install
. install/setup.bash

시뮬레이션 실행
ros2 launch vrx_gz competition.launch.py world:=sydney_regatta

--------------------------------------------------------------
터미널 2 (실시간 좌표 확인용)
cd ~/vrx_ws
colcon build --packages-select wamv_nav --merge-install
source install/setup.bash

보트 좌표
ros2 topic echo /wamv/sensors/position/ground_truth_odometry --field pose.pose.position
보트추력
ros2 topic echo /wamv/thrusters/left/thrust

종료 후 로그파일에서도 확인가능, 컨트롤러 실행 시 터미널3에서 목표지점에 도달했는지 메시지로
확인가능
-------------------------------------------------------------
터미널 3
cd ~/vrx_ws
colcon build --packages-select wamv_nav --merge-install
source install/setup.bash

웨이포인트 입력 
ros2 run wamv_nav waypoint_controller \
  --ros-args -p waypoints:="[10.0,0.0, 20.0,5.0]"
  
웨이포인트가 더 많은 경우
ros2 run wamv_nav waypoint_controller \
  --ros-args \
    -p waypoints:="[10.0,0.0, 20.0,5.0, 30.0,-2.0, 15.0,-10.0, 0.0,0.0]"

시뮬레이션 도중에 웨이포인트를 추가하는 경우
ros2 topic pub /new_goal geometry_msgs/Point "{x: 30.0, y: -4.0, z: 5.0}"

