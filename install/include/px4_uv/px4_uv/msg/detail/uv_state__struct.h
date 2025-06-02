// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_uv:msg/UvState.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_H_
#define PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_STATUS_NORMAL'.
enum
{
  px4_uv__msg__UvState__VEHICLE_STATUS_NORMAL = 0
};

/// Constant 'VEHICLE_STATUS_STOP'.
enum
{
  px4_uv__msg__UvState__VEHICLE_STATUS_STOP = 1
};

/// Constant 'VEHICLE_STATUS_TAKEOFF'.
enum
{
  px4_uv__msg__UvState__VEHICLE_STATUS_TAKEOFF = 2
};

/// Constant 'VEHICLE_STATUS_LANDED'.
enum
{
  px4_uv__msg__UvState__VEHICLE_STATUS_LANDED = 3
};

// Include directives for member types
// Member 'pos'
// Member 'vel'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/UvState in the package px4_uv.
typedef struct px4_uv__msg__UvState
{
  geometry_msgs__msg__Vector3 pos;
  geometry_msgs__msg__Vector3 vel;
  float current_yaw;
  float ref_lat;
  float ref_lon;
  float ref_alt;
  uint16_t battery;
  uint8_t status;
} px4_uv__msg__UvState;

// Struct for a sequence of px4_uv__msg__UvState.
typedef struct px4_uv__msg__UvState__Sequence
{
  px4_uv__msg__UvState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_uv__msg__UvState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__UV_STATE__STRUCT_H_
