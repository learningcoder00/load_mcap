// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `coords`
// Member `extends`
// Member `left_boundary`
// Member `right_boundary`
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
// Member `left_neibors`
// Member `right_neibors`
#include "environment_model_msgs/msg/detail/map_ids__functions.h"

bool
environment_model_msgs__msg__EnvLane__init(environment_model_msgs__msg__EnvLane * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // coords
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->coords, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  // extends
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->extends, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  // left_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->left_boundary, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  // right_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->right_boundary, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  // left_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__init(&msg->left_neibors, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  // right_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__init(&msg->right_neibors, 0)) {
    environment_model_msgs__msg__EnvLane__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__EnvLane__fini(environment_model_msgs__msg__EnvLane * msg)
{
  if (!msg) {
    return;
  }
  // id
  // coords
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->coords);
  // extends
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->extends);
  // left_boundary
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->left_boundary);
  // right_boundary
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->right_boundary);
  // left_neibors
  environment_model_msgs__msg__MapIds__Sequence__fini(&msg->left_neibors);
  // right_neibors
  environment_model_msgs__msg__MapIds__Sequence__fini(&msg->right_neibors);
}

bool
environment_model_msgs__msg__EnvLane__are_equal(const environment_model_msgs__msg__EnvLane * lhs, const environment_model_msgs__msg__EnvLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // coords
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->coords), &(rhs->coords)))
  {
    return false;
  }
  // extends
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->extends), &(rhs->extends)))
  {
    return false;
  }
  // left_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->left_boundary), &(rhs->left_boundary)))
  {
    return false;
  }
  // right_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->right_boundary), &(rhs->right_boundary)))
  {
    return false;
  }
  // left_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__are_equal(
      &(lhs->left_neibors), &(rhs->left_neibors)))
  {
    return false;
  }
  // right_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__are_equal(
      &(lhs->right_neibors), &(rhs->right_neibors)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLane__copy(
  const environment_model_msgs__msg__EnvLane * input,
  environment_model_msgs__msg__EnvLane * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // coords
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->coords), &(output->coords)))
  {
    return false;
  }
  // extends
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->extends), &(output->extends)))
  {
    return false;
  }
  // left_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->left_boundary), &(output->left_boundary)))
  {
    return false;
  }
  // right_boundary
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->right_boundary), &(output->right_boundary)))
  {
    return false;
  }
  // left_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__copy(
      &(input->left_neibors), &(output->left_neibors)))
  {
    return false;
  }
  // right_neibors
  if (!environment_model_msgs__msg__MapIds__Sequence__copy(
      &(input->right_neibors), &(output->right_neibors)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__EnvLane *
environment_model_msgs__msg__EnvLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLane * msg = (environment_model_msgs__msg__EnvLane *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvLane));
  bool success = environment_model_msgs__msg__EnvLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvLane__destroy(environment_model_msgs__msg__EnvLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvLane__Sequence__init(environment_model_msgs__msg__EnvLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLane * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvLane *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvLane__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvLane__Sequence__fini(environment_model_msgs__msg__EnvLane__Sequence * array)
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
      environment_model_msgs__msg__EnvLane__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvLane__Sequence *
environment_model_msgs__msg__EnvLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLane__Sequence * array = (environment_model_msgs__msg__EnvLane__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvLane__Sequence__destroy(environment_model_msgs__msg__EnvLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvLane__Sequence__are_equal(const environment_model_msgs__msg__EnvLane__Sequence * lhs, const environment_model_msgs__msg__EnvLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLane__Sequence__copy(
  const environment_model_msgs__msg__EnvLane__Sequence * input,
  environment_model_msgs__msg__EnvLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvLane * data =
      (environment_model_msgs__msg__EnvLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
