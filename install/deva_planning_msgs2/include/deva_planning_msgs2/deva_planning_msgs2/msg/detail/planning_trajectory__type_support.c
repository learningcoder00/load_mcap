// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/PlanningTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/planning_trajectory__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/planning_trajectory__functions.h"
#include "deva_planning_msgs2/msg/detail/planning_trajectory__struct.h"


// Include directives for member types
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/trajectory_point.h"
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `curve`
#include "deva_common_msgs/msg/equation_curve.h"
// Member `curve`
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_introspection_c.h"
// Member `estop_reason`
// Member `stop_reason`
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `stop_pose`
#include "geometry_msgs/msg/point.h"
// Member `stop_pose`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__PlanningTrajectory__init(message_memory);
}

void deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__PlanningTrajectory__fini(message_memory);
}

size_t deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__size_function__PlanningTrajectory__trajectory_points(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_const_function__PlanningTrajectory__trajectory_points(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_function__PlanningTrajectory__trajectory_points(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__fetch_function__PlanningTrajectory__trajectory_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__TrajectoryPoint * item =
    ((const deva_planning_msgs2__msg__TrajectoryPoint *)
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_const_function__PlanningTrajectory__trajectory_points(untyped_member, index));
  deva_planning_msgs2__msg__TrajectoryPoint * value =
    (deva_planning_msgs2__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__assign_function__PlanningTrajectory__trajectory_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__TrajectoryPoint * item =
    ((deva_planning_msgs2__msg__TrajectoryPoint *)
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_function__PlanningTrajectory__trajectory_points(untyped_member, index));
  const deva_planning_msgs2__msg__TrajectoryPoint * value =
    (const deva_planning_msgs2__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__resize_function__PlanningTrajectory__trajectory_points(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence__fini(member);
  return deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_member_array[18] = {
  {
    "path_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, path_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, trajectory_points),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__size_function__PlanningTrajectory__trajectory_points,  // size() function pointer
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_const_function__PlanningTrajectory__trajectory_points,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__get_function__PlanningTrajectory__trajectory_points,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__fetch_function__PlanningTrajectory__trajectory_points,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__assign_function__PlanningTrajectory__trajectory_points,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__resize_function__PlanningTrajectory__trajectory_points  // resize(index) function pointer
  },
  {
    "curve",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, curve),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, total_path_length),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, total_path_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, gear),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, is_estop),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, estop_reason),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, is_stop),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, stop_reason),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, stop_pose),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, is_replan),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, replan_reason),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, high_beam),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, low_beam),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, horn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, turn_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningTrajectory, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "PlanningTrajectory",  // message name
  18,  // number of fields
  sizeof(deva_planning_msgs2__msg__PlanningTrajectory),
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_member_array,  // message members
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, PlanningTrajectory)() {
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, TrajectoryPoint)();
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__PlanningTrajectory__rosidl_typesupport_introspection_c__PlanningTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
