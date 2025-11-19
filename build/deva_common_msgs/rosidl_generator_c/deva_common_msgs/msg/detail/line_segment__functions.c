// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_common_msgs:msg/LineSegment.idl
// generated code does not contain a copyright notice
#include "deva_common_msgs/msg/detail/line_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start`
// Member `end`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_common_msgs__msg__LineSegment__init(deva_common_msgs__msg__LineSegment * msg)
{
  if (!msg) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__init(&msg->start)) {
    deva_common_msgs__msg__LineSegment__fini(msg);
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__init(&msg->end)) {
    deva_common_msgs__msg__LineSegment__fini(msg);
    return false;
  }
  return true;
}

void
deva_common_msgs__msg__LineSegment__fini(deva_common_msgs__msg__LineSegment * msg)
{
  if (!msg) {
    return;
  }
  // start
  geometry_msgs__msg__Point__fini(&msg->start);
  // end
  geometry_msgs__msg__Point__fini(&msg->end);
}

bool
deva_common_msgs__msg__LineSegment__are_equal(const deva_common_msgs__msg__LineSegment * lhs, const deva_common_msgs__msg__LineSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  return true;
}

bool
deva_common_msgs__msg__LineSegment__copy(
  const deva_common_msgs__msg__LineSegment * input,
  deva_common_msgs__msg__LineSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  return true;
}

deva_common_msgs__msg__LineSegment *
deva_common_msgs__msg__LineSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__LineSegment * msg = (deva_common_msgs__msg__LineSegment *)allocator.allocate(sizeof(deva_common_msgs__msg__LineSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_common_msgs__msg__LineSegment));
  bool success = deva_common_msgs__msg__LineSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_common_msgs__msg__LineSegment__destroy(deva_common_msgs__msg__LineSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_common_msgs__msg__LineSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_common_msgs__msg__LineSegment__Sequence__init(deva_common_msgs__msg__LineSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__LineSegment * data = NULL;

  if (size) {
    data = (deva_common_msgs__msg__LineSegment *)allocator.zero_allocate(size, sizeof(deva_common_msgs__msg__LineSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_common_msgs__msg__LineSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_common_msgs__msg__LineSegment__fini(&data[i - 1]);
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
deva_common_msgs__msg__LineSegment__Sequence__fini(deva_common_msgs__msg__LineSegment__Sequence * array)
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
      deva_common_msgs__msg__LineSegment__fini(&array->data[i]);
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

deva_common_msgs__msg__LineSegment__Sequence *
deva_common_msgs__msg__LineSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_common_msgs__msg__LineSegment__Sequence * array = (deva_common_msgs__msg__LineSegment__Sequence *)allocator.allocate(sizeof(deva_common_msgs__msg__LineSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_common_msgs__msg__LineSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_common_msgs__msg__LineSegment__Sequence__destroy(deva_common_msgs__msg__LineSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_common_msgs__msg__LineSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_common_msgs__msg__LineSegment__Sequence__are_equal(const deva_common_msgs__msg__LineSegment__Sequence * lhs, const deva_common_msgs__msg__LineSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_common_msgs__msg__LineSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_common_msgs__msg__LineSegment__Sequence__copy(
  const deva_common_msgs__msg__LineSegment__Sequence * input,
  deva_common_msgs__msg__LineSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_common_msgs__msg__LineSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_common_msgs__msg__LineSegment * data =
      (deva_common_msgs__msg__LineSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_common_msgs__msg__LineSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_common_msgs__msg__LineSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_common_msgs__msg__LineSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
