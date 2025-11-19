// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Topology.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/topology__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `next_id_s`
// Member `previous_id_s`
// Member `next_within_intersection`
// Member `previous_within_intersection`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__Topology__init(deva_gaode_routing_msgs__msg__Topology * msg)
{
  if (!msg) {
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->next_id_s, 0)) {
    deva_gaode_routing_msgs__msg__Topology__fini(msg);
    return false;
  }
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->previous_id_s, 0)) {
    deva_gaode_routing_msgs__msg__Topology__fini(msg);
    return false;
  }
  // next_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->next_within_intersection, 0)) {
    deva_gaode_routing_msgs__msg__Topology__fini(msg);
    return false;
  }
  // previous_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->previous_within_intersection, 0)) {
    deva_gaode_routing_msgs__msg__Topology__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Topology__fini(deva_gaode_routing_msgs__msg__Topology * msg)
{
  if (!msg) {
    return;
  }
  // next_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->next_id_s);
  // previous_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->previous_id_s);
  // next_within_intersection
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->next_within_intersection);
  // previous_within_intersection
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->previous_within_intersection);
}

bool
deva_gaode_routing_msgs__msg__Topology__are_equal(const deva_gaode_routing_msgs__msg__Topology * lhs, const deva_gaode_routing_msgs__msg__Topology * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->next_id_s), &(rhs->next_id_s)))
  {
    return false;
  }
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->previous_id_s), &(rhs->previous_id_s)))
  {
    return false;
  }
  // next_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->next_within_intersection), &(rhs->next_within_intersection)))
  {
    return false;
  }
  // previous_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->previous_within_intersection), &(rhs->previous_within_intersection)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Topology__copy(
  const deva_gaode_routing_msgs__msg__Topology * input,
  deva_gaode_routing_msgs__msg__Topology * output)
{
  if (!input || !output) {
    return false;
  }
  // next_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->next_id_s), &(output->next_id_s)))
  {
    return false;
  }
  // previous_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->previous_id_s), &(output->previous_id_s)))
  {
    return false;
  }
  // next_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->next_within_intersection), &(output->next_within_intersection)))
  {
    return false;
  }
  // previous_within_intersection
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->previous_within_intersection), &(output->previous_within_intersection)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Topology *
deva_gaode_routing_msgs__msg__Topology__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Topology * msg = (deva_gaode_routing_msgs__msg__Topology *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Topology), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Topology));
  bool success = deva_gaode_routing_msgs__msg__Topology__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Topology__destroy(deva_gaode_routing_msgs__msg__Topology * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Topology__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Topology__Sequence__init(deva_gaode_routing_msgs__msg__Topology__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Topology * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Topology *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Topology), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Topology__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Topology__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Topology__Sequence__fini(deva_gaode_routing_msgs__msg__Topology__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Topology__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Topology__Sequence *
deva_gaode_routing_msgs__msg__Topology__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Topology__Sequence * array = (deva_gaode_routing_msgs__msg__Topology__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Topology__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Topology__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Topology__Sequence__destroy(deva_gaode_routing_msgs__msg__Topology__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Topology__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Topology__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Topology__Sequence * lhs, const deva_gaode_routing_msgs__msg__Topology__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Topology__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Topology__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Topology__Sequence * input,
  deva_gaode_routing_msgs__msg__Topology__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Topology);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Topology * data =
      (deva_gaode_routing_msgs__msg__Topology *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Topology__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Topology__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Topology__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
