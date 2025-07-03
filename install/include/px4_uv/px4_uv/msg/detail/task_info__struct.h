// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_H_
#define PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_TYPE_NONE'.
enum
{
  px4_uv__msg__TaskInfo__VEHICLE_TYPE_NONE = 0
};

/// Constant 'VEHICLE_TYPE_UAV'.
enum
{
  px4_uv__msg__TaskInfo__VEHICLE_TYPE_UAV = 1
};

/// Constant 'VEHICLE_TYPE_UGV'.
enum
{
  px4_uv__msg__TaskInfo__VEHICLE_TYPE_UGV = 2
};

/// Constant 'VEHICLE_TYPE_USV'.
enum
{
  px4_uv__msg__TaskInfo__VEHICLE_TYPE_USV = 3
};

/// Constant 'TASK_STATUS_REQUESTED'.
enum
{
  px4_uv__msg__TaskInfo__TASK_STATUS_REQUESTED = 0
};

/// Constant 'TASK_STATUS_INPROCESS'.
enum
{
  px4_uv__msg__TaskInfo__TASK_STATUS_INPROCESS = 1
};

/// Constant 'TASK_STATUS_COMPLETED'.
enum
{
  px4_uv__msg__TaskInfo__TASK_STATUS_COMPLETED = 2
};

/// Constant 'PAYLOAD_TYPE_NULL'.
enum
{
  px4_uv__msg__TaskInfo__PAYLOAD_TYPE_NULL = 0
};

/// Constant 'PAYLOAD_TYPE_CAM'.
enum
{
  px4_uv__msg__TaskInfo__PAYLOAD_TYPE_CAM = 1
};

/// Constant 'TASK_TYPE_WAYPOINT'.
enum
{
  px4_uv__msg__TaskInfo__TASK_TYPE_WAYPOINT = 0
};

/// Constant 'TASK_TYPE_CHARGING'.
enum
{
  px4_uv__msg__TaskInfo__TASK_TYPE_CHARGING = 1
};

// Include directives for member types
// Member 'task_id'
// Member 'task_description'
// Member 'mission_id'
#include "rosidl_runtime_c/string.h"
// Member 'actions'
#include "px4_uv/msg/detail/action__struct.h"

/// Struct defined in msg/TaskInfo in the package px4_uv.
typedef struct px4_uv__msg__TaskInfo
{
  rosidl_runtime_c__String task_id;
  rosidl_runtime_c__String task_description;
  uint8_t target_type;
  rosidl_runtime_c__String mission_id;
  uint8_t required_payload_type;
  uint8_t task_status;
  uint8_t task_type;
  px4_uv__msg__Action__Sequence actions;
  float reward;
} px4_uv__msg__TaskInfo;

// Struct for a sequence of px4_uv__msg__TaskInfo.
typedef struct px4_uv__msg__TaskInfo__Sequence
{
  px4_uv__msg__TaskInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_uv__msg__TaskInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__TASK_INFO__STRUCT_H_
