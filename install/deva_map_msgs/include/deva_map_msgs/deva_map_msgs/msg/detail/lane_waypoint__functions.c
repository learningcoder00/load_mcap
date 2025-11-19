// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/LaneWaypoint.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/lane_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "deva_localization_msgs/msg/detail/pose__functions.h"

bool
deva_map_msgs__msg__LaneWaypoint__init(deva_map_msgs__msg__LaneWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    deva_map_msgs__msg__LaneWaypoint__fini(msg);
    return false;
  }
  // s
  // pose
  if (!deva_localization_msgs__msg__Pose__init(&msg->pose)) {
    deva_map_msgs__msg__LaneWaypoint__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__LaneWaypoint__fini(deva_map_msgs__msg__LaneWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // s
  // pose
  deva_localization_msgs__msg__Pose__fini(&msg->pose);
}

bool
deva_map_msgs__msg__LaneWaypoint__are_equal(const deva_map_msgs__msg__LaneWaypoint * lhs, const deva_map_msgs__msg__LaneWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // pose
  if (!deva_localization_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__LaneWaypoint__copy(
  const deva_map_msgs__msg__LaneWaypoint * input,
  deva_map_msgs__msg__LaneWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // s
  output->s = input->s;
  // pose
  if (!deva_localization_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__LaneWaypoint *
deva_map_msgs__msg__LaneWaypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LaneWaypoint * msg = (deva_map_msgs__msg__LaneWaypoint *)allocator.allocate(sizeof(deva_map_msgs__msg__LaneWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__LaneWaypoint));
  bool success = deva_map_msgs__msg__LaneWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__LaneWaypoint__destroy(deva_map_msgs__msg__LaneWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__LaneWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__LaneWaypoint__Sequence__init(deva_map_msgs__msg__LaneWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LaneWaypoint * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__LaneWaypoint *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__LaneWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__LaneWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__LaneWaypoint__fini(&data[i - 1]);
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
deva_map_msgs__msg__LaneWaypoint__Sequence__fini(deva_map_msgs__msg__LaneWaypoint__Sequence * array)
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
      deva_map_msgs__msg__LaneWaypoint__fini(&array->data[i]);
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

deva_map_msgs__msg__LaneWaypoint__Sequence *
deva_map_msgs__msg__LaneWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__LaneWaypoint__Sequence * array = (deva_map_msgs__msg__LaneWaypoint__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__LaneWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__LaneWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__LaneWaypoint__Sequence__destroy(deva_map_msgs__msg__LaneWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__LaneWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__LaneWaypoint__Sequence__are_equal(const deva_map_msgs__msg__LaneWaypoint__Sequence * lhs, const deva_map_msgs__msg__LaneWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__LaneWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__LaneWaypoint__Sequence__copy(
  const deva_map_msgs__msg__LaneWaypoint__Sequence * input,
  deva_map_msgs__msg__LaneWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__LaneWaypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__LaneWaypoint * data =
      (deva_map_msgs__msg__LaneWaypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__LaneWaypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__LaneWaypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__LaneWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
