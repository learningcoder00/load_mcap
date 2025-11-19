// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__init(deva_gaode_routing_msgs__msg__LaneTrafficInfo * msg)
{
  if (!msg) {
    return false;
  }
  // is_bus
  // lane_type
  // arrow
  return true;
}

void
deva_gaode_routing_msgs__msg__LaneTrafficInfo__fini(deva_gaode_routing_msgs__msg__LaneTrafficInfo * msg)
{
  if (!msg) {
    return;
  }
  // is_bus
  // lane_type
  // arrow
}

bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__are_equal(const deva_gaode_routing_msgs__msg__LaneTrafficInfo * lhs, const deva_gaode_routing_msgs__msg__LaneTrafficInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // is_bus
  if (lhs->is_bus != rhs->is_bus) {
    return false;
  }
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // arrow
  if (lhs->arrow != rhs->arrow) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__copy(
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo * input,
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // is_bus
  output->is_bus = input->is_bus;
  // lane_type
  output->lane_type = input->lane_type;
  // arrow
  output->arrow = input->arrow;
  return true;
}

deva_gaode_routing_msgs__msg__LaneTrafficInfo *
deva_gaode_routing_msgs__msg__LaneTrafficInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * msg = (deva_gaode_routing_msgs__msg__LaneTrafficInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneTrafficInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LaneTrafficInfo));
  bool success = deva_gaode_routing_msgs__msg__LaneTrafficInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LaneTrafficInfo__destroy(deva_gaode_routing_msgs__msg__LaneTrafficInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LaneTrafficInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__init(deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LaneTrafficInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LaneTrafficInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LaneTrafficInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LaneTrafficInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__fini(deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LaneTrafficInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * array = (deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LaneTrafficInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LaneTrafficInfo * data =
      (deva_gaode_routing_msgs__msg__LaneTrafficInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LaneTrafficInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneTrafficInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
