// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/segment_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.h"


// Include directives for member types
// Member `link_infos`
#include "deva_navi_msgs/msg/link_info_proto.h"
// Member `link_infos`
#include "deva_navi_msgs/msg/detail/link_info_proto__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "deva_navi_msgs/msg/coord3_d_double_proto.h"
// Member `points`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__rosidl_typesupport_introspection_c.h"
// Member `toll_road_name`
// Member `guideboard_name`
// Member `exit_name`
// Member `crossing_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `maneuver_icons`
#include "deva_navi_msgs/msg/icon_road_proto.h"
// Member `maneuver_icons`
#include "deva_navi_msgs/msg/detail/icon_road_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__SegmentInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__SegmentInfoProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__link_infos(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__LinkInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__LinkInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__link_infos(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__LinkInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__LinkInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__link_infos(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__LinkInfoProto__Sequence * member =
    (deva_navi_msgs__msg__LinkInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__link_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__LinkInfoProto * item =
    ((const deva_navi_msgs__msg__LinkInfoProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__link_infos(untyped_member, index));
  deva_navi_msgs__msg__LinkInfoProto * value =
    (deva_navi_msgs__msg__LinkInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__link_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__LinkInfoProto * item =
    ((deva_navi_msgs__msg__LinkInfoProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__link_infos(untyped_member, index));
  const deva_navi_msgs__msg__LinkInfoProto * value =
    (const deva_navi_msgs__msg__LinkInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__link_infos(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__LinkInfoProto__Sequence * member =
    (deva_navi_msgs__msg__LinkInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__LinkInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__LinkInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__points(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__points(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__points(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((const deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__points(untyped_member, index));
  deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__points(untyped_member, index));
  const deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (const deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__points(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(member);
  return deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__maneuver_icons(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__IconRoadProto__Sequence * member =
    (const deva_navi_msgs__msg__IconRoadProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__maneuver_icons(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__IconRoadProto__Sequence * member =
    (const deva_navi_msgs__msg__IconRoadProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__maneuver_icons(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__IconRoadProto__Sequence * member =
    (deva_navi_msgs__msg__IconRoadProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__maneuver_icons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__IconRoadProto * item =
    ((const deva_navi_msgs__msg__IconRoadProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__maneuver_icons(untyped_member, index));
  deva_navi_msgs__msg__IconRoadProto * value =
    (deva_navi_msgs__msg__IconRoadProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__maneuver_icons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__IconRoadProto * item =
    ((deva_navi_msgs__msg__IconRoadProto *)
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__maneuver_icons(untyped_member, index));
  const deva_navi_msgs__msg__IconRoadProto * value =
    (const deva_navi_msgs__msg__IconRoadProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__maneuver_icons(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__IconRoadProto__Sequence * member =
    (deva_navi_msgs__msg__IconRoadProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__IconRoadProto__Sequence__fini(member);
  return deva_navi_msgs__msg__IconRoadProto__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_member_array[20] = {
  {
    "link_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, link_infos),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__link_infos,  // size() function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__link_infos,  // get_const(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__link_infos,  // get(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__link_infos,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__link_infos,  // assign(index, value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__link_infos  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, points),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__points,  // size() function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__points,  // get_const(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__points,  // get(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__points,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__points,  // assign(index, value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__points  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, is_valid),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, related_path_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "segment_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, segment_index),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, main_action),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, assistant_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, slope),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toll_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, toll_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toll_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, toll_dist),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, travel_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traffic_light_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, traffic_light_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_end_of_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, is_end_of_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toll_road_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, toll_road_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guideboard_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, guideboard_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exit_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, exit_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "crossing_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, crossing_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_icons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, maneuver_icons),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__size_function__SegmentInfoProto__maneuver_icons,  // size() function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_const_function__SegmentInfoProto__maneuver_icons,  // get_const(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__get_function__SegmentInfoProto__maneuver_icons,  // get(index) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__fetch_function__SegmentInfoProto__maneuver_icons,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__assign_function__SegmentInfoProto__maneuver_icons,  // assign(index, value) function pointer
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__resize_function__SegmentInfoProto__maneuver_icons  // resize(index) function pointer
  },
  {
    "uturn_and_arrivedest",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__SegmentInfoProto, uturn_and_arrivedest),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "SegmentInfoProto",  // message name
  20,  // number of fields
  sizeof(deva_navi_msgs__msg__SegmentInfoProto),
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, SegmentInfoProto)() {
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, LinkInfoProto)();
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, IconRoadProto)();
  if (!deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__SegmentInfoProto__rosidl_typesupport_introspection_c__SegmentInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
