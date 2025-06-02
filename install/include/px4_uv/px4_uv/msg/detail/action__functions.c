// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_uv:msg/Action.idl
// generated code does not contain a copyright notice
#include "px4_uv/msg/detail/action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `setpoint`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
px4_uv__msg__Action__init(px4_uv__msg__Action * msg)
{
  if (!msg) {
    return false;
  }
  // action
  // setpoint
  if (!geometry_msgs__msg__Vector3__init(&msg->setpoint)) {
    px4_uv__msg__Action__fini(msg);
    return false;
  }
  // param1
  // param2
  // param3
  // param4
  // param5
  return true;
}

void
px4_uv__msg__Action__fini(px4_uv__msg__Action * msg)
{
  if (!msg) {
    return;
  }
  // action
  // setpoint
  geometry_msgs__msg__Vector3__fini(&msg->setpoint);
  // param1
  // param2
  // param3
  // param4
  // param5
}

bool
px4_uv__msg__Action__are_equal(const px4_uv__msg__Action * lhs, const px4_uv__msg__Action * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action
  if (lhs->action != rhs->action) {
    return false;
  }
  // setpoint
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->setpoint), &(rhs->setpoint)))
  {
    return false;
  }
  // param1
  if (lhs->param1 != rhs->param1) {
    return false;
  }
  // param2
  if (lhs->param2 != rhs->param2) {
    return false;
  }
  // param3
  if (lhs->param3 != rhs->param3) {
    return false;
  }
  // param4
  if (lhs->param4 != rhs->param4) {
    return false;
  }
  // param5
  if (lhs->param5 != rhs->param5) {
    return false;
  }
  return true;
}

bool
px4_uv__msg__Action__copy(
  const px4_uv__msg__Action * input,
  px4_uv__msg__Action * output)
{
  if (!input || !output) {
    return false;
  }
  // action
  output->action = input->action;
  // setpoint
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->setpoint), &(output->setpoint)))
  {
    return false;
  }
  // param1
  output->param1 = input->param1;
  // param2
  output->param2 = input->param2;
  // param3
  output->param3 = input->param3;
  // param4
  output->param4 = input->param4;
  // param5
  output->param5 = input->param5;
  return true;
}

px4_uv__msg__Action *
px4_uv__msg__Action__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__Action * msg = (px4_uv__msg__Action *)allocator.allocate(sizeof(px4_uv__msg__Action), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_uv__msg__Action));
  bool success = px4_uv__msg__Action__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_uv__msg__Action__destroy(px4_uv__msg__Action * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_uv__msg__Action__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_uv__msg__Action__Sequence__init(px4_uv__msg__Action__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__Action * data = NULL;

  if (size) {
    data = (px4_uv__msg__Action *)allocator.zero_allocate(size, sizeof(px4_uv__msg__Action), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_uv__msg__Action__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_uv__msg__Action__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
px4_uv__msg__Action__Sequence__fini(px4_uv__msg__Action__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      px4_uv__msg__Action__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

px4_uv__msg__Action__Sequence *
px4_uv__msg__Action__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__Action__Sequence * array = (px4_uv__msg__Action__Sequence *)allocator.allocate(sizeof(px4_uv__msg__Action__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_uv__msg__Action__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_uv__msg__Action__Sequence__destroy(px4_uv__msg__Action__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_uv__msg__Action__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_uv__msg__Action__Sequence__are_equal(const px4_uv__msg__Action__Sequence * lhs, const px4_uv__msg__Action__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_uv__msg__Action__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_uv__msg__Action__Sequence__copy(
  const px4_uv__msg__Action__Sequence * input,
  px4_uv__msg__Action__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_uv__msg__Action);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_uv__msg__Action * data =
      (px4_uv__msg__Action *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_uv__msg__Action__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_uv__msg__Action__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_uv__msg__Action__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
