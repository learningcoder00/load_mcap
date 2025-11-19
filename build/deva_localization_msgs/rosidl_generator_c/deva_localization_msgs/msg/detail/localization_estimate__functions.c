// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice
#include "deva_localization_msgs/msg/detail/localization_estimate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `pose`
// Member `global_pose`
#include "deva_localization_msgs/msg/detail/pose__functions.h"
// Member `state_message`
// Member `global_pose_state_message`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_localization_msgs__msg__LocalizationEstimate__init(deva_localization_msgs__msg__LocalizationEstimate * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
    return false;
  }
  // pose
  if (!deva_localization_msgs__msg__Pose__init(&msg->pose)) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
    return false;
  }
  // global_pose
  if (!deva_localization_msgs__msg__Pose__init(&msg->global_pose)) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
    return false;
  }
  // measurement_time
  // state_message
  if (!rosidl_runtime_c__String__init(&msg->state_message)) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
    return false;
  }
  // global_pose_state_message
  if (!rosidl_runtime_c__String__init(&msg->global_pose_state_message)) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
    return false;
  }
  return true;
}

void
deva_localization_msgs__msg__LocalizationEstimate__fini(deva_localization_msgs__msg__LocalizationEstimate * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // pose
  deva_localization_msgs__msg__Pose__fini(&msg->pose);
  // global_pose
  deva_localization_msgs__msg__Pose__fini(&msg->global_pose);
  // measurement_time
  // state_message
  rosidl_runtime_c__String__fini(&msg->state_message);
  // global_pose_state_message
  rosidl_runtime_c__String__fini(&msg->global_pose_state_message);
}

bool
deva_localization_msgs__msg__LocalizationEstimate__are_equal(const deva_localization_msgs__msg__LocalizationEstimate * lhs, const deva_localization_msgs__msg__LocalizationEstimate * rhs)
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
  // pose
  if (!deva_localization_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // global_pose
  if (!deva_localization_msgs__msg__Pose__are_equal(
      &(lhs->global_pose), &(rhs->global_pose)))
  {
    return false;
  }
  // measurement_time
  if (lhs->measurement_time != rhs->measurement_time) {
    return false;
  }
  // state_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_message), &(rhs->state_message)))
  {
    return false;
  }
  // global_pose_state_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->global_pose_state_message), &(rhs->global_pose_state_message)))
  {
    return false;
  }
  return true;
}

bool
deva_localization_msgs__msg__LocalizationEstimate__copy(
  const deva_localization_msgs__msg__LocalizationEstimate * input,
  deva_localization_msgs__msg__LocalizationEstimate * output)
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
  // pose
  if (!deva_localization_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // global_pose
  if (!deva_localization_msgs__msg__Pose__copy(
      &(input->global_pose), &(output->global_pose)))
  {
    return false;
  }
  // measurement_time
  output->measurement_time = input->measurement_time;
  // state_message
  if (!rosidl_runtime_c__String__copy(
      &(input->state_message), &(output->state_message)))
  {
    return false;
  }
  // global_pose_state_message
  if (!rosidl_runtime_c__String__copy(
      &(input->global_pose_state_message), &(output->global_pose_state_message)))
  {
    return false;
  }
  return true;
}

deva_localization_msgs__msg__LocalizationEstimate *
deva_localization_msgs__msg__LocalizationEstimate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__LocalizationEstimate * msg = (deva_localization_msgs__msg__LocalizationEstimate *)allocator.allocate(sizeof(deva_localization_msgs__msg__LocalizationEstimate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_localization_msgs__msg__LocalizationEstimate));
  bool success = deva_localization_msgs__msg__LocalizationEstimate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_localization_msgs__msg__LocalizationEstimate__destroy(deva_localization_msgs__msg__LocalizationEstimate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_localization_msgs__msg__LocalizationEstimate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__init(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__LocalizationEstimate * data = NULL;

  if (size) {
    data = (deva_localization_msgs__msg__LocalizationEstimate *)allocator.zero_allocate(size, sizeof(deva_localization_msgs__msg__LocalizationEstimate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_localization_msgs__msg__LocalizationEstimate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_localization_msgs__msg__LocalizationEstimate__fini(&data[i - 1]);
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
deva_localization_msgs__msg__LocalizationEstimate__Sequence__fini(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array)
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
      deva_localization_msgs__msg__LocalizationEstimate__fini(&array->data[i]);
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

deva_localization_msgs__msg__LocalizationEstimate__Sequence *
deva_localization_msgs__msg__LocalizationEstimate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_localization_msgs__msg__LocalizationEstimate__Sequence * array = (deva_localization_msgs__msg__LocalizationEstimate__Sequence *)allocator.allocate(sizeof(deva_localization_msgs__msg__LocalizationEstimate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_localization_msgs__msg__LocalizationEstimate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_localization_msgs__msg__LocalizationEstimate__Sequence__destroy(deva_localization_msgs__msg__LocalizationEstimate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_localization_msgs__msg__LocalizationEstimate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__are_equal(const deva_localization_msgs__msg__LocalizationEstimate__Sequence * lhs, const deva_localization_msgs__msg__LocalizationEstimate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_localization_msgs__msg__LocalizationEstimate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_localization_msgs__msg__LocalizationEstimate__Sequence__copy(
  const deva_localization_msgs__msg__LocalizationEstimate__Sequence * input,
  deva_localization_msgs__msg__LocalizationEstimate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_localization_msgs__msg__LocalizationEstimate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_localization_msgs__msg__LocalizationEstimate * data =
      (deva_localization_msgs__msg__LocalizationEstimate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_localization_msgs__msg__LocalizationEstimate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_localization_msgs__msg__LocalizationEstimate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_localization_msgs__msg__LocalizationEstimate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
