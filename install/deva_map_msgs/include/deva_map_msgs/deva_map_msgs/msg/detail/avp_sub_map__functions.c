// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_sub_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `avp_sub_lanes`
#include "deva_map_msgs/msg/detail/avp_sub_lane__functions.h"

bool
deva_map_msgs__msg__AvpSubMap__init(deva_map_msgs__msg__AvpSubMap * msg)
{
  if (!msg) {
    return false;
  }
  // avp_sub_lanes
  if (!deva_map_msgs__msg__AvpSubLane__Sequence__init(&msg->avp_sub_lanes, 0)) {
    deva_map_msgs__msg__AvpSubMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__AvpSubMap__fini(deva_map_msgs__msg__AvpSubMap * msg)
{
  if (!msg) {
    return;
  }
  // avp_sub_lanes
  deva_map_msgs__msg__AvpSubLane__Sequence__fini(&msg->avp_sub_lanes);
}

bool
deva_map_msgs__msg__AvpSubMap__are_equal(const deva_map_msgs__msg__AvpSubMap * lhs, const deva_map_msgs__msg__AvpSubMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // avp_sub_lanes
  if (!deva_map_msgs__msg__AvpSubLane__Sequence__are_equal(
      &(lhs->avp_sub_lanes), &(rhs->avp_sub_lanes)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__AvpSubMap__copy(
  const deva_map_msgs__msg__AvpSubMap * input,
  deva_map_msgs__msg__AvpSubMap * output)
{
  if (!input || !output) {
    return false;
  }
  // avp_sub_lanes
  if (!deva_map_msgs__msg__AvpSubLane__Sequence__copy(
      &(input->avp_sub_lanes), &(output->avp_sub_lanes)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__AvpSubMap *
deva_map_msgs__msg__AvpSubMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubMap * msg = (deva_map_msgs__msg__AvpSubMap *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpSubMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__AvpSubMap));
  bool success = deva_map_msgs__msg__AvpSubMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__AvpSubMap__destroy(deva_map_msgs__msg__AvpSubMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__AvpSubMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__AvpSubMap__Sequence__init(deva_map_msgs__msg__AvpSubMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubMap * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__AvpSubMap *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__AvpSubMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__AvpSubMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__AvpSubMap__fini(&data[i - 1]);
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
deva_map_msgs__msg__AvpSubMap__Sequence__fini(deva_map_msgs__msg__AvpSubMap__Sequence * array)
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
      deva_map_msgs__msg__AvpSubMap__fini(&array->data[i]);
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

deva_map_msgs__msg__AvpSubMap__Sequence *
deva_map_msgs__msg__AvpSubMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubMap__Sequence * array = (deva_map_msgs__msg__AvpSubMap__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpSubMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__AvpSubMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__AvpSubMap__Sequence__destroy(deva_map_msgs__msg__AvpSubMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__AvpSubMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__AvpSubMap__Sequence__are_equal(const deva_map_msgs__msg__AvpSubMap__Sequence * lhs, const deva_map_msgs__msg__AvpSubMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__AvpSubMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__AvpSubMap__Sequence__copy(
  const deva_map_msgs__msg__AvpSubMap__Sequence * input,
  deva_map_msgs__msg__AvpSubMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__AvpSubMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__AvpSubMap * data =
      (deva_map_msgs__msg__AvpSubMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__AvpSubMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__AvpSubMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__AvpSubMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
