// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_attribute`
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__functions.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `topology`
#include "deva_gaode_routing_msgs/msg/detail/topology__functions.h"
// Member `link_curvature`
#include "deva_gaode_routing_msgs/msg/detail/link_curvature__functions.h"
// Member `guidance`
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"
// Member `start_id`
// Member `end_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__functions.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `start`
// Member `end`
#include "deva_gaode_routing_msgs/msg/detail/node__functions.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/detail/feature_point__functions.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__functions.h"
// Member `j6m_intersection_entry_infos`
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__functions.h"
// Member `j6m_lane_ids`
// Member `j6m_link_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"

bool
deva_gaode_routing_msgs__msg__Link__init(deva_gaode_routing_msgs__msg__Link * msg)
{
  if (!msg) {
    return false;
  }
  // link_attribute
  if (!deva_gaode_routing_msgs__msg__LinkAttribute__init(&msg->link_attribute)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->coordinate, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // raw_id
  // topology
  if (!deva_gaode_routing_msgs__msg__Topology__init(&msg->topology)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // link_curvature
  if (!deva_gaode_routing_msgs__msg__LinkCurvature__init(&msg->link_curvature)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // guidance
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__init(&msg->guidance, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // start_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->start_id)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // end_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__init(&msg->end_id)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->feature_point_ids, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // start
  if (!deva_gaode_routing_msgs__msg__Node__init(&msg->start)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // end
  if (!deva_gaode_routing_msgs__msg__Node__init(&msg->end)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__init(&msg->feature_points, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LaneById__Sequence__init(&msg->lanes, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // j6m_intersection_entry_infos
  if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__init(&msg->j6m_intersection_entry_infos, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // j6m_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->j6m_lane_ids, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  // j6m_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->j6m_link_ids, 0)) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Link__fini(deva_gaode_routing_msgs__msg__Link * msg)
{
  if (!msg) {
    return;
  }
  // link_attribute
  deva_gaode_routing_msgs__msg__LinkAttribute__fini(&msg->link_attribute);
  // coordinate
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->coordinate);
  // raw_id
  // topology
  deva_gaode_routing_msgs__msg__Topology__fini(&msg->topology);
  // link_curvature
  deva_gaode_routing_msgs__msg__LinkCurvature__fini(&msg->link_curvature);
  // guidance
  deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(&msg->guidance);
  // start_id
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->start_id);
  // end_id
  deva_gaode_routing_msgs__msg__NodeIDType__fini(&msg->end_id);
  // feature_point_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->feature_point_ids);
  // start
  deva_gaode_routing_msgs__msg__Node__fini(&msg->start);
  // end
  deva_gaode_routing_msgs__msg__Node__fini(&msg->end);
  // feature_points
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__fini(&msg->feature_points);
  // lanes
  deva_gaode_routing_msgs__msg__LaneById__Sequence__fini(&msg->lanes);
  // j6m_intersection_entry_infos
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__fini(&msg->j6m_intersection_entry_infos);
  // j6m_lane_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->j6m_lane_ids);
  // j6m_link_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->j6m_link_ids);
}

bool
deva_gaode_routing_msgs__msg__Link__are_equal(const deva_gaode_routing_msgs__msg__Link * lhs, const deva_gaode_routing_msgs__msg__Link * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_attribute
  if (!deva_gaode_routing_msgs__msg__LinkAttribute__are_equal(
      &(lhs->link_attribute), &(rhs->link_attribute)))
  {
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->coordinate), &(rhs->coordinate)))
  {
    return false;
  }
  // raw_id
  if (lhs->raw_id != rhs->raw_id) {
    return false;
  }
  // topology
  if (!deva_gaode_routing_msgs__msg__Topology__are_equal(
      &(lhs->topology), &(rhs->topology)))
  {
    return false;
  }
  // link_curvature
  if (!deva_gaode_routing_msgs__msg__LinkCurvature__are_equal(
      &(lhs->link_curvature), &(rhs->link_curvature)))
  {
    return false;
  }
  // guidance
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__are_equal(
      &(lhs->guidance), &(rhs->guidance)))
  {
    return false;
  }
  // start_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__are_equal(
      &(lhs->start_id), &(rhs->start_id)))
  {
    return false;
  }
  // end_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__are_equal(
      &(lhs->end_id), &(rhs->end_id)))
  {
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->feature_point_ids), &(rhs->feature_point_ids)))
  {
    return false;
  }
  // start
  if (!deva_gaode_routing_msgs__msg__Node__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!deva_gaode_routing_msgs__msg__Node__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__are_equal(
      &(lhs->feature_points), &(rhs->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LaneById__Sequence__are_equal(
      &(lhs->lanes), &(rhs->lanes)))
  {
    return false;
  }
  // j6m_intersection_entry_infos
  if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__are_equal(
      &(lhs->j6m_intersection_entry_infos), &(rhs->j6m_intersection_entry_infos)))
  {
    return false;
  }
  // j6m_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->j6m_lane_ids), &(rhs->j6m_lane_ids)))
  {
    return false;
  }
  // j6m_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->j6m_link_ids), &(rhs->j6m_link_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Link__copy(
  const deva_gaode_routing_msgs__msg__Link * input,
  deva_gaode_routing_msgs__msg__Link * output)
{
  if (!input || !output) {
    return false;
  }
  // link_attribute
  if (!deva_gaode_routing_msgs__msg__LinkAttribute__copy(
      &(input->link_attribute), &(output->link_attribute)))
  {
    return false;
  }
  // coordinate
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->coordinate), &(output->coordinate)))
  {
    return false;
  }
  // raw_id
  output->raw_id = input->raw_id;
  // topology
  if (!deva_gaode_routing_msgs__msg__Topology__copy(
      &(input->topology), &(output->topology)))
  {
    return false;
  }
  // link_curvature
  if (!deva_gaode_routing_msgs__msg__LinkCurvature__copy(
      &(input->link_curvature), &(output->link_curvature)))
  {
    return false;
  }
  // guidance
  if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__copy(
      &(input->guidance), &(output->guidance)))
  {
    return false;
  }
  // start_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__copy(
      &(input->start_id), &(output->start_id)))
  {
    return false;
  }
  // end_id
  if (!deva_gaode_routing_msgs__msg__NodeIDType__copy(
      &(input->end_id), &(output->end_id)))
  {
    return false;
  }
  // feature_point_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->feature_point_ids), &(output->feature_point_ids)))
  {
    return false;
  }
  // start
  if (!deva_gaode_routing_msgs__msg__Node__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!deva_gaode_routing_msgs__msg__Node__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__copy(
      &(input->feature_points), &(output->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LaneById__Sequence__copy(
      &(input->lanes), &(output->lanes)))
  {
    return false;
  }
  // j6m_intersection_entry_infos
  if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__copy(
      &(input->j6m_intersection_entry_infos), &(output->j6m_intersection_entry_infos)))
  {
    return false;
  }
  // j6m_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->j6m_lane_ids), &(output->j6m_lane_ids)))
  {
    return false;
  }
  // j6m_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->j6m_link_ids), &(output->j6m_link_ids)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Link *
deva_gaode_routing_msgs__msg__Link__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Link * msg = (deva_gaode_routing_msgs__msg__Link *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Link), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Link));
  bool success = deva_gaode_routing_msgs__msg__Link__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Link__destroy(deva_gaode_routing_msgs__msg__Link * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Link__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Link__Sequence__init(deva_gaode_routing_msgs__msg__Link__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Link * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Link *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Link), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Link__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Link__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Link__Sequence__fini(deva_gaode_routing_msgs__msg__Link__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Link__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Link__Sequence *
deva_gaode_routing_msgs__msg__Link__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Link__Sequence * array = (deva_gaode_routing_msgs__msg__Link__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Link__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Link__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Link__Sequence__destroy(deva_gaode_routing_msgs__msg__Link__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Link__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Link__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Link__Sequence * lhs, const deva_gaode_routing_msgs__msg__Link__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Link__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Link__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Link__Sequence * input,
  deva_gaode_routing_msgs__msg__Link__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Link);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Link * data =
      (deva_gaode_routing_msgs__msg__Link *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Link__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Link__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Link__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
