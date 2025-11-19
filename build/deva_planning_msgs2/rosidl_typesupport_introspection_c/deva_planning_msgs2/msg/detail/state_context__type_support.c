// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/state_context__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/state_context__functions.h"
#include "deva_planning_msgs2/msg/detail/state_context__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `front_obstacle_id`
// Member `rear_obstacle_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mcts_trees`
#include "deva_planning_msgs2/msg/policy_scenario.h"
// Member `mcts_trees`
#include "deva_planning_msgs2/msg/detail/policy_scenario__rosidl_typesupport_introspection_c.h"
// Member `tagged_obstacle`
#include "deva_planning_msgs2/msg/u_int2_string.h"
// Member `tagged_obstacle`
#include "deva_planning_msgs2/msg/detail/u_int2_string__rosidl_typesupport_introspection_c.h"
// Member `lane_bind_infos`
#include "deva_planning_msgs2/msg/lane_bind_info.h"
// Member `lane_bind_infos`
#include "deva_planning_msgs2/msg/detail/lane_bind_info__rosidl_typesupport_introspection_c.h"
// Member `ego_sl_on_ref_lines`
#include "deva_planning_msgs2/msg/ref2_sl_boundary.h"
// Member `ego_sl_on_ref_lines`
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__rosidl_typesupport_introspection_c.h"
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/string2_string.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__rosidl_typesupport_introspection_c.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/string2_u_int.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/detail/string2_u_int__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__StateContext__init(message_memory);
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__StateContext__fini(message_memory);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__mcts_trees(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__PolicyScenario__Sequence * member =
    (const deva_planning_msgs2__msg__PolicyScenario__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__mcts_trees(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__PolicyScenario__Sequence * member =
    (const deva_planning_msgs2__msg__PolicyScenario__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__mcts_trees(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__PolicyScenario__Sequence * member =
    (deva_planning_msgs2__msg__PolicyScenario__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__mcts_trees(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__PolicyScenario * item =
    ((const deva_planning_msgs2__msg__PolicyScenario *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__mcts_trees(untyped_member, index));
  deva_planning_msgs2__msg__PolicyScenario * value =
    (deva_planning_msgs2__msg__PolicyScenario *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__mcts_trees(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__PolicyScenario * item =
    ((deva_planning_msgs2__msg__PolicyScenario *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__mcts_trees(untyped_member, index));
  const deva_planning_msgs2__msg__PolicyScenario * value =
    (const deva_planning_msgs2__msg__PolicyScenario *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__mcts_trees(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__PolicyScenario__Sequence * member =
    (deva_planning_msgs2__msg__PolicyScenario__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__PolicyScenario__Sequence__fini(member);
  return deva_planning_msgs2__msg__PolicyScenario__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__tagged_obstacle(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__UInt2String__Sequence * member =
    (const deva_planning_msgs2__msg__UInt2String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__tagged_obstacle(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__UInt2String__Sequence * member =
    (const deva_planning_msgs2__msg__UInt2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__tagged_obstacle(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__UInt2String__Sequence * member =
    (deva_planning_msgs2__msg__UInt2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__tagged_obstacle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__UInt2String * item =
    ((const deva_planning_msgs2__msg__UInt2String *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__tagged_obstacle(untyped_member, index));
  deva_planning_msgs2__msg__UInt2String * value =
    (deva_planning_msgs2__msg__UInt2String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__tagged_obstacle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__UInt2String * item =
    ((deva_planning_msgs2__msg__UInt2String *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__tagged_obstacle(untyped_member, index));
  const deva_planning_msgs2__msg__UInt2String * value =
    (const deva_planning_msgs2__msg__UInt2String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__tagged_obstacle(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__UInt2String__Sequence * member =
    (deva_planning_msgs2__msg__UInt2String__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__UInt2String__Sequence__fini(member);
  return deva_planning_msgs2__msg__UInt2String__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__lane_bind_infos(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__LaneBindInfo__Sequence * member =
    (const deva_planning_msgs2__msg__LaneBindInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__lane_bind_infos(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__LaneBindInfo__Sequence * member =
    (const deva_planning_msgs2__msg__LaneBindInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__lane_bind_infos(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__LaneBindInfo__Sequence * member =
    (deva_planning_msgs2__msg__LaneBindInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__lane_bind_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__LaneBindInfo * item =
    ((const deva_planning_msgs2__msg__LaneBindInfo *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__lane_bind_infos(untyped_member, index));
  deva_planning_msgs2__msg__LaneBindInfo * value =
    (deva_planning_msgs2__msg__LaneBindInfo *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__lane_bind_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__LaneBindInfo * item =
    ((deva_planning_msgs2__msg__LaneBindInfo *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__lane_bind_infos(untyped_member, index));
  const deva_planning_msgs2__msg__LaneBindInfo * value =
    (const deva_planning_msgs2__msg__LaneBindInfo *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__lane_bind_infos(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__LaneBindInfo__Sequence * member =
    (deva_planning_msgs2__msg__LaneBindInfo__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__LaneBindInfo__Sequence__fini(member);
  return deva_planning_msgs2__msg__LaneBindInfo__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__ego_sl_on_ref_lines(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * member =
    (const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__ego_sl_on_ref_lines(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * member =
    (const deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__ego_sl_on_ref_lines(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * member =
    (deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__ego_sl_on_ref_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__Ref2SLBoundary * item =
    ((const deva_planning_msgs2__msg__Ref2SLBoundary *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__ego_sl_on_ref_lines(untyped_member, index));
  deva_planning_msgs2__msg__Ref2SLBoundary * value =
    (deva_planning_msgs2__msg__Ref2SLBoundary *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__ego_sl_on_ref_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__Ref2SLBoundary * item =
    ((deva_planning_msgs2__msg__Ref2SLBoundary *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__ego_sl_on_ref_lines(untyped_member, index));
  const deva_planning_msgs2__msg__Ref2SLBoundary * value =
    (const deva_planning_msgs2__msg__Ref2SLBoundary *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__ego_sl_on_ref_lines(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence * member =
    (deva_planning_msgs2__msg__Ref2SLBoundary__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__fini(member);
  return deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_flags(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_flags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_flags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_flags(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_flags(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_flags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_multimap(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2String__Sequence * member =
    (const deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_multimap(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2String__Sequence * member =
    (const deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_multimap(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2String__Sequence * member =
    (deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2String * item =
    ((const deva_planning_msgs2__msg__String2String *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_multimap(untyped_member, index));
  deva_planning_msgs2__msg__String2String * value =
    (deva_planning_msgs2__msg__String2String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2String * item =
    ((deva_planning_msgs2__msg__String2String *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_multimap(untyped_member, index));
  const deva_planning_msgs2__msg__String2String * value =
    (const deva_planning_msgs2__msg__String2String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_multimap(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2String__Sequence * member =
    (deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2String__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2String__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_stream(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (const deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_stream(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (const deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_stream(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_stream(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2UInt * item =
    ((const deva_planning_msgs2__msg__String2UInt *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_stream(untyped_member, index));
  deva_planning_msgs2__msg__String2UInt * value =
    (deva_planning_msgs2__msg__String2UInt *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_stream(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2UInt * item =
    ((deva_planning_msgs2__msg__String2UInt *)
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_stream(untyped_member, index));
  const deva_planning_msgs2__msg__String2UInt * value =
    (const deva_planning_msgs2__msg__String2UInt *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_stream(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2UInt__Sequence * member =
    (deva_planning_msgs2__msg__String2UInt__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2UInt__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2UInt__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[19] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "behavior_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, behavior_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "routing_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, routing_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_turn_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, current_turn_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "use_mdriver_ego",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, use_mdriver_ego),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, target_line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, current_line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, front_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rear_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, rear_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_change_task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, lane_change_task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "best_tree_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, best_tree_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mcts_trees",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, mcts_trees),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__mcts_trees,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__mcts_trees,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__mcts_trees,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__mcts_trees,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__mcts_trees,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__mcts_trees  // resize(index) function pointer
  },
  {
    "tagged_obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, tagged_obstacle),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__tagged_obstacle,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__tagged_obstacle,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__tagged_obstacle,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__tagged_obstacle,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__tagged_obstacle,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__tagged_obstacle  // resize(index) function pointer
  },
  {
    "lane_bind_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, lane_bind_infos),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__lane_bind_infos,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__lane_bind_infos,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__lane_bind_infos,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__lane_bind_infos,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__lane_bind_infos,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__lane_bind_infos  // resize(index) function pointer
  },
  {
    "ego_sl_on_ref_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, ego_sl_on_ref_lines),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__ego_sl_on_ref_lines,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__ego_sl_on_ref_lines,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__ego_sl_on_ref_lines,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__ego_sl_on_ref_lines,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__ego_sl_on_ref_lines,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__ego_sl_on_ref_lines  // resize(index) function pointer
  },
  {
    "lane_change_cancel_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, lane_change_cancel_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, scalable_flags),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_flags,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_flags,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_flags,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_flags,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_flags,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, scalable_multimap),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_multimap,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_multimap,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_multimap,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_multimap,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_multimap,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_multimap  // resize(index) function pointer
  },
  {
    "scalable_stream",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__StateContext, scalable_stream),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__scalable_stream,  // size() function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__scalable_stream,  // get_const(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__scalable_stream,  // get(index) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__scalable_stream,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__scalable_stream,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__scalable_stream  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "StateContext",  // message name
  19,  // number of fields
  sizeof(deva_planning_msgs2__msg__StateContext),
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array,  // message members
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, StateContext)() {
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, PolicyScenario)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, UInt2String)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, LaneBindInfo)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, Ref2SLBoundary)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2String)();
  deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2UInt)();
  if (!deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
