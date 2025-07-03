// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_H_
#define PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'description'
#include "rosidl_runtime_c/string.h"
// Member 'tasks'
#include "px4_uv/msg/detail/task_info__struct.h"

/// Struct defined in msg/MissionInfo in the package px4_uv.
typedef struct px4_uv__msg__MissionInfo
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String description;
  double leftup_lat;
  double leftup_lon;
  double rightdown_lat;
  double rightdown_lon;
  double max_height;
  px4_uv__msg__TaskInfo__Sequence tasks;
} px4_uv__msg__MissionInfo;

// Struct for a sequence of px4_uv__msg__MissionInfo.
typedef struct px4_uv__msg__MissionInfo__Sequence
{
  px4_uv__msg__MissionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_uv__msg__MissionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__MISSION_INFO__STRUCT_H_
