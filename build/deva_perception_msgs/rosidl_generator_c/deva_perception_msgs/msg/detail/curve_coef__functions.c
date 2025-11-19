// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/CurveCoef.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/curve_coef__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__CurveCoef__init(deva_perception_msgs__msg__CurveCoef * msg)
{
  if (!msg) {
    return false;
  }
  // c0
  // c1
  // c2
  // c3
  // startpoint
  // endpoint
  return true;
}

void
deva_perception_msgs__msg__CurveCoef__fini(deva_perception_msgs__msg__CurveCoef * msg)
{
  if (!msg) {
    return;
  }
  // c0
  // c1
  // c2
  // c3
  // startpoint
  // endpoint
}

bool
deva_perception_msgs__msg__CurveCoef__are_equal(const deva_perception_msgs__msg__CurveCoef * lhs, const deva_perception_msgs__msg__CurveCoef * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // c0
  if (lhs->c0 != rhs->c0) {
    return false;
  }
  // c1
  if (lhs->c1 != rhs->c1) {
    return false;
  }
  // c2
  if (lhs->c2 != rhs->c2) {
    return false;
  }
  // c3
  if (lhs->c3 != rhs->c3) {
    return false;
  }
  // startpoint
  if (lhs->startpoint != rhs->startpoint) {
    return false;
  }
  // endpoint
  if (lhs->endpoint != rhs->endpoint) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__CurveCoef__copy(
  const deva_perception_msgs__msg__CurveCoef * input,
  deva_perception_msgs__msg__CurveCoef * output)
{
  if (!input || !output) {
    return false;
  }
  // c0
  output->c0 = input->c0;
  // c1
  output->c1 = input->c1;
  // c2
  output->c2 = input->c2;
  // c3
  output->c3 = input->c3;
  // startpoint
  output->startpoint = input->startpoint;
  // endpoint
  output->endpoint = input->endpoint;
  return true;
}

deva_perception_msgs__msg__CurveCoef *
deva_perception_msgs__msg__CurveCoef__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CurveCoef * msg = (deva_perception_msgs__msg__CurveCoef *)allocator.allocate(sizeof(deva_perception_msgs__msg__CurveCoef), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__CurveCoef));
  bool success = deva_perception_msgs__msg__CurveCoef__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__CurveCoef__destroy(deva_perception_msgs__msg__CurveCoef * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__CurveCoef__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__CurveCoef__Sequence__init(deva_perception_msgs__msg__CurveCoef__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CurveCoef * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__CurveCoef *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__CurveCoef), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__CurveCoef__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__CurveCoef__fini(&data[i - 1]);
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
deva_perception_msgs__msg__CurveCoef__Sequence__fini(deva_perception_msgs__msg__CurveCoef__Sequence * array)
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
      deva_perception_msgs__msg__CurveCoef__fini(&array->data[i]);
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

deva_perception_msgs__msg__CurveCoef__Sequence *
deva_perception_msgs__msg__CurveCoef__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CurveCoef__Sequence * array = (deva_perception_msgs__msg__CurveCoef__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__CurveCoef__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__CurveCoef__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__CurveCoef__Sequence__destroy(deva_perception_msgs__msg__CurveCoef__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__CurveCoef__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__CurveCoef__Sequence__are_equal(const deva_perception_msgs__msg__CurveCoef__Sequence * lhs, const deva_perception_msgs__msg__CurveCoef__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__CurveCoef__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__CurveCoef__Sequence__copy(
  const deva_perception_msgs__msg__CurveCoef__Sequence * input,
  deva_perception_msgs__msg__CurveCoef__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__CurveCoef);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__CurveCoef * data =
      (deva_perception_msgs__msg__CurveCoef *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__CurveCoef__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__CurveCoef__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__CurveCoef__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
