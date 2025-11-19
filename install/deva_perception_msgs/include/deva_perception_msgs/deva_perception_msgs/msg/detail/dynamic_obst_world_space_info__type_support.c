// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__functions.h"
#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__struct.h"


// Include directives for member types
// Member `poly`
// Member `poly_vcs`
#include "deva_perception_msgs/msg/polygon.h"
// Member `poly`
// Member `poly_vcs`
#include "deva_perception_msgs/msg/detail/polygon__rosidl_typesupport_introspection_c.h"
// Member `position`
// Member `vel`
// Member `vel_abs_world`
// Member `acc`
// Member `acc_abs_world`
#include "geometry_msgs/msg/point.h"
// Member `position`
// Member `vel`
// Member `vel_abs_world`
// Member `acc`
// Member `acc_abs_world`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `sigma_vel`
// Member `sigma_position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__init(message_memory);
}

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__fini(message_memory);
}

size_t deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__size_function__DynamicObstWorldSpaceInfo__sigma_vel(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_vel(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_vel(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__fetch_function__DynamicObstWorldSpaceInfo__sigma_vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_vel(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__assign_function__DynamicObstWorldSpaceInfo__sigma_vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_vel(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__resize_function__DynamicObstWorldSpaceInfo__sigma_vel(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__size_function__DynamicObstWorldSpaceInfo__sigma_position(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__fetch_function__DynamicObstWorldSpaceInfo__sigma_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__assign_function__DynamicObstWorldSpaceInfo__sigma_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__resize_function__DynamicObstWorldSpaceInfo__sigma_position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[23] = {
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, yaw),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, poly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poly_vcs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, poly_vcs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ttc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, ttc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_abs_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, vel_abs_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_abs_world",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, acc_abs_world),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, motion_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sigma_vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_vel),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__size_function__DynamicObstWorldSpaceInfo__sigma_vel,  // size() function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_vel,  // get_const(index) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_vel,  // get(index) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__fetch_function__DynamicObstWorldSpaceInfo__sigma_vel,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__assign_function__DynamicObstWorldSpaceInfo__sigma_vel,  // assign(index, value) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__resize_function__DynamicObstWorldSpaceInfo__sigma_vel  // resize(index) function pointer
  },
  {
    "sigma_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sigma_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sigma_height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sigma_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sigma_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_position),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__size_function__DynamicObstWorldSpaceInfo__sigma_position,  // size() function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_const_function__DynamicObstWorldSpaceInfo__sigma_position,  // get_const(index) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__get_function__DynamicObstWorldSpaceInfo__sigma_position,  // get(index) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__fetch_function__DynamicObstWorldSpaceInfo__sigma_position,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__assign_function__DynamicObstWorldSpaceInfo__sigma_position,  // assign(index, value) function pointer
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__resize_function__DynamicObstWorldSpaceInfo__sigma_position  // resize(index) function pointer
  },
  {
    "sigma_yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, sigma_yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_assignment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, lane_assignment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cipv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo, cipv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "DynamicObstWorldSpaceInfo",  // message name
  23,  // number of fields
  sizeof(deva_perception_msgs__msg__DynamicObstWorldSpaceInfo),
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array,  // message members
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, DynamicObstWorldSpaceInfo)() {
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Polygon)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Polygon)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__DynamicObstWorldSpaceInfo__rosidl_typesupport_introspection_c__DynamicObstWorldSpaceInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
