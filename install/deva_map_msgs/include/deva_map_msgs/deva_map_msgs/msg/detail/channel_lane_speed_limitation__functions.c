// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/ChannelLaneSpeedLimitation.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__init(deva_map_msgs__msg__ChannelLaneSpeedLimitation * msg)
{
  if (!msg) {
    return false;
  }
  // s_start
  // s_end
  // min_speed_limitation
  // max_speed_limitation
  return true;
}

void
deva_map_msgs__msg__ChannelLaneSpeedLimitation__fini(deva_map_msgs__msg__ChannelLaneSpeedLimitation * msg)
{
  if (!msg) {
    return;
  }
  // s_start
  // s_end
  // min_speed_limitation
  // max_speed_limitation
}

bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__are_equal(const deva_map_msgs__msg__ChannelLaneSpeedLimitation * lhs, const deva_map_msgs__msg__ChannelLaneSpeedLimitation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s_start
  if (lhs->s_start != rhs->s_start) {
    return false;
  }
  // s_end
  if (lhs->s_end != rhs->s_end) {
    return false;
  }
  // min_speed_limitation
  if (lhs->min_speed_limitation != rhs->min_speed_limitation) {
    return false;
  }
  // max_speed_limitation
  if (lhs->max_speed_limitation != rhs->max_speed_limitation) {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__copy(
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation * input,
  deva_map_msgs__msg__ChannelLaneSpeedLimitation * output)
{
  if (!input || !output) {
    return false;
  }
  // s_start
  output->s_start = input->s_start;
  // s_end
  output->s_end = input->s_end;
  // min_speed_limitation
  output->min_speed_limitation = input->min_speed_limitation;
  // max_speed_limitation
  output->max_speed_limitation = input->max_speed_limitation;
  return true;
}

deva_map_msgs__msg__ChannelLaneSpeedLimitation *
deva_map_msgs__msg__ChannelLaneSpeedLimitation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneSpeedLimitation * msg = (deva_map_msgs__msg__ChannelLaneSpeedLimitation *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneSpeedLimitation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__ChannelLaneSpeedLimitation));
  bool success = deva_map_msgs__msg__ChannelLaneSpeedLimitation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__ChannelLaneSpeedLimitation__destroy(deva_map_msgs__msg__ChannelLaneSpeedLimitation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__ChannelLaneSpeedLimitation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneSpeedLimitation * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__ChannelLaneSpeedLimitation *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__ChannelLaneSpeedLimitation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__ChannelLaneSpeedLimitation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__ChannelLaneSpeedLimitation__fini(&data[i - 1]);
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
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__fini(deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * array)
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
      deva_map_msgs__msg__ChannelLaneSpeedLimitation__fini(&array->data[i]);
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

deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * array = (deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__destroy(deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__are_equal(const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * lhs, const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__copy(
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * input,
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__ChannelLaneSpeedLimitation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__ChannelLaneSpeedLimitation * data =
      (deva_map_msgs__msg__ChannelLaneSpeedLimitation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__ChannelLaneSpeedLimitation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
