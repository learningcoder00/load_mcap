// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/reference_channal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `middle_line`
#include "deva_map_msgs/msg/detail/channel_lane_line__functions.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/detail/channel_lane_marking__functions.h"
// Member `object_infos`
#include "deva_map_msgs/msg/detail/channel_object_info__functions.h"

bool
deva_map_msgs__msg__ReferenceChannal__init(deva_map_msgs__msg__ReferenceChannal * msg)
{
  if (!msg) {
    return false;
  }
  // available
  // confidence_coefficient
  // channel_idx
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__init(&msg->middle_line)) {
    deva_map_msgs__msg__ReferenceChannal__fini(msg);
    return false;
  }
  // left_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__init(&msg->left_marking)) {
    deva_map_msgs__msg__ReferenceChannal__fini(msg);
    return false;
  }
  // right_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__init(&msg->right_marking)) {
    deva_map_msgs__msg__ReferenceChannal__fini(msg);
    return false;
  }
  // object_infos
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(&msg->object_infos, 0)) {
    deva_map_msgs__msg__ReferenceChannal__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__ReferenceChannal__fini(deva_map_msgs__msg__ReferenceChannal * msg)
{
  if (!msg) {
    return;
  }
  // available
  // confidence_coefficient
  // channel_idx
  // middle_line
  deva_map_msgs__msg__ChannelLaneLine__fini(&msg->middle_line);
  // left_marking
  deva_map_msgs__msg__ChannelLaneMarking__fini(&msg->left_marking);
  // right_marking
  deva_map_msgs__msg__ChannelLaneMarking__fini(&msg->right_marking);
  // object_infos
  deva_map_msgs__msg__ChannelObjectInfo__Sequence__fini(&msg->object_infos);
}

bool
deva_map_msgs__msg__ReferenceChannal__are_equal(const deva_map_msgs__msg__ReferenceChannal * lhs, const deva_map_msgs__msg__ReferenceChannal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // confidence_coefficient
  if (lhs->confidence_coefficient != rhs->confidence_coefficient) {
    return false;
  }
  // channel_idx
  if (lhs->channel_idx != rhs->channel_idx) {
    return false;
  }
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__are_equal(
      &(lhs->middle_line), &(rhs->middle_line)))
  {
    return false;
  }
  // left_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__are_equal(
      &(lhs->left_marking), &(rhs->left_marking)))
  {
    return false;
  }
  // right_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__are_equal(
      &(lhs->right_marking), &(rhs->right_marking)))
  {
    return false;
  }
  // object_infos
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__are_equal(
      &(lhs->object_infos), &(rhs->object_infos)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ReferenceChannal__copy(
  const deva_map_msgs__msg__ReferenceChannal * input,
  deva_map_msgs__msg__ReferenceChannal * output)
{
  if (!input || !output) {
    return false;
  }
  // available
  output->available = input->available;
  // confidence_coefficient
  output->confidence_coefficient = input->confidence_coefficient;
  // channel_idx
  output->channel_idx = input->channel_idx;
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__copy(
      &(input->middle_line), &(output->middle_line)))
  {
    return false;
  }
  // left_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__copy(
      &(input->left_marking), &(output->left_marking)))
  {
    return false;
  }
  // right_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__copy(
      &(input->right_marking), &(output->right_marking)))
  {
    return false;
  }
  // object_infos
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__copy(
      &(input->object_infos), &(output->object_infos)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__ReferenceChannal *
deva_map_msgs__msg__ReferenceChannal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ReferenceChannal * msg = (deva_map_msgs__msg__ReferenceChannal *)allocator.allocate(sizeof(deva_map_msgs__msg__ReferenceChannal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ReferenceChannal));
  bool success = deva_map_msgs__msg__ReferenceChannal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ReferenceChannal__destroy(deva_map_msgs__msg__ReferenceChannal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ReferenceChannal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ReferenceChannal__Sequence__init(deva_map_msgs__msg__ReferenceChannal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ReferenceChannal * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ReferenceChannal *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ReferenceChannal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ReferenceChannal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ReferenceChannal__fini(&data[i - 1]);
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
deva_map_msgs__msg__ReferenceChannal__Sequence__fini(deva_map_msgs__msg__ReferenceChannal__Sequence * array)
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
      deva_map_msgs__msg__ReferenceChannal__fini(&array->data[i]);
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

deva_map_msgs__msg__ReferenceChannal__Sequence *
deva_map_msgs__msg__ReferenceChannal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ReferenceChannal__Sequence * array = (deva_map_msgs__msg__ReferenceChannal__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ReferenceChannal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ReferenceChannal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ReferenceChannal__Sequence__destroy(deva_map_msgs__msg__ReferenceChannal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ReferenceChannal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ReferenceChannal__Sequence__are_equal(const deva_map_msgs__msg__ReferenceChannal__Sequence * lhs, const deva_map_msgs__msg__ReferenceChannal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ReferenceChannal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ReferenceChannal__Sequence__copy(
  const deva_map_msgs__msg__ReferenceChannal__Sequence * input,
  deva_map_msgs__msg__ReferenceChannal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ReferenceChannal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ReferenceChannal * data =
      (deva_map_msgs__msg__ReferenceChannal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ReferenceChannal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ReferenceChannal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ReferenceChannal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
