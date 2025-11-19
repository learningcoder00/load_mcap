// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `ehp_position`
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__functions.h"
// Member `ehp_meta_data`
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__functions.h"
// Member `ehp_segments`
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"
// Member `ehp_stubs`
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"
// Member `ehp_profile_shorts`
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"
// Member `ehp_profile_longs`
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__functions.h"
// Member `link`
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"
// Member `node`
#include "deva_gaode_routing_msgs/msg/detail/node__functions.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"
// Member `stoplines`
#include "deva_gaode_routing_msgs/msg/detail/stop_line__functions.h"
// Member `intersection_road_nodes`
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__functions.h"
// Member `intersection_roads`
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__functions.h"
// Member `position_match_link`
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__functions.h"
// Member `heterogeneous_match_link`
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__functions.h"
// Member `route_guide_response`
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__functions.h"
// Member `j6m_data`
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__functions.h"

bool
deva_gaode_routing_msgs__msg__AdasisMap__init(deva_gaode_routing_msgs__msg__AdasisMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_position
  // ehp_position
  if (!deva_gaode_routing_msgs__msg__EhpPosition__init(&msg->ehp_position)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_meta_data
  // ehp_meta_data
  if (!deva_gaode_routing_msgs__msg__EhpMetaData__init(&msg->ehp_meta_data)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_segments
  // ehp_segments
  if (!deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(&msg->ehp_segments, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_stubs
  // ehp_stubs
  if (!deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(&msg->ehp_stubs, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_profile_shorts
  // ehp_profile_shorts
  if (!deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(&msg->ehp_profile_shorts, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // is_update_ehp_profile_longs
  // ehp_profile_longs
  if (!deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(&msg->ehp_profile_longs, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // link
  if (!deva_gaode_routing_msgs__msg__Link__Sequence__init(&msg->link, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // node
  if (!deva_gaode_routing_msgs__msg__Node__Sequence__init(&msg->node, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(&msg->feature_points, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__init(&msg->lanes, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // stoplines
  if (!deva_gaode_routing_msgs__msg__StopLine__Sequence__init(&msg->stoplines, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // intersection_road_nodes
  if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(&msg->intersection_road_nodes, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // intersection_roads
  if (!deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(&msg->intersection_roads, 0)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // position_match_link
  if (!deva_gaode_routing_msgs__msg__PositionMatchLink__init(&msg->position_match_link)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // heterogeneous_match_link
  if (!deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__init(&msg->heterogeneous_match_link)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // route_guide_response
  if (!deva_gaode_routing_msgs__msg__RouteGuideResponse__init(&msg->route_guide_response)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  // j6m_data
  if (!deva_gaode_routing_msgs__msg__J6mData__init(&msg->j6m_data)) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__AdasisMap__fini(deva_gaode_routing_msgs__msg__AdasisMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // is_update_ehp_position
  // ehp_position
  deva_gaode_routing_msgs__msg__EhpPosition__fini(&msg->ehp_position);
  // is_update_ehp_meta_data
  // ehp_meta_data
  deva_gaode_routing_msgs__msg__EhpMetaData__fini(&msg->ehp_meta_data);
  // is_update_ehp_segments
  // ehp_segments
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence__fini(&msg->ehp_segments);
  // is_update_ehp_stubs
  // ehp_stubs
  deva_gaode_routing_msgs__msg__EhpStub__Sequence__fini(&msg->ehp_stubs);
  // is_update_ehp_profile_shorts
  // ehp_profile_shorts
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__fini(&msg->ehp_profile_shorts);
  // is_update_ehp_profile_longs
  // ehp_profile_longs
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__fini(&msg->ehp_profile_longs);
  // link
  deva_gaode_routing_msgs__msg__Link__Sequence__fini(&msg->link);
  // node
  deva_gaode_routing_msgs__msg__Node__Sequence__fini(&msg->node);
  // feature_points
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__fini(&msg->feature_points);
  // lanes
  deva_gaode_routing_msgs__msg__LANE__Sequence__fini(&msg->lanes);
  // stoplines
  deva_gaode_routing_msgs__msg__StopLine__Sequence__fini(&msg->stoplines);
  // intersection_road_nodes
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__fini(&msg->intersection_road_nodes);
  // intersection_roads
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__fini(&msg->intersection_roads);
  // position_match_link
  deva_gaode_routing_msgs__msg__PositionMatchLink__fini(&msg->position_match_link);
  // heterogeneous_match_link
  deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__fini(&msg->heterogeneous_match_link);
  // route_guide_response
  deva_gaode_routing_msgs__msg__RouteGuideResponse__fini(&msg->route_guide_response);
  // j6m_data
  deva_gaode_routing_msgs__msg__J6mData__fini(&msg->j6m_data);
}

bool
deva_gaode_routing_msgs__msg__AdasisMap__are_equal(const deva_gaode_routing_msgs__msg__AdasisMap * lhs, const deva_gaode_routing_msgs__msg__AdasisMap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // is_update_ehp_position
  if (lhs->is_update_ehp_position != rhs->is_update_ehp_position) {
    return false;
  }
  // ehp_position
  if (!deva_gaode_routing_msgs__msg__EhpPosition__are_equal(
      &(lhs->ehp_position), &(rhs->ehp_position)))
  {
    return false;
  }
  // is_update_ehp_meta_data
  if (lhs->is_update_ehp_meta_data != rhs->is_update_ehp_meta_data) {
    return false;
  }
  // ehp_meta_data
  if (!deva_gaode_routing_msgs__msg__EhpMetaData__are_equal(
      &(lhs->ehp_meta_data), &(rhs->ehp_meta_data)))
  {
    return false;
  }
  // is_update_ehp_segments
  if (lhs->is_update_ehp_segments != rhs->is_update_ehp_segments) {
    return false;
  }
  // ehp_segments
  if (!deva_gaode_routing_msgs__msg__EhpSegment__Sequence__are_equal(
      &(lhs->ehp_segments), &(rhs->ehp_segments)))
  {
    return false;
  }
  // is_update_ehp_stubs
  if (lhs->is_update_ehp_stubs != rhs->is_update_ehp_stubs) {
    return false;
  }
  // ehp_stubs
  if (!deva_gaode_routing_msgs__msg__EhpStub__Sequence__are_equal(
      &(lhs->ehp_stubs), &(rhs->ehp_stubs)))
  {
    return false;
  }
  // is_update_ehp_profile_shorts
  if (lhs->is_update_ehp_profile_shorts != rhs->is_update_ehp_profile_shorts) {
    return false;
  }
  // ehp_profile_shorts
  if (!deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__are_equal(
      &(lhs->ehp_profile_shorts), &(rhs->ehp_profile_shorts)))
  {
    return false;
  }
  // is_update_ehp_profile_longs
  if (lhs->is_update_ehp_profile_longs != rhs->is_update_ehp_profile_longs) {
    return false;
  }
  // ehp_profile_longs
  if (!deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__are_equal(
      &(lhs->ehp_profile_longs), &(rhs->ehp_profile_longs)))
  {
    return false;
  }
  // link
  if (!deva_gaode_routing_msgs__msg__Link__Sequence__are_equal(
      &(lhs->link), &(rhs->link)))
  {
    return false;
  }
  // node
  if (!deva_gaode_routing_msgs__msg__Node__Sequence__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__are_equal(
      &(lhs->feature_points), &(rhs->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__are_equal(
      &(lhs->lanes), &(rhs->lanes)))
  {
    return false;
  }
  // stoplines
  if (!deva_gaode_routing_msgs__msg__StopLine__Sequence__are_equal(
      &(lhs->stoplines), &(rhs->stoplines)))
  {
    return false;
  }
  // intersection_road_nodes
  if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__are_equal(
      &(lhs->intersection_road_nodes), &(rhs->intersection_road_nodes)))
  {
    return false;
  }
  // intersection_roads
  if (!deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__are_equal(
      &(lhs->intersection_roads), &(rhs->intersection_roads)))
  {
    return false;
  }
  // position_match_link
  if (!deva_gaode_routing_msgs__msg__PositionMatchLink__are_equal(
      &(lhs->position_match_link), &(rhs->position_match_link)))
  {
    return false;
  }
  // heterogeneous_match_link
  if (!deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__are_equal(
      &(lhs->heterogeneous_match_link), &(rhs->heterogeneous_match_link)))
  {
    return false;
  }
  // route_guide_response
  if (!deva_gaode_routing_msgs__msg__RouteGuideResponse__are_equal(
      &(lhs->route_guide_response), &(rhs->route_guide_response)))
  {
    return false;
  }
  // j6m_data
  if (!deva_gaode_routing_msgs__msg__J6mData__are_equal(
      &(lhs->j6m_data), &(rhs->j6m_data)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__AdasisMap__copy(
  const deva_gaode_routing_msgs__msg__AdasisMap * input,
  deva_gaode_routing_msgs__msg__AdasisMap * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // is_update_ehp_position
  output->is_update_ehp_position = input->is_update_ehp_position;
  // ehp_position
  if (!deva_gaode_routing_msgs__msg__EhpPosition__copy(
      &(input->ehp_position), &(output->ehp_position)))
  {
    return false;
  }
  // is_update_ehp_meta_data
  output->is_update_ehp_meta_data = input->is_update_ehp_meta_data;
  // ehp_meta_data
  if (!deva_gaode_routing_msgs__msg__EhpMetaData__copy(
      &(input->ehp_meta_data), &(output->ehp_meta_data)))
  {
    return false;
  }
  // is_update_ehp_segments
  output->is_update_ehp_segments = input->is_update_ehp_segments;
  // ehp_segments
  if (!deva_gaode_routing_msgs__msg__EhpSegment__Sequence__copy(
      &(input->ehp_segments), &(output->ehp_segments)))
  {
    return false;
  }
  // is_update_ehp_stubs
  output->is_update_ehp_stubs = input->is_update_ehp_stubs;
  // ehp_stubs
  if (!deva_gaode_routing_msgs__msg__EhpStub__Sequence__copy(
      &(input->ehp_stubs), &(output->ehp_stubs)))
  {
    return false;
  }
  // is_update_ehp_profile_shorts
  output->is_update_ehp_profile_shorts = input->is_update_ehp_profile_shorts;
  // ehp_profile_shorts
  if (!deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__copy(
      &(input->ehp_profile_shorts), &(output->ehp_profile_shorts)))
  {
    return false;
  }
  // is_update_ehp_profile_longs
  output->is_update_ehp_profile_longs = input->is_update_ehp_profile_longs;
  // ehp_profile_longs
  if (!deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__copy(
      &(input->ehp_profile_longs), &(output->ehp_profile_longs)))
  {
    return false;
  }
  // link
  if (!deva_gaode_routing_msgs__msg__Link__Sequence__copy(
      &(input->link), &(output->link)))
  {
    return false;
  }
  // node
  if (!deva_gaode_routing_msgs__msg__Node__Sequence__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // feature_points
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__copy(
      &(input->feature_points), &(output->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__copy(
      &(input->lanes), &(output->lanes)))
  {
    return false;
  }
  // stoplines
  if (!deva_gaode_routing_msgs__msg__StopLine__Sequence__copy(
      &(input->stoplines), &(output->stoplines)))
  {
    return false;
  }
  // intersection_road_nodes
  if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__copy(
      &(input->intersection_road_nodes), &(output->intersection_road_nodes)))
  {
    return false;
  }
  // intersection_roads
  if (!deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__copy(
      &(input->intersection_roads), &(output->intersection_roads)))
  {
    return false;
  }
  // position_match_link
  if (!deva_gaode_routing_msgs__msg__PositionMatchLink__copy(
      &(input->position_match_link), &(output->position_match_link)))
  {
    return false;
  }
  // heterogeneous_match_link
  if (!deva_gaode_routing_msgs__msg__HeterogeneousMatchLink__copy(
      &(input->heterogeneous_match_link), &(output->heterogeneous_match_link)))
  {
    return false;
  }
  // route_guide_response
  if (!deva_gaode_routing_msgs__msg__RouteGuideResponse__copy(
      &(input->route_guide_response), &(output->route_guide_response)))
  {
    return false;
  }
  // j6m_data
  if (!deva_gaode_routing_msgs__msg__J6mData__copy(
      &(input->j6m_data), &(output->j6m_data)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__AdasisMap *
deva_gaode_routing_msgs__msg__AdasisMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__AdasisMap * msg = (deva_gaode_routing_msgs__msg__AdasisMap *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__AdasisMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__AdasisMap));
  bool success = deva_gaode_routing_msgs__msg__AdasisMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__AdasisMap__destroy(deva_gaode_routing_msgs__msg__AdasisMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__AdasisMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__init(deva_gaode_routing_msgs__msg__AdasisMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__AdasisMap * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__AdasisMap *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__AdasisMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__AdasisMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__AdasisMap__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__fini(deva_gaode_routing_msgs__msg__AdasisMap__Sequence * array)
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
      deva_gaode_routing_msgs__msg__AdasisMap__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__AdasisMap__Sequence *
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__AdasisMap__Sequence * array = (deva_gaode_routing_msgs__msg__AdasisMap__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__AdasisMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__AdasisMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__destroy(deva_gaode_routing_msgs__msg__AdasisMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__AdasisMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__are_equal(const deva_gaode_routing_msgs__msg__AdasisMap__Sequence * lhs, const deva_gaode_routing_msgs__msg__AdasisMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__AdasisMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__AdasisMap__Sequence__copy(
  const deva_gaode_routing_msgs__msg__AdasisMap__Sequence * input,
  deva_gaode_routing_msgs__msg__AdasisMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__AdasisMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__AdasisMap * data =
      (deva_gaode_routing_msgs__msg__AdasisMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__AdasisMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__AdasisMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__AdasisMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
