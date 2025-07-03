// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from px4_uv:msg/TaskInfo.idl
// generated code does not contain a copyright notice
#include "px4_uv/msg/detail/task_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `task_description`
// Member `mission_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `actions`
#include "px4_uv/msg/detail/action__functions.h"

bool
px4_uv__msg__TaskInfo__init(px4_uv__msg__TaskInfo * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    px4_uv__msg__TaskInfo__fini(msg);
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__init(&msg->task_description)) {
    px4_uv__msg__TaskInfo__fini(msg);
    return false;
  }
  // target_type
  // mission_id
  if (!rosidl_runtime_c__String__init(&msg->mission_id)) {
    px4_uv__msg__TaskInfo__fini(msg);
    return false;
  }
  // required_payload_type
  // task_status
  // task_type
  // actions
  if (!px4_uv__msg__Action__Sequence__init(&msg->actions, 0)) {
    px4_uv__msg__TaskInfo__fini(msg);
    return false;
  }
  // reward
  return true;
}

void
px4_uv__msg__TaskInfo__fini(px4_uv__msg__TaskInfo * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_description
  rosidl_runtime_c__String__fini(&msg->task_description);
  // target_type
  // mission_id
  rosidl_runtime_c__String__fini(&msg->mission_id);
  // required_payload_type
  // task_status
  // task_type
  // actions
  px4_uv__msg__Action__Sequence__fini(&msg->actions);
  // reward
}

bool
px4_uv__msg__TaskInfo__are_equal(const px4_uv__msg__TaskInfo * lhs, const px4_uv__msg__TaskInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_description), &(rhs->task_description)))
  {
    return false;
  }
  // target_type
  if (lhs->target_type != rhs->target_type) {
    return false;
  }
  // mission_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mission_id), &(rhs->mission_id)))
  {
    return false;
  }
  // required_payload_type
  if (lhs->required_payload_type != rhs->required_payload_type) {
    return false;
  }
  // task_status
  if (lhs->task_status != rhs->task_status) {
    return false;
  }
  // task_type
  if (lhs->task_type != rhs->task_type) {
    return false;
  }
  // actions
  if (!px4_uv__msg__Action__Sequence__are_equal(
      &(lhs->actions), &(rhs->actions)))
  {
    return false;
  }
  // reward
  if (lhs->reward != rhs->reward) {
    return false;
  }
  return true;
}

bool
px4_uv__msg__TaskInfo__copy(
  const px4_uv__msg__TaskInfo * input,
  px4_uv__msg__TaskInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_description
  if (!rosidl_runtime_c__String__copy(
      &(input->task_description), &(output->task_description)))
  {
    return false;
  }
  // target_type
  output->target_type = input->target_type;
  // mission_id
  if (!rosidl_runtime_c__String__copy(
      &(input->mission_id), &(output->mission_id)))
  {
    return false;
  }
  // required_payload_type
  output->required_payload_type = input->required_payload_type;
  // task_status
  output->task_status = input->task_status;
  // task_type
  output->task_type = input->task_type;
  // actions
  if (!px4_uv__msg__Action__Sequence__copy(
      &(input->actions), &(output->actions)))
  {
    return false;
  }
  // reward
  output->reward = input->reward;
  return true;
}

px4_uv__msg__TaskInfo *
px4_uv__msg__TaskInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__TaskInfo * msg = (px4_uv__msg__TaskInfo *)allocator.allocate(sizeof(px4_uv__msg__TaskInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(px4_uv__msg__TaskInfo));
  bool success = px4_uv__msg__TaskInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
px4_uv__msg__TaskInfo__destroy(px4_uv__msg__TaskInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    px4_uv__msg__TaskInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
px4_uv__msg__TaskInfo__Sequence__init(px4_uv__msg__TaskInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__TaskInfo * data = NULL;

  if (size) {
    data = (px4_uv__msg__TaskInfo *)allocator.zero_allocate(size, sizeof(px4_uv__msg__TaskInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = px4_uv__msg__TaskInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        px4_uv__msg__TaskInfo__fini(&data[i - 1]);
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
px4_uv__msg__TaskInfo__Sequence__fini(px4_uv__msg__TaskInfo__Sequence * array)
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
      px4_uv__msg__TaskInfo__fini(&array->data[i]);
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

px4_uv__msg__TaskInfo__Sequence *
px4_uv__msg__TaskInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  px4_uv__msg__TaskInfo__Sequence * array = (px4_uv__msg__TaskInfo__Sequence *)allocator.allocate(sizeof(px4_uv__msg__TaskInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = px4_uv__msg__TaskInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
px4_uv__msg__TaskInfo__Sequence__destroy(px4_uv__msg__TaskInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    px4_uv__msg__TaskInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
px4_uv__msg__TaskInfo__Sequence__are_equal(const px4_uv__msg__TaskInfo__Sequence * lhs, const px4_uv__msg__TaskInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!px4_uv__msg__TaskInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
px4_uv__msg__TaskInfo__Sequence__copy(
  const px4_uv__msg__TaskInfo__Sequence * input,
  px4_uv__msg__TaskInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(px4_uv__msg__TaskInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    px4_uv__msg__TaskInfo * data =
      (px4_uv__msg__TaskInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!px4_uv__msg__TaskInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          px4_uv__msg__TaskInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!px4_uv__msg__TaskInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
