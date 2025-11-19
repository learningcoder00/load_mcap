// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/PositionMatchLink.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `links`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__PositionMatchLink__init(deva_gaode_routing_msgs__msg__PositionMatchLink * msg)
{
  if (!msg) {
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->links, 0)) {
    deva_gaode_routing_msgs__msg__PositionMatchLink__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__PositionMatchLink__fini(deva_gaode_routing_msgs__msg__PositionMatchLink * msg)
{
  if (!msg) {
    return;
  }
  // links
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->links);
}

bool
deva_gaode_routing_msgs__msg__PositionMatchLink__are_equal(const deva_gaode_routing_msgs__msg__PositionMatchLink * lhs, const deva_gaode_routing_msgs__msg__PositionMatchLink * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__PositionMatchLink__copy(
  const deva_gaode_routing_msgs__msg__PositionMatchLink * input,
  deva_gaode_routing_msgs__msg__PositionMatchLink * output)
{
  if (!input || !output) {
    return false;
  }
  // links
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__PositionMatchLink *
deva_gaode_routing_msgs__msg__PositionMatchLink__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__PositionMatchLink * msg = (deva_gaode_routing_msgs__msg__PositionMatchLink *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__PositionMatchLink), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__PositionMatchLink));
  bool success = deva_gaode_routing_msgs__msg__PositionMatchLink__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__PositionMatchLink__destroy(deva_gaode_routing_msgs__msg__PositionMatchLink * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__PositionMatchLink__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__init(deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__PositionMatchLink * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__PositionMatchLink *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__PositionMatchLink), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__PositionMatchLink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__PositionMatchLink__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__fini(deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * array)
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
      deva_gaode_routing_msgs__msg__PositionMatchLink__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence *
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * array = (deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__destroy(deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__are_equal(const deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * lhs, const deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__PositionMatchLink__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence__copy(
  const deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * input,
  deva_gaode_routing_msgs__msg__PositionMatchLink__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__PositionMatchLink);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__PositionMatchLink * data =
      (deva_gaode_routing_msgs__msg__PositionMatchLink *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__PositionMatchLink__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__PositionMatchLink__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__PositionMatchLink__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
