// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/Lanev2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/lanev2__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/lanev2__functions.h"
#include "deva_perception_msgs/msg/detail/lanev2__struct.h"


// Include directives for member types
// Member `imagepoints`
// Member `rv_fork_point`
#include "deva_common_msgs/msg/point2d.h"
// Member `imagepoints`
// Member `rv_fork_point`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"
// Member `waypoints`
// Member `waypoints_extend`
// Member `bev_fork_point`
#include "geometry_msgs/msg/point.h"
// Member `waypoints`
// Member `waypoints_extend`
// Member `bev_fork_point`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `lane_property_segment`
#include "deva_perception_msgs/msg/lane_property_segment.h"
// Member `lane_property_segment`
#include "deva_perception_msgs/msg/detail/lane_property_segment__rosidl_typesupport_introspection_c.h"
// Member `lane_xy`
// Member `lane_xz`
#include "deva_common_msgs/msg/line2d.h"
// Member `lane_xy`
// Member `lane_xz`
#include "deva_common_msgs/msg/detail/line2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__Lanev2__init(message_memory);
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__Lanev2__fini(message_memory);
}

size_t deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__imagepoints(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__imagepoints(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__imagepoints(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__imagepoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__imagepoints(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__imagepoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__imagepoints(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__imagepoints(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__waypoints_extend(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints_extend(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints_extend(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__waypoints_extend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints_extend(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__waypoints_extend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints_extend(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__waypoints_extend(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[21] = {
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, left_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, right_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fork_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, fork_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imagepoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, imagepoints),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__imagepoints,  // size() function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__imagepoints,  // get_const(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__imagepoints,  // get(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__imagepoints,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__imagepoints,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__imagepoints  // resize(index) function pointer
  },
  {
    "v_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, v_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, v_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, waypoints),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__waypoints,  // size() function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints,  // get_const(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints,  // get(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__waypoints,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__waypoints,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__waypoints  // resize(index) function pointer
  },
  {
    "x_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, x_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, x_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoints_extend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, waypoints_extend),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__size_function__Lanev2__waypoints_extend,  // size() function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_const_function__Lanev2__waypoints_extend,  // get_const(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__get_function__Lanev2__waypoints_extend,  // get(index) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__fetch_function__Lanev2__waypoints_extend,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__assign_function__Lanev2__waypoints_extend,  // assign(index, value) function pointer
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__resize_function__Lanev2__waypoints_extend  // resize(index) function pointer
  },
  {
    "x_min_extend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, x_min_extend),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_max_extend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, x_max_extend),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_property",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, lane_property),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_property_segment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, lane_property_segment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fork_property",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, fork_property),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rv_fork_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, rv_fork_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bev_fork_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, bev_fork_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, lane_xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_xz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__Lanev2, lane_xz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "Lanev2",  // message name
  21,  // number of fields
  sizeof(deva_perception_msgs__msg__Lanev2),
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array,  // message members
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Lanev2)() {
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, LanePropertySegment)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Line2d)();
  deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Line2d)();
  if (!deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__Lanev2__rosidl_typesupport_introspection_c__Lanev2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
