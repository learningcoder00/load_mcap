// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Coordinate.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__Coordinate__init(deva_gaode_routing_msgs__msg__Coordinate * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // relative_z
  return true;
}

void
deva_gaode_routing_msgs__msg__Coordinate__fini(deva_gaode_routing_msgs__msg__Coordinate * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // relative_z
}

bool
deva_gaode_routing_msgs__msg__Coordinate__are_equal(const deva_gaode_routing_msgs__msg__Coordinate * lhs, const deva_gaode_routing_msgs__msg__Coordinate * rhs)
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
  // relative_z
  if (lhs->relative_z != rhs->relative_z) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Coordinate__copy(
  const deva_gaode_routing_msgs__msg__Coordinate * input,
  deva_gaode_routing_msgs__msg__Coordinate * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // relative_z
  output->relative_z = input->relative_z;
  return true;
}

deva_gaode_routing_msgs__msg__Coordinate *
deva_gaode_routing_msgs__msg__Coordinate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Coordinate * msg = (deva_gaode_routing_msgs__msg__Coordinate *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Coordinate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Coordinate));
  bool success = deva_gaode_routing_msgs__msg__Coordinate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Coordinate__destroy(deva_gaode_routing_msgs__msg__Coordinate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Coordinate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(deva_gaode_routing_msgs__msg__Coordinate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Coordinate * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Coordinate *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Coordinate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Coordinate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Coordinate__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(deva_gaode_routing_msgs__msg__Coordinate__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Coordinate__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Coordinate__Sequence *
deva_gaode_routing_msgs__msg__Coordinate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * array = (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Coordinate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Coordinate__Sequence__destroy(deva_gaode_routing_msgs__msg__Coordinate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Coordinate__Sequence * lhs, const deva_gaode_routing_msgs__msg__Coordinate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * input,
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Coordinate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Coordinate * data =
      (deva_gaode_routing_msgs__msg__Coordinate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Coordinate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Coordinate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
