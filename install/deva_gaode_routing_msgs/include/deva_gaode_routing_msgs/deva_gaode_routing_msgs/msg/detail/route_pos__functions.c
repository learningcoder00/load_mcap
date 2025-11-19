// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RoutePos.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/route_pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__RoutePos__init(deva_gaode_routing_msgs__msg__RoutePos * msg)
{
  if (!msg) {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->pos)) {
    deva_gaode_routing_msgs__msg__RoutePos__fini(msg);
    return false;
  }
  // coor_start
  // offset_length
  // link_offset
  return true;
}

void
deva_gaode_routing_msgs__msg__RoutePos__fini(deva_gaode_routing_msgs__msg__RoutePos * msg)
{
  if (!msg) {
    return;
  }
  // pos
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->pos);
  // coor_start
  // offset_length
  // link_offset
}

bool
deva_gaode_routing_msgs__msg__RoutePos__are_equal(const deva_gaode_routing_msgs__msg__RoutePos * lhs, const deva_gaode_routing_msgs__msg__RoutePos * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  // coor_start
  if (lhs->coor_start != rhs->coor_start) {
    return false;
  }
  // offset_length
  if (lhs->offset_length != rhs->offset_length) {
    return false;
  }
  // link_offset
  if (lhs->link_offset != rhs->link_offset) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RoutePos__copy(
  const deva_gaode_routing_msgs__msg__RoutePos * input,
  deva_gaode_routing_msgs__msg__RoutePos * output)
{
  if (!input || !output) {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  // coor_start
  output->coor_start = input->coor_start;
  // offset_length
  output->offset_length = input->offset_length;
  // link_offset
  output->link_offset = input->link_offset;
  return true;
}

deva_gaode_routing_msgs__msg__RoutePos *
deva_gaode_routing_msgs__msg__RoutePos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutePos * msg = (deva_gaode_routing_msgs__msg__RoutePos *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RoutePos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RoutePos));
  bool success = deva_gaode_routing_msgs__msg__RoutePos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RoutePos__destroy(deva_gaode_routing_msgs__msg__RoutePos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RoutePos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RoutePos__Sequence__init(deva_gaode_routing_msgs__msg__RoutePos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutePos * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RoutePos *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RoutePos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RoutePos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RoutePos__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RoutePos__Sequence__fini(deva_gaode_routing_msgs__msg__RoutePos__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RoutePos__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RoutePos__Sequence *
deva_gaode_routing_msgs__msg__RoutePos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RoutePos__Sequence * array = (deva_gaode_routing_msgs__msg__RoutePos__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RoutePos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RoutePos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RoutePos__Sequence__destroy(deva_gaode_routing_msgs__msg__RoutePos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RoutePos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RoutePos__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RoutePos__Sequence * lhs, const deva_gaode_routing_msgs__msg__RoutePos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RoutePos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RoutePos__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RoutePos__Sequence * input,
  deva_gaode_routing_msgs__msg__RoutePos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RoutePos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RoutePos * data =
      (deva_gaode_routing_msgs__msg__RoutePos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RoutePos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RoutePos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RoutePos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
