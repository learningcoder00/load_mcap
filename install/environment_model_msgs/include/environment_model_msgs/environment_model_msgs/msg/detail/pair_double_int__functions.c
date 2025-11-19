// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/PairDoubleInt.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/pair_double_int__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__PairDoubleInt__init(environment_model_msgs__msg__PairDoubleInt * msg)
{
  if (!msg) {
    return false;
  }
  // first
  // second
  return true;
}

void
environment_model_msgs__msg__PairDoubleInt__fini(environment_model_msgs__msg__PairDoubleInt * msg)
{
  if (!msg) {
    return;
  }
  // first
  // second
}

bool
environment_model_msgs__msg__PairDoubleInt__are_equal(const environment_model_msgs__msg__PairDoubleInt * lhs, const environment_model_msgs__msg__PairDoubleInt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // first
  if (lhs->first != rhs->first) {
    return false;
  }
  // second
  if (lhs->second != rhs->second) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__PairDoubleInt__copy(
  const environment_model_msgs__msg__PairDoubleInt * input,
  environment_model_msgs__msg__PairDoubleInt * output)
{
  if (!input || !output) {
    return false;
  }
  // first
  output->first = input->first;
  // second
  output->second = input->second;
  return true;
}

environment_model_msgs__msg__PairDoubleInt *
environment_model_msgs__msg__PairDoubleInt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairDoubleInt * msg = (environment_model_msgs__msg__PairDoubleInt *)allocator.allocate(sizeof(environment_model_msgs__msg__PairDoubleInt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__PairDoubleInt));
  bool success = environment_model_msgs__msg__PairDoubleInt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__PairDoubleInt__destroy(environment_model_msgs__msg__PairDoubleInt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__PairDoubleInt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__PairDoubleInt__Sequence__init(environment_model_msgs__msg__PairDoubleInt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairDoubleInt * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__PairDoubleInt *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__PairDoubleInt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__PairDoubleInt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__PairDoubleInt__fini(&data[i - 1]);
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
environment_model_msgs__msg__PairDoubleInt__Sequence__fini(environment_model_msgs__msg__PairDoubleInt__Sequence * array)
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
      environment_model_msgs__msg__PairDoubleInt__fini(&array->data[i]);
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

environment_model_msgs__msg__PairDoubleInt__Sequence *
environment_model_msgs__msg__PairDoubleInt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__PairDoubleInt__Sequence * array = (environment_model_msgs__msg__PairDoubleInt__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__PairDoubleInt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__PairDoubleInt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__PairDoubleInt__Sequence__destroy(environment_model_msgs__msg__PairDoubleInt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__PairDoubleInt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__PairDoubleInt__Sequence__are_equal(const environment_model_msgs__msg__PairDoubleInt__Sequence * lhs, const environment_model_msgs__msg__PairDoubleInt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__PairDoubleInt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__PairDoubleInt__Sequence__copy(
  const environment_model_msgs__msg__PairDoubleInt__Sequence * input,
  environment_model_msgs__msg__PairDoubleInt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__PairDoubleInt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__PairDoubleInt * data =
      (environment_model_msgs__msg__PairDoubleInt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__PairDoubleInt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__PairDoubleInt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__PairDoubleInt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
