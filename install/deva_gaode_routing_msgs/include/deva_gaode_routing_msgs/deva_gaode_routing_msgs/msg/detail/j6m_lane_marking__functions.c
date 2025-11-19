// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_marking_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `lane_marking_coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__init(deva_gaode_routing_msgs__msg__J6mLaneMarking * msg)
{
  if (!msg) {
    return false;
  }
  // lane_marking_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->lane_marking_id)) {
    deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(msg);
    return false;
  }
  // lane_marking_type
  // lane_marking_length
  // lane_marking_order_number
  // lane_marking_offset
  // lane_marking_color
  // lane_marking_confidence
  // lane_marking_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->lane_marking_coordinates, 0)) {
    deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(deva_gaode_routing_msgs__msg__J6mLaneMarking * msg)
{
  if (!msg) {
    return;
  }
  // lane_marking_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->lane_marking_id);
  // lane_marking_type
  // lane_marking_length
  // lane_marking_order_number
  // lane_marking_offset
  // lane_marking_color
  // lane_marking_confidence
  // lane_marking_coordinates
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->lane_marking_coordinates);
}

bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__are_equal(const deva_gaode_routing_msgs__msg__J6mLaneMarking * lhs, const deva_gaode_routing_msgs__msg__J6mLaneMarking * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_marking_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->lane_marking_id), &(rhs->lane_marking_id)))
  {
    return false;
  }
  // lane_marking_type
  if (lhs->lane_marking_type != rhs->lane_marking_type) {
    return false;
  }
  // lane_marking_length
  if (lhs->lane_marking_length != rhs->lane_marking_length) {
    return false;
  }
  // lane_marking_order_number
  if (lhs->lane_marking_order_number != rhs->lane_marking_order_number) {
    return false;
  }
  // lane_marking_offset
  if (lhs->lane_marking_offset != rhs->lane_marking_offset) {
    return false;
  }
  // lane_marking_color
  if (lhs->lane_marking_color != rhs->lane_marking_color) {
    return false;
  }
  // lane_marking_confidence
  if (lhs->lane_marking_confidence != rhs->lane_marking_confidence) {
    return false;
  }
  // lane_marking_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->lane_marking_coordinates), &(rhs->lane_marking_coordinates)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__copy(
  const deva_gaode_routing_msgs__msg__J6mLaneMarking * input,
  deva_gaode_routing_msgs__msg__J6mLaneMarking * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_marking_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->lane_marking_id), &(output->lane_marking_id)))
  {
    return false;
  }
  // lane_marking_type
  output->lane_marking_type = input->lane_marking_type;
  // lane_marking_length
  output->lane_marking_length = input->lane_marking_length;
  // lane_marking_order_number
  output->lane_marking_order_number = input->lane_marking_order_number;
  // lane_marking_offset
  output->lane_marking_offset = input->lane_marking_offset;
  // lane_marking_color
  output->lane_marking_color = input->lane_marking_color;
  // lane_marking_confidence
  output->lane_marking_confidence = input->lane_marking_confidence;
  // lane_marking_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->lane_marking_coordinates), &(output->lane_marking_coordinates)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mLaneMarking *
deva_gaode_routing_msgs__msg__J6mLaneMarking__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLaneMarking * msg = (deva_gaode_routing_msgs__msg__J6mLaneMarking *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking));
  bool success = deva_gaode_routing_msgs__msg__J6mLaneMarking__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mLaneMarking__destroy(deva_gaode_routing_msgs__msg__J6mLaneMarking * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__init(deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLaneMarking * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mLaneMarking *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mLaneMarking__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__fini(deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * array = (deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mLaneMarking * data =
      (deva_gaode_routing_msgs__msg__J6mLaneMarking *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
