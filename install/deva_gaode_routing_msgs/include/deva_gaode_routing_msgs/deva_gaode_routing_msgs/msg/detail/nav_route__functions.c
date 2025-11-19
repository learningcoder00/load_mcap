// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/nav_route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `route_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__NavRoute__init(deva_gaode_routing_msgs__msg__NavRoute * msg)
{
  if (!msg) {
    return false;
  }
  // route_list
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->route_list, 0)) {
    deva_gaode_routing_msgs__msg__NavRoute__fini(msg);
    return false;
  }
  // navi_status
  // match_status
  // remain_distance
  return true;
}

void
deva_gaode_routing_msgs__msg__NavRoute__fini(deva_gaode_routing_msgs__msg__NavRoute * msg)
{
  if (!msg) {
    return;
  }
  // route_list
  rosidl_runtime_c__uint64__Sequence__fini(&msg->route_list);
  // navi_status
  // match_status
  // remain_distance
}

bool
deva_gaode_routing_msgs__msg__NavRoute__are_equal(const deva_gaode_routing_msgs__msg__NavRoute * lhs, const deva_gaode_routing_msgs__msg__NavRoute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // route_list
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->route_list), &(rhs->route_list)))
  {
    return false;
  }
  // navi_status
  if (lhs->navi_status != rhs->navi_status) {
    return false;
  }
  // match_status
  if (lhs->match_status != rhs->match_status) {
    return false;
  }
  // remain_distance
  if (lhs->remain_distance != rhs->remain_distance) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__NavRoute__copy(
  const deva_gaode_routing_msgs__msg__NavRoute * input,
  deva_gaode_routing_msgs__msg__NavRoute * output)
{
  if (!input || !output) {
    return false;
  }
  // route_list
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->route_list), &(output->route_list)))
  {
    return false;
  }
  // navi_status
  output->navi_status = input->navi_status;
  // match_status
  output->match_status = input->match_status;
  // remain_distance
  output->remain_distance = input->remain_distance;
  return true;
}

deva_gaode_routing_msgs__msg__NavRoute *
deva_gaode_routing_msgs__msg__NavRoute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__NavRoute * msg = (deva_gaode_routing_msgs__msg__NavRoute *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__NavRoute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__NavRoute));
  bool success = deva_gaode_routing_msgs__msg__NavRoute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__NavRoute__destroy(deva_gaode_routing_msgs__msg__NavRoute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__NavRoute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__NavRoute__Sequence__init(deva_gaode_routing_msgs__msg__NavRoute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__NavRoute * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__NavRoute *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__NavRoute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__NavRoute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__NavRoute__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__NavRoute__Sequence__fini(deva_gaode_routing_msgs__msg__NavRoute__Sequence * array)
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
      deva_gaode_routing_msgs__msg__NavRoute__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__NavRoute__Sequence *
deva_gaode_routing_msgs__msg__NavRoute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__NavRoute__Sequence * array = (deva_gaode_routing_msgs__msg__NavRoute__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__NavRoute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__NavRoute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__NavRoute__Sequence__destroy(deva_gaode_routing_msgs__msg__NavRoute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__NavRoute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__NavRoute__Sequence__are_equal(const deva_gaode_routing_msgs__msg__NavRoute__Sequence * lhs, const deva_gaode_routing_msgs__msg__NavRoute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__NavRoute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__NavRoute__Sequence__copy(
  const deva_gaode_routing_msgs__msg__NavRoute__Sequence * input,
  deva_gaode_routing_msgs__msg__NavRoute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__NavRoute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__NavRoute * data =
      (deva_gaode_routing_msgs__msg__NavRoute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__NavRoute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__NavRoute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__NavRoute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
