// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/StopLine.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/stop_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `related_lane_ids`
// Member `related_intersection_road_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `location`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `related_node_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__StopLine__init(deva_gaode_routing_msgs__msg__StopLine * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
    return false;
  }
  // type
  // location
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->location)) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
    return false;
  }
  // related_node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->related_node_id)) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
    return false;
  }
  // related_lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->related_lane_ids, 0)) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
    return false;
  }
  // related_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->related_intersection_road_ids, 0)) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__StopLine__fini(deva_gaode_routing_msgs__msg__StopLine * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // type
  // location
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->location);
  // related_node_id
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->related_node_id);
  // related_lane_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->related_lane_ids);
  // related_intersection_road_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->related_intersection_road_ids);
}

bool
deva_gaode_routing_msgs__msg__StopLine__are_equal(const deva_gaode_routing_msgs__msg__StopLine * lhs, const deva_gaode_routing_msgs__msg__StopLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // location
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // related_node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__are_equal(
      &(lhs->related_node_id), &(rhs->related_node_id)))
  {
    return false;
  }
  // related_lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->related_lane_ids), &(rhs->related_lane_ids)))
  {
    return false;
  }
  // related_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->related_intersection_road_ids), &(rhs->related_intersection_road_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__StopLine__copy(
  const deva_gaode_routing_msgs__msg__StopLine * input,
  deva_gaode_routing_msgs__msg__StopLine * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // type
  output->type = input->type;
  // location
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // related_node_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__copy(
      &(input->related_node_id), &(output->related_node_id)))
  {
    return false;
  }
  // related_lane_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->related_lane_ids), &(output->related_lane_ids)))
  {
    return false;
  }
  // related_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->related_intersection_road_ids), &(output->related_intersection_road_ids)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__StopLine *
deva_gaode_routing_msgs__msg__StopLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__StopLine * msg = (deva_gaode_routing_msgs__msg__StopLine *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__StopLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__StopLine));
  bool success = deva_gaode_routing_msgs__msg__StopLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__StopLine__destroy(deva_gaode_routing_msgs__msg__StopLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__StopLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__StopLine__Sequence__init(deva_gaode_routing_msgs__msg__StopLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__StopLine * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__StopLine *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__StopLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__StopLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__StopLine__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__StopLine__Sequence__fini(deva_gaode_routing_msgs__msg__StopLine__Sequence * array)
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
      deva_gaode_routing_msgs__msg__StopLine__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__StopLine__Sequence *
deva_gaode_routing_msgs__msg__StopLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__StopLine__Sequence * array = (deva_gaode_routing_msgs__msg__StopLine__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__StopLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__StopLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__StopLine__Sequence__destroy(deva_gaode_routing_msgs__msg__StopLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__StopLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__StopLine__Sequence__are_equal(const deva_gaode_routing_msgs__msg__StopLine__Sequence * lhs, const deva_gaode_routing_msgs__msg__StopLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__StopLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__StopLine__Sequence__copy(
  const deva_gaode_routing_msgs__msg__StopLine__Sequence * input,
  deva_gaode_routing_msgs__msg__StopLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__StopLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__StopLine * data =
      (deva_gaode_routing_msgs__msg__StopLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__StopLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__StopLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__StopLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
