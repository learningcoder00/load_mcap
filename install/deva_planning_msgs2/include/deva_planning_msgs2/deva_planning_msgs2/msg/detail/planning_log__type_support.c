// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/planning_log__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/planning_log__functions.h"
#include "deva_planning_msgs2/msg/detail/planning_log__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `localization`
// Member `chassis`
// Member `pad_message`
// Member `pull_over_msg`
// Member `traffic_poles`
// Member `apollo_decision`
// Member `prediction`
// Member `megmap_proto`
// Member `state_context`
// Member `target_trajectory`
// Member `speed_solver_debug_sequence`
// Member `trajectory_solver_debug_sequence`
// Member `planning_log`
// Member `navigator_routing`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/string2_u_int.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/detail/string2_u_int__rosidl_typesupport_introspection_c.h"
// Member `scalable_int`
#include "deva_planning_msgs2/msg/string2_int.h"
// Member `scalable_int`
#include "deva_planning_msgs2/msg/detail/string2_int__rosidl_typesupport_introspection_c.h"
// Member `scalable_double`
#include "deva_planning_msgs2/msg/string2_double.h"
// Member `scalable_double`
#include "deva_planning_msgs2/msg/detail/string2_double__rosidl_typesupport_introspection_c.h"
// Member `scalable_bool`
#include "deva_planning_msgs2/msg/string2_bool.h"
// Member `scalable_bool`
#include "deva_planning_msgs2/msg/detail/string2_bool__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__PlanningLog__init(message_memory);
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__PlanningLog__fini(message_memory);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__localization(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__localization(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__localization(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__localization(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__localization(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__localization(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__localization(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__localization(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__chassis(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__chassis(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__chassis(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__chassis(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__chassis(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__chassis(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__chassis(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__chassis(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__pad_message(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pad_message(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pad_message(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__pad_message(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pad_message(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__pad_message(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pad_message(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__pad_message(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__pull_over_msg(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pull_over_msg(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pull_over_msg(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__pull_over_msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pull_over_msg(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__pull_over_msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pull_over_msg(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__pull_over_msg(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__traffic_poles(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__traffic_poles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__traffic_poles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__traffic_poles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__traffic_poles(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__traffic_poles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__traffic_poles(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__traffic_poles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__apollo_decision(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__apollo_decision(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__apollo_decision(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__apollo_decision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__apollo_decision(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__apollo_decision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__apollo_decision(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__apollo_decision(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__prediction(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__prediction(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__prediction(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__prediction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__prediction(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__prediction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__prediction(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__prediction(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__megmap_proto(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__megmap_proto(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__megmap_proto(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__megmap_proto(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__megmap_proto(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__megmap_proto(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__megmap_proto(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__megmap_proto(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__state_context(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__state_context(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__state_context(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__state_context(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__state_context(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__state_context(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__state_context(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__state_context(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__target_trajectory(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__target_trajectory(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__target_trajectory(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__target_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__target_trajectory(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__target_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__target_trajectory(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__target_trajectory(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__speed_solver_debug_sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__speed_solver_debug_sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__speed_solver_debug_sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__speed_solver_debug_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__speed_solver_debug_sequence(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__speed_solver_debug_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__speed_solver_debug_sequence(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__speed_solver_debug_sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__trajectory_solver_debug_sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__trajectory_solver_debug_sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__trajectory_solver_debug_sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__trajectory_solver_debug_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__trajectory_solver_debug_sequence(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__trajectory_solver_debug_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__trajectory_solver_debug_sequence(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__trajectory_solver_debug_sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__planning_log(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__planning_log(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__planning_log(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__planning_log(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__planning_log(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__planning_log(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__planning_log(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__planning_log(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__navigator_routing(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__navigator_routing(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__navigator_routing(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__navigator_routing(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__navigator_routing(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__navigator_routing(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__navigator_routing(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__navigator_routing(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_stream(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (const deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_stream(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (const deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_stream(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_stream(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2UInt * item =
    ((const deva_planning_msgs2__msg__String2UInt *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_stream(untyped_member, index));
  deva_planning_msgs2__msg__String2UInt * value =
    (deva_planning_msgs2__msg__String2UInt *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_stream(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2UInt * item =
    ((deva_planning_msgs2__msg__String2UInt *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_stream(untyped_member, index));
  const deva_planning_msgs2__msg__String2UInt * value =
    (const deva_planning_msgs2__msg__String2UInt *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_stream(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2UInt__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2UInt__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_int(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Int__Sequence * member =
    (const deva_planning_msgs2__msg__String2Int__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_int(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Int__Sequence * member =
    (const deva_planning_msgs2__msg__String2Int__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_int(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Int__Sequence * member =
    (deva_planning_msgs2__msg__String2Int__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_int(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Int * item =
    ((const deva_planning_msgs2__msg__String2Int *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_int(untyped_member, index));
  deva_planning_msgs2__msg__String2Int * value =
    (deva_planning_msgs2__msg__String2Int *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_int(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Int * item =
    ((deva_planning_msgs2__msg__String2Int *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_int(untyped_member, index));
  const deva_planning_msgs2__msg__String2Int * value =
    (const deva_planning_msgs2__msg__String2Int *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_int(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Int__Sequence * member =
    (deva_planning_msgs2__msg__String2Int__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Int__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Int__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_double(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_double(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_double(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_double(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Double * item =
    ((const deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_double(untyped_member, index));
  deva_planning_msgs2__msg__String2Double * value =
    (deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_double(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Double * item =
    ((deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_double(untyped_member, index));
  const deva_planning_msgs2__msg__String2Double * value =
    (const deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_double(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Double__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Double__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_bool(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Bool__Sequence * member =
    (const deva_planning_msgs2__msg__String2Bool__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_bool(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Bool__Sequence * member =
    (const deva_planning_msgs2__msg__String2Bool__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_bool(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Bool__Sequence * member =
    (deva_planning_msgs2__msg__String2Bool__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_bool(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Bool * item =
    ((const deva_planning_msgs2__msg__String2Bool *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_bool(untyped_member, index));
  deva_planning_msgs2__msg__String2Bool * value =
    (deva_planning_msgs2__msg__String2Bool *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_bool(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Bool * item =
    ((deva_planning_msgs2__msg__String2Bool *)
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_bool(untyped_member, index));
  const deva_planning_msgs2__msg__String2Bool * value =
    (const deva_planning_msgs2__msg__String2Bool *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_bool(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Bool__Sequence * member =
    (deva_planning_msgs2__msg__String2Bool__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Bool__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Bool__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, localization),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__localization,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__localization,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__localization,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__localization,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__localization,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__localization  // resize(index) function pointer
  },
  {
    "chassis",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, chassis),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__chassis,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__chassis,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__chassis,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__chassis,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__chassis,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__chassis  // resize(index) function pointer
  },
  {
    "pad_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, pad_message),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__pad_message,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pad_message,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pad_message,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__pad_message,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__pad_message,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__pad_message  // resize(index) function pointer
  },
  {
    "pull_over_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, pull_over_msg),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__pull_over_msg,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__pull_over_msg,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__pull_over_msg,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__pull_over_msg,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__pull_over_msg,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__pull_over_msg  // resize(index) function pointer
  },
  {
    "traffic_poles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, traffic_poles),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__traffic_poles,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__traffic_poles,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__traffic_poles,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__traffic_poles,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__traffic_poles,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__traffic_poles  // resize(index) function pointer
  },
  {
    "apollo_decision",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, apollo_decision),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__apollo_decision,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__apollo_decision,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__apollo_decision,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__apollo_decision,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__apollo_decision,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__apollo_decision  // resize(index) function pointer
  },
  {
    "prediction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, prediction),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__prediction,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__prediction,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__prediction,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__prediction,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__prediction,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__prediction  // resize(index) function pointer
  },
  {
    "megmap_proto",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, megmap_proto),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__megmap_proto,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__megmap_proto,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__megmap_proto,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__megmap_proto,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__megmap_proto,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__megmap_proto  // resize(index) function pointer
  },
  {
    "state_context",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, state_context),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__state_context,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__state_context,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__state_context,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__state_context,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__state_context,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__state_context  // resize(index) function pointer
  },
  {
    "target_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, target_trajectory),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__target_trajectory,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__target_trajectory,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__target_trajectory,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__target_trajectory,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__target_trajectory,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__target_trajectory  // resize(index) function pointer
  },
  {
    "speed_solver_debug_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, speed_solver_debug_sequence),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__speed_solver_debug_sequence,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__speed_solver_debug_sequence,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__speed_solver_debug_sequence,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__speed_solver_debug_sequence,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__speed_solver_debug_sequence,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__speed_solver_debug_sequence  // resize(index) function pointer
  },
  {
    "trajectory_solver_debug_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, trajectory_solver_debug_sequence),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__trajectory_solver_debug_sequence,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__trajectory_solver_debug_sequence,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__trajectory_solver_debug_sequence,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__trajectory_solver_debug_sequence,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__trajectory_solver_debug_sequence,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__trajectory_solver_debug_sequence  // resize(index) function pointer
  },
  {
    "planning_log",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, planning_log),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__planning_log,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__planning_log,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__planning_log,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__planning_log,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__planning_log,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__planning_log  // resize(index) function pointer
  },
  {
    "navigator_routing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, navigator_routing),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__navigator_routing,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__navigator_routing,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__navigator_routing,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__navigator_routing,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__navigator_routing,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__navigator_routing  // resize(index) function pointer
  },
  {
    "scalable_stream",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, scalable_stream),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_stream,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_stream,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_stream,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_stream,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_stream,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_stream  // resize(index) function pointer
  },
  {
    "scalable_int",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, scalable_int),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_int,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_int,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_int,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_int,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_int,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_int  // resize(index) function pointer
  },
  {
    "scalable_double",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, scalable_double),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_double,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_double,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_double,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_double,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_double,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_double  // resize(index) function pointer
  },
  {
    "scalable_bool",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__PlanningLog, scalable_bool),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__size_function__PlanningLog__scalable_bool,  // size() function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_const_function__PlanningLog__scalable_bool,  // get_const(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__get_function__PlanningLog__scalable_bool,  // get(index) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__fetch_function__PlanningLog__scalable_bool,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__assign_function__PlanningLog__scalable_bool,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__resize_function__PlanningLog__scalable_bool  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "PlanningLog",  // message name
  19,  // number of fields
  sizeof(deva_planning_msgs2__msg__PlanningLog),
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array,  // message members
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, PlanningLog)() {
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2UInt)();
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Int)();
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Double)();
  deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Bool)();
  if (!deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__PlanningLog__rosidl_typesupport_introspection_c__PlanningLog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
