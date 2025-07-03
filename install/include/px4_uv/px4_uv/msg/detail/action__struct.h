// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_uv:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__ACTION__STRUCT_H_
#define PX4_UV__MSG__DETAIL__ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACTION_MOVE'.
enum
{
  px4_uv__msg__Action__ACTION_MOVE = 0
};

/// Constant 'ACTION_TAKEOFF'.
enum
{
  px4_uv__msg__Action__ACTION_TAKEOFF = 1
};

/// Constant 'ACTION_LANDING'.
enum
{
  px4_uv__msg__Action__ACTION_LANDING = 2
};

/// Constant 'ACTION_RETURN_HOME'.
enum
{
  px4_uv__msg__Action__ACTION_RETURN_HOME = 3
};

/// Constant 'ACTION_PATROL'.
enum
{
  px4_uv__msg__Action__ACTION_PATROL = 4
};

// Include directives for member types
// Member 'agent_id'
#include "rosidl_runtime_c/string.h"
// Member 'setpoint'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Action in the package px4_uv.
typedef struct px4_uv__msg__Action
{
  rosidl_runtime_c__String agent_id;
  uint8_t action;
  geometry_msgs__msg__Vector3 setpoint;
  float param1;
  float param2;
  float param3;
  float param4;
  float param5;
} px4_uv__msg__Action;

// Struct for a sequence of px4_uv__msg__Action.
typedef struct px4_uv__msg__Action__Sequence
{
  px4_uv__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_uv__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__ACTION__STRUCT_H_
