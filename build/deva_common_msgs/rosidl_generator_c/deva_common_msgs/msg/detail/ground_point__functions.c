// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/GroundPoint.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/ground_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_common_msgs__msg__GroundPoint__init(deva_common_msgs__msg__GroundPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // confidence
  return true;
}

void
deva_common_msgs__msg__GroundPoint__fini(deva_common_msgs__msg__GroundPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // confidence
}

bool
deva_common_msgs__msg__GroundPoint__are_equal(const deva_common_msgs__msg__GroundPoint * lhs, const deva_common_msgs__msg__GroundPoint * rhs)
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
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__GroundPoint__copy(
  const deva_common_msgs__msg__GroundPoint * input,
  deva_common_msgs__msg__GroundPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // confidence
  output->confidence = input->confidence;
  return true;
}

deva_common_msgs__msg__GroundPoint *
deva_common_msgs__msg__GroundPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__GroundPoint * msg = (deva_common_msgs__msg__GroundPoint *)allocator.allocate(sizeof(deva_common_msgs__msg__GroundPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__GroundPoint));
  bool success = deva_common_msgs__msg__GroundPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__GroundPoint__destroy(deva_common_msgs__msg__GroundPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__GroundPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__GroundPoint__Sequence__init(deva_common_msgs__msg__GroundPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__GroundPoint * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__GroundPoint *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__GroundPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__GroundPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__GroundPoint__fini(&data[i - 1]);
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
deva_common_msgs__msg__GroundPoint__Sequence__fini(deva_common_msgs__msg__GroundPoint__Sequence * array)
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
      deva_common_msgs__msg__GroundPoint__fini(&array->data[i]);
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

deva_common_msgs__msg__GroundPoint__Sequence *
deva_common_msgs__msg__GroundPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__GroundPoint__Sequence * array = (deva_common_msgs__msg__GroundPoint__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__GroundPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__GroundPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__GroundPoint__Sequence__destroy(deva_common_msgs__msg__GroundPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__GroundPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__GroundPoint__Sequence__are_equal(const deva_common_msgs__msg__GroundPoint__Sequence * lhs, const deva_common_msgs__msg__GroundPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__GroundPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__GroundPoint__Sequence__copy(
  const deva_common_msgs__msg__GroundPoint__Sequence * input,
  deva_common_msgs__msg__GroundPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__GroundPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__GroundPoint * data =
      (deva_common_msgs__msg__GroundPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__GroundPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__GroundPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__GroundPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
