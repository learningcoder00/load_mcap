// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.h"


// Include directives for member types
// Member `j6m_links`
#include "deva_gaode_routing_msgs/msg/j6m_link.h"
// Member `j6m_links`
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__rosidl_typesupport_introspection_c.h"
// Member `j6m_intersections`
#include "deva_gaode_routing_msgs/msg/j6m_intersection.h"
// Member `j6m_intersections`
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__rosidl_typesupport_introspection_c.h"
// Member `j6m_lanes`
#include "deva_gaode_routing_msgs/msg/j6m_lane.h"
// Member `j6m_lanes`
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__rosidl_typesupport_introspection_c.h"
// Member `j6m_lane_markings`
#include "deva_gaode_routing_msgs/msg/j6m_lane_marking.h"
// Member `j6m_lane_markings`
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__rosidl_typesupport_introspection_c.h"
// Member `j6m_road_objects`
#include "deva_gaode_routing_msgs/msg/j6m_road_object.h"
// Member `j6m_road_objects`
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__J6mData__init(message_memory);
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__J6mData__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_links(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mLink__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLink__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_links(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mLink__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_links(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mLink__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mLink * item =
    ((const deva_gaode_routing_msgs__msg__J6mLink *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_links(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mLink * value =
    (deva_gaode_routing_msgs__msg__J6mLink *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mLink * item =
    ((deva_gaode_routing_msgs__msg__J6mLink *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_links(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mLink * value =
    (const deva_gaode_routing_msgs__msg__J6mLink *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_links(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mLink__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLink__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_intersections(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_intersections(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_intersections(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_intersections(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mIntersection * item =
    ((const deva_gaode_routing_msgs__msg__J6mIntersection *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_intersections(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mIntersection * value =
    (deva_gaode_routing_msgs__msg__J6mIntersection *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_intersections(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mIntersection * item =
    ((deva_gaode_routing_msgs__msg__J6mIntersection *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_intersections(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mIntersection * value =
    (const deva_gaode_routing_msgs__msg__J6mIntersection *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_intersections(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mIntersection__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mIntersection__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mLane__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLane__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mLane__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mLane__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mLane * item =
    ((const deva_gaode_routing_msgs__msg__J6mLane *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mLane * value =
    (deva_gaode_routing_msgs__msg__J6mLane *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mLane * item =
    ((deva_gaode_routing_msgs__msg__J6mLane *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mLane * value =
    (const deva_gaode_routing_msgs__msg__J6mLane *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mLane__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLane__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mLane__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mLane__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_lane_markings(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lane_markings(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lane_markings(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_lane_markings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mLaneMarking * item =
    ((const deva_gaode_routing_msgs__msg__J6mLaneMarking *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lane_markings(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mLaneMarking * value =
    (deva_gaode_routing_msgs__msg__J6mLaneMarking *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_lane_markings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mLaneMarking * item =
    ((deva_gaode_routing_msgs__msg__J6mLaneMarking *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lane_markings(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mLaneMarking * value =
    (const deva_gaode_routing_msgs__msg__J6mLaneMarking *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_lane_markings(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mLaneMarking__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_road_objects(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_road_objects(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * member =
    (const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_road_objects(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_road_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__J6mRoadObject * item =
    ((const deva_gaode_routing_msgs__msg__J6mRoadObject *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_road_objects(untyped_member, index));
  deva_gaode_routing_msgs__msg__J6mRoadObject * value =
    (deva_gaode_routing_msgs__msg__J6mRoadObject *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_road_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__J6mRoadObject * item =
    ((deva_gaode_routing_msgs__msg__J6mRoadObject *)
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_road_objects(untyped_member, index));
  const deva_gaode_routing_msgs__msg__J6mRoadObject * value =
    (const deva_gaode_routing_msgs__msg__J6mRoadObject *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_road_objects(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * member =
    (deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[5] = {
  {
    "j6m_links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mData, j6m_links),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_links,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_links,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_links,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_links,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_links,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_links  // resize(index) function pointer
  },
  {
    "j6m_intersections",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mData, j6m_intersections),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_intersections,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_intersections,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_intersections,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_intersections,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_intersections,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_intersections  // resize(index) function pointer
  },
  {
    "j6m_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mData, j6m_lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_lanes  // resize(index) function pointer
  },
  {
    "j6m_lane_markings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mData, j6m_lane_markings),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_lane_markings,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_lane_markings,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_lane_markings,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_lane_markings,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_lane_markings,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_lane_markings  // resize(index) function pointer
  },
  {
    "j6m_road_objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mData, j6m_road_objects),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__size_function__J6mData__j6m_road_objects,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_const_function__J6mData__j6m_road_objects,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__get_function__J6mData__j6m_road_objects,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__fetch_function__J6mData__j6m_road_objects,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__assign_function__J6mData__j6m_road_objects,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__resize_function__J6mData__j6m_road_objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "J6mData",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__J6mData),
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mData)() {
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mLink)();
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mIntersection)();
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mLane)();
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mLaneMarking)();
  deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mRoadObject)();
  if (!deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__J6mData__rosidl_typesupport_introspection_c__J6mData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
