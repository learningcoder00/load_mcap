// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `global_coords`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// Member `global_steps`
#include "deva_gaode_routing_msgs/msg/detail/web_step__functions.h"

bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__init(deva_gaode_routing_msgs__msg__GlobalPathMsg * msg)
{
  if (!msg) {
    return false;
  }
  // global_coords
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&msg->global_coords, 0)) {
    deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(msg);
    return false;
  }
  // global_steps
  if (!deva_gaode_routing_msgs__msg__WebStep__Sequence__init(&msg->global_steps, 0)) {
    deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(deva_gaode_routing_msgs__msg__GlobalPathMsg * msg)
{
  if (!msg) {
    return;
  }
  // global_coords
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(&msg->global_coords);
  // global_steps
  deva_gaode_routing_msgs__msg__WebStep__Sequence__fini(&msg->global_steps);
}

bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__are_equal(const deva_gaode_routing_msgs__msg__GlobalPathMsg * lhs, const deva_gaode_routing_msgs__msg__GlobalPathMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // global_coords
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__are_equal(
      &(lhs->global_coords), &(rhs->global_coords)))
  {
    return false;
  }
  // global_steps
  if (!deva_gaode_routing_msgs__msg__WebStep__Sequence__are_equal(
      &(lhs->global_steps), &(rhs->global_steps)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__copy(
  const deva_gaode_routing_msgs__msg__GlobalPathMsg * input,
  deva_gaode_routing_msgs__msg__GlobalPathMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // global_coords
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__copy(
      &(input->global_coords), &(output->global_coords)))
  {
    return false;
  }
  // global_steps
  if (!deva_gaode_routing_msgs__msg__WebStep__Sequence__copy(
      &(input->global_steps), &(output->global_steps)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__GlobalPathMsg *
deva_gaode_routing_msgs__msg__GlobalPathMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalPathMsg * msg = (deva_gaode_routing_msgs__msg__GlobalPathMsg *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__GlobalPathMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__GlobalPathMsg));
  bool success = deva_gaode_routing_msgs__msg__GlobalPathMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__GlobalPathMsg__destroy(deva_gaode_routing_msgs__msg__GlobalPathMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__init(deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalPathMsg * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__GlobalPathMsg *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__GlobalPathMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__GlobalPathMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__fini(deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * array)
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
      deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence *
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * array = (deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__destroy(deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__are_equal(const deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * lhs, const deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence__copy(
  const deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * input,
  deva_gaode_routing_msgs__msg__GlobalPathMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__GlobalPathMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__GlobalPathMsg * data =
      (deva_gaode_routing_msgs__msg__GlobalPathMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
