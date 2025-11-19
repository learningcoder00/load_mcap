// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/LaneFstInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/lane_fst_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `estimn`
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__functions.h"
// Member `info`
#include "deva_aeb_msgs/msg/detail/sf_lane_info__functions.h"
// Member `ppty`
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__functions.h"
// Member `extracurveinfo`
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__functions.h"

bool
deva_aeb_msgs__msg__LaneFstInfo__init(deva_aeb_msgs__msg__LaneFstInfo * msg)
{
  if (!msg) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFLaneTwoSegEstimn__init(&msg->estimn)) {
    deva_aeb_msgs__msg__LaneFstInfo__fini(msg);
    return false;
  }
  // info
  if (!deva_aeb_msgs__msg__SFLaneInfo__init(&msg->info)) {
    deva_aeb_msgs__msg__LaneFstInfo__fini(msg);
    return false;
  }
  // ppty
  if (!deva_aeb_msgs__msg__SFFrontLinePpty__init(&msg->ppty)) {
    deva_aeb_msgs__msg__LaneFstInfo__fini(msg);
    return false;
  }
  // extracurveinfo
  if (!deva_aeb_msgs__msg__SFCurveFunctionExtra__init(&msg->extracurveinfo)) {
    deva_aeb_msgs__msg__LaneFstInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__LaneFstInfo__fini(deva_aeb_msgs__msg__LaneFstInfo * msg)
{
  if (!msg) {
    return;
  }
  // estimn
  deva_aeb_msgs__msg__SFLaneTwoSegEstimn__fini(&msg->estimn);
  // info
  deva_aeb_msgs__msg__SFLaneInfo__fini(&msg->info);
  // ppty
  deva_aeb_msgs__msg__SFFrontLinePpty__fini(&msg->ppty);
  // extracurveinfo
  deva_aeb_msgs__msg__SFCurveFunctionExtra__fini(&msg->extracurveinfo);
}

bool
deva_aeb_msgs__msg__LaneFstInfo__are_equal(const deva_aeb_msgs__msg__LaneFstInfo * lhs, const deva_aeb_msgs__msg__LaneFstInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFLaneTwoSegEstimn__are_equal(
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
  // extracurveinfo
  if (!deva_aeb_msgs__msg__SFCurveFunctionExtra__are_equal(
      &(lhs->extracurveinfo), &(rhs->extracurveinfo)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__LaneFstInfo__copy(
  const deva_aeb_msgs__msg__LaneFstInfo * input,
  deva_aeb_msgs__msg__LaneFstInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // estimn
  if (!deva_aeb_msgs__msg__SFLaneTwoSegEstimn__copy(
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
  // extracurveinfo
  if (!deva_aeb_msgs__msg__SFCurveFunctionExtra__copy(
      &(input->extracurveinfo), &(output->extracurveinfo)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__LaneFstInfo *
deva_aeb_msgs__msg__LaneFstInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneFstInfo * msg = (deva_aeb_msgs__msg__LaneFstInfo *)allocator.allocate(sizeof(deva_aeb_msgs__msg__LaneFstInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__LaneFstInfo));
  bool success = deva_aeb_msgs__msg__LaneFstInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__LaneFstInfo__destroy(deva_aeb_msgs__msg__LaneFstInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__LaneFstInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__LaneFstInfo__Sequence__init(deva_aeb_msgs__msg__LaneFstInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneFstInfo * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__LaneFstInfo *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__LaneFstInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__LaneFstInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__LaneFstInfo__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__LaneFstInfo__Sequence__fini(deva_aeb_msgs__msg__LaneFstInfo__Sequence * array)
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
      deva_aeb_msgs__msg__LaneFstInfo__fini(&array->data[i]);
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

deva_aeb_msgs__msg__LaneFstInfo__Sequence *
deva_aeb_msgs__msg__LaneFstInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__LaneFstInfo__Sequence * array = (deva_aeb_msgs__msg__LaneFstInfo__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__LaneFstInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__LaneFstInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__LaneFstInfo__Sequence__destroy(deva_aeb_msgs__msg__LaneFstInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__LaneFstInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__LaneFstInfo__Sequence__are_equal(const deva_aeb_msgs__msg__LaneFstInfo__Sequence * lhs, const deva_aeb_msgs__msg__LaneFstInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__LaneFstInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__LaneFstInfo__Sequence__copy(
  const deva_aeb_msgs__msg__LaneFstInfo__Sequence * input,
  deva_aeb_msgs__msg__LaneFstInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__LaneFstInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__LaneFstInfo * data =
      (deva_aeb_msgs__msg__LaneFstInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__LaneFstInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__LaneFstInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__LaneFstInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
