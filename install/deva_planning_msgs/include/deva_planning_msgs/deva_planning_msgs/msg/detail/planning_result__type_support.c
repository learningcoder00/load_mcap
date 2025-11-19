// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/planning_result__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/planning_result__functions.h"
#include "deva_planning_msgs/msg/detail/planning_result__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `sensor_time`
#include "deva_planning_msgs/msg/sensor_time.h"
// Member `sensor_time`
#include "deva_planning_msgs/msg/detail/sensor_time__rosidl_typesupport_introspection_c.h"
// Member `trajectories`
#include "deva_planning_msgs/msg/planning_trajectory.h"
// Member `trajectories`
#include "deva_planning_msgs/msg/detail/planning_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__PlanningResult__init(message_memory);
}

void deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__PlanningResult__fini(message_memory);
}

size_t deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__size_function__PlanningResult__trajectories(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PlanningTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__PlanningTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_const_function__PlanningResult__trajectories(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PlanningTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__PlanningTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_function__PlanningResult__trajectories(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PlanningTrajectory__Sequence * member =
    (deva_planning_msgs__msg__PlanningTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__fetch_function__PlanningResult__trajectories(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PlanningTrajectory * item =
    ((const deva_planning_msgs__msg__PlanningTrajectory *)
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_const_function__PlanningResult__trajectories(untyped_member, index));
  deva_planning_msgs__msg__PlanningTrajectory * value =
    (deva_planning_msgs__msg__PlanningTrajectory *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__assign_function__PlanningResult__trajectories(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PlanningTrajectory * item =
    ((deva_planning_msgs__msg__PlanningTrajectory *)
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_function__PlanningResult__trajectories(untyped_member, index));
  const deva_planning_msgs__msg__PlanningTrajectory * value =
    (const deva_planning_msgs__msg__PlanningTrajectory *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__resize_function__PlanningResult__trajectories(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PlanningTrajectory__Sequence * member =
    (deva_planning_msgs__msg__PlanningTrajectory__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PlanningTrajectory__Sequence__fini(member);
  return deva_planning_msgs__msg__PlanningTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__PlanningResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__PlanningResult, sensor_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectories",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__PlanningResult, trajectories),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__size_function__PlanningResult__trajectories,  // size() function pointer
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_const_function__PlanningResult__trajectories,  // get_const(index) function pointer
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__get_function__PlanningResult__trajectories,  // get(index) function pointer
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__fetch_function__PlanningResult__trajectories,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__assign_function__PlanningResult__trajectories,  // assign(index, value) function pointer
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__resize_function__PlanningResult__trajectories  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__PlanningResult, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "PlanningResult",  // message name
  4,  // number of fields
  sizeof(deva_planning_msgs__msg__PlanningResult),
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_member_array,  // message members
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PlanningResult)() {
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, SensorTime)();
  deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PlanningTrajectory)();
  if (!deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__PlanningResult__rosidl_typesupport_introspection_c__PlanningResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
