// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `start_node_id`
// Member `end_node_id`
// Member `start_feature_point_id`
// Member `end_feature_point_id`
// Member `nexts`
// Member `prevs`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `geometry`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `relate_link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__IntersectionRoad__init(deva_gaode_routing_msgs__msg__IntersectionRoad * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // link_direction
  // cross_turn_type
  // has_traffic_light
  // geometry
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->geometry, 0)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // start_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->start_node_id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // end_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->end_node_id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // start_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->start_feature_point_id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // end_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->end_feature_point_id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // relate_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->relate_link_id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // nexts
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->nexts, 0)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  // prevs
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->prevs, 0)) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoad__fini(deva_gaode_routing_msgs__msg__IntersectionRoad * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // link_direction
  // cross_turn_type
  // has_traffic_light
  // geometry
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->geometry);
  // start_node_id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->start_node_id);
  // end_node_id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->end_node_id);
  // start_feature_point_id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->start_feature_point_id);
  // end_feature_point_id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->end_feature_point_id);
  // relate_link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->relate_link_id);
  // nexts
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->nexts);
  // prevs
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->prevs);
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoad__are_equal(const deva_gaode_routing_msgs__msg__IntersectionRoad * lhs, const deva_gaode_routing_msgs__msg__IntersectionRoad * rhs)
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
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
    return false;
  }
  // cross_turn_type
  if (lhs->cross_turn_type != rhs->cross_turn_type) {
    return false;
  }
  // has_traffic_light
  if (lhs->has_traffic_light != rhs->has_traffic_light) {
    return false;
  }
  // geometry
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->geometry), &(rhs->geometry)))
  {
    return false;
  }
  // start_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->start_node_id), &(rhs->start_node_id)))
  {
    return false;
  }
  // end_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->end_node_id), &(rhs->end_node_id)))
  {
    return false;
  }
  // start_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->start_feature_point_id), &(rhs->start_feature_point_id)))
  {
    return false;
  }
  // end_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->end_feature_point_id), &(rhs->end_feature_point_id)))
  {
    return false;
  }
  // relate_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->relate_link_id), &(rhs->relate_link_id)))
  {
    return false;
  }
  // nexts
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->nexts), &(rhs->nexts)))
  {
    return false;
  }
  // prevs
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->prevs), &(rhs->prevs)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoad__copy(
  const deva_gaode_routing_msgs__msg__IntersectionRoad * input,
  deva_gaode_routing_msgs__msg__IntersectionRoad * output)
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
  // link_direction
  output->link_direction = input->link_direction;
  // cross_turn_type
  output->cross_turn_type = input->cross_turn_type;
  // has_traffic_light
  output->has_traffic_light = input->has_traffic_light;
  // geometry
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->geometry), &(output->geometry)))
  {
    return false;
  }
  // start_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->start_node_id), &(output->start_node_id)))
  {
    return false;
  }
  // end_node_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->end_node_id), &(output->end_node_id)))
  {
    return false;
  }
  // start_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->start_feature_point_id), &(output->start_feature_point_id)))
  {
    return false;
  }
  // end_feature_point_id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->end_feature_point_id), &(output->end_feature_point_id)))
  {
    return false;
  }
  // relate_link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->relate_link_id), &(output->relate_link_id)))
  {
    return false;
  }
  // nexts
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->nexts), &(output->nexts)))
  {
    return false;
  }
  // prevs
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->prevs), &(output->prevs)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__IntersectionRoad *
deva_gaode_routing_msgs__msg__IntersectionRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoad * msg = (deva_gaode_routing_msgs__msg__IntersectionRoad *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad));
  bool success = deva_gaode_routing_msgs__msg__IntersectionRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoad__destroy(deva_gaode_routing_msgs__msg__IntersectionRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoad * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__IntersectionRoad *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__IntersectionRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__IntersectionRoad__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__fini(deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * array)
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
      deva_gaode_routing_msgs__msg__IntersectionRoad__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * array = (deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__destroy(deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__are_equal(const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * lhs, const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__IntersectionRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__copy(
  const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * input,
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__IntersectionRoad * data =
      (deva_gaode_routing_msgs__msg__IntersectionRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__IntersectionRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__IntersectionRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__IntersectionRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
