// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obstacle_nudge_buffer`
#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__functions.h"

bool
deva_mdriver_msgs__msg__NudgeBuffer__init(deva_mdriver_msgs__msg__NudgeBuffer * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle_nudge_buffer
  if (!deva_mdriver_msgs__msg__ObstacleNudgeBuffer__Sequence__init(&msg->obstacle_nudge_buffer, 0)) {
    deva_mdriver_msgs__msg__NudgeBuffer__fini(msg);
    return false;
  }
  return true;
}

void
deva_mdriver_msgs__msg__NudgeBuffer__fini(deva_mdriver_msgs__msg__NudgeBuffer * msg)
{
  if (!msg) {
    return;
  }
  // obstacle_nudge_buffer
  deva_mdriver_msgs__msg__ObstacleNudgeBuffer__Sequence__fini(&msg->obstacle_nudge_buffer);
}

bool
deva_mdriver_msgs__msg__NudgeBuffer__are_equal(const deva_mdriver_msgs__msg__NudgeBuffer * lhs, const deva_mdriver_msgs__msg__NudgeBuffer * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle_nudge_buffer
  if (!deva_mdriver_msgs__msg__ObstacleNudgeBuffer__Sequence__are_equal(
      &(lhs->obstacle_nudge_buffer), &(rhs->obstacle_nudge_buffer)))
  {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__NudgeBuffer__copy(
  const deva_mdriver_msgs__msg__NudgeBuffer * input,
  deva_mdriver_msgs__msg__NudgeBuffer * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle_nudge_buffer
  if (!deva_mdriver_msgs__msg__ObstacleNudgeBuffer__Sequence__copy(
      &(input->obstacle_nudge_buffer), &(output->obstacle_nudge_buffer)))
  {
    return false;
  }
  return true;
}

deva_mdriver_msgs__msg__NudgeBuffer *
deva_mdriver_msgs__msg__NudgeBuffer__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__NudgeBuffer * msg = (deva_mdriver_msgs__msg__NudgeBuffer *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__NudgeBuffer), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__NudgeBuffer));
  bool success = deva_mdriver_msgs__msg__NudgeBuffer__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__NudgeBuffer__destroy(deva_mdriver_msgs__msg__NudgeBuffer * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__NudgeBuffer__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__init(deva_mdriver_msgs__msg__NudgeBuffer__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__NudgeBuffer * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__NudgeBuffer *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__NudgeBuffer), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__NudgeBuffer__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__NudgeBuffer__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__fini(deva_mdriver_msgs__msg__NudgeBuffer__Sequence * array)
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
      deva_mdriver_msgs__msg__NudgeBuffer__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__NudgeBuffer__Sequence *
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__NudgeBuffer__Sequence * array = (deva_mdriver_msgs__msg__NudgeBuffer__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__NudgeBuffer__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__NudgeBuffer__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__destroy(deva_mdriver_msgs__msg__NudgeBuffer__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__NudgeBuffer__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__are_equal(const deva_mdriver_msgs__msg__NudgeBuffer__Sequence * lhs, const deva_mdriver_msgs__msg__NudgeBuffer__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__NudgeBuffer__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__NudgeBuffer__Sequence__copy(
  const deva_mdriver_msgs__msg__NudgeBuffer__Sequence * input,
  deva_mdriver_msgs__msg__NudgeBuffer__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__NudgeBuffer);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__NudgeBuffer * data =
      (deva_mdriver_msgs__msg__NudgeBuffer *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__NudgeBuffer__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__NudgeBuffer__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__NudgeBuffer__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
