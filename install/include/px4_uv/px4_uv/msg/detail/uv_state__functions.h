// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_uv:msg/UvState.idl
// generated code does not contain a copyright notice

#ifndef PX4_UV__MSG__DETAIL__UV_STATE__FUNCTIONS_H_
#define PX4_UV__MSG__DETAIL__UV_STATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_uv/msg/rosidl_generator_c__visibility_control.h"

#include "px4_uv/msg/detail/uv_state__struct.h"

/// Initialize msg/UvState message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_uv__msg__UvState
 * )) before or use
 * px4_uv__msg__UvState__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__init(px4_uv__msg__UvState * msg);

/// Finalize msg/UvState message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
void
px4_uv__msg__UvState__fini(px4_uv__msg__UvState * msg);

/// Create msg/UvState message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_uv__msg__UvState__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
px4_uv__msg__UvState *
px4_uv__msg__UvState__create();

/// Destroy msg/UvState message.
/**
 * It calls
 * px4_uv__msg__UvState__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
void
px4_uv__msg__UvState__destroy(px4_uv__msg__UvState * msg);

/// Check for msg/UvState message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__are_equal(const px4_uv__msg__UvState * lhs, const px4_uv__msg__UvState * rhs);

/// Copy a msg/UvState message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__copy(
  const px4_uv__msg__UvState * input,
  px4_uv__msg__UvState * output);

/// Initialize array of msg/UvState messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_uv__msg__UvState__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__Sequence__init(px4_uv__msg__UvState__Sequence * array, size_t size);

/// Finalize array of msg/UvState messages.
/**
 * It calls
 * px4_uv__msg__UvState__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
void
px4_uv__msg__UvState__Sequence__fini(px4_uv__msg__UvState__Sequence * array);

/// Create array of msg/UvState messages.
/**
 * It allocates the memory for the array and calls
 * px4_uv__msg__UvState__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
px4_uv__msg__UvState__Sequence *
px4_uv__msg__UvState__Sequence__create(size_t size);

/// Destroy array of msg/UvState messages.
/**
 * It calls
 * px4_uv__msg__UvState__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
void
px4_uv__msg__UvState__Sequence__destroy(px4_uv__msg__UvState__Sequence * array);

/// Check for msg/UvState message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__Sequence__are_equal(const px4_uv__msg__UvState__Sequence * lhs, const px4_uv__msg__UvState__Sequence * rhs);

/// Copy an array of msg/UvState messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_uv
bool
px4_uv__msg__UvState__Sequence__copy(
  const px4_uv__msg__UvState__Sequence * input,
  px4_uv__msg__UvState__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4_UV__MSG__DETAIL__UV_STATE__FUNCTIONS_H_
