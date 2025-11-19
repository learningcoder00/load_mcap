// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/CrossPoint.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/cross_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `geom`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"

bool
deva_gaode_routing_msgs__msg__CrossPoint__init(deva_gaode_routing_msgs__msg__CrossPoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // geom
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->geom)) {
    deva_gaode_routing_msgs__msg__CrossPoint__fini(msg);
    return false;
  }
  // type
  // cross_id
  return true;
}

void
deva_gaode_routing_msgs__msg__CrossPoint__fini(deva_gaode_routing_msgs__msg__CrossPoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  // geom
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->geom);
  // type
  // cross_id
}

bool
deva_gaode_routing_msgs__msg__CrossPoint__are_equal(const deva_gaode_routing_msgs__msg__CrossPoint * lhs, const deva_gaode_routing_msgs__msg__CrossPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // geom
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->geom), &(rhs->geom)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // cross_id
  if (lhs->cross_id != rhs->cross_id) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__CrossPoint__copy(
  const deva_gaode_routing_msgs__msg__CrossPoint * input,
  deva_gaode_routing_msgs__msg__CrossPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // geom
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->geom), &(output->geom)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // cross_id
  output->cross_id = input->cross_id;
  return true;
}

deva_gaode_routing_msgs__msg__CrossPoint *
deva_gaode_routing_msgs__msg__CrossPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__CrossPoint * msg = (deva_gaode_routing_msgs__msg__CrossPoint *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__CrossPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__CrossPoint));
  bool success = deva_gaode_routing_msgs__msg__CrossPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__CrossPoint__destroy(deva_gaode_routing_msgs__msg__CrossPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__CrossPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__init(deva_gaode_routing_msgs__msg__CrossPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__CrossPoint * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__CrossPoint *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__CrossPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__CrossPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__CrossPoint__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__fini(deva_gaode_routing_msgs__msg__CrossPoint__Sequence * array)
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
      deva_gaode_routing_msgs__msg__CrossPoint__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__CrossPoint__Sequence *
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence * array = (deva_gaode_routing_msgs__msg__CrossPoint__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__CrossPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__CrossPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__destroy(deva_gaode_routing_msgs__msg__CrossPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__CrossPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__are_equal(const deva_gaode_routing_msgs__msg__CrossPoint__Sequence * lhs, const deva_gaode_routing_msgs__msg__CrossPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__CrossPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__CrossPoint__Sequence__copy(
  const deva_gaode_routing_msgs__msg__CrossPoint__Sequence * input,
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__CrossPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__CrossPoint * data =
      (deva_gaode_routing_msgs__msg__CrossPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__CrossPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__CrossPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__CrossPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
