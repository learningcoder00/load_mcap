// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvState.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__EnvState__init(environment_model_msgs__msg__EnvState * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // msg_length
  // msg
  return true;
}

void
environment_model_msgs__msg__EnvState__fini(environment_model_msgs__msg__EnvState * msg)
{
  if (!msg) {
    return;
  }
  // type
  // msg_length
  // msg
}

bool
environment_model_msgs__msg__EnvState__are_equal(const environment_model_msgs__msg__EnvState * lhs, const environment_model_msgs__msg__EnvState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // msg_length
  if (lhs->msg_length != rhs->msg_length) {
    return false;
  }
  // msg
  for (size_t i = 0; i < 64; ++i) {
    if (lhs->msg[i] != rhs->msg[i]) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvState__copy(
  const environment_model_msgs__msg__EnvState * input,
  environment_model_msgs__msg__EnvState * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // msg_length
  output->msg_length = input->msg_length;
  // msg
  for (size_t i = 0; i < 64; ++i) {
    output->msg[i] = input->msg[i];
  }
  return true;
}

environment_model_msgs__msg__EnvState *
environment_model_msgs__msg__EnvState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvState * msg = (environment_model_msgs__msg__EnvState *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvState));
  bool success = environment_model_msgs__msg__EnvState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvState__destroy(environment_model_msgs__msg__EnvState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvState__Sequence__init(environment_model_msgs__msg__EnvState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvState * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvState *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvState__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvState__Sequence__fini(environment_model_msgs__msg__EnvState__Sequence * array)
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
      environment_model_msgs__msg__EnvState__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvState__Sequence *
environment_model_msgs__msg__EnvState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvState__Sequence * array = (environment_model_msgs__msg__EnvState__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvState__Sequence__destroy(environment_model_msgs__msg__EnvState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvState__Sequence__are_equal(const environment_model_msgs__msg__EnvState__Sequence * lhs, const environment_model_msgs__msg__EnvState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvState__Sequence__copy(
  const environment_model_msgs__msg__EnvState__Sequence * input,
  environment_model_msgs__msg__EnvState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvState * data =
      (environment_model_msgs__msg__EnvState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
