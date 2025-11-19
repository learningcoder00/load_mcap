// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_lane_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `env_lane`
#include "environment_model_msgs/msg/detail/env_lane__functions.h"

bool
environment_model_msgs__msg__EnvLaneArray__init(environment_model_msgs__msg__EnvLaneArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    environment_model_msgs__msg__EnvLaneArray__fini(msg);
    return false;
  }
  // env_lane
  if (!environment_model_msgs__msg__EnvLane__Sequence__init(&msg->env_lane, 0)) {
    environment_model_msgs__msg__EnvLaneArray__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__EnvLaneArray__fini(environment_model_msgs__msg__EnvLaneArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // env_lane
  environment_model_msgs__msg__EnvLane__Sequence__fini(&msg->env_lane);
}

bool
environment_model_msgs__msg__EnvLaneArray__are_equal(const environment_model_msgs__msg__EnvLaneArray * lhs, const environment_model_msgs__msg__EnvLaneArray * rhs)
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
  // env_lane
  if (!environment_model_msgs__msg__EnvLane__Sequence__are_equal(
      &(lhs->env_lane), &(rhs->env_lane)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLaneArray__copy(
  const environment_model_msgs__msg__EnvLaneArray * input,
  environment_model_msgs__msg__EnvLaneArray * output)
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
  // env_lane
  if (!environment_model_msgs__msg__EnvLane__Sequence__copy(
      &(input->env_lane), &(output->env_lane)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__EnvLaneArray *
environment_model_msgs__msg__EnvLaneArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLaneArray * msg = (environment_model_msgs__msg__EnvLaneArray *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLaneArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvLaneArray));
  bool success = environment_model_msgs__msg__EnvLaneArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvLaneArray__destroy(environment_model_msgs__msg__EnvLaneArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvLaneArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvLaneArray__Sequence__init(environment_model_msgs__msg__EnvLaneArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLaneArray * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvLaneArray *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvLaneArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvLaneArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvLaneArray__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvLaneArray__Sequence__fini(environment_model_msgs__msg__EnvLaneArray__Sequence * array)
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
      environment_model_msgs__msg__EnvLaneArray__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvLaneArray__Sequence *
environment_model_msgs__msg__EnvLaneArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLaneArray__Sequence * array = (environment_model_msgs__msg__EnvLaneArray__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLaneArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvLaneArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvLaneArray__Sequence__destroy(environment_model_msgs__msg__EnvLaneArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvLaneArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvLaneArray__Sequence__are_equal(const environment_model_msgs__msg__EnvLaneArray__Sequence * lhs, const environment_model_msgs__msg__EnvLaneArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvLaneArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLaneArray__Sequence__copy(
  const environment_model_msgs__msg__EnvLaneArray__Sequence * input,
  environment_model_msgs__msg__EnvLaneArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvLaneArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvLaneArray * data =
      (environment_model_msgs__msg__EnvLaneArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvLaneArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvLaneArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvLaneArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
