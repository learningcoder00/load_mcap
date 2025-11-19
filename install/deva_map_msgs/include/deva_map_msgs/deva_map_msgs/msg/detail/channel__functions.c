// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_lane_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `laneinfo`
#include "deva_map_msgs/msg/detail/channel_lane_info__functions.h"
// Member `middle_line`
// Member `reference_line_vec`
#include "deva_map_msgs/msg/detail/channel_lane_line__functions.h"
// Member `left_marking`
// Member `right_marking`
#include "deva_map_msgs/msg/detail/channel_lane_marking__functions.h"
// Member `object_info`
#include "deva_map_msgs/msg/detail/channel_object_info__functions.h"
// Member `signal_info`
#include "deva_map_msgs/msg/detail/channel_signal_info__functions.h"

bool
deva_map_msgs__msg__Channel__init(deva_map_msgs__msg__Channel * msg)
{
  if (!msg) {
    return false;
  }
  // available
  // is_on_route
  // errcode
  // current_lane_id
  if (!rosidl_runtime_c__String__init(&msg->current_lane_id)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // channel_idx
  // lane_offset
  // laneinfo
  if (!deva_map_msgs__msg__ChannelLaneInfo__init(&msg->laneinfo)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__init(&msg->middle_line)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // reference_line_vec
  if (!deva_map_msgs__msg__ChannelLaneLine__Sequence__init(&msg->reference_line_vec, 0)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // left_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__init(&msg->left_marking)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // right_marking
  if (!deva_map_msgs__msg__ChannelLaneMarking__init(&msg->right_marking)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // left_channel_idx
  // right_channel_idx
  // object_info
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(&msg->object_info, 0)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  // signal_info
  if (!deva_map_msgs__msg__ChannelSignalInfo__Sequence__init(&msg->signal_info, 0)) {
    deva_map_msgs__msg__Channel__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__Channel__fini(deva_map_msgs__msg__Channel * msg)
{
  if (!msg) {
    return;
  }
  // available
  // is_on_route
  // errcode
  // current_lane_id
  rosidl_runtime_c__String__fini(&msg->current_lane_id);
  // channel_idx
  // lane_offset
  // laneinfo
  deva_map_msgs__msg__ChannelLaneInfo__fini(&msg->laneinfo);
  // middle_line
  deva_map_msgs__msg__ChannelLaneLine__fini(&msg->middle_line);
  // reference_line_vec
  deva_map_msgs__msg__ChannelLaneLine__Sequence__fini(&msg->reference_line_vec);
  // left_marking
  deva_map_msgs__msg__ChannelLaneMarking__fini(&msg->left_marking);
  // right_marking
  deva_map_msgs__msg__ChannelLaneMarking__fini(&msg->right_marking);
  // left_channel_idx
  // right_channel_idx
  // object_info
  deva_map_msgs__msg__ChannelObjectInfo__Sequence__fini(&msg->object_info);
  // signal_info
  deva_map_msgs__msg__ChannelSignalInfo__Sequence__fini(&msg->signal_info);
}

bool
deva_map_msgs__msg__Channel__are_equal(const deva_map_msgs__msg__Channel * lhs, const deva_map_msgs__msg__Channel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // available
  if (lhs->available != rhs->available) {
    return false;
  }
  // is_on_route
  if (lhs->is_on_route != rhs->is_on_route) {
    return false;
  }
  // errcode
  if (lhs->errcode != rhs->errcode) {
    return false;
  }
  // current_lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_lane_id), &(rhs->current_lane_id)))
  {
    return false;
  }
  // channel_idx
  if (lhs->channel_idx != rhs->channel_idx) {
    return false;
  }
  // lane_offset
  if (lhs->lane_offset != rhs->lane_offset) {
    return false;
  }
  // laneinfo
  if (!deva_map_msgs__msg__ChannelLaneInfo__are_equal(
      &(lhs->laneinfo), &(rhs->laneinfo)))
  {
    return false;
  }
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__are_equal(
      &(lhs->middle_line), &(rhs->middle_line)))
  {
    return false;
  }
  // reference_line_vec
  if (!deva_map_msgs__msg__ChannelLaneLine__Sequence__are_equal(
      &(lhs->reference_line_vec), &(rhs->reference_line_vec)))
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
  // left_channel_idx
  if (lhs->left_channel_idx != rhs->left_channel_idx) {
    return false;
  }
  // right_channel_idx
  if (lhs->right_channel_idx != rhs->right_channel_idx) {
    return false;
  }
  // object_info
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__are_equal(
      &(lhs->object_info), &(rhs->object_info)))
  {
    return false;
  }
  // signal_info
  if (!deva_map_msgs__msg__ChannelSignalInfo__Sequence__are_equal(
      &(lhs->signal_info), &(rhs->signal_info)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__Channel__copy(
  const deva_map_msgs__msg__Channel * input,
  deva_map_msgs__msg__Channel * output)
{
  if (!input || !output) {
    return false;
  }
  // available
  output->available = input->available;
  // is_on_route
  output->is_on_route = input->is_on_route;
  // errcode
  output->errcode = input->errcode;
  // current_lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->current_lane_id), &(output->current_lane_id)))
  {
    return false;
  }
  // channel_idx
  output->channel_idx = input->channel_idx;
  // lane_offset
  output->lane_offset = input->lane_offset;
  // laneinfo
  if (!deva_map_msgs__msg__ChannelLaneInfo__copy(
      &(input->laneinfo), &(output->laneinfo)))
  {
    return false;
  }
  // middle_line
  if (!deva_map_msgs__msg__ChannelLaneLine__copy(
      &(input->middle_line), &(output->middle_line)))
  {
    return false;
  }
  // reference_line_vec
  if (!deva_map_msgs__msg__ChannelLaneLine__Sequence__copy(
      &(input->reference_line_vec), &(output->reference_line_vec)))
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
  // left_channel_idx
  output->left_channel_idx = input->left_channel_idx;
  // right_channel_idx
  output->right_channel_idx = input->right_channel_idx;
  // object_info
  if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__copy(
      &(input->object_info), &(output->object_info)))
  {
    return false;
  }
  // signal_info
  if (!deva_map_msgs__msg__ChannelSignalInfo__Sequence__copy(
      &(input->signal_info), &(output->signal_info)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__Channel *
deva_map_msgs__msg__Channel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__Channel * msg = (deva_map_msgs__msg__Channel *)allocator.allocate(sizeof(deva_map_msgs__msg__Channel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__Channel));
  bool success = deva_map_msgs__msg__Channel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__Channel__destroy(deva_map_msgs__msg__Channel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__Channel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__Channel__Sequence__init(deva_map_msgs__msg__Channel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__Channel * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__Channel *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__Channel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__Channel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__Channel__fini(&data[i - 1]);
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
deva_map_msgs__msg__Channel__Sequence__fini(deva_map_msgs__msg__Channel__Sequence * array)
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
      deva_map_msgs__msg__Channel__fini(&array->data[i]);
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

deva_map_msgs__msg__Channel__Sequence *
deva_map_msgs__msg__Channel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__Channel__Sequence * array = (deva_map_msgs__msg__Channel__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__Channel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__Channel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__Channel__Sequence__destroy(deva_map_msgs__msg__Channel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__Channel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__Channel__Sequence__are_equal(const deva_map_msgs__msg__Channel__Sequence * lhs, const deva_map_msgs__msg__Channel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__Channel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__Channel__Sequence__copy(
  const deva_map_msgs__msg__Channel__Sequence * input,
  deva_map_msgs__msg__Channel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__Channel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__Channel * data =
      (deva_map_msgs__msg__Channel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__Channel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__Channel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__Channel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
