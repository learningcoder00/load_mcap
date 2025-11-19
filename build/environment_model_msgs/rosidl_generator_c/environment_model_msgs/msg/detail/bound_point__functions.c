// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/BoundPoint.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/bound_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__BoundPoint__init(environment_model_msgs__msg__BoundPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // enum_marking_type
  // enum_color
  // width
  return true;
}

void
environment_model_msgs__msg__BoundPoint__fini(environment_model_msgs__msg__BoundPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // enum_marking_type
  // enum_color
  // width
}

bool
environment_model_msgs__msg__BoundPoint__are_equal(const environment_model_msgs__msg__BoundPoint * lhs, const environment_model_msgs__msg__BoundPoint * rhs)
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
  // enum_marking_type
  if (lhs->enum_marking_type != rhs->enum_marking_type) {
    return false;
  }
  // enum_color
  if (lhs->enum_color != rhs->enum_color) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__BoundPoint__copy(
  const environment_model_msgs__msg__BoundPoint * input,
  environment_model_msgs__msg__BoundPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // enum_marking_type
  output->enum_marking_type = input->enum_marking_type;
  // enum_color
  output->enum_color = input->enum_color;
  // width
  output->width = input->width;
  return true;
}

environment_model_msgs__msg__BoundPoint *
environment_model_msgs__msg__BoundPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__BoundPoint * msg = (environment_model_msgs__msg__BoundPoint *)allocator.allocate(sizeof(environment_model_msgs__msg__BoundPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__BoundPoint));
  bool success = environment_model_msgs__msg__BoundPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__BoundPoint__destroy(environment_model_msgs__msg__BoundPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__BoundPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__BoundPoint__Sequence__init(environment_model_msgs__msg__BoundPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__BoundPoint * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__BoundPoint *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__BoundPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__BoundPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__BoundPoint__fini(&data[i - 1]);
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
environment_model_msgs__msg__BoundPoint__Sequence__fini(environment_model_msgs__msg__BoundPoint__Sequence * array)
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
      environment_model_msgs__msg__BoundPoint__fini(&array->data[i]);
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

environment_model_msgs__msg__BoundPoint__Sequence *
environment_model_msgs__msg__BoundPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__BoundPoint__Sequence * array = (environment_model_msgs__msg__BoundPoint__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__BoundPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__BoundPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__BoundPoint__Sequence__destroy(environment_model_msgs__msg__BoundPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__BoundPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__BoundPoint__Sequence__are_equal(const environment_model_msgs__msg__BoundPoint__Sequence * lhs, const environment_model_msgs__msg__BoundPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__BoundPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__BoundPoint__Sequence__copy(
  const environment_model_msgs__msg__BoundPoint__Sequence * input,
  environment_model_msgs__msg__BoundPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__BoundPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__BoundPoint * data =
      (environment_model_msgs__msg__BoundPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__BoundPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__BoundPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__BoundPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
