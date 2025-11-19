// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/Vec2dArray.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/vec2d_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vec2d_array`
#include "environment_model_msgs/msg/detail/vec2d__functions.h"

bool
environment_model_msgs__msg__Vec2dArray__init(environment_model_msgs__msg__Vec2dArray * msg)
{
  if (!msg) {
    return false;
  }
  // vec2d_array
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->vec2d_array, 0)) {
    environment_model_msgs__msg__Vec2dArray__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__Vec2dArray__fini(environment_model_msgs__msg__Vec2dArray * msg)
{
  if (!msg) {
    return;
  }
  // vec2d_array
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->vec2d_array);
}

bool
environment_model_msgs__msg__Vec2dArray__are_equal(const environment_model_msgs__msg__Vec2dArray * lhs, const environment_model_msgs__msg__Vec2dArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vec2d_array
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->vec2d_array), &(rhs->vec2d_array)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__Vec2dArray__copy(
  const environment_model_msgs__msg__Vec2dArray * input,
  environment_model_msgs__msg__Vec2dArray * output)
{
  if (!input || !output) {
    return false;
  }
  // vec2d_array
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->vec2d_array), &(output->vec2d_array)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__Vec2dArray *
environment_model_msgs__msg__Vec2dArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__Vec2dArray * msg = (environment_model_msgs__msg__Vec2dArray *)allocator.allocate(sizeof(environment_model_msgs__msg__Vec2dArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__Vec2dArray));
  bool success = environment_model_msgs__msg__Vec2dArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__Vec2dArray__destroy(environment_model_msgs__msg__Vec2dArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__Vec2dArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__Vec2dArray__Sequence__init(environment_model_msgs__msg__Vec2dArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__Vec2dArray * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__Vec2dArray *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__Vec2dArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__Vec2dArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__Vec2dArray__fini(&data[i - 1]);
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
environment_model_msgs__msg__Vec2dArray__Sequence__fini(environment_model_msgs__msg__Vec2dArray__Sequence * array)
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
      environment_model_msgs__msg__Vec2dArray__fini(&array->data[i]);
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

environment_model_msgs__msg__Vec2dArray__Sequence *
environment_model_msgs__msg__Vec2dArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__Vec2dArray__Sequence * array = (environment_model_msgs__msg__Vec2dArray__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__Vec2dArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__Vec2dArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__Vec2dArray__Sequence__destroy(environment_model_msgs__msg__Vec2dArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__Vec2dArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__Vec2dArray__Sequence__are_equal(const environment_model_msgs__msg__Vec2dArray__Sequence * lhs, const environment_model_msgs__msg__Vec2dArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__Vec2dArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__Vec2dArray__Sequence__copy(
  const environment_model_msgs__msg__Vec2dArray__Sequence * input,
  environment_model_msgs__msg__Vec2dArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__Vec2dArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__Vec2dArray * data =
      (environment_model_msgs__msg__Vec2dArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__Vec2dArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__Vec2dArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__Vec2dArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
