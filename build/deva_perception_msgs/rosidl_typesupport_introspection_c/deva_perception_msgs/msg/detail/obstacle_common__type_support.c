// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/obstacle_common__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"


// Include directives for member types
// Member `obs_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
// Member `dims`
#include "geometry_msgs/msg/point.h"
// Member `points`
// Member `dims`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "deva_localization_msgs/msg/pose.h"
// Member `pose`
#include "deva_localization_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `bounding_box`
#include "deva_common_msgs/msg/bounding_box.h"
// Member `bounding_box`
#include "deva_common_msgs/msg/detail/bounding_box__rosidl_typesupport_introspection_c.h"
// Member `associated_infos`
#include "deva_perception_msgs/msg/associated_info.h"
// Member `associated_infos`
#include "deva_perception_msgs/msg/detail/associated_info__rosidl_typesupport_introspection_c.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/extra_info.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__rosidl_typesupport_introspection_c.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/point2d.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__ObstacleCommon__init(message_memory);
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__ObstacleCommon__fini(message_memory);
}

size_t deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__associated_infos(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__AssociatedInfo__Sequence * member =
    (const deva_perception_msgs__msg__AssociatedInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__associated_infos(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__AssociatedInfo__Sequence * member =
    (const deva_perception_msgs__msg__AssociatedInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__associated_infos(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__AssociatedInfo__Sequence * member =
    (deva_perception_msgs__msg__AssociatedInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__associated_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__AssociatedInfo * item =
    ((const deva_perception_msgs__msg__AssociatedInfo *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__associated_infos(untyped_member, index));
  deva_perception_msgs__msg__AssociatedInfo * value =
    (deva_perception_msgs__msg__AssociatedInfo *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__associated_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__AssociatedInfo * item =
    ((deva_perception_msgs__msg__AssociatedInfo *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__associated_infos(untyped_member, index));
  const deva_perception_msgs__msg__AssociatedInfo * value =
    (const deva_perception_msgs__msg__AssociatedInfo *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__associated_infos(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__AssociatedInfo__Sequence * member =
    (deva_perception_msgs__msg__AssociatedInfo__Sequence *)(untyped_member);
  deva_perception_msgs__msg__AssociatedInfo__Sequence__fini(member);
  return deva_perception_msgs__msg__AssociatedInfo__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__extra_infos(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__extra_infos(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__extra_infos(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__extra_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__ExtraInfo * item =
    ((const deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__extra_infos(untyped_member, index));
  deva_perception_msgs__msg__ExtraInfo * value =
    (deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__extra_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__ExtraInfo * item =
    ((deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__extra_infos(untyped_member, index));
  const deva_perception_msgs__msg__ExtraInfo * value =
    (const deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__extra_infos(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(member);
  return deva_perception_msgs__msg__ExtraInfo__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__pixel_points(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__pixel_points(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__pixel_points(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__pixel_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__pixel_points(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__pixel_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__pixel_points(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__pixel_points(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[15] = {
  {
    "obs_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, obs_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__points,  // size() function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__points,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__points,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__points  // resize(index) function pointer
  },
  {
    "obs_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, obs_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dims",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, dims),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "track_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, track_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, tracking_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, bounding_box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "miss_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, miss_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_stable_tracked",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, is_stable_tracked),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_parking_slot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, in_parking_slot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "associated_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, associated_infos),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__associated_infos,  // size() function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__associated_infos,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__associated_infos,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__associated_infos,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__associated_infos,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__associated_infos  // resize(index) function pointer
  },
  {
    "extra_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, extra_infos),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__extra_infos,  // size() function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__extra_infos,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__extra_infos,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__extra_infos,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__extra_infos,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__extra_infos  // resize(index) function pointer
  },
  {
    "pixel_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__ObstacleCommon, pixel_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__size_function__ObstacleCommon__pixel_points,  // size() function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_const_function__ObstacleCommon__pixel_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__get_function__ObstacleCommon__pixel_points,  // get(index) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__fetch_function__ObstacleCommon__pixel_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__assign_function__ObstacleCommon__pixel_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__resize_function__ObstacleCommon__pixel_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "ObstacleCommon",  // message name
  15,  // number of fields
  sizeof(deva_perception_msgs__msg__ObstacleCommon),
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array,  // message members
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ObstacleCommon)() {
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_localization_msgs, msg, Pose)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, BoundingBox)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, AssociatedInfo)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ExtraInfo)();
  deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  if (!deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__ObstacleCommon__rosidl_typesupport_introspection_c__ObstacleCommon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
