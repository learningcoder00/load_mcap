// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/state_context__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/state_context__functions.h"
#include "deva_planning_msgs/msg/detail/state_context__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `front_obstacle_id`
// Member `rear_obstacle_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `cipv_obstacle_id`
// Member `nudge_obstacle_id`
// Member `cutin_follow_obstacle_id`
// Member `cutin_overtake_obstacle_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__StateContext__init(message_memory);
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__StateContext__fini(message_memory);
}

size_t deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cipv_obstacle_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cipv_obstacle_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cipv_obstacle_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cipv_obstacle_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cipv_obstacle_id(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cipv_obstacle_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cipv_obstacle_id(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cipv_obstacle_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__nudge_obstacle_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__nudge_obstacle_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__nudge_obstacle_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__nudge_obstacle_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__nudge_obstacle_id(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__nudge_obstacle_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__nudge_obstacle_id(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__nudge_obstacle_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cutin_follow_obstacle_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_follow_obstacle_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_follow_obstacle_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cutin_follow_obstacle_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_follow_obstacle_id(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cutin_follow_obstacle_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_follow_obstacle_id(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cutin_follow_obstacle_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cutin_overtake_obstacle_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_overtake_obstacle_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_overtake_obstacle_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cutin_overtake_obstacle_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_overtake_obstacle_id(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cutin_overtake_obstacle_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_overtake_obstacle_id(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cutin_overtake_obstacle_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[23] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, header),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, behavior_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navi_map_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, navi_map_mode),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, routing_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_lane_seq_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, target_lane_seq_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, state_score),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, score),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, use_mdriver_ego),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, target_line_id),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, current_line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gap_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, gap_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gap_line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, gap_line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, start_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, end_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "future_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, future_length),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, front_obstacle_id),  // bytes offset in struct
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
    offsetof(deva_planning_msgs__msg__StateContext, rear_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cipv_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, cipv_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cipv_obstacle_id,  // size() function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cipv_obstacle_id,  // get_const(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cipv_obstacle_id,  // get(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cipv_obstacle_id,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cipv_obstacle_id,  // assign(index, value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cipv_obstacle_id  // resize(index) function pointer
  },
  {
    "nudge_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, nudge_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__nudge_obstacle_id,  // size() function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__nudge_obstacle_id,  // get_const(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__nudge_obstacle_id,  // get(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__nudge_obstacle_id,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__nudge_obstacle_id,  // assign(index, value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__nudge_obstacle_id  // resize(index) function pointer
  },
  {
    "cutin_follow_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, cutin_follow_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cutin_follow_obstacle_id,  // size() function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_follow_obstacle_id,  // get_const(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_follow_obstacle_id,  // get(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cutin_follow_obstacle_id,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cutin_follow_obstacle_id,  // assign(index, value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cutin_follow_obstacle_id  // resize(index) function pointer
  },
  {
    "cutin_overtake_obstacle_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, cutin_overtake_obstacle_id),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__size_function__StateContext__cutin_overtake_obstacle_id,  // size() function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_const_function__StateContext__cutin_overtake_obstacle_id,  // get_const(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__get_function__StateContext__cutin_overtake_obstacle_id,  // get(index) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__fetch_function__StateContext__cutin_overtake_obstacle_id,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__assign_function__StateContext__cutin_overtake_obstacle_id,  // assign(index, value) function pointer
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__resize_function__StateContext__cutin_overtake_obstacle_id  // resize(index) function pointer
  },
  {
    "lane_change_task",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__StateContext, lane_change_task),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "StateContext",  // message name
  23,  // number of fields
  sizeof(deva_planning_msgs__msg__StateContext),
  deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array,  // message members
  deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, StateContext)() {
  deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__StateContext__rosidl_typesupport_introspection_c__StateContext_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
