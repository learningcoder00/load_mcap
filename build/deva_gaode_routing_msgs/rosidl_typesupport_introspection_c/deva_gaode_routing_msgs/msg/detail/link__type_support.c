// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/link__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/link__struct.h"


// Include directives for member types
// Member `link_attribute`
#include "deva_gaode_routing_msgs/msg/link_attribute.h"
// Member `link_attribute`
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__rosidl_typesupport_introspection_c.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/coordinate.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__rosidl_typesupport_introspection_c.h"
// Member `topology`
#include "deva_gaode_routing_msgs/msg/topology.h"
// Member `topology`
#include "deva_gaode_routing_msgs/msg/detail/topology__rosidl_typesupport_introspection_c.h"
// Member `link_curvature`
#include "deva_gaode_routing_msgs/msg/link_curvature.h"
// Member `link_curvature`
#include "deva_gaode_routing_msgs/msg/detail/link_curvature__rosidl_typesupport_introspection_c.h"
// Member `guidance`
#include "deva_gaode_routing_msgs/msg/guidance.h"
// Member `guidance`
#include "deva_gaode_routing_msgs/msg/detail/guidance__rosidl_typesupport_introspection_c.h"
// Member `start_id`
// Member `end_id`
#include "deva_gaode_routing_msgs/msg/node_id_type.h"
// Member `start_id`
// Member `end_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__rosidl_typesupport_introspection_c.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `start`
// Member `end`
#include "deva_gaode_routing_msgs/msg/node.h"
// Member `start`
// Member `end`
#include "deva_gaode_routing_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/feature_point.h"
// Member `feature_points`
#include "deva_gaode_routing_msgs/msg/detail/feature_point__rosidl_typesupport_introspection_c.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/lane_by_id.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__rosidl_typesupport_introspection_c.h"
// Member `j6m_intersection_entry_infos`
#include "deva_gaode_routing_msgs/msg/j6m_intersection_entry_info.h"
// Member `j6m_intersection_entry_infos`
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__rosidl_typesupport_introspection_c.h"
// Member `j6m_lane_ids`
// Member `j6m_link_ids`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `j6m_lane_ids`
// Member `j6m_link_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__Link__init(message_memory);
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__Link__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__coordinate(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__coordinate(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__coordinate(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__coordinate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Coordinate * item =
    ((const deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__coordinate(untyped_member, index));
  deva_gaode_routing_msgs__msg__Coordinate * value =
    (deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__coordinate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Coordinate * item =
    ((deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__coordinate(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Coordinate * value =
    (const deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__coordinate(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__guidance(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__guidance(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__guidance(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__guidance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Guidance * item =
    ((const deva_gaode_routing_msgs__msg__Guidance *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__guidance(untyped_member, index));
  deva_gaode_routing_msgs__msg__Guidance * value =
    (deva_gaode_routing_msgs__msg__Guidance *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__guidance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Guidance * item =
    ((deva_gaode_routing_msgs__msg__Guidance *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__guidance(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Guidance * value =
    (const deva_gaode_routing_msgs__msg__Guidance *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__guidance(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Guidance__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__feature_point_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_point_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_point_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__feature_point_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_point_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__feature_point_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_point_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__feature_point_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__feature_points(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_points(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_points(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeaturePoint * item =
    ((const deva_gaode_routing_msgs__msg__FeaturePoint *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_points(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeaturePoint * value =
    (deva_gaode_routing_msgs__msg__FeaturePoint *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeaturePoint * item =
    ((deva_gaode_routing_msgs__msg__FeaturePoint *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_points(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeaturePoint * value =
    (const deva_gaode_routing_msgs__msg__FeaturePoint *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__feature_points(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeaturePoint__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LaneById__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneById__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LaneById__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneById__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LaneById__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneById__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LaneById * item =
    ((const deva_gaode_routing_msgs__msg__LaneById *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__LaneById * value =
    (deva_gaode_routing_msgs__msg__LaneById *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LaneById * item =
    ((deva_gaode_routing_msgs__msg__LaneById *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LaneById * value =
    (const deva_gaode_routing_msgs__msg__LaneById *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LaneById__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneById__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LaneById__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LaneById__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_intersection_entry_infos(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_intersection_entry_infos(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_intersection_entry_infos(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_intersection_entry_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * item =
    ((const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_intersection_entry_infos(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * value =
    (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_intersection_entry_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * item =
    ((deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_intersection_entry_infos(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * value =
    (const deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_intersection_entry_infos(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_lane_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_lane_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_lane_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((const deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_lane_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__LinkIDType * value =
    (deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_lane_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LinkIDType * value =
    (const deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_lane_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_link_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_link_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_link_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_link_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((const deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_link_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__LinkIDType * value =
    (deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_link_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_link_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LinkIDType * value =
    (const deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_link_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[16] = {
  {
    "link_attribute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, link_attribute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, coordinate),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__coordinate,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__coordinate,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__coordinate,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__coordinate,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__coordinate,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__coordinate  // resize(index) function pointer
  },
  {
    "raw_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, raw_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "topology",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, topology),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_curvature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, link_curvature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guidance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, guidance),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__guidance,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__guidance,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__guidance,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__guidance,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__guidance,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__guidance  // resize(index) function pointer
  },
  {
    "start_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, start_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, end_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_point_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, feature_point_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__feature_point_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_point_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_point_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__feature_point_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__feature_point_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__feature_point_ids  // resize(index) function pointer
  },
  {
    "start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, feature_points),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__feature_points,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__feature_points,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__feature_points,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__feature_points,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__feature_points,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__feature_points  // resize(index) function pointer
  },
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__lanes  // resize(index) function pointer
  },
  {
    "j6m_intersection_entry_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, j6m_intersection_entry_infos),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_intersection_entry_infos,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_intersection_entry_infos,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_intersection_entry_infos,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_intersection_entry_infos,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_intersection_entry_infos,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_intersection_entry_infos  // resize(index) function pointer
  },
  {
    "j6m_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, j6m_lane_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_lane_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_lane_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_lane_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_lane_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_lane_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_lane_ids  // resize(index) function pointer
  },
  {
    "j6m_link_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Link, j6m_link_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__size_function__Link__j6m_link_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_const_function__Link__j6m_link_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__get_function__Link__j6m_link_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__fetch_function__Link__j6m_link_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__assign_function__Link__j6m_link_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__resize_function__Link__j6m_link_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "Link",  // message name
  16,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__Link),
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Link)() {
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkAttribute)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Coordinate)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Topology)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkCurvature)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Guidance)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NodeIDType)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NodeIDType)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Node)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Node)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeaturePoint)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneById)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mIntersectionEntryInfo)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  if (!deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__Link__rosidl_typesupport_introspection_c__Link_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
