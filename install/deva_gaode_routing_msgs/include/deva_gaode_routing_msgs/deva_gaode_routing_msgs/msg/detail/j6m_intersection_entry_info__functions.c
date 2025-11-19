// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersectionEntryInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `crowd_sourcing_link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `position`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__init(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * msg)
{
  if (!msg) {
    return false;
  }
  // crowd_sourcing_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->crowd_sourcing_link_id)) {
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(msg);
    return false;
  }
  // offset
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->position)) {
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * msg)
{
  if (!msg) {
    return;
  }
  // crowd_sourcing_link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->crowd_sourcing_link_id);
  // offset
  // position
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->position);
}

bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__are_equal(const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * lhs, const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // crowd_sourcing_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->crowd_sourcing_link_id), &(rhs->crowd_sourcing_link_id)))
  {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__copy(
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * input,
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // crowd_sourcing_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->crowd_sourcing_link_id), &(output->crowd_sourcing_link_id)))
  {
    return false;
  }
  // offset
  output->offset = input->offset;
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * msg = (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo));
  bool success = deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__destroy(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__init(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__fini(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * array = (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * data =
      (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
