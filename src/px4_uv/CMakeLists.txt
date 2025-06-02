cmake_minimum_required(VERSION 3.8)
project(px4_uv)

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)

set(msg_files
  "msg/Action.msg"
  "msg/UvState.msg"
)

rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES geometry_msgs std_msgs
)

ament_export_dependencies(rosidl_default_runtime geometry_msgs std_msgs)
ament_package()

