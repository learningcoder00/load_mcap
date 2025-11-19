// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersection.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `intersection_id`
// Member `link_id_s`
// Member `intersection_successor_id_s`
// Member `intersection_predecessor_id_s`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `intersection_coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mIntersection__init(deva_gaode_routing_msgs__msg__J6mIntersection * msg)
{
  if (!msg) {
    return false;
  }
  // intersection_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->intersection_id)) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
    return false;
  }
  // link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->link_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
    return false;
  }
  // intersection_successor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->intersection_successor_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
    return false;
  }
  // intersection_predecessor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->intersection_predecessor_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
    return false;
  }
  // is_lane_num_change_areas
  // intersection_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->intersection_coordinates, 0)) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mIntersection__fini(deva_gaode_routing_msgs__msg__J6mIntersection * msg)
{
  if (!msg) {
    return;
  }
  // intersection_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->intersection_id);
  // link_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->link_id_s);
  // intersection_successor_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->intersection_successor_id_s);
  // intersection_predecessor_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->intersection_predecessor_id_s);
  // is_lane_num_change_areas
  // intersection_coordinates
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->intersection_coordinates);
}

bool
deva_gaode_routing_msgs__msg__J6mIntersection__are_equal(const deva_gaode_routing_msgs__msg__J6mIntersection * lhs, const deva_gaode_routing_msgs__msg__J6mIntersection * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // intersection_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->intersection_id), &(rhs->intersection_id)))
  {
    return false;
  }
  // link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->link_id_s), &(rhs->link_id_s)))
  {
    return false;
  }
  // intersection_successor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->intersection_successor_id_s), &(rhs->intersection_successor_id_s)))
  {
    return false;
  }
  // intersection_predecessor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->intersection_predecessor_id_s), &(rhs->intersection_predecessor_id_s)))
  {
    return false;
  }
  // is_lane_num_change_areas
  if (lhs->is_lane_num_change_areas != rhs->is_lane_num_change_areas) {
    return false;
  }
  // intersection_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->intersection_coordinates), &(rhs->intersection_coordinates)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mIntersection__copy(
  const deva_gaode_routing_msgs__msg__J6mIntersection * input,
  deva_gaode_routing_msgs__msg__J6mIntersection * output)
{
  if (!input || !output) {
    return false;
  }
  // intersection_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->intersection_id), &(output->intersection_id)))
  {
    return false;
  }
  // link_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->link_id_s), &(output->link_id_s)))
  {
    return false;
  }
  // intersection_successor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->intersection_successor_id_s), &(output->intersection_successor_id_s)))
  {
    return false;
  }
  // intersection_predecessor_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->intersection_predecessor_id_s), &(output->intersection_predecessor_id_s)))
  {
    return false;
  }
  // is_lane_num_change_areas
  output->is_lane_num_change_areas = input->is_lane_num_change_areas;
  // intersection_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->intersection_coordinates), &(output->intersection_coordinates)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mIntersection *
deva_gaode_routing_msgs__msg__J6mIntersection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersection * msg = (deva_gaode_routing_msgs__msg__J6mIntersection *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mIntersection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mIntersection));
  bool success = deva_gaode_routing_msgs__msg__J6mIntersection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mIntersection__destroy(deva_gaode_routing_msgs__msg__J6mIntersection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mIntersection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__init(deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersection * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mIntersection *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mIntersection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mIntersection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mIntersection__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__fini(deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mIntersection__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * array = (deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mIntersection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mIntersection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mIntersection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mIntersection * data =
      (deva_gaode_routing_msgs__msg__J6mIntersection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mIntersection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mIntersection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mIntersection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
