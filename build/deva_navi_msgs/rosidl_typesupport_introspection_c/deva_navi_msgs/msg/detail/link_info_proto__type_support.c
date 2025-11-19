// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/link_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.h"


// Include directives for member types
// Member `points`
#include "deva_navi_msgs/msg/coord3_d_double_proto.h"
// Member `points`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__rosidl_typesupport_introspection_c.h"
// Member `gantry_infos`
#include "deva_navi_msgs/msg/gantry_info_proto.h"
// Member `gantry_infos`
#include "deva_navi_msgs/msg/detail/gantry_info_proto__rosidl_typesupport_introspection_c.h"
// Member `cameras`
#include "deva_navi_msgs/msg/navi_camera_proto.h"
// Member `cameras`
#include "deva_navi_msgs/msg/detail/navi_camera_proto__rosidl_typesupport_introspection_c.h"
// Member `road_name`
// Member `service_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `road_facilities`
#include "deva_navi_msgs/msg/road_facility_proto.h"
// Member `road_facilities`
#include "deva_navi_msgs/msg/detail/road_facility_proto__rosidl_typesupport_introspection_c.h"
// Member `turn_infos`
#include "deva_navi_msgs/msg/turn_info_proto.h"
// Member `turn_infos`
#include "deva_navi_msgs/msg/detail/turn_info_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__LinkInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__LinkInfoProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__points(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__points(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__points(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((const deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__points(untyped_member, index));
  deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__points(untyped_member, index));
  const deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (const deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__points(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(member);
  return deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__gantry_infos(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__GantryInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__GantryInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__gantry_infos(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__GantryInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__GantryInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__gantry_infos(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__GantryInfoProto__Sequence * member =
    (deva_navi_msgs__msg__GantryInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__gantry_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__GantryInfoProto * item =
    ((const deva_navi_msgs__msg__GantryInfoProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__gantry_infos(untyped_member, index));
  deva_navi_msgs__msg__GantryInfoProto * value =
    (deva_navi_msgs__msg__GantryInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__gantry_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__GantryInfoProto * item =
    ((deva_navi_msgs__msg__GantryInfoProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__gantry_infos(untyped_member, index));
  const deva_navi_msgs__msg__GantryInfoProto * value =
    (const deva_navi_msgs__msg__GantryInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__gantry_infos(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__GantryInfoProto__Sequence * member =
    (deva_navi_msgs__msg__GantryInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__GantryInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__GantryInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__cameras(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__NaviCameraProto__Sequence * member =
    (const deva_navi_msgs__msg__NaviCameraProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__cameras(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__NaviCameraProto__Sequence * member =
    (const deva_navi_msgs__msg__NaviCameraProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__cameras(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__NaviCameraProto__Sequence * member =
    (deva_navi_msgs__msg__NaviCameraProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__NaviCameraProto * item =
    ((const deva_navi_msgs__msg__NaviCameraProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__cameras(untyped_member, index));
  deva_navi_msgs__msg__NaviCameraProto * value =
    (deva_navi_msgs__msg__NaviCameraProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__NaviCameraProto * item =
    ((deva_navi_msgs__msg__NaviCameraProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__cameras(untyped_member, index));
  const deva_navi_msgs__msg__NaviCameraProto * value =
    (const deva_navi_msgs__msg__NaviCameraProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__cameras(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__NaviCameraProto__Sequence * member =
    (deva_navi_msgs__msg__NaviCameraProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__NaviCameraProto__Sequence__fini(member);
  return deva_navi_msgs__msg__NaviCameraProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__road_facilities(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__RoadFacilityProto__Sequence * member =
    (const deva_navi_msgs__msg__RoadFacilityProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__road_facilities(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__RoadFacilityProto__Sequence * member =
    (const deva_navi_msgs__msg__RoadFacilityProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__road_facilities(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__RoadFacilityProto__Sequence * member =
    (deva_navi_msgs__msg__RoadFacilityProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__road_facilities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__RoadFacilityProto * item =
    ((const deva_navi_msgs__msg__RoadFacilityProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__road_facilities(untyped_member, index));
  deva_navi_msgs__msg__RoadFacilityProto * value =
    (deva_navi_msgs__msg__RoadFacilityProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__road_facilities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__RoadFacilityProto * item =
    ((deva_navi_msgs__msg__RoadFacilityProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__road_facilities(untyped_member, index));
  const deva_navi_msgs__msg__RoadFacilityProto * value =
    (const deva_navi_msgs__msg__RoadFacilityProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__road_facilities(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__RoadFacilityProto__Sequence * member =
    (deva_navi_msgs__msg__RoadFacilityProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__RoadFacilityProto__Sequence__fini(member);
  return deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__turn_infos(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__TurnInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__TurnInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__turn_infos(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__TurnInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__TurnInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__turn_infos(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__TurnInfoProto__Sequence * member =
    (deva_navi_msgs__msg__TurnInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__turn_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__TurnInfoProto * item =
    ((const deva_navi_msgs__msg__TurnInfoProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__turn_infos(untyped_member, index));
  deva_navi_msgs__msg__TurnInfoProto * value =
    (deva_navi_msgs__msg__TurnInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__turn_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__TurnInfoProto * item =
    ((deva_navi_msgs__msg__TurnInfoProto *)
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__turn_infos(untyped_member, index));
  const deva_navi_msgs__msg__TurnInfoProto * value =
    (const deva_navi_msgs__msg__TurnInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__turn_infos(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__TurnInfoProto__Sequence * member =
    (deva_navi_msgs__msg__TurnInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__TurnInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__TurnInfoProto__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[38] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, points),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__points,  // size() function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__points,  // get_const(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__points,  // get(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__points,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__points,  // assign(index, value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__points  // resize(index) function pointer
  },
  {
    "gantry_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, gantry_infos),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__gantry_infos,  // size() function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__gantry_infos,  // get_const(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__gantry_infos,  // get(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__gantry_infos,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__gantry_infos,  // assign(index, value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__gantry_infos  // resize(index) function pointer
  },
  {
    "cameras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, cameras),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__cameras,  // size() function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__cameras,  // get_const(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__cameras,  // get(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__cameras,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__cameras,  // assign(index, value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__cameras  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "related_path_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, related_path_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "related_segment_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, related_segment_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, link_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "travel_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, travel_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_travel_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, static_travel_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, road_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_facilities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, road_facilities),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__road_facilities,  // size() function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__road_facilities,  // get_const(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__road_facilities,  // get(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__road_facilities,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__road_facilities,  // assign(index, value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__road_facilities  // resize(index) function pointer
  },
  {
    "topo_id_64",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, topo_id_64),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "urid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, urid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, link_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "main_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, main_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "assistant_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, assistant_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adcode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, adcode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, link_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "formway",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, formway),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, road_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, road_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ownership",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, ownership),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_toll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_toll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_over_head",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_over_head),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_parallel_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, has_parallel_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_multi_out",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, has_multi_out),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_traffic_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, has_traffic_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_mix_fork",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, has_mix_fork),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_at_service",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_at_service),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_restricting",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_restricting),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, limit_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, turn_infos),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__size_function__LinkInfoProto__turn_infos,  // size() function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_const_function__LinkInfoProto__turn_infos,  // get_const(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__get_function__LinkInfoProto__turn_infos,  // get(index) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__fetch_function__LinkInfoProto__turn_infos,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__assign_function__LinkInfoProto__turn_infos,  // assign(index, value) function pointer
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__resize_function__LinkInfoProto__turn_infos  // resize(index) function pointer
  },
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inner_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, inner_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_parking_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, is_parking_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LinkInfoProto, traffic_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "LinkInfoProto",  // message name
  38,  // number of fields
  sizeof(deva_navi_msgs__msg__LinkInfoProto),
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, LinkInfoProto)() {
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, GantryInfoProto)();
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, NaviCameraProto)();
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, RoadFacilityProto)();
  deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_member_array[33].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, TurnInfoProto)();
  if (!deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__LinkInfoProto__rosidl_typesupport_introspection_c__LinkInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
