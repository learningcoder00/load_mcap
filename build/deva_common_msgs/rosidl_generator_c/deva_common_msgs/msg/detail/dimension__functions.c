// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/Dimension.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/dimension__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_common_msgs__msg__Dimension__init(deva_common_msgs__msg__Dimension * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // width
  // height
  return true;
}

void
deva_common_msgs__msg__Dimension__fini(deva_common_msgs__msg__Dimension * msg)
{
  if (!msg) {
    return;
  }
  // length
  // width
  // height
}

bool
deva_common_msgs__msg__Dimension__are_equal(const deva_common_msgs__msg__Dimension * lhs, const deva_common_msgs__msg__Dimension * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__Dimension__copy(
  const deva_common_msgs__msg__Dimension * input,
  deva_common_msgs__msg__Dimension * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  return true;
}

deva_common_msgs__msg__Dimension *
deva_common_msgs__msg__Dimension__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Dimension * msg = (deva_common_msgs__msg__Dimension *)allocator.allocate(sizeof(deva_common_msgs__msg__Dimension), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__Dimension));
  bool success = deva_common_msgs__msg__Dimension__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__Dimension__destroy(deva_common_msgs__msg__Dimension * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__Dimension__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__Dimension__Sequence__init(deva_common_msgs__msg__Dimension__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Dimension * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__Dimension *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__Dimension), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__Dimension__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__Dimension__fini(&data[i - 1]);
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
deva_common_msgs__msg__Dimension__Sequence__fini(deva_common_msgs__msg__Dimension__Sequence * array)
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
      deva_common_msgs__msg__Dimension__fini(&array->data[i]);
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

deva_common_msgs__msg__Dimension__Sequence *
deva_common_msgs__msg__Dimension__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__Dimension__Sequence * array = (deva_common_msgs__msg__Dimension__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__Dimension__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__Dimension__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__Dimension__Sequence__destroy(deva_common_msgs__msg__Dimension__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__Dimension__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__Dimension__Sequence__are_equal(const deva_common_msgs__msg__Dimension__Sequence * lhs, const deva_common_msgs__msg__Dimension__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__Dimension__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__Dimension__Sequence__copy(
  const deva_common_msgs__msg__Dimension__Sequence * input,
  deva_common_msgs__msg__Dimension__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__Dimension);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__Dimension * data =
      (deva_common_msgs__msg__Dimension *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__Dimension__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__Dimension__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__Dimension__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
