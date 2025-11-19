// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/NaviScore.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/navi_score__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__NaviScore__init(environment_model_msgs__msg__NaviScore * msg)
{
  if (!msg) {
    return false;
  }
  // has_route_signal
  // static_score
  // is_on_route
  // dis2junction
  return true;
}

void
environment_model_msgs__msg__NaviScore__fini(environment_model_msgs__msg__NaviScore * msg)
{
  if (!msg) {
    return;
  }
  // has_route_signal
  // static_score
  // is_on_route
  // dis2junction
}

bool
environment_model_msgs__msg__NaviScore__are_equal(const environment_model_msgs__msg__NaviScore * lhs, const environment_model_msgs__msg__NaviScore * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_route_signal
  if (lhs->has_route_signal != rhs->has_route_signal) {
    return false;
  }
  // static_score
  if (lhs->static_score != rhs->static_score) {
    return false;
  }
  // is_on_route
  if (lhs->is_on_route != rhs->is_on_route) {
    return false;
  }
  // dis2junction
  if (lhs->dis2junction != rhs->dis2junction) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__NaviScore__copy(
  const environment_model_msgs__msg__NaviScore * input,
  environment_model_msgs__msg__NaviScore * output)
{
  if (!input || !output) {
    return false;
  }
  // has_route_signal
  output->has_route_signal = input->has_route_signal;
  // static_score
  output->static_score = input->static_score;
  // is_on_route
  output->is_on_route = input->is_on_route;
  // dis2junction
  output->dis2junction = input->dis2junction;
  return true;
}

environment_model_msgs__msg__NaviScore *
environment_model_msgs__msg__NaviScore__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__NaviScore * msg = (environment_model_msgs__msg__NaviScore *)allocator.allocate(sizeof(environment_model_msgs__msg__NaviScore), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__NaviScore));
  bool success = environment_model_msgs__msg__NaviScore__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__NaviScore__destroy(environment_model_msgs__msg__NaviScore * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__NaviScore__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__NaviScore__Sequence__init(environment_model_msgs__msg__NaviScore__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__NaviScore * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__NaviScore *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__NaviScore), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__NaviScore__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__NaviScore__fini(&data[i - 1]);
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
environment_model_msgs__msg__NaviScore__Sequence__fini(environment_model_msgs__msg__NaviScore__Sequence * array)
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
      environment_model_msgs__msg__NaviScore__fini(&array->data[i]);
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

environment_model_msgs__msg__NaviScore__Sequence *
environment_model_msgs__msg__NaviScore__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__NaviScore__Sequence * array = (environment_model_msgs__msg__NaviScore__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__NaviScore__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__NaviScore__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__NaviScore__Sequence__destroy(environment_model_msgs__msg__NaviScore__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__NaviScore__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__NaviScore__Sequence__are_equal(const environment_model_msgs__msg__NaviScore__Sequence * lhs, const environment_model_msgs__msg__NaviScore__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__NaviScore__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__NaviScore__Sequence__copy(
  const environment_model_msgs__msg__NaviScore__Sequence * input,
  environment_model_msgs__msg__NaviScore__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__NaviScore);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__NaviScore * data =
      (environment_model_msgs__msg__NaviScore *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__NaviScore__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__NaviScore__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__NaviScore__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
