// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/target_trajectory__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__functions.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_timestamp`
#include "deva_planning_msgs/msg/sensor_time.h"
// Member `sensor_timestamp`
#include "deva_planning_msgs/msg/detail/sensor_time__rosidl_typesupport_introspection_c.h"
// Member `trajectory_point`
#include "deva_planning_msgs/msg/trajectory_point.h"
// Member `trajectory_point`
#include "deva_planning_msgs/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `path_point`
// Member `stop_pose`
#include "deva_planning_msgs/msg/path_point.h"
// Member `path_point`
// Member `stop_pose`
#include "deva_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `gear`
// Member `estop_reason`
// Member `stop_reason`
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__TargetTrajectory__init(message_memory);
}

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__TargetTrajectory__fini(message_memory);
}

size_t deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__size_function__TargetTrajectory__trajectory_point(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__trajectory_point(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__trajectory_point(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__fetch_function__TargetTrajectory__trajectory_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__TrajectoryPoint * item =
    ((const deva_planning_msgs__msg__TrajectoryPoint *)
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__trajectory_point(untyped_member, index));
  deva_planning_msgs__msg__TrajectoryPoint * value =
    (deva_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__assign_function__TargetTrajectory__trajectory_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__TrajectoryPoint * item =
    ((deva_planning_msgs__msg__TrajectoryPoint *)
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__trajectory_point(untyped_member, index));
  const deva_planning_msgs__msg__TrajectoryPoint * value =
    (const deva_planning_msgs__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__resize_function__TargetTrajectory__trajectory_point(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs__msg__TrajectoryPoint__Sequence *)(untyped_member);
  deva_planning_msgs__msg__TrajectoryPoint__Sequence__fini(member);
  return deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__size_function__TargetTrajectory__path_point(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__path_point(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__path_point(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__fetch_function__TargetTrajectory__path_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PathPoint * item =
    ((const deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__path_point(untyped_member, index));
  deva_planning_msgs__msg__PathPoint * value =
    (deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__assign_function__TargetTrajectory__path_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PathPoint * item =
    ((deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__path_point(untyped_member, index));
  const deva_planning_msgs__msg__PathPoint * value =
    (const deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__resize_function__TargetTrajectory__path_point(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_planning_msgs__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[21] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, sensor_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_gnss_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, start_gnss_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_path_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, total_path_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_path_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, total_path_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, trajectory_point),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__size_function__TargetTrajectory__trajectory_point,  // size() function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__trajectory_point,  // get_const(index) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__trajectory_point,  // get(index) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__fetch_function__TargetTrajectory__trajectory_point,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__assign_function__TargetTrajectory__trajectory_point,  // assign(index, value) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__resize_function__TargetTrajectory__trajectory_point  // resize(index) function pointer
  },
  {
    "path_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, path_point),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__size_function__TargetTrajectory__path_point,  // size() function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_const_function__TargetTrajectory__path_point,  // get_const(index) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__get_function__TargetTrajectory__path_point,  // get(index) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__fetch_function__TargetTrajectory__path_point,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__assign_function__TargetTrajectory__path_point,  // assign(index, value) function pointer
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__resize_function__TargetTrajectory__path_point  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_estop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, is_estop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, estop_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, is_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, stop_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, stop_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_replan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, is_replan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "replan_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, replan_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "car_in_dead_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, car_in_dead_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "high_beam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, high_beam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_beam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, low_beam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "horn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, horn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, emergency_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trace_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__TargetTrajectory, trace_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "TargetTrajectory",  // message name
  21,  // number of fields
  sizeof(deva_planning_msgs__msg__TargetTrajectory),
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array,  // message members
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TargetTrajectory)() {
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, SensorTime)();
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TrajectoryPoint)();
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathPoint)();
  deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathPoint)();
  if (!deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__TargetTrajectory__rosidl_typesupport_introspection_c__TargetTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
