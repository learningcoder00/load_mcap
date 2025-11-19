// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__functions.h"
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.h"


// Include directives for member types
// Member `game_cost`
// Member `rollout_cost`
#include "deva_planning_msgs2/msg/string2_double.h"
// Member `game_cost`
// Member `rollout_cost`
#include "deva_planning_msgs2/msg/detail/string2_double__rosidl_typesupport_introspection_c.h"
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/string2_string.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__SemanticTreeNode__init(message_memory);
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__SemanticTreeNode__fini(message_memory);
}

size_t deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__game_cost(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__game_cost(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__game_cost(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__game_cost(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Double * item =
    ((const deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__game_cost(untyped_member, index));
  deva_planning_msgs2__msg__String2Double * value =
    (deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__game_cost(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Double * item =
    ((deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__game_cost(untyped_member, index));
  const deva_planning_msgs2__msg__String2Double * value =
    (const deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__game_cost(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Double__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Double__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__rollout_cost(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__rollout_cost(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2Double__Sequence * member =
    (const deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__rollout_cost(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__rollout_cost(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2Double * item =
    ((const deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__rollout_cost(untyped_member, index));
  deva_planning_msgs2__msg__String2Double * value =
    (deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__rollout_cost(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2Double * item =
    ((deva_planning_msgs2__msg__String2Double *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__rollout_cost(untyped_member, index));
  const deva_planning_msgs2__msg__String2Double * value =
    (const deva_planning_msgs2__msg__String2Double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__rollout_cost(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2Double__Sequence * member =
    (deva_planning_msgs2__msg__String2Double__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2Double__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2Double__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__scalable_flags(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_flags(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_flags(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_flags(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_flags(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__scalable_flags(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__scalable_multimap(
  const void * untyped_member)
{
  const deva_planning_msgs2__msg__String2String__Sequence * member =
    (const deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_multimap(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs2__msg__String2String__Sequence * member =
    (const deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_multimap(
  void * untyped_member, size_t index)
{
  deva_planning_msgs2__msg__String2String__Sequence * member =
    (deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs2__msg__String2String * item =
    ((const deva_planning_msgs2__msg__String2String *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_multimap(untyped_member, index));
  deva_planning_msgs2__msg__String2String * value =
    (deva_planning_msgs2__msg__String2String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs2__msg__String2String * item =
    ((deva_planning_msgs2__msg__String2String *)
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_multimap(untyped_member, index));
  const deva_planning_msgs2__msg__String2String * value =
    (const deva_planning_msgs2__msg__String2String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__scalable_multimap(
  void * untyped_member, size_t size)
{
  deva_planning_msgs2__msg__String2String__Sequence * member =
    (deva_planning_msgs2__msg__String2String__Sequence *)(untyped_member);
  deva_planning_msgs2__msg__String2String__Sequence__fini(member);
  return deva_planning_msgs2__msg__String2String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_member_array[9] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rollout_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, rollout_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, total_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, game_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rollout_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, rollout_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "game_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, game_cost),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__game_cost,  // size() function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__game_cost,  // get_const(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__game_cost,  // get(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__game_cost,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__game_cost,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__game_cost  // resize(index) function pointer
  },
  {
    "rollout_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, rollout_cost),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__rollout_cost,  // size() function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__rollout_cost,  // get_const(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__rollout_cost,  // get(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__rollout_cost,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__rollout_cost,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__rollout_cost  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, scalable_flags),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__scalable_flags,  // size() function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_flags,  // get_const(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_flags,  // get(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__scalable_flags,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__scalable_flags,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__SemanticTreeNode, scalable_multimap),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__size_function__SemanticTreeNode__scalable_multimap,  // size() function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_const_function__SemanticTreeNode__scalable_multimap,  // get_const(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__get_function__SemanticTreeNode__scalable_multimap,  // get(index) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__fetch_function__SemanticTreeNode__scalable_multimap,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__assign_function__SemanticTreeNode__scalable_multimap,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__resize_function__SemanticTreeNode__scalable_multimap  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "SemanticTreeNode",  // message name
  9,  // number of fields
  sizeof(deva_planning_msgs2__msg__SemanticTreeNode),
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_member_array,  // message members
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, SemanticTreeNode)() {
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Double)();
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Double)();
  deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2String)();
  if (!deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__SemanticTreeNode__rosidl_typesupport_introspection_c__SemanticTreeNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
