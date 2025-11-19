// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/route__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/route__struct.h"


// Include directives for member types
// Member `route_points`
#include "deva_gaode_routing_msgs/msg/coordinate.h"
// Member `route_points`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__rosidl_typesupport_introspection_c.h"
// Member `rg_intersection_result`
#include "deva_gaode_routing_msgs/msg/rg_intersection_result.h"
// Member `rg_intersection_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__rosidl_typesupport_introspection_c.h"
// Member `rg_lane_info_result`
#include "deva_gaode_routing_msgs/msg/rg_lane_info_result.h"
// Member `rg_lane_info_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__rosidl_typesupport_introspection_c.h"
// Member `rg_red_light_result`
#include "deva_gaode_routing_msgs/msg/rg_red_light_result.h"
// Member `rg_red_light_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__rosidl_typesupport_introspection_c.h"
// Member `rg_tips_result`
#include "deva_gaode_routing_msgs/msg/rgv_tips_point_result.h"
// Member `rg_tips_result`
#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__Route__init(message_memory);
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__Route__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_points(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Coordinate * item =
    ((const deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points(untyped_member, index));
  deva_gaode_routing_msgs__msg__Coordinate * value =
    (deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Coordinate * item =
    ((deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Coordinate * value =
    (const deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_points(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_intersection_result(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_intersection_result(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_intersection_result(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_intersection_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RGIntersectionResult * item =
    ((const deva_gaode_routing_msgs__msg__RGIntersectionResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_intersection_result(untyped_member, index));
  deva_gaode_routing_msgs__msg__RGIntersectionResult * value =
    (deva_gaode_routing_msgs__msg__RGIntersectionResult *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_intersection_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RGIntersectionResult * item =
    ((deva_gaode_routing_msgs__msg__RGIntersectionResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_intersection_result(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RGIntersectionResult * value =
    (const deva_gaode_routing_msgs__msg__RGIntersectionResult *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_intersection_result(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_lane_info_result(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_lane_info_result(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_lane_info_result(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_lane_info_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult * item =
    ((const deva_gaode_routing_msgs__msg__RGLaneInfoResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_lane_info_result(untyped_member, index));
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * value =
    (deva_gaode_routing_msgs__msg__RGLaneInfoResult *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_lane_info_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RGLaneInfoResult * item =
    ((deva_gaode_routing_msgs__msg__RGLaneInfoResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_lane_info_result(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RGLaneInfoResult * value =
    (const deva_gaode_routing_msgs__msg__RGLaneInfoResult *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_lane_info_result(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_red_light_result(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_red_light_result(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_red_light_result(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_red_light_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RGRedLightResult * item =
    ((const deva_gaode_routing_msgs__msg__RGRedLightResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_red_light_result(untyped_member, index));
  deva_gaode_routing_msgs__msg__RGRedLightResult * value =
    (deva_gaode_routing_msgs__msg__RGRedLightResult *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_red_light_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RGRedLightResult * item =
    ((deva_gaode_routing_msgs__msg__RGRedLightResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_red_light_result(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RGRedLightResult * value =
    (const deva_gaode_routing_msgs__msg__RGRedLightResult *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_red_light_result(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_tips_result(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_tips_result(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_tips_result(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_tips_result(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RGVTipsPointResult * item =
    ((const deva_gaode_routing_msgs__msg__RGVTipsPointResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_tips_result(untyped_member, index));
  deva_gaode_routing_msgs__msg__RGVTipsPointResult * value =
    (deva_gaode_routing_msgs__msg__RGVTipsPointResult *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_tips_result(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RGVTipsPointResult * item =
    ((deva_gaode_routing_msgs__msg__RGVTipsPointResult *)
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_tips_result(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RGVTipsPointResult * value =
    (const deva_gaode_routing_msgs__msg__RGVTipsPointResult *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_tips_result(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[5] = {
  {
    "route_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Route, route_points),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__route_points,  // size() function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__route_points,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__route_points,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__route_points,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__route_points,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__route_points  // resize(index) function pointer
  },
  {
    "rg_intersection_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Route, rg_intersection_result),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_intersection_result,  // size() function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_intersection_result,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_intersection_result,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_intersection_result,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_intersection_result,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_intersection_result  // resize(index) function pointer
  },
  {
    "rg_lane_info_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Route, rg_lane_info_result),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_lane_info_result,  // size() function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_lane_info_result,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_lane_info_result,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_lane_info_result,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_lane_info_result,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_lane_info_result  // resize(index) function pointer
  },
  {
    "rg_red_light_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Route, rg_red_light_result),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_red_light_result,  // size() function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_red_light_result,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_red_light_result,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_red_light_result,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_red_light_result,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_red_light_result  // resize(index) function pointer
  },
  {
    "rg_tips_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__Route, rg_tips_result),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__size_function__Route__rg_tips_result,  // size() function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_const_function__Route__rg_tips_result,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__get_function__Route__rg_tips_result,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__fetch_function__Route__rg_tips_result,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__assign_function__Route__rg_tips_result,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__resize_function__Route__rg_tips_result  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "Route",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__Route),
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Route)() {
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Coordinate)();
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGIntersectionResult)();
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGLaneInfoResult)();
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGRedLightResult)();
  deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGVTipsPointResult)();
  if (!deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__Route__rosidl_typesupport_introspection_c__Route_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
