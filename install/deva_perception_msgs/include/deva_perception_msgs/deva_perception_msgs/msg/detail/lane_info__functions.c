// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/LaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `actual_turn`
// Member `navi_turn`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_perception_msgs__msg__LaneInfo__init(deva_perception_msgs__msg__LaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // lane_num
  // actual_turn
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->actual_turn, 0)) {
    deva_perception_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->navi_turn, 0)) {
    deva_perception_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__init(&msg->md5)) {
    deva_perception_msgs__msg__LaneInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__LaneInfo__fini(deva_perception_msgs__msg__LaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // lane_num
  // actual_turn
  rosidl_runtime_c__uint8__Sequence__fini(&msg->actual_turn);
  // navi_turn
  rosidl_runtime_c__uint8__Sequence__fini(&msg->navi_turn);
  // md5
  rosidl_runtime_c__String__fini(&msg->md5);
}

bool
deva_perception_msgs__msg__LaneInfo__are_equal(const deva_perception_msgs__msg__LaneInfo * lhs, const deva_perception_msgs__msg__LaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // actual_turn
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->actual_turn), &(rhs->actual_turn)))
  {
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->navi_turn), &(rhs->navi_turn)))
  {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneInfo__copy(
  const deva_perception_msgs__msg__LaneInfo * input,
  deva_perception_msgs__msg__LaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_num
  output->lane_num = input->lane_num;
  // actual_turn
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->actual_turn), &(output->actual_turn)))
  {
    return false;
  }
  // navi_turn
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->navi_turn), &(output->navi_turn)))
  {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__LaneInfo *
deva_perception_msgs__msg__LaneInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneInfo * msg = (deva_perception_msgs__msg__LaneInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__LaneInfo));
  bool success = deva_perception_msgs__msg__LaneInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__LaneInfo__destroy(deva_perception_msgs__msg__LaneInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__LaneInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__LaneInfo__Sequence__init(deva_perception_msgs__msg__LaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__LaneInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__LaneInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__LaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__LaneInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__LaneInfo__Sequence__fini(deva_perception_msgs__msg__LaneInfo__Sequence * array)
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
      deva_perception_msgs__msg__LaneInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__LaneInfo__Sequence *
deva_perception_msgs__msg__LaneInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneInfo__Sequence * array = (deva_perception_msgs__msg__LaneInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__LaneInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__LaneInfo__Sequence__destroy(deva_perception_msgs__msg__LaneInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__LaneInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__LaneInfo__Sequence__are_equal(const deva_perception_msgs__msg__LaneInfo__Sequence * lhs, const deva_perception_msgs__msg__LaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__LaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneInfo__Sequence__copy(
  const deva_perception_msgs__msg__LaneInfo__Sequence * input,
  deva_perception_msgs__msg__LaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__LaneInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__LaneInfo * data =
      (deva_perception_msgs__msg__LaneInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__LaneInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__LaneInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__LaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
