// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.h"


// Include directives for member types
// Member `via_retain_dis`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lane_info`
#include "deva_gaode_routing_msgs/msg/web_lane.h"
// Member `lane_info`
#include "deva_gaode_routing_msgs/msg/detail/web_lane__rosidl_typesupport_introspection_c.h"
// Member `camera_callback`
#include "deva_gaode_routing_msgs/msg/camera_callback_info.h"
// Member `camera_callback`
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__rosidl_typesupport_introspection_c.h"
// Member `not_avoid_info`
#include "deva_gaode_routing_msgs/msg/web_not_avoid_info.h"
// Member `not_avoid_info`
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__rosidl_typesupport_introspection_c.h"
// Member `next_cross_info`
#include "deva_gaode_routing_msgs/msg/web_cross_navi_info.h"
// Member `next_cross_info`
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__rosidl_typesupport_introspection_c.h"
// Member `traffic_light_cd`
#include "deva_gaode_routing_msgs/msg/web_traffic_light.h"
// Member `traffic_light_cd`
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__rosidl_typesupport_introspection_c.h"
// Member `parallel_road`
#include "deva_gaode_routing_msgs/msg/web_parallel_road.h"
// Member `parallel_road`
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__rosidl_typesupport_introspection_c.h"
// Member `cross_image`
#include "deva_gaode_routing_msgs/msg/web_cross_image.h"
// Member `cross_image`
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebCallBack__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebCallBack__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__size_function__WebCallBack__via_retain_dis(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__via_retain_dis(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__via_retain_dis(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__fetch_function__WebCallBack__via_retain_dis(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__via_retain_dis(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__assign_function__WebCallBack__via_retain_dis(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__via_retain_dis(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__resize_function__WebCallBack__via_retain_dis(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__size_function__WebCallBack__next_cross_info(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__next_cross_info(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__next_cross_info(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__fetch_function__WebCallBack__next_cross_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo * item =
    ((const deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__next_cross_info(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * value =
    (deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__assign_function__WebCallBack__next_cross_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * item =
    ((deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__next_cross_info(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo * value =
    (const deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__resize_function__WebCallBack__next_cross_info(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[27] = {
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_step",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_step),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_road_retain_dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_road_retain_dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_step_retain_dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_step_retain_dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_step_retain_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_step_retain_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "via_retain_dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, via_retain_dis),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__size_function__WebCallBack__via_retain_dis,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__via_retain_dis,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__via_retain_dis,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__fetch_function__WebCallBack__via_retain_dis,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__assign_function__WebCallBack__via_retain_dis,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__resize_function__WebCallBack__via_retain_dis  // resize(index) function pointer
  },
  {
    "path_retain_dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, path_retain_dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_retain_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, path_retain_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trun_icon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, trun_icon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trun_icon_retain_dis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, trun_icon_retain_dis),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, lane_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_callback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, camera_callback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ring_out_cnt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, ring_out_cnt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roundabout_out_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, roundabout_out_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_link_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_link_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "not_avoid_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, not_avoid_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross_maneuver_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cross_maneuver_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_cross_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, next_cross_info),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__size_function__WebCallBack__next_cross_info,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_const_function__WebCallBack__next_cross_info,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__get_function__WebCallBack__next_cross_info,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__fetch_function__WebCallBack__next_cross_info,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__assign_function__WebCallBack__next_cross_info,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__resize_function__WebCallBack__next_cross_info  // resize(index) function pointer
  },
  {
    "traffic_light_cd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, traffic_light_cd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parallel_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, parallel_road),  // bytes offset in struct
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
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, ownership),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_road_limit_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_road_limit_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross_image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cross_image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_cross_dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_cross_dir),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cur_cross_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebCallBack, cur_cross_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebCallBack",  // message name
  27,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebCallBack),
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebCallBack)() {
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLane)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, CameraCallbackInfo)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebNotAvoidInfo)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebCrossNaviInfo)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebTrafficLight)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebParallelRoad)();
  deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_member_array[24].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebCrossImage)();
  if (!deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebCallBack__rosidl_typesupport_introspection_c__WebCallBack_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
