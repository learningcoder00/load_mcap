// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/PairString.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/pair_string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `first`
// Member `second`
#include "rosidl_runtime_c/string_functions.h"

bool
environment_model_msgs__msg__PairString__init(environment_model_msgs__msg__PairString * msg)
{
  if (!msg) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__init(&msg->first)) {
    environment_model_msgs__msg__PairString__fini(msg);
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__init(&msg->second)) {
    environment_model_msgs__msg__PairString__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__PairString__fini(environment_model_msgs__msg__PairString * msg)
{
  if (!msg) {
    return;
  }
  // first
  rosidl_runtime_c__String__fini(&msg->first);
  // second
  rosidl_runtime_c__String__fini(&msg->second);
}

bool
environment_model_msgs__msg__PairString__are_equal(const environment_model_msgs__msg__PairString * lhs, const environment_model_msgs__msg__PairString * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first), &(rhs->first)))
  {
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->second), &(rhs->second)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__PairString__copy(
  const environment_model_msgs__msg__PairString * input,
  environment_model_msgs__msg__PairString * output)
{
  if (!input || !output) {
    return false;
  }
  // first
  if (!rosidl_runtime_c__String__copy(
      &(input->first), &(output->first)))
  {
    return false;
  }
  // second
  if (!rosidl_runtime_c__String__copy(
      &(input->second), &(output->second)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__PairString *
environment_model_msgs__msg__PairString__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairString * msg = (environment_model_msgs__msg__PairString *)allocator.allocate(sizeof(environment_model_msgs__msg__PairString), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__PairString));
  bool success = environment_model_msgs__msg__PairString__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__PairString__destroy(environment_model_msgs__msg__PairString * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__PairString__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__PairString__Sequence__init(environment_model_msgs__msg__PairString__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairString * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__PairString *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__PairString), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__PairString__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__PairString__fini(&data[i - 1]);
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
environment_model_msgs__msg__PairString__Sequence__fini(environment_model_msgs__msg__PairString__Sequence * array)
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
      environment_model_msgs__msg__PairString__fini(&array->data[i]);
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

environment_model_msgs__msg__PairString__Sequence *
environment_model_msgs__msg__PairString__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairString__Sequence * array = (environment_model_msgs__msg__PairString__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__PairString__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__PairString__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__PairString__Sequence__destroy(environment_model_msgs__msg__PairString__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__PairString__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__PairString__Sequence__are_equal(const environment_model_msgs__msg__PairString__Sequence * lhs, const environment_model_msgs__msg__PairString__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__PairString__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__PairString__Sequence__copy(
  const environment_model_msgs__msg__PairString__Sequence * input,
  environment_model_msgs__msg__PairString__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__PairString);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__PairString * data =
      (environment_model_msgs__msg__PairString *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__PairString__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__PairString__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__PairString__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
