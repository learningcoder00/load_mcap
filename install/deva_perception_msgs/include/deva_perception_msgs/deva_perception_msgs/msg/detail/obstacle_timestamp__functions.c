// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/ObstacleTimestamp.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/obstacle_timestamp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `radar_timestamps`
// Member `camera_timestamps`
// Member `lidar_timestamp`
// Member `loc_timestamp`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_perception_msgs__msg__ObstacleTimestamp__init(deva_perception_msgs__msg__ObstacleTimestamp * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
    return false;
  }
  // radar_timestamps
  if (!rosidl_runtime_c__String__Sequence__init(&msg->radar_timestamps, 0)) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
    return false;
  }
  // camera_timestamps
  if (!rosidl_runtime_c__String__Sequence__init(&msg->camera_timestamps, 0)) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
    return false;
  }
  // lidar_timestamp
  if (!rosidl_runtime_c__String__init(&msg->lidar_timestamp)) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
    return false;
  }
  // loc_timestamp
  if (!rosidl_runtime_c__String__init(&msg->loc_timestamp)) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__ObstacleTimestamp__fini(deva_perception_msgs__msg__ObstacleTimestamp * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // radar_timestamps
  rosidl_runtime_c__String__Sequence__fini(&msg->radar_timestamps);
  // camera_timestamps
  rosidl_runtime_c__String__Sequence__fini(&msg->camera_timestamps);
  // lidar_timestamp
  rosidl_runtime_c__String__fini(&msg->lidar_timestamp);
  // loc_timestamp
  rosidl_runtime_c__String__fini(&msg->loc_timestamp);
}

bool
deva_perception_msgs__msg__ObstacleTimestamp__are_equal(const deva_perception_msgs__msg__ObstacleTimestamp * lhs, const deva_perception_msgs__msg__ObstacleTimestamp * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // radar_timestamps
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->radar_timestamps), &(rhs->radar_timestamps)))
  {
    return false;
  }
  // camera_timestamps
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->camera_timestamps), &(rhs->camera_timestamps)))
  {
    return false;
  }
  // lidar_timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lidar_timestamp), &(rhs->lidar_timestamp)))
  {
    return false;
  }
  // loc_timestamp
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->loc_timestamp), &(rhs->loc_timestamp)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__ObstacleTimestamp__copy(
  const deva_perception_msgs__msg__ObstacleTimestamp * input,
  deva_perception_msgs__msg__ObstacleTimestamp * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // radar_timestamps
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->radar_timestamps), &(output->radar_timestamps)))
  {
    return false;
  }
  // camera_timestamps
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->camera_timestamps), &(output->camera_timestamps)))
  {
    return false;
  }
  // lidar_timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->lidar_timestamp), &(output->lidar_timestamp)))
  {
    return false;
  }
  // loc_timestamp
  if (!rosidl_runtime_c__String__copy(
      &(input->loc_timestamp), &(output->loc_timestamp)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__ObstacleTimestamp *
deva_perception_msgs__msg__ObstacleTimestamp__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleTimestamp * msg = (deva_perception_msgs__msg__ObstacleTimestamp *)allocator.allocate(sizeof(deva_perception_msgs__msg__ObstacleTimestamp), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__ObstacleTimestamp));
  bool success = deva_perception_msgs__msg__ObstacleTimestamp__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__ObstacleTimestamp__destroy(deva_perception_msgs__msg__ObstacleTimestamp * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__ObstacleTimestamp__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__init(deva_perception_msgs__msg__ObstacleTimestamp__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleTimestamp * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__ObstacleTimestamp *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__ObstacleTimestamp), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__ObstacleTimestamp__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__ObstacleTimestamp__fini(&data[i - 1]);
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
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__fini(deva_perception_msgs__msg__ObstacleTimestamp__Sequence * array)
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
      deva_perception_msgs__msg__ObstacleTimestamp__fini(&array->data[i]);
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

deva_perception_msgs__msg__ObstacleTimestamp__Sequence *
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleTimestamp__Sequence * array = (deva_perception_msgs__msg__ObstacleTimestamp__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__ObstacleTimestamp__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__ObstacleTimestamp__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__destroy(deva_perception_msgs__msg__ObstacleTimestamp__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__ObstacleTimestamp__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__are_equal(const deva_perception_msgs__msg__ObstacleTimestamp__Sequence * lhs, const deva_perception_msgs__msg__ObstacleTimestamp__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__ObstacleTimestamp__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__ObstacleTimestamp__Sequence__copy(
  const deva_perception_msgs__msg__ObstacleTimestamp__Sequence * input,
  deva_perception_msgs__msg__ObstacleTimestamp__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__ObstacleTimestamp);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__ObstacleTimestamp * data =
      (deva_perception_msgs__msg__ObstacleTimestamp *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__ObstacleTimestamp__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__ObstacleTimestamp__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__ObstacleTimestamp__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
