// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel_lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_id_vec`
#include "rosidl_runtime_c/string_functions.h"
// Member `lanetype_vec`
#include "deva_map_msgs/msg/detail/channel_lane_type__functions.h"
// Member `turntype_vec`
#include "deva_map_msgs/msg/detail/channel_turn_type__functions.h"
// Member `lanespeedlimitation_vec`
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__functions.h"

bool
deva_map_msgs__msg__ChannelLaneInfo__init(deva_map_msgs__msg__ChannelLaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id_vec
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lane_id_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneInfo__fini(msg);
    return false;
  }
  // lanetype_vec
  if (!deva_map_msgs__msg__ChannelLaneType__Sequence__init(&msg->lanetype_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneInfo__fini(msg);
    return false;
  }
  // turntype_vec
  if (!deva_map_msgs__msg__ChannelTurnType__Sequence__init(&msg->turntype_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneInfo__fini(msg);
    return false;
  }
  // lanespeedlimitation_vec
  if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(&msg->lanespeedlimitation_vec, 0)) {
    deva_map_msgs__msg__ChannelLaneInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__ChannelLaneInfo__fini(deva_map_msgs__msg__ChannelLaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // lane_id_vec
  rosidl_runtime_c__String__Sequence__fini(&msg->lane_id_vec);
  // lanetype_vec
  deva_map_msgs__msg__ChannelLaneType__Sequence__fini(&msg->lanetype_vec);
  // turntype_vec
  deva_map_msgs__msg__ChannelTurnType__Sequence__fini(&msg->turntype_vec);
  // lanespeedlimitation_vec
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__fini(&msg->lanespeedlimitation_vec);
}

bool
deva_map_msgs__msg__ChannelLaneInfo__are_equal(const deva_map_msgs__msg__ChannelLaneInfo * lhs, const deva_map_msgs__msg__ChannelLaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id_vec
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lane_id_vec), &(rhs->lane_id_vec)))
  {
    return false;
  }
  // lanetype_vec
  if (!deva_map_msgs__msg__ChannelLaneType__Sequence__are_equal(
      &(lhs->lanetype_vec), &(rhs->lanetype_vec)))
  {
    return false;
  }
  // turntype_vec
  if (!deva_map_msgs__msg__ChannelTurnType__Sequence__are_equal(
      &(lhs->turntype_vec), &(rhs->turntype_vec)))
  {
    return false;
  }
  // lanespeedlimitation_vec
  if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__are_equal(
      &(lhs->lanespeedlimitation_vec), &(rhs->lanespeedlimitation_vec)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneInfo__copy(
  const deva_map_msgs__msg__ChannelLaneInfo * input,
  deva_map_msgs__msg__ChannelLaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id_vec
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lane_id_vec), &(output->lane_id_vec)))
  {
    return false;
  }
  // lanetype_vec
  if (!deva_map_msgs__msg__ChannelLaneType__Sequence__copy(
      &(input->lanetype_vec), &(output->lanetype_vec)))
  {
    return false;
  }
  // turntype_vec
  if (!deva_map_msgs__msg__ChannelTurnType__Sequence__copy(
      &(input->turntype_vec), &(output->turntype_vec)))
  {
    return false;
  }
  // lanespeedlimitation_vec
  if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__copy(
      &(input->lanespeedlimitation_vec), &(output->lanespeedlimitation_vec)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__ChannelLaneInfo *
deva_map_msgs__msg__ChannelLaneInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneInfo * msg = (deva_map_msgs__msg__ChannelLaneInfo *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ChannelLaneInfo));
  bool success = deva_map_msgs__msg__ChannelLaneInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ChannelLaneInfo__destroy(deva_map_msgs__msg__ChannelLaneInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ChannelLaneInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ChannelLaneInfo__Sequence__init(deva_map_msgs__msg__ChannelLaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneInfo * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ChannelLaneInfo *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ChannelLaneInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ChannelLaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ChannelLaneInfo__fini(&data[i - 1]);
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
deva_map_msgs__msg__ChannelLaneInfo__Sequence__fini(deva_map_msgs__msg__ChannelLaneInfo__Sequence * array)
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
      deva_map_msgs__msg__ChannelLaneInfo__fini(&array->data[i]);
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

deva_map_msgs__msg__ChannelLaneInfo__Sequence *
deva_map_msgs__msg__ChannelLaneInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneInfo__Sequence * array = (deva_map_msgs__msg__ChannelLaneInfo__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ChannelLaneInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ChannelLaneInfo__Sequence__destroy(deva_map_msgs__msg__ChannelLaneInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ChannelLaneInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ChannelLaneInfo__Sequence__are_equal(const deva_map_msgs__msg__ChannelLaneInfo__Sequence * lhs, const deva_map_msgs__msg__ChannelLaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneInfo__Sequence__copy(
  const deva_map_msgs__msg__ChannelLaneInfo__Sequence * input,
  deva_map_msgs__msg__ChannelLaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ChannelLaneInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ChannelLaneInfo * data =
      (deva_map_msgs__msg__ChannelLaneInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ChannelLaneInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ChannelLaneInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
