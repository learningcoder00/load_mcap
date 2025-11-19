// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/avp_sub_lane__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/avp_sub_lane__functions.h"
#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.h"


// Include directives for member types
// Member `lane_id`
// Member `successor_lane_ids`
// Member `left_lane_ids`
// Member `right_lane_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `ref_line`
#include "deva_map_msgs/msg/path_point.h"
// Member `ref_line`
#include "deva_map_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/avp_boundary.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/detail/avp_boundary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__AvpSubLane__init(message_memory);
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_fini_function(void * message_memory)
{
  deva_map_msgs__msg__AvpSubLane__fini(message_memory);
}

size_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__ref_line(
  const void * untyped_member)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__ref_line(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__ref_line(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__ref_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__PathPoint * item =
    ((const deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__ref_line(untyped_member, index));
  deva_map_msgs__msg__PathPoint * value =
    (deva_map_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__ref_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__PathPoint * item =
    ((deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__ref_line(untyped_member, index));
  const deva_map_msgs__msg__PathPoint * value =
    (const deva_map_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__ref_line(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_map_msgs__msg__PathPoint__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__drivable_boundary(
  const void * untyped_member)
{
  const deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (const deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__drivable_boundary(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (const deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__drivable_boundary(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__drivable_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__AvpBoundary * item =
    ((const deva_map_msgs__msg__AvpBoundary *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__drivable_boundary(untyped_member, index));
  deva_map_msgs__msg__AvpBoundary * value =
    (deva_map_msgs__msg__AvpBoundary *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__drivable_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__AvpBoundary * item =
    ((deva_map_msgs__msg__AvpBoundary *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__drivable_boundary(untyped_member, index));
  const deva_map_msgs__msg__AvpBoundary * value =
    (const deva_map_msgs__msg__AvpBoundary *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__drivable_boundary(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  deva_map_msgs__msg__AvpBoundary__Sequence__fini(member);
  return deva_map_msgs__msg__AvpBoundary__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__successor_lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__successor_lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__successor_lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__successor_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__successor_lane_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__successor_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__successor_lane_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__successor_lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__left_lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__left_lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__left_lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__left_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__left_lane_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__left_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__left_lane_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__left_lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__right_lane_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__right_lane_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__right_lane_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__right_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__right_lane_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__right_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__right_lane_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__right_lane_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_member_array[6] = {
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, ref_line),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__ref_line,  // size() function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__ref_line,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__ref_line,  // get(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__ref_line,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__ref_line,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__ref_line  // resize(index) function pointer
  },
  {
    "drivable_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, drivable_boundary),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__drivable_boundary,  // size() function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__drivable_boundary,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__drivable_boundary,  // get(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__drivable_boundary,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__drivable_boundary,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__drivable_boundary  // resize(index) function pointer
  },
  {
    "successor_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, successor_lane_ids),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__successor_lane_ids,  // size() function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__successor_lane_ids,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__successor_lane_ids,  // get(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__successor_lane_ids,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__successor_lane_ids,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__successor_lane_ids  // resize(index) function pointer
  },
  {
    "left_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, left_lane_ids),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__left_lane_ids,  // size() function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__left_lane_ids,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__left_lane_ids,  // get(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__left_lane_ids,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__left_lane_ids,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__left_lane_ids  // resize(index) function pointer
  },
  {
    "right_lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpSubLane, right_lane_ids),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__size_function__AvpSubLane__right_lane_ids,  // size() function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_const_function__AvpSubLane__right_lane_ids,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__get_function__AvpSubLane__right_lane_ids,  // get(index) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__fetch_function__AvpSubLane__right_lane_ids,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__assign_function__AvpSubLane__right_lane_ids,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__resize_function__AvpSubLane__right_lane_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "AvpSubLane",  // message name
  6,  // number of fields
  sizeof(deva_map_msgs__msg__AvpSubLane),
  deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_member_array,  // message members
  deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpSubLane)() {
  deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, PathPoint)();
  deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpBoundary)();
  if (!deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__AvpSubLane__rosidl_typesupport_introspection_c__AvpSubLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
