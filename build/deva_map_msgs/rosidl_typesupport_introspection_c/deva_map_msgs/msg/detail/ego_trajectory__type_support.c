// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/ego_trajectory__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/ego_trajectory__functions.h"
#include "deva_map_msgs/msg/detail/ego_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
// Member `left_boundary`
// Member `right_boundary`
#include "deva_map_msgs/msg/ego_trajectory_point.h"
// Member `trajectory`
// Member `left_boundary`
// Member `right_boundary`
#include "deva_map_msgs/msg/detail/ego_trajectory_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__EgoTrajectory__init(message_memory);
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_fini_function(void * message_memory)
{
  deva_map_msgs__msg__EgoTrajectory__fini(message_memory);
}

size_t deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__trajectory(
  const void * untyped_member)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__trajectory(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__trajectory(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((const deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__trajectory(untyped_member, index));
  deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__trajectory(untyped_member, index));
  const deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (const deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__trajectory(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(member);
  return deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__left_boundary(
  const void * untyped_member)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__left_boundary(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__left_boundary(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__left_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((const deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__left_boundary(untyped_member, index));
  deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__left_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__left_boundary(untyped_member, index));
  const deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (const deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__left_boundary(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(member);
  return deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__right_boundary(
  const void * untyped_member)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__right_boundary(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__right_boundary(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__right_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((const deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__right_boundary(untyped_member, index));
  deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__right_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__EgoTrajectoryPoint * item =
    ((deva_map_msgs__msg__EgoTrajectoryPoint *)
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__right_boundary(untyped_member, index));
  const deva_map_msgs__msg__EgoTrajectoryPoint * value =
    (const deva_map_msgs__msg__EgoTrajectoryPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__right_boundary(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * member =
    (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(member);
  return deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_member_array[3] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__EgoTrajectory, trajectory),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__trajectory,  // size() function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__trajectory,  // get_const(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__trajectory,  // get(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__trajectory,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__trajectory,  // assign(index, value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__trajectory  // resize(index) function pointer
  },
  {
    "left_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__EgoTrajectory, left_boundary),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__left_boundary,  // size() function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__left_boundary,  // get_const(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__left_boundary,  // get(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__left_boundary,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__left_boundary,  // assign(index, value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__left_boundary  // resize(index) function pointer
  },
  {
    "right_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__EgoTrajectory, right_boundary),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__size_function__EgoTrajectory__right_boundary,  // size() function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_const_function__EgoTrajectory__right_boundary,  // get_const(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__get_function__EgoTrajectory__right_boundary,  // get(index) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__fetch_function__EgoTrajectory__right_boundary,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__assign_function__EgoTrajectory__right_boundary,  // assign(index, value) function pointer
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__resize_function__EgoTrajectory__right_boundary  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "EgoTrajectory",  // message name
  3,  // number of fields
  sizeof(deva_map_msgs__msg__EgoTrajectory),
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_member_array,  // message members
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, EgoTrajectory)() {
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, EgoTrajectoryPoint)();
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, EgoTrajectoryPoint)();
  deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, EgoTrajectoryPoint)();
  if (!deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__EgoTrajectory__rosidl_typesupport_introspection_c__EgoTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
