// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define PX4_UV__MSG__DETAIL__TASK_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_uv/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "px4_uv/msg/detail/task_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace px4_uv
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_uv
cdr_serialize(
  const px4_uv::msg::TaskInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_uv
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_uv::msg::TaskInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_uv
get_serialized_size(
  const px4_uv::msg::TaskInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_uv
max_serialized_size_TaskInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_uv

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_uv
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_uv, msg, TaskInfo)();

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__TASK_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
