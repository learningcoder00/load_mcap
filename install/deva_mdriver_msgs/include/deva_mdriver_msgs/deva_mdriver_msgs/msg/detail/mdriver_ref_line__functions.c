// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/MdriverRefLine.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_mdriver_msgs__msg__MdriverRefLine__init(deva_mdriver_msgs__msg__MdriverRefLine * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    deva_mdriver_msgs__msg__MdriverRefLine__fini(msg);
    return false;
  }
  // meta_action
  // score
  return true;
}

void
deva_mdriver_msgs__msg__MdriverRefLine__fini(deva_mdriver_msgs__msg__MdriverRefLine * msg)
{
  if (!msg) {
    return;
  }
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // meta_action
  // score
}

bool
deva_mdriver_msgs__msg__MdriverRefLine__are_equal(const deva_mdriver_msgs__msg__MdriverRefLine * lhs, const deva_mdriver_msgs__msg__MdriverRefLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // meta_action
  if (lhs->meta_action != rhs->meta_action) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MdriverRefLine__copy(
  const deva_mdriver_msgs__msg__MdriverRefLine * input,
  deva_mdriver_msgs__msg__MdriverRefLine * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // meta_action
  output->meta_action = input->meta_action;
  // score
  output->score = input->score;
  return true;
}

deva_mdriver_msgs__msg__MdriverRefLine *
deva_mdriver_msgs__msg__MdriverRefLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverRefLine * msg = (deva_mdriver_msgs__msg__MdriverRefLine *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MdriverRefLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__MdriverRefLine));
  bool success = deva_mdriver_msgs__msg__MdriverRefLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__MdriverRefLine__destroy(deva_mdriver_msgs__msg__MdriverRefLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__MdriverRefLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__init(deva_mdriver_msgs__msg__MdriverRefLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverRefLine * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__MdriverRefLine *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__MdriverRefLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__MdriverRefLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__MdriverRefLine__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__fini(deva_mdriver_msgs__msg__MdriverRefLine__Sequence * array)
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
      deva_mdriver_msgs__msg__MdriverRefLine__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__MdriverRefLine__Sequence *
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MdriverRefLine__Sequence * array = (deva_mdriver_msgs__msg__MdriverRefLine__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MdriverRefLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__MdriverRefLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__destroy(deva_mdriver_msgs__msg__MdriverRefLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__MdriverRefLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__are_equal(const deva_mdriver_msgs__msg__MdriverRefLine__Sequence * lhs, const deva_mdriver_msgs__msg__MdriverRefLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__MdriverRefLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MdriverRefLine__Sequence__copy(
  const deva_mdriver_msgs__msg__MdriverRefLine__Sequence * input,
  deva_mdriver_msgs__msg__MdriverRefLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__MdriverRefLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__MdriverRefLine * data =
      (deva_mdriver_msgs__msg__MdriverRefLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__MdriverRefLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__MdriverRefLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__MdriverRefLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
