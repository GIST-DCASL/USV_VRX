// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_uv:msg/Task.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK__STRUCT_H_
#define PX4_UV__MSG__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
#include "rosidl_runtime_c/string.h"
// Member 'actions'
#include "px4_uv/msg/detail/action__struct.h"

/// Struct defined in msg/Task in the package px4_uv.
typedef struct px4_uv__msg__Task
{
  rosidl_runtime_c__String task_id;
  /// 1 = USV
  uint8_t target_type;
  /// ← 수정!
  px4_uv__msg__Action__Sequence actions;
} px4_uv__msg__Task;

// Struct for a sequence of px4_uv__msg__Task.
typedef struct px4_uv__msg__Task__Sequence
{
  px4_uv__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_uv__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__TASK__STRUCT_H_
