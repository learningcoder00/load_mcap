// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RGRedLightResult.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pos`
#include "deva_gaode_routing_msgs/msg/detail/route_pos__functions.h"

bool
deva_gaode_routing_msgs__msg__RGRedLightResult__init(deva_gaode_routing_msgs__msg__RGRedLightResult * msg)
{
  if (!msg) {
    return false;
  }
  // raw_link_id
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__init(&msg->pos)) {
    deva_gaode_routing_msgs__msg__RGRedLightResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__RGRedLightResult__fini(deva_gaode_routing_msgs__msg__RGRedLightResult * msg)
{
  if (!msg) {
    return;
  }
  // raw_link_id
  // pos
  deva_gaode_routing_msgs__msg__RoutePos__fini(&msg->pos);
}

bool
deva_gaode_routing_msgs__msg__RGRedLightResult__are_equal(const deva_gaode_routing_msgs__msg__RGRedLightResult * lhs, const deva_gaode_routing_msgs__msg__RGRedLightResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // raw_link_id
  if (lhs->raw_link_id != rhs->raw_link_id) {
    return false;
  }
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__are_equal(
      &(lhs->pos), &(rhs->pos)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGRedLightResult__copy(
  const deva_gaode_routing_msgs__msg__RGRedLightResult * input,
  deva_gaode_routing_msgs__msg__RGRedLightResult * output)
{
  if (!input || !output) {
    return false;
  }
  // raw_link_id
  output->raw_link_id = input->raw_link_id;
  // pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__copy(
      &(input->pos), &(output->pos)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__RGRedLightResult *
deva_gaode_routing_msgs__msg__RGRedLightResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGRedLightResult * msg = (deva_gaode_routing_msgs__msg__RGRedLightResult *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGRedLightResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RGRedLightResult));
  bool success = deva_gaode_routing_msgs__msg__RGRedLightResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RGRedLightResult__destroy(deva_gaode_routing_msgs__msg__RGRedLightResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RGRedLightResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__init(deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGRedLightResult * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RGRedLightResult *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RGRedLightResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RGRedLightResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RGRedLightResult__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__fini(deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RGRedLightResult__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * array = (deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__destroy(deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * lhs, const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGRedLightResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * input,
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RGRedLightResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RGRedLightResult * data =
      (deva_gaode_routing_msgs__msg__RGRedLightResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RGRedLightResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RGRedLightResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGRedLightResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
