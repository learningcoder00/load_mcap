// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/tree_trajectory__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"
#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.h"


// Include directives for member types
// Member `obs_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/trajectory_point.h"
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/detail/trajectory_point__rosidl_typesupport_introspection_c.h"
// Member `traj_score`
#include "deva_planning_msgs2/msg/string2_double.h"
// Member `traj_score`
#include "deva_planning_msgs2/msg/detail/string2_double__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__TreeTrajectory__init(message_memory);
}

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__TreeTrajectory__fini(message_memory);
}

size_t deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__size_function__TreeTrajectory__trajectory_points(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__trajectory_points(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (const deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__trajectory_points(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__fetch_function__TreeTrajectory__trajectory_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__TrajectoryPoint * item =
    ((const deva_planning_msgs2__msg__TrajectoryPoint *)
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__trajectory_points(untyped_member, index));
  deva_planning_msgs2__msg__TrajectoryPoint * value =
    (deva_planning_msgs2__msg__TrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__assign_function__TreeTrajectory__trajectory_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__TrajectoryPoint * item =
    ((deva_planning_msgs2__msg__TrajectoryPoint *)
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__trajectory_points(untyped_member, index));
  const deva_planning_msgs2__msg__TrajectoryPoint * value =
    (const deva_planning_msgs2__msg__TrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__resize_function__TreeTrajectory__trajectory_points(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence * member =
    (deva_planning_msgs2__msg__TrajectoryPoint__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence__fini(member);
  return deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__size_function__TreeTrajectory__traj_score(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__traj_score(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__traj_score(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__fetch_function__TreeTrajectory__traj_score(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Double * item =
    ((const deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__traj_score(untyped_member, index));
  deva_planning_msgs2__msg__String2Double * value =
    (deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__assign_function__TreeTrajectory__traj_score(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Double * item =
    ((deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__traj_score(untyped_member, index));
  const deva_planning_msgs2__msg__String2Double * value =
    (const deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__resize_function__TreeTrajectory__traj_score(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Double__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_member_array[4] = {
  {
    "obs_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__TreeTrajectory, obs_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__TreeTrajectory, confidence),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2__msg__TreeTrajectory, trajectory_points),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__size_function__TreeTrajectory__trajectory_points,  // size() function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__trajectory_points,  // get_const(index) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__trajectory_points,  // get(index) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__fetch_function__TreeTrajectory__trajectory_points,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__assign_function__TreeTrajectory__trajectory_points,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__resize_function__TreeTrajectory__trajectory_points  // resize(index) function pointer
  },
  {
    "traj_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__TreeTrajectory, traj_score),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__size_function__TreeTrajectory__traj_score,  // size() function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_const_function__TreeTrajectory__traj_score,  // get_const(index) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__get_function__TreeTrajectory__traj_score,  // get(index) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__fetch_function__TreeTrajectory__traj_score,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__assign_function__TreeTrajectory__traj_score,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__resize_function__TreeTrajectory__traj_score  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "TreeTrajectory",  // message name
  4,  // number of fields
  sizeof(deva_planning_msgs2__msg__TreeTrajectory),
  deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_member_array,  // message members
  deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, TreeTrajectory)() {
  deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, TrajectoryPoint)();
  deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Double)();
  if (!deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__TreeTrajectory__rosidl_typesupport_introspection_c__TreeTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
