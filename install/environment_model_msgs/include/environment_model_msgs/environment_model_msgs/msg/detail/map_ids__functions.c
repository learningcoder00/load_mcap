// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/MapIds.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/map_ids__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__MapIds__init(environment_model_msgs__msg__MapIds * msg)
{
  if (!msg) {
    return false;
  }
  // key
  // value1
  // value2
  return true;
}

void
environment_model_msgs__msg__MapIds__fini(environment_model_msgs__msg__MapIds * msg)
{
  if (!msg) {
    return;
  }
  // key
  // value1
  // value2
}

bool
environment_model_msgs__msg__MapIds__are_equal(const environment_model_msgs__msg__MapIds * lhs, const environment_model_msgs__msg__MapIds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // key
  if (lhs->key != rhs->key) {
    return false;
  }
  // value1
  if (lhs->value1 != rhs->value1) {
    return false;
  }
  // value2
  if (lhs->value2 != rhs->value2) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__MapIds__copy(
  const environment_model_msgs__msg__MapIds * input,
  environment_model_msgs__msg__MapIds * output)
{
  if (!input || !output) {
    return false;
  }
  // key
  output->key = input->key;
  // value1
  output->value1 = input->value1;
  // value2
  output->value2 = input->value2;
  return true;
}

environment_model_msgs__msg__MapIds *
environment_model_msgs__msg__MapIds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__MapIds * msg = (environment_model_msgs__msg__MapIds *)allocator.allocate(sizeof(environment_model_msgs__msg__MapIds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__MapIds));
  bool success = environment_model_msgs__msg__MapIds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__MapIds__destroy(environment_model_msgs__msg__MapIds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__MapIds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__MapIds__Sequence__init(environment_model_msgs__msg__MapIds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__MapIds * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__MapIds *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__MapIds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__MapIds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__MapIds__fini(&data[i - 1]);
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
environment_model_msgs__msg__MapIds__Sequence__fini(environment_model_msgs__msg__MapIds__Sequence * array)
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
      environment_model_msgs__msg__MapIds__fini(&array->data[i]);
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

environment_model_msgs__msg__MapIds__Sequence *
environment_model_msgs__msg__MapIds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__MapIds__Sequence * array = (environment_model_msgs__msg__MapIds__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__MapIds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__MapIds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__MapIds__Sequence__destroy(environment_model_msgs__msg__MapIds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__MapIds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__MapIds__Sequence__are_equal(const environment_model_msgs__msg__MapIds__Sequence * lhs, const environment_model_msgs__msg__MapIds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__MapIds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__MapIds__Sequence__copy(
  const environment_model_msgs__msg__MapIds__Sequence * input,
  environment_model_msgs__msg__MapIds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__MapIds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__MapIds * data =
      (environment_model_msgs__msg__MapIds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__MapIds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__MapIds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__MapIds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
