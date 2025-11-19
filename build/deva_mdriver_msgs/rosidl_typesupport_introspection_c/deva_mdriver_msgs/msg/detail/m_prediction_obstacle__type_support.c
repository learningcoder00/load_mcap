// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__rosidl_typesupport_introspection_c.h"
#include "deva_mdriver_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.h"


// Include directives for member types
// Member `perception_obstacle`
#include "deva_perception_msgs/msg/moving_obstacle.h"
// Member `perception_obstacle`
#include "deva_perception_msgs/msg/detail/moving_obstacle__rosidl_typesupport_introspection_c.h"
// Member `trajectory`
#include "deva_planning_msgs/msg/trajectory_point.h"
// Member `trajectory`
#include "deva_planning_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `decision`
// Member `cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `acc_heading_steering_stats`
#include "deva_mdriver_msgs/msg/acc_heading_steering_stats.h"
// Member `acc_heading_steering_stats`
#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__rosidl_typesupport_introspection_c.h"
// Member `prediction_debug_info`
#include "deva_mdriver_msgs/msg/debug_info.h"
// Member `prediction_debug_info`
#include "deva_mdriver_msgs/msg/detail/debug_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_mdriver_msgs__msg__MPredictionObstacle__init(message_memory);
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_fini_function(void * message_memory)
{
  deva_mdriver_msgs__msg__MPredictionObstacle__fini(message_memory);
}

size_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__trajectory(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__trajectory(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__trajectory(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__TrajectoryPoint * item =
    ((const deva_planning_msgs__msg__TrajectoryPoint *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__trajectory(untyped_member, index));
  deva_planning_msgs__msg__TrajectoryPoint * value =
    (deva_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__TrajectoryPoint * item =
    ((deva_planning_msgs__msg__TrajectoryPoint *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__trajectory(untyped_member, index));
  const deva_planning_msgs__msg__TrajectoryPoint * value =
    (const deva_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__trajectory(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  deva_planning_msgs__msg__TrajectoryPoint__Sequence__fini(member);
  return deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__decision(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__decision(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__decision(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__decision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__decision(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__decision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__decision(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__decision(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__cov(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__cov(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__cov(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__cov(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__cov(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__cov(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__acc_heading_steering_stats(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence * member =
    (const deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__acc_heading_steering_stats(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence * member =
    (const deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__acc_heading_steering_stats(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence * member =
    (deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__acc_heading_steering_stats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__AccHeadingSteeringStats * item =
    ((const deva_mdriver_msgs__msg__AccHeadingSteeringStats *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__acc_heading_steering_stats(untyped_member, index));
  deva_mdriver_msgs__msg__AccHeadingSteeringStats * value =
    (deva_mdriver_msgs__msg__AccHeadingSteeringStats *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__acc_heading_steering_stats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__AccHeadingSteeringStats * item =
    ((deva_mdriver_msgs__msg__AccHeadingSteeringStats *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__acc_heading_steering_stats(untyped_member, index));
  const deva_mdriver_msgs__msg__AccHeadingSteeringStats * value =
    (const deva_mdriver_msgs__msg__AccHeadingSteeringStats *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__acc_heading_steering_stats(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence * member =
    (deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__fini(member);
  return deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__init(member, size);
}

size_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__prediction_debug_info(
  const void * untyped_member)
{
  const deva_mdriver_msgs__msg__DebugInfo__Sequence * member =
    (const deva_mdriver_msgs__msg__DebugInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__prediction_debug_info(
  const void * untyped_member, size_t index)
{
  const deva_mdriver_msgs__msg__DebugInfo__Sequence * member =
    (const deva_mdriver_msgs__msg__DebugInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__prediction_debug_info(
  void * untyped_member, size_t index)
{
  deva_mdriver_msgs__msg__DebugInfo__Sequence * member =
    (deva_mdriver_msgs__msg__DebugInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__prediction_debug_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_mdriver_msgs__msg__DebugInfo * item =
    ((const deva_mdriver_msgs__msg__DebugInfo *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__prediction_debug_info(untyped_member, index));
  deva_mdriver_msgs__msg__DebugInfo * value =
    (deva_mdriver_msgs__msg__DebugInfo *)(untyped_value);
  *value = *item;
}

void deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__prediction_debug_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_mdriver_msgs__msg__DebugInfo * item =
    ((deva_mdriver_msgs__msg__DebugInfo *)
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__prediction_debug_info(untyped_member, index));
  const deva_mdriver_msgs__msg__DebugInfo * value =
    (const deva_mdriver_msgs__msg__DebugInfo *)(untyped_value);
  *item = *value;
}

bool deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__prediction_debug_info(
  void * untyped_member, size_t size)
{
  deva_mdriver_msgs__msg__DebugInfo__Sequence * member =
    (deva_mdriver_msgs__msg__DebugInfo__Sequence *)(untyped_member);
  deva_mdriver_msgs__msg__DebugInfo__Sequence__fini(member);
  return deva_mdriver_msgs__msg__DebugInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array[9] = {
  {
    "perception_obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, perception_obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, trajectory),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__trajectory,  // size() function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__trajectory,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__trajectory,  // get(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__trajectory,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__trajectory,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__trajectory  // resize(index) function pointer
  },
  {
    "decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, decision),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__decision,  // size() function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__decision,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__decision,  // get(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__decision,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__decision,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__decision  // resize(index) function pointer
  },
  {
    "obs_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, obs_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, cov),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__cov,  // size() function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__cov,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__cov,  // get(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__cov,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__cov,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__cov  // resize(index) function pointer
  },
  {
    "is_static",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, is_static),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_heading_steering_stats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, acc_heading_steering_stats),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__acc_heading_steering_stats,  // size() function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__acc_heading_steering_stats,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__acc_heading_steering_stats,  // get(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__acc_heading_steering_stats,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__acc_heading_steering_stats,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__acc_heading_steering_stats  // resize(index) function pointer
  },
  {
    "prediction_debug_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs__msg__MPredictionObstacle, prediction_debug_info),  // bytes offset in struct
    NULL,  // default value
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__size_function__MPredictionObstacle__prediction_debug_info,  // size() function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_const_function__MPredictionObstacle__prediction_debug_info,  // get_const(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__get_function__MPredictionObstacle__prediction_debug_info,  // get(index) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__fetch_function__MPredictionObstacle__prediction_debug_info,  // fetch(index, &value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__assign_function__MPredictionObstacle__prediction_debug_info,  // assign(index, value) function pointer
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__resize_function__MPredictionObstacle__prediction_debug_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_members = {
  "deva_mdriver_msgs__msg",  // message namespace
  "MPredictionObstacle",  // message name
  9,  // number of fields
  sizeof(deva_mdriver_msgs__msg__MPredictionObstacle),
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array,  // message members
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_type_support_handle = {
  0,
  &deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_mdriver_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, MPredictionObstacle)() {
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, MovingObstacle)();
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TrajectoryPoint)();
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, AccHeadingSteeringStats)();
  deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_mdriver_msgs, msg, DebugInfo)();
  if (!deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_type_support_handle.typesupport_identifier) {
    deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_mdriver_msgs__msg__MPredictionObstacle__rosidl_typesupport_introspection_c__MPredictionObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
