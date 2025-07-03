// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_uv/msg/detail/task_info__rosidl_typesupport_introspection_c.h"
#include "px4_uv/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_uv/msg/detail/task_info__functions.h"
#include "px4_uv/msg/detail/task_info__struct.h"


// Include directives for member types
// Member `task_id`
// Member `task_description`
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `actions`
#include "px4_uv/msg/action.h"
// Member `actions`
#include "px4_uv/msg/detail/action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_uv__msg__TaskInfo__init(message_memory);
}

void px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_fini_function(void * message_memory)
{
  px4_uv__msg__TaskInfo__fini(message_memory);
}

size_t px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__size_function__TaskInfo__actions(
  const void * untyped_member)
{
  const px4_uv__msg__Action__Sequence * member =
    (const px4_uv__msg__Action__Sequence *)(untyped_member);
  return member->size;
}

const void * px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_const_function__TaskInfo__actions(
  const void * untyped_member, size_t index)
{
  const px4_uv__msg__Action__Sequence * member =
    (const px4_uv__msg__Action__Sequence *)(untyped_member);
  return &member->data[index];
}

void * px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_function__TaskInfo__actions(
  void * untyped_member, size_t index)
{
  px4_uv__msg__Action__Sequence * member =
    (px4_uv__msg__Action__Sequence *)(untyped_member);
  return &member->data[index];
}

void px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__fetch_function__TaskInfo__actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const px4_uv__msg__Action * item =
    ((const px4_uv__msg__Action *)
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_const_function__TaskInfo__actions(untyped_member, index));
  px4_uv__msg__Action * value =
    (px4_uv__msg__Action *)(untyped_value);
  *value = *item;
}

void px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__assign_function__TaskInfo__actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  px4_uv__msg__Action * item =
    ((px4_uv__msg__Action *)
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_function__TaskInfo__actions(untyped_member, index));
  const px4_uv__msg__Action * value =
    (const px4_uv__msg__Action *)(untyped_value);
  *item = *value;
}

bool px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__resize_function__TaskInfo__actions(
  void * untyped_member, size_t size)
{
  px4_uv__msg__Action__Sequence * member =
    (px4_uv__msg__Action__Sequence *)(untyped_member);
  px4_uv__msg__Action__Sequence__fini(member);
  return px4_uv__msg__Action__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_member_array[9] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, task_description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, target_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "required_payload_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, required_payload_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, task_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, actions),  // bytes offset in struct
    NULL,  // default value
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__size_function__TaskInfo__actions,  // size() function pointer
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_const_function__TaskInfo__actions,  // get_const(index) function pointer
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__get_function__TaskInfo__actions,  // get(index) function pointer
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__fetch_function__TaskInfo__actions,  // fetch(index, &value) function pointer
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__assign_function__TaskInfo__actions,  // assign(index, value) function pointer
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__resize_function__TaskInfo__actions  // resize(index) function pointer
  },
  {
    "reward",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_uv__msg__TaskInfo, reward),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_members = {
  "px4_uv__msg",  // message namespace
  "TaskInfo",  // message name
  9,  // number of fields
  sizeof(px4_uv__msg__TaskInfo),
  px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_member_array,  // message members
  px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_type_support_handle = {
  0,
  &px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_uv
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_uv, msg, TaskInfo)() {
  px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_uv, msg, Action)();
  if (!px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_type_support_handle.typesupport_identifier) {
    px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_uv__msg__TaskInfo__rosidl_typesupport_introspection_c__TaskInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
