// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_uv:msg/MissionInfo.idl
// generated code does not contain a copyright notice
#include "px4_uv/msg/detail/mission_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mission_id`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `tasks`
#include "px4_uv/msg/detail/task_info__functions.h"

bool
px4_uv__msg__MissionInfo__init(px4_uv__msg__MissionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    px4_uv__msg__MissionInfo__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    px4_uv__msg__MissionInfo__fini(msg);
    return false;
  }
  // leftup_lat
  // leftup_lon
  // rightdown_lat
  // rightdown_lon
  // max_height
  // tasks
  if (!px4_uv__msg__TaskInfo__Sequence__init(&msg->tasks, 0)) {
    px4_uv__msg__MissionInfo__fini(msg);
    return false;
  }
  return true;
}

void
px4_uv__msg__MissionInfo__fini(px4_uv__msg__MissionInfo * msg)
{
  if (!msg) {
    return;
  }
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // leftup_lat
  // leftup_lon
  // rightdown_lat
  // rightdown_lon
  // max_height
  // tasks
  px4_uv__msg__TaskInfo__Sequence__fini(&msg->tasks);
}

bool
px4_uv__msg__MissionInfo__are_equal(const px4_uv__msg__MissionInfo * lhs, const px4_uv__msg__MissionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // leftup_lat
  if (lhs->leftup_lat != rhs->leftup_lat) {
    return false;
  }
  // leftup_lon
  if (lhs->leftup_lon != rhs->leftup_lon) {
    return false;
  }
  // rightdown_lat
  if (lhs->rightdown_lat != rhs->rightdown_lat) {
    return false;
  }
  // rightdown_lon
  if (lhs->rightdown_lon != rhs->rightdown_lon) {
    return false;
  }
  // max_height
  if (lhs->max_height != rhs->max_height) {
    return false;
  }
  // tasks
  if (!px4_uv__msg__TaskInfo__Sequence__are_equal(
      &(lhs->tasks), &(rhs->tasks)))
  {
    return false;
  }
  return true;
}

bool
px4_uv__msg__MissionInfo__copy(
  const px4_uv__msg__MissionInfo * input,
  px4_uv__msg__MissionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // leftup_lat
  output->leftup_lat = input->leftup_lat;
  // leftup_lon
  output->leftup_lon = input->leftup_lon;
  // rightdown_lat
  output->rightdown_lat = input->rightdown_lat;
  // rightdown_lon
  output->rightdown_lon = input->rightdown_lon;
  // max_height
  output->max_height = input->max_height;
  // tasks
  if (!px4_uv__msg__TaskInfo__Sequence__copy(
      &(input->tasks), &(output->tasks)))
  {
    return false;
  }
  return true;
}

px4_uv__msg__MissionInfo *
px4_uv__msg__MissionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__MissionInfo * msg = (px4_uv__msg__MissionInfo *)allocator.allocate(sizeof(px4_uv__msg__MissionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_uv__msg__MissionInfo));
  bool success = px4_uv__msg__MissionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_uv__msg__MissionInfo__destroy(px4_uv__msg__MissionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_uv__msg__MissionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_uv__msg__MissionInfo__Sequence__init(px4_uv__msg__MissionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__MissionInfo * data = NULL;

  if (size) {
    data = (px4_uv__msg__MissionInfo *)allocator.zero_allocate(size, sizeof(px4_uv__msg__MissionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_uv__msg__MissionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_uv__msg__MissionInfo__fini(&data[i - 1]);
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
px4_uv__msg__MissionInfo__Sequence__fini(px4_uv__msg__MissionInfo__Sequence * array)
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
      px4_uv__msg__MissionInfo__fini(&array->data[i]);
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

px4_uv__msg__MissionInfo__Sequence *
px4_uv__msg__MissionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__MissionInfo__Sequence * array = (px4_uv__msg__MissionInfo__Sequence *)allocator.allocate(sizeof(px4_uv__msg__MissionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_uv__msg__MissionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_uv__msg__MissionInfo__Sequence__destroy(px4_uv__msg__MissionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_uv__msg__MissionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_uv__msg__MissionInfo__Sequence__are_equal(const px4_uv__msg__MissionInfo__Sequence * lhs, const px4_uv__msg__MissionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_uv__msg__MissionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_uv__msg__MissionInfo__Sequence__copy(
  const px4_uv__msg__MissionInfo__Sequence * input,
  px4_uv__msg__MissionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_uv__msg__MissionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_uv__msg__MissionInfo * data =
      (px4_uv__msg__MissionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_uv__msg__MissionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_uv__msg__MissionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_uv__msg__MissionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
