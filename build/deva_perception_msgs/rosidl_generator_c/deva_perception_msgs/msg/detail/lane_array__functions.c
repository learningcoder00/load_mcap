// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/LaneArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/lane_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `lanes`
#include "deva_perception_msgs/msg/detail/lane__functions.h"

bool
deva_perception_msgs__msg__LaneArray__init(deva_perception_msgs__msg__LaneArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__LaneArray__fini(msg);
    return false;
  }
  // vehicle_left_lane_id
  // vehicle_right_lane_id
  // lanes
  if (!deva_perception_msgs__msg__Lane__Sequence__init(&msg->lanes, 0)) {
    deva_perception_msgs__msg__LaneArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__LaneArray__fini(deva_perception_msgs__msg__LaneArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // vehicle_left_lane_id
  // vehicle_right_lane_id
  // lanes
  deva_perception_msgs__msg__Lane__Sequence__fini(&msg->lanes);
}

bool
deva_perception_msgs__msg__LaneArray__are_equal(const deva_perception_msgs__msg__LaneArray * lhs, const deva_perception_msgs__msg__LaneArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicle_left_lane_id
  if (lhs->vehicle_left_lane_id != rhs->vehicle_left_lane_id) {
    return false;
  }
  // vehicle_right_lane_id
  if (lhs->vehicle_right_lane_id != rhs->vehicle_right_lane_id) {
    return false;
  }
  // lanes
  if (!deva_perception_msgs__msg__Lane__Sequence__are_equal(
      &(lhs->lanes), &(rhs->lanes)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneArray__copy(
  const deva_perception_msgs__msg__LaneArray * input,
  deva_perception_msgs__msg__LaneArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicle_left_lane_id
  output->vehicle_left_lane_id = input->vehicle_left_lane_id;
  // vehicle_right_lane_id
  output->vehicle_right_lane_id = input->vehicle_right_lane_id;
  // lanes
  if (!deva_perception_msgs__msg__Lane__Sequence__copy(
      &(input->lanes), &(output->lanes)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__LaneArray *
deva_perception_msgs__msg__LaneArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArray * msg = (deva_perception_msgs__msg__LaneArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__LaneArray));
  bool success = deva_perception_msgs__msg__LaneArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__LaneArray__destroy(deva_perception_msgs__msg__LaneArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__LaneArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__LaneArray__Sequence__init(deva_perception_msgs__msg__LaneArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__LaneArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__LaneArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__LaneArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__LaneArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__LaneArray__Sequence__fini(deva_perception_msgs__msg__LaneArray__Sequence * array)
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
      deva_perception_msgs__msg__LaneArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__LaneArray__Sequence *
deva_perception_msgs__msg__LaneArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArray__Sequence * array = (deva_perception_msgs__msg__LaneArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__LaneArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__LaneArray__Sequence__destroy(deva_perception_msgs__msg__LaneArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__LaneArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__LaneArray__Sequence__are_equal(const deva_perception_msgs__msg__LaneArray__Sequence * lhs, const deva_perception_msgs__msg__LaneArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__LaneArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneArray__Sequence__copy(
  const deva_perception_msgs__msg__LaneArray__Sequence * input,
  deva_perception_msgs__msg__LaneArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__LaneArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__LaneArray * data =
      (deva_perception_msgs__msg__LaneArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__LaneArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__LaneArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__LaneArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
