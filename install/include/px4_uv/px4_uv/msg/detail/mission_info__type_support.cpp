// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_uv/msg/detail/mission_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_uv
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MissionInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_uv::msg::MissionInfo(_init);
}

void MissionInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_uv::msg::MissionInfo *>(message_memory);
  typed_message->~MissionInfo();
}

size_t size_function__MissionInfo__tasks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<px4_uv::msg::TaskInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MissionInfo__tasks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<px4_uv::msg::TaskInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__MissionInfo__tasks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<px4_uv::msg::TaskInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__MissionInfo__tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const px4_uv::msg::TaskInfo *>(
    get_const_function__MissionInfo__tasks(untyped_member, index));
  auto & value = *reinterpret_cast<px4_uv::msg::TaskInfo *>(untyped_value);
  value = item;
}

void assign_function__MissionInfo__tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<px4_uv::msg::TaskInfo *>(
    get_function__MissionInfo__tasks(untyped_member, index));
  const auto & value = *reinterpret_cast<const px4_uv::msg::TaskInfo *>(untyped_value);
  item = value;
}

void resize_function__MissionInfo__tasks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<px4_uv::msg::TaskInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MissionInfo_message_member_array[8] = {
  {
    "mission_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, mission_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leftup_lat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, leftup_lat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "leftup_lon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, leftup_lon),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rightdown_lat",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, rightdown_lat),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rightdown_lon",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, rightdown_lon),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "max_height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, max_height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tasks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<px4_uv::msg::TaskInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv::msg::MissionInfo, tasks),  // bytes offset in struct
    nullptr,  // default value
    size_function__MissionInfo__tasks,  // size() function pointer
    get_const_function__MissionInfo__tasks,  // get_const(index) function pointer
    get_function__MissionInfo__tasks,  // get(index) function pointer
    fetch_function__MissionInfo__tasks,  // fetch(index, &value) function pointer
    assign_function__MissionInfo__tasks,  // assign(index, value) function pointer
    resize_function__MissionInfo__tasks  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MissionInfo_message_members = {
  "px4_uv::msg",  // message namespace
  "MissionInfo",  // message name
  8,  // number of fields
  sizeof(px4_uv::msg::MissionInfo),
  MissionInfo_message_member_array,  // message members
  MissionInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  MissionInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MissionInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MissionInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_uv


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_uv::msg::MissionInfo>()
{
  return &::px4_uv::msg::rosidl_typesupport_introspection_cpp::MissionInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_uv, msg, MissionInfo)() {
  return &::px4_uv::msg::rosidl_typesupport_introspection_cpp::MissionInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
