// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `j6m_links`
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__functions.h"
// Member `j6m_intersections`
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__functions.h"
// Member `j6m_lanes`
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__functions.h"
// Member `j6m_lane_markings`
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"
// Member `j6m_road_objects`
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mData__init(deva_gaode_routing_msgs__msg__J6mData * msg)
{
  if (!msg) {
    return false;
  }
  // j6m_links
  if (!deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(&msg->j6m_links, 0)) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
    return false;
  }
  // j6m_intersections
  if (!deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__init(&msg->j6m_intersections, 0)) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
    return false;
  }
  // j6m_lanes
  if (!deva_gaode_routing_msgs__msg__J6mLane__Sequence__init(&msg->j6m_lanes, 0)) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
    return false;
  }
  // j6m_lane_markings
  if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__init(&msg->j6m_lane_markings, 0)) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
    return false;
  }
  // j6m_road_objects
  if (!deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__init(&msg->j6m_road_objects, 0)) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mData__fini(deva_gaode_routing_msgs__msg__J6mData * msg)
{
  if (!msg) {
    return;
  }
  // j6m_links
  deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(&msg->j6m_links);
  // j6m_intersections
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__fini(&msg->j6m_intersections);
  // j6m_lanes
  deva_gaode_routing_msgs__msg__J6mLane__Sequence__fini(&msg->j6m_lanes);
  // j6m_lane_markings
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__fini(&msg->j6m_lane_markings);
  // j6m_road_objects
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__fini(&msg->j6m_road_objects);
}

bool
deva_gaode_routing_msgs__msg__J6mData__are_equal(const deva_gaode_routing_msgs__msg__J6mData * lhs, const deva_gaode_routing_msgs__msg__J6mData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // j6m_links
  if (!deva_gaode_routing_msgs__msg__J6mLink__Sequence__are_equal(
      &(lhs->j6m_links), &(rhs->j6m_links)))
  {
    return false;
  }
  // j6m_intersections
  if (!deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__are_equal(
      &(lhs->j6m_intersections), &(rhs->j6m_intersections)))
  {
    return false;
  }
  // j6m_lanes
  if (!deva_gaode_routing_msgs__msg__J6mLane__Sequence__are_equal(
      &(lhs->j6m_lanes), &(rhs->j6m_lanes)))
  {
    return false;
  }
  // j6m_lane_markings
  if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__are_equal(
      &(lhs->j6m_lane_markings), &(rhs->j6m_lane_markings)))
  {
    return false;
  }
  // j6m_road_objects
  if (!deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__are_equal(
      &(lhs->j6m_road_objects), &(rhs->j6m_road_objects)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mData__copy(
  const deva_gaode_routing_msgs__msg__J6mData * input,
  deva_gaode_routing_msgs__msg__J6mData * output)
{
  if (!input || !output) {
    return false;
  }
  // j6m_links
  if (!deva_gaode_routing_msgs__msg__J6mLink__Sequence__copy(
      &(input->j6m_links), &(output->j6m_links)))
  {
    return false;
  }
  // j6m_intersections
  if (!deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__copy(
      &(input->j6m_intersections), &(output->j6m_intersections)))
  {
    return false;
  }
  // j6m_lanes
  if (!deva_gaode_routing_msgs__msg__J6mLane__Sequence__copy(
      &(input->j6m_lanes), &(output->j6m_lanes)))
  {
    return false;
  }
  // j6m_lane_markings
  if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__copy(
      &(input->j6m_lane_markings), &(output->j6m_lane_markings)))
  {
    return false;
  }
  // j6m_road_objects
  if (!deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__copy(
      &(input->j6m_road_objects), &(output->j6m_road_objects)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mData *
deva_gaode_routing_msgs__msg__J6mData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mData * msg = (deva_gaode_routing_msgs__msg__J6mData *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mData));
  bool success = deva_gaode_routing_msgs__msg__J6mData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mData__destroy(deva_gaode_routing_msgs__msg__J6mData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mData__Sequence__init(deva_gaode_routing_msgs__msg__J6mData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mData * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mData *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mData__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mData__Sequence__fini(deva_gaode_routing_msgs__msg__J6mData__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mData__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mData__Sequence *
deva_gaode_routing_msgs__msg__J6mData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mData__Sequence * array = (deva_gaode_routing_msgs__msg__J6mData__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mData__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mData__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mData__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mData__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mData__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mData * data =
      (deva_gaode_routing_msgs__msg__J6mData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
