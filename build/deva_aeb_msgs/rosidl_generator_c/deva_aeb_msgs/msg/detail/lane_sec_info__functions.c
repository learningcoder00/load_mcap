// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/LaneSecInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/lane_sec_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `estimn`
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__functions.h"
// Member `info`
#include "deva_aeb_msgs/msg/detail/sf_lane_info__functions.h"
// Member `ppty`
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__functions.h"
// Member `nearramppoint`
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_near_ramp_point__functions.h"

bool
deva_aeb_msgs__msg__LaneSecInfo__init(deva_aeb_msgs__msg__LaneSecInfo * msg)
{
  if (!msg) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFSecLaneEstimn__init(&msg->estimn)) {
    deva_aeb_msgs__msg__LaneSecInfo__fini(msg);
    return false;
  }
  // info
  if (!deva_aeb_msgs__msg__SFLaneInfo__init(&msg->info)) {
    deva_aeb_msgs__msg__LaneSecInfo__fini(msg);
    return false;
  }
  // ppty
  if (!deva_aeb_msgs__msg__SFFrontLinePpty__init(&msg->ppty)) {
    deva_aeb_msgs__msg__LaneSecInfo__fini(msg);
    return false;
  }
  // nearramppoint
  if (!deva_aeb_msgs__msg__SFSecLaneNearRampPoint__init(&msg->nearramppoint)) {
    deva_aeb_msgs__msg__LaneSecInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__LaneSecInfo__fini(deva_aeb_msgs__msg__LaneSecInfo * msg)
{
  if (!msg) {
    return;
  }
  // estimn
  deva_aeb_msgs__msg__SFSecLaneEstimn__fini(&msg->estimn);
  // info
  deva_aeb_msgs__msg__SFLaneInfo__fini(&msg->info);
  // ppty
  deva_aeb_msgs__msg__SFFrontLinePpty__fini(&msg->ppty);
  // nearramppoint
  deva_aeb_msgs__msg__SFSecLaneNearRampPoint__fini(&msg->nearramppoint);
}

bool
deva_aeb_msgs__msg__LaneSecInfo__are_equal(const deva_aeb_msgs__msg__LaneSecInfo * lhs, const deva_aeb_msgs__msg__LaneSecInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFSecLaneEstimn__are_equal(
      &(lhs->estimn), &(rhs->estimn)))
  {
    return false;
  }
  // info
  if (!deva_aeb_msgs__msg__SFLaneInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // ppty
  if (!deva_aeb_msgs__msg__SFFrontLinePpty__are_equal(
      &(lhs->ppty), &(rhs->ppty)))
  {
    return false;
  }
  // nearramppoint
  if (!deva_aeb_msgs__msg__SFSecLaneNearRampPoint__are_equal(
      &(lhs->nearramppoint), &(rhs->nearramppoint)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__LaneSecInfo__copy(
  const deva_aeb_msgs__msg__LaneSecInfo * input,
  deva_aeb_msgs__msg__LaneSecInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFSecLaneEstimn__copy(
      &(input->estimn), &(output->estimn)))
  {
    return false;
  }
  // info
  if (!deva_aeb_msgs__msg__SFLaneInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // ppty
  if (!deva_aeb_msgs__msg__SFFrontLinePpty__copy(
      &(input->ppty), &(output->ppty)))
  {
    return false;
  }
  // nearramppoint
  if (!deva_aeb_msgs__msg__SFSecLaneNearRampPoint__copy(
      &(input->nearramppoint), &(output->nearramppoint)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__LaneSecInfo *
deva_aeb_msgs__msg__LaneSecInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneSecInfo * msg = (deva_aeb_msgs__msg__LaneSecInfo *)allocator.allocate(sizeof(deva_aeb_msgs__msg__LaneSecInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__LaneSecInfo));
  bool success = deva_aeb_msgs__msg__LaneSecInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__LaneSecInfo__destroy(deva_aeb_msgs__msg__LaneSecInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__LaneSecInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__LaneSecInfo__Sequence__init(deva_aeb_msgs__msg__LaneSecInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneSecInfo * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__LaneSecInfo *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__LaneSecInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__LaneSecInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__LaneSecInfo__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__LaneSecInfo__Sequence__fini(deva_aeb_msgs__msg__LaneSecInfo__Sequence * array)
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
      deva_aeb_msgs__msg__LaneSecInfo__fini(&array->data[i]);
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

deva_aeb_msgs__msg__LaneSecInfo__Sequence *
deva_aeb_msgs__msg__LaneSecInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneSecInfo__Sequence * array = (deva_aeb_msgs__msg__LaneSecInfo__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__LaneSecInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__LaneSecInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__LaneSecInfo__Sequence__destroy(deva_aeb_msgs__msg__LaneSecInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__LaneSecInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__LaneSecInfo__Sequence__are_equal(const deva_aeb_msgs__msg__LaneSecInfo__Sequence * lhs, const deva_aeb_msgs__msg__LaneSecInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__LaneSecInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__LaneSecInfo__Sequence__copy(
  const deva_aeb_msgs__msg__LaneSecInfo__Sequence * input,
  deva_aeb_msgs__msg__LaneSecInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__LaneSecInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__LaneSecInfo * data =
      (deva_aeb_msgs__msg__LaneSecInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__LaneSecInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__LaneSecInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__LaneSecInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
