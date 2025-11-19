// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `enter_pos`
// Member `leave_pos`
#include "deva_gaode_routing_msgs/msg/detail/route_pos__functions.h"
// Member `inter_raw_link_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__init(deva_gaode_routing_msgs__msg__RGIntersectionResult * msg)
{
  if (!msg) {
    return false;
  }
  // raw_link_id
  // inter_type
  // accessory_info
  // enter_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__init(&msg->enter_pos)) {
    deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(msg);
    return false;
  }
  // leave_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__init(&msg->leave_pos)) {
    deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(msg);
    return false;
  }
  // inter_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->inter_raw_link_ids, 0)) {
    deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(deva_gaode_routing_msgs__msg__RGIntersectionResult * msg)
{
  if (!msg) {
    return;
  }
  // raw_link_id
  // inter_type
  // accessory_info
  // enter_pos
  deva_gaode_routing_msgs__msg__RoutePos__fini(&msg->enter_pos);
  // leave_pos
  deva_gaode_routing_msgs__msg__RoutePos__fini(&msg->leave_pos);
  // inter_raw_link_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->inter_raw_link_ids);
}

bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__are_equal(const deva_gaode_routing_msgs__msg__RGIntersectionResult * lhs, const deva_gaode_routing_msgs__msg__RGIntersectionResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // raw_link_id
  if (lhs->raw_link_id != rhs->raw_link_id) {
    return false;
  }
  // inter_type
  if (lhs->inter_type != rhs->inter_type) {
    return false;
  }
  // accessory_info
  if (lhs->accessory_info != rhs->accessory_info) {
    return false;
  }
  // enter_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__are_equal(
      &(lhs->enter_pos), &(rhs->enter_pos)))
  {
    return false;
  }
  // leave_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__are_equal(
      &(lhs->leave_pos), &(rhs->leave_pos)))
  {
    return false;
  }
  // inter_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->inter_raw_link_ids), &(rhs->inter_raw_link_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__copy(
  const deva_gaode_routing_msgs__msg__RGIntersectionResult * input,
  deva_gaode_routing_msgs__msg__RGIntersectionResult * output)
{
  if (!input || !output) {
    return false;
  }
  // raw_link_id
  output->raw_link_id = input->raw_link_id;
  // inter_type
  output->inter_type = input->inter_type;
  // accessory_info
  output->accessory_info = input->accessory_info;
  // enter_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__copy(
      &(input->enter_pos), &(output->enter_pos)))
  {
    return false;
  }
  // leave_pos
  if (!deva_gaode_routing_msgs__msg__RoutePos__copy(
      &(input->leave_pos), &(output->leave_pos)))
  {
    return false;
  }
  // inter_raw_link_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->inter_raw_link_ids), &(output->inter_raw_link_ids)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__RGIntersectionResult *
deva_gaode_routing_msgs__msg__RGIntersectionResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGIntersectionResult * msg = (deva_gaode_routing_msgs__msg__RGIntersectionResult *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGIntersectionResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RGIntersectionResult));
  bool success = deva_gaode_routing_msgs__msg__RGIntersectionResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RGIntersectionResult__destroy(deva_gaode_routing_msgs__msg__RGIntersectionResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__init(deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGIntersectionResult * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RGIntersectionResult *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RGIntersectionResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RGIntersectionResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__fini(deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * array = (deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__destroy(deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * lhs, const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * input,
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RGIntersectionResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RGIntersectionResult * data =
      (deva_gaode_routing_msgs__msg__RGIntersectionResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RGIntersectionResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
