// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/String.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/string__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_common_msgs__msg__String__init(deva_common_msgs__msg__String * msg)
{
  if (!msg) {
    return false;
  }
  // data
  // size
  msg->size = 0;
  return true;
}

void
deva_common_msgs__msg__String__fini(deva_common_msgs__msg__String * msg)
{
  if (!msg) {
    return;
  }
  // data
  // size
}

bool
deva_common_msgs__msg__String__are_equal(const deva_common_msgs__msg__String * lhs, const deva_common_msgs__msg__String * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  // size
  if (lhs->size != rhs->size) {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__String__copy(
  const deva_common_msgs__msg__String * input,
  deva_common_msgs__msg__String * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  for (size_t i = 0; i < 32; ++i) {
    output->data[i] = input->data[i];
  }
  // size
  output->size = input->size;
  return true;
}

deva_common_msgs__msg__String *
deva_common_msgs__msg__String__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__String * msg = (deva_common_msgs__msg__String *)allocator.allocate(sizeof(deva_common_msgs__msg__String), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__String));
  bool success = deva_common_msgs__msg__String__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__String__destroy(deva_common_msgs__msg__String * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__String__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__String__Sequence__init(deva_common_msgs__msg__String__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__String * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__String *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__String), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__String__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__String__fini(&data[i - 1]);
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
deva_common_msgs__msg__String__Sequence__fini(deva_common_msgs__msg__String__Sequence * array)
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
      deva_common_msgs__msg__String__fini(&array->data[i]);
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

deva_common_msgs__msg__String__Sequence *
deva_common_msgs__msg__String__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__String__Sequence * array = (deva_common_msgs__msg__String__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__String__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__String__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__String__Sequence__destroy(deva_common_msgs__msg__String__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__String__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__String__Sequence__are_equal(const deva_common_msgs__msg__String__Sequence * lhs, const deva_common_msgs__msg__String__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__String__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__String__Sequence__copy(
  const deva_common_msgs__msg__String__Sequence * input,
  deva_common_msgs__msg__String__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__String);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__String * data =
      (deva_common_msgs__msg__String *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__String__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__String__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__String__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
