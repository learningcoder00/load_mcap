// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/CenterLinePoint.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/center_line_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_mdriver_msgs__msg__CenterLinePoint__init(deva_mdriver_msgs__msg__CenterLinePoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
deva_mdriver_msgs__msg__CenterLinePoint__fini(deva_mdriver_msgs__msg__CenterLinePoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
deva_mdriver_msgs__msg__CenterLinePoint__are_equal(const deva_mdriver_msgs__msg__CenterLinePoint * lhs, const deva_mdriver_msgs__msg__CenterLinePoint * rhs)
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__CenterLinePoint__copy(
  const deva_mdriver_msgs__msg__CenterLinePoint * input,
  deva_mdriver_msgs__msg__CenterLinePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

deva_mdriver_msgs__msg__CenterLinePoint *
deva_mdriver_msgs__msg__CenterLinePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLinePoint * msg = (deva_mdriver_msgs__msg__CenterLinePoint *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__CenterLinePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__CenterLinePoint));
  bool success = deva_mdriver_msgs__msg__CenterLinePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__CenterLinePoint__destroy(deva_mdriver_msgs__msg__CenterLinePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__CenterLinePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__init(deva_mdriver_msgs__msg__CenterLinePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLinePoint * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__CenterLinePoint *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__CenterLinePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__CenterLinePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__CenterLinePoint__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__fini(deva_mdriver_msgs__msg__CenterLinePoint__Sequence * array)
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
      deva_mdriver_msgs__msg__CenterLinePoint__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__CenterLinePoint__Sequence *
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence * array = (deva_mdriver_msgs__msg__CenterLinePoint__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__CenterLinePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__CenterLinePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__destroy(deva_mdriver_msgs__msg__CenterLinePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__CenterLinePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__are_equal(const deva_mdriver_msgs__msg__CenterLinePoint__Sequence * lhs, const deva_mdriver_msgs__msg__CenterLinePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__CenterLinePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__CenterLinePoint__Sequence__copy(
  const deva_mdriver_msgs__msg__CenterLinePoint__Sequence * input,
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__CenterLinePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__CenterLinePoint * data =
      (deva_mdriver_msgs__msg__CenterLinePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__CenterLinePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__CenterLinePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__CenterLinePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
