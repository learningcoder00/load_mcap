// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ehp_position`
#include "deva_gaode_routing_msgs/msg/ehp_position.h"
// Member `ehp_position`
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__rosidl_typesupport_introspection_c.h"
// Member `ehp_meta_data`
#include "deva_gaode_routing_msgs/msg/ehp_meta_data.h"
// Member `ehp_meta_data`
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__rosidl_typesupport_introspection_c.h"
// Member `ehp_segments`
#include "deva_gaode_routing_msgs/msg/ehp_segment.h"
// Member `ehp_segments`
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__rosidl_typesupport_introspection_c.h"
// Member `ehp_stubs`
#include "deva_gaode_routing_msgs/msg/ehp_stub.h"
// Member `ehp_stubs`
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__rosidl_typesupport_introspection_c.h"
// Member `ehp_profile_shorts`
#include "deva_gaode_routing_msgs/msg/ehp_profile_short.h"
// Member `ehp_profile_shorts`
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__rosidl_typesupport_introspection_c.h"
// Member `ehp_profile_longs`
#include "deva_gaode_routing_msgs/msg/ehp_profile_long.h"
// Member `ehp_profile_longs`
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__rosidl_typesupport_introspection_c.h"
// Member `link`
#include "deva_gaode_routing_msgs/msg/link.h"
// Member `link`
#include "deva_gaode_routing_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
// Member `node`
#include "deva_gaode_routing_msgs/msg/node.h"
// Member `node`
#include "deva_gaode_routing_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/feature_point_by_id.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__rosidl_typesupport_introspection_c.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/lane.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"
// Member `stoplines`
#include "deva_gaode_routing_msgs/msg/stop_line.h"
// Member `stoplines`
#include "deva_gaode_routing_msgs/msg/detail/stop_line__rosidl_typesupport_introspection_c.h"
// Member `intersection_road_nodes`
#include "deva_gaode_routing_msgs/msg/intersection_road_node.h"
// Member `intersection_road_nodes`
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__rosidl_typesupport_introspection_c.h"
// Member `intersection_roads`
#include "deva_gaode_routing_msgs/msg/intersection_road.h"
// Member `intersection_roads`
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__rosidl_typesupport_introspection_c.h"
// Member `position_match_link`
#include "deva_gaode_routing_msgs/msg/position_match_link.h"
// Member `position_match_link`
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__rosidl_typesupport_introspection_c.h"
// Member `heterogeneous_match_link`
#include "deva_gaode_routing_msgs/msg/heterogeneous_match_link.h"
// Member `heterogeneous_match_link`
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__rosidl_typesupport_introspection_c.h"
// Member `route_guide_response`
#include "deva_gaode_routing_msgs/msg/route_guide_response.h"
// Member `route_guide_response`
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__rosidl_typesupport_introspection_c.h"
// Member `j6m_data`
#include "deva_gaode_routing_msgs/msg/j6m_data.h"
// Member `j6m_data`
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__AdasisMap__init(message_memory);
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__AdasisMap__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_segments(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__EhpSegment__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpSegment__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_segments(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__EhpSegment__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_segments(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpSegment__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__EhpSegment * item =
    ((const deva_gaode_routing_msgs__msg__EhpSegment *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_segments(untyped_member, index));
  deva_gaode_routing_msgs__msg__EhpSegment * value =
    (deva_gaode_routing_msgs__msg__EhpSegment *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__EhpSegment * item =
    ((deva_gaode_routing_msgs__msg__EhpSegment *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_segments(untyped_member, index));
  const deva_gaode_routing_msgs__msg__EhpSegment * value =
    (const deva_gaode_routing_msgs__msg__EhpSegment *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_segments(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpSegment__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_stubs(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__EhpStub__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpStub__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_stubs(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__EhpStub__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpStub__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_stubs(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__EhpStub__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpStub__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_stubs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__EhpStub * item =
    ((const deva_gaode_routing_msgs__msg__EhpStub *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_stubs(untyped_member, index));
  deva_gaode_routing_msgs__msg__EhpStub * value =
    (deva_gaode_routing_msgs__msg__EhpStub *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_stubs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__EhpStub * item =
    ((deva_gaode_routing_msgs__msg__EhpStub *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_stubs(untyped_member, index));
  const deva_gaode_routing_msgs__msg__EhpStub * value =
    (const deva_gaode_routing_msgs__msg__EhpStub *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_stubs(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__EhpStub__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpStub__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__EhpStub__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_profile_shorts(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_shorts(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_shorts(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_profile_shorts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__EhpProfileShort * item =
    ((const deva_gaode_routing_msgs__msg__EhpProfileShort *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_shorts(untyped_member, index));
  deva_gaode_routing_msgs__msg__EhpProfileShort * value =
    (deva_gaode_routing_msgs__msg__EhpProfileShort *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_profile_shorts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__EhpProfileShort * item =
    ((deva_gaode_routing_msgs__msg__EhpProfileShort *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_shorts(untyped_member, index));
  const deva_gaode_routing_msgs__msg__EhpProfileShort * value =
    (const deva_gaode_routing_msgs__msg__EhpProfileShort *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_profile_shorts(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_profile_longs(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_longs(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * member =
    (const deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_longs(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_profile_longs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__EhpProfileLong * item =
    ((const deva_gaode_routing_msgs__msg__EhpProfileLong *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_longs(untyped_member, index));
  deva_gaode_routing_msgs__msg__EhpProfileLong * value =
    (deva_gaode_routing_msgs__msg__EhpProfileLong *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_profile_longs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__EhpProfileLong * item =
    ((deva_gaode_routing_msgs__msg__EhpProfileLong *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_longs(untyped_member, index));
  const deva_gaode_routing_msgs__msg__EhpProfileLong * value =
    (const deva_gaode_routing_msgs__msg__EhpProfileLong *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_profile_longs(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence * member =
    (deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__link(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Link__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Link__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__link(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Link__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__link(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Link__Sequence * member =
    (deva_gaode_routing_msgs__msg__Link__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__link(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Link * item =
    ((const deva_gaode_routing_msgs__msg__Link *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__link(untyped_member, index));
  deva_gaode_routing_msgs__msg__Link * value =
    (deva_gaode_routing_msgs__msg__Link *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__link(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Link * item =
    ((deva_gaode_routing_msgs__msg__Link *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__link(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Link * value =
    (const deva_gaode_routing_msgs__msg__Link *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__link(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Link__Sequence * member =
    (deva_gaode_routing_msgs__msg__Link__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Link__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Link__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__node(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Node__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Node__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__node(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Node__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__node(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Node__Sequence * member =
    (deva_gaode_routing_msgs__msg__Node__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__node(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Node * item =
    ((const deva_gaode_routing_msgs__msg__Node *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__node(untyped_member, index));
  deva_gaode_routing_msgs__msg__Node * value =
    (deva_gaode_routing_msgs__msg__Node *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__node(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Node * item =
    ((deva_gaode_routing_msgs__msg__Node *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__node(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Node * value =
    (const deva_gaode_routing_msgs__msg__Node *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__node(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Node__Sequence * member =
    (deva_gaode_routing_msgs__msg__Node__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Node__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Node__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__feature_points(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__feature_points(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__feature_points(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeaturePointById * item =
    ((const deva_gaode_routing_msgs__msg__FeaturePointById *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__feature_points(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeaturePointById * value =
    (deva_gaode_routing_msgs__msg__FeaturePointById *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeaturePointById * item =
    ((deva_gaode_routing_msgs__msg__FeaturePointById *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__feature_points(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeaturePointById * value =
    (const deva_gaode_routing_msgs__msg__FeaturePointById *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__feature_points(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeaturePointById__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LANE * item =
    ((const deva_gaode_routing_msgs__msg__LANE *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__LANE * value =
    (deva_gaode_routing_msgs__msg__LANE *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LANE * item =
    ((deva_gaode_routing_msgs__msg__LANE *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LANE * value =
    (const deva_gaode_routing_msgs__msg__LANE *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LANE__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LANE__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__stoplines(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__StopLine__Sequence * member =
    (const deva_gaode_routing_msgs__msg__StopLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__stoplines(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__StopLine__Sequence * member =
    (const deva_gaode_routing_msgs__msg__StopLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__stoplines(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__StopLine__Sequence * member =
    (deva_gaode_routing_msgs__msg__StopLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__stoplines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__StopLine * item =
    ((const deva_gaode_routing_msgs__msg__StopLine *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__stoplines(untyped_member, index));
  deva_gaode_routing_msgs__msg__StopLine * value =
    (deva_gaode_routing_msgs__msg__StopLine *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__stoplines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__StopLine * item =
    ((deva_gaode_routing_msgs__msg__StopLine *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__stoplines(untyped_member, index));
  const deva_gaode_routing_msgs__msg__StopLine * value =
    (const deva_gaode_routing_msgs__msg__StopLine *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__stoplines(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__StopLine__Sequence * member =
    (deva_gaode_routing_msgs__msg__StopLine__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__StopLine__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__StopLine__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__intersection_road_nodes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * member =
    (const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_road_nodes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * member =
    (const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_road_nodes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * member =
    (deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__intersection_road_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode * item =
    ((const deva_gaode_routing_msgs__msg__IntersectionRoadNode *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_road_nodes(untyped_member, index));
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * value =
    (deva_gaode_routing_msgs__msg__IntersectionRoadNode *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__intersection_road_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * item =
    ((deva_gaode_routing_msgs__msg__IntersectionRoadNode *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_road_nodes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode * value =
    (const deva_gaode_routing_msgs__msg__IntersectionRoadNode *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__intersection_road_nodes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * member =
    (deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__intersection_roads(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * member =
    (const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_roads(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * member =
    (const deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_roads(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * member =
    (deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__intersection_roads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__IntersectionRoad * item =
    ((const deva_gaode_routing_msgs__msg__IntersectionRoad *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_roads(untyped_member, index));
  deva_gaode_routing_msgs__msg__IntersectionRoad * value =
    (deva_gaode_routing_msgs__msg__IntersectionRoad *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__intersection_roads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__IntersectionRoad * item =
    ((deva_gaode_routing_msgs__msg__IntersectionRoad *)
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_roads(untyped_member, index));
  const deva_gaode_routing_msgs__msg__IntersectionRoad * value =
    (const deva_gaode_routing_msgs__msg__IntersectionRoad *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__intersection_roads(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence * member =
    (deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[24] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_update_ehp_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_update_ehp_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_meta_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_meta_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_update_ehp_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_segments),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_segments),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_segments,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_segments,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_segments,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_segments,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_segments,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_segments  // resize(index) function pointer
  },
  {
    "is_update_ehp_stubs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_stubs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_stubs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_stubs),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_stubs,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_stubs,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_stubs,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_stubs,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_stubs,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_stubs  // resize(index) function pointer
  },
  {
    "is_update_ehp_profile_shorts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_profile_shorts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_profile_shorts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_profile_shorts),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_profile_shorts,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_shorts,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_shorts,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_profile_shorts,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_profile_shorts,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_profile_shorts  // resize(index) function pointer
  },
  {
    "is_update_ehp_profile_longs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, is_update_ehp_profile_longs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ehp_profile_longs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, ehp_profile_longs),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__ehp_profile_longs,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__ehp_profile_longs,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__ehp_profile_longs,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__ehp_profile_longs,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__ehp_profile_longs,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__ehp_profile_longs  // resize(index) function pointer
  },
  {
    "link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, link),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__link,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__link,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__link,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__link,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__link,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__link  // resize(index) function pointer
  },
  {
    "node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, node),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__node,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__node,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__node,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__node,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__node,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__node  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, feature_points),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__feature_points,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__feature_points,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__feature_points,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__feature_points,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__feature_points,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__feature_points  // resize(index) function pointer
  },
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__lanes  // resize(index) function pointer
  },
  {
    "stoplines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, stoplines),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__stoplines,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__stoplines,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__stoplines,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__stoplines,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__stoplines,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__stoplines  // resize(index) function pointer
  },
  {
    "intersection_road_nodes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, intersection_road_nodes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__intersection_road_nodes,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_road_nodes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_road_nodes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__intersection_road_nodes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__intersection_road_nodes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__intersection_road_nodes  // resize(index) function pointer
  },
  {
    "intersection_roads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, intersection_roads),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__size_function__AdasisMap__intersection_roads,  // size() function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_const_function__AdasisMap__intersection_roads,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__get_function__AdasisMap__intersection_roads,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__fetch_function__AdasisMap__intersection_roads,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__assign_function__AdasisMap__intersection_roads,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__resize_function__AdasisMap__intersection_roads  // resize(index) function pointer
  },
  {
    "position_match_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, position_match_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heterogeneous_match_link",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, heterogeneous_match_link),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_guide_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, route_guide_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "j6m_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__AdasisMap, j6m_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "AdasisMap",  // message name
  24,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__AdasisMap),
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, AdasisMap)() {
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpPosition)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpMetaData)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpSegment)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpStub)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpProfileShort)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, EhpProfileLong)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Link)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Node)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeaturePointById)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LANE)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, StopLine)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, IntersectionRoadNode)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, IntersectionRoad)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, PositionMatchLink)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, HeterogeneousMatchLink)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RouteGuideResponse)();
  deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mData)();
  if (!deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__AdasisMap__rosidl_typesupport_introspection_c__AdasisMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
