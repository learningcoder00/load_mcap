// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_lan_bound`
// Member `right_lane_bound`
// Member `left_road_bound`
// Member `right_road_bound`
#include "environment_model_msgs/msg/detail/bound_point__functions.h"

bool
environment_model_msgs__msg__EnvPoint__init(environment_model_msgs__msg__EnvPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // heading
  // s
  // kappa
  // left_lan_bound
  if (!environment_model_msgs__msg__BoundPoint__init(&msg->left_lan_bound)) {
    environment_model_msgs__msg__EnvPoint__fini(msg);
    return false;
  }
  // right_lane_bound
  if (!environment_model_msgs__msg__BoundPoint__init(&msg->right_lane_bound)) {
    environment_model_msgs__msg__EnvPoint__fini(msg);
    return false;
  }
  // left_road_bound
  if (!environment_model_msgs__msg__BoundPoint__init(&msg->left_road_bound)) {
    environment_model_msgs__msg__EnvPoint__fini(msg);
    return false;
  }
  // right_road_bound
  if (!environment_model_msgs__msg__BoundPoint__init(&msg->right_road_bound)) {
    environment_model_msgs__msg__EnvPoint__fini(msg);
    return false;
  }
  // speed_limit
  // enum_lane_type
  // enum_road_type
  return true;
}

void
environment_model_msgs__msg__EnvPoint__fini(environment_model_msgs__msg__EnvPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // heading
  // s
  // kappa
  // left_lan_bound
  environment_model_msgs__msg__BoundPoint__fini(&msg->left_lan_bound);
  // right_lane_bound
  environment_model_msgs__msg__BoundPoint__fini(&msg->right_lane_bound);
  // left_road_bound
  environment_model_msgs__msg__BoundPoint__fini(&msg->left_road_bound);
  // right_road_bound
  environment_model_msgs__msg__BoundPoint__fini(&msg->right_road_bound);
  // speed_limit
  // enum_lane_type
  // enum_road_type
}

bool
environment_model_msgs__msg__EnvPoint__are_equal(const environment_model_msgs__msg__EnvPoint * lhs, const environment_model_msgs__msg__EnvPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // left_lan_bound
  if (!environment_model_msgs__msg__BoundPoint__are_equal(
      &(lhs->left_lan_bound), &(rhs->left_lan_bound)))
  {
    return false;
  }
  // right_lane_bound
  if (!environment_model_msgs__msg__BoundPoint__are_equal(
      &(lhs->right_lane_bound), &(rhs->right_lane_bound)))
  {
    return false;
  }
  // left_road_bound
  if (!environment_model_msgs__msg__BoundPoint__are_equal(
      &(lhs->left_road_bound), &(rhs->left_road_bound)))
  {
    return false;
  }
  // right_road_bound
  if (!environment_model_msgs__msg__BoundPoint__are_equal(
      &(lhs->right_road_bound), &(rhs->right_road_bound)))
  {
    return false;
  }
  // speed_limit
  if (lhs->speed_limit != rhs->speed_limit) {
    return false;
  }
  // enum_lane_type
  if (lhs->enum_lane_type != rhs->enum_lane_type) {
    return false;
  }
  // enum_road_type
  if (lhs->enum_road_type != rhs->enum_road_type) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvPoint__copy(
  const environment_model_msgs__msg__EnvPoint * input,
  environment_model_msgs__msg__EnvPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // heading
  output->heading = input->heading;
  // s
  output->s = input->s;
  // kappa
  output->kappa = input->kappa;
  // left_lan_bound
  if (!environment_model_msgs__msg__BoundPoint__copy(
      &(input->left_lan_bound), &(output->left_lan_bound)))
  {
    return false;
  }
  // right_lane_bound
  if (!environment_model_msgs__msg__BoundPoint__copy(
      &(input->right_lane_bound), &(output->right_lane_bound)))
  {
    return false;
  }
  // left_road_bound
  if (!environment_model_msgs__msg__BoundPoint__copy(
      &(input->left_road_bound), &(output->left_road_bound)))
  {
    return false;
  }
  // right_road_bound
  if (!environment_model_msgs__msg__BoundPoint__copy(
      &(input->right_road_bound), &(output->right_road_bound)))
  {
    return false;
  }
  // speed_limit
  output->speed_limit = input->speed_limit;
  // enum_lane_type
  output->enum_lane_type = input->enum_lane_type;
  // enum_road_type
  output->enum_road_type = input->enum_road_type;
  return true;
}

environment_model_msgs__msg__EnvPoint *
environment_model_msgs__msg__EnvPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvPoint * msg = (environment_model_msgs__msg__EnvPoint *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvPoint));
  bool success = environment_model_msgs__msg__EnvPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvPoint__destroy(environment_model_msgs__msg__EnvPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvPoint__Sequence__init(environment_model_msgs__msg__EnvPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvPoint * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvPoint *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvPoint__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvPoint__Sequence__fini(environment_model_msgs__msg__EnvPoint__Sequence * array)
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
      environment_model_msgs__msg__EnvPoint__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvPoint__Sequence *
environment_model_msgs__msg__EnvPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvPoint__Sequence * array = (environment_model_msgs__msg__EnvPoint__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvPoint__Sequence__destroy(environment_model_msgs__msg__EnvPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvPoint__Sequence__are_equal(const environment_model_msgs__msg__EnvPoint__Sequence * lhs, const environment_model_msgs__msg__EnvPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvPoint__Sequence__copy(
  const environment_model_msgs__msg__EnvPoint__Sequence * input,
  environment_model_msgs__msg__EnvPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvPoint * data =
      (environment_model_msgs__msg__EnvPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
