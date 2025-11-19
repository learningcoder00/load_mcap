// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/ReferenceLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/reference_line__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/reference_line__functions.h"
#include "deva_planning_msgs/msg/detail/reference_line__struct.h"


// Include directives for member types
// Member `reference_line`
// Member `original_merge_point`
// Member `merge_point`
#include "nav_msgs/msg/path.h"
// Member `reference_line`
// Member `original_merge_point`
// Member `merge_point`
#include "nav_msgs/msg/detail/path__rosidl_typesupport_introspection_c.h"
// Member `cipv_ids`
// Member `cutin_cipv_ids`
// Member `nearest_cipv_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__ReferenceLine__init(message_memory);
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__ReferenceLine__fini(message_memory);
}

size_t deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__cipv_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cipv_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cipv_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__cipv_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cipv_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__cipv_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cipv_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__cipv_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__cutin_cipv_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cutin_cipv_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cutin_cipv_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__cutin_cipv_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cutin_cipv_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__cutin_cipv_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cutin_cipv_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__cutin_cipv_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__nearest_cipv_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__nearest_cipv_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__nearest_cipv_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__nearest_cipv_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__nearest_cipv_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__nearest_cipv_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__nearest_cipv_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__nearest_cipv_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_member_array[14] = {
  {
    "reference_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, reference_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "original_merge_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, original_merge_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "merge_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, merge_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reference_line_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, reference_line_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "line_is_virtual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, line_is_virtual),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_line_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, left_line_nums),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_line_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, right_line_nums),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cipv_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, cipv_ids),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__cipv_ids,  // size() function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cipv_ids,  // get_const(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cipv_ids,  // get(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__cipv_ids,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__cipv_ids,  // assign(index, value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__cipv_ids  // resize(index) function pointer
  },
  {
    "cutin_cipv_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, cutin_cipv_ids),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__cutin_cipv_ids,  // size() function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__cutin_cipv_ids,  // get_const(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__cutin_cipv_ids,  // get(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__cutin_cipv_ids,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__cutin_cipv_ids,  // assign(index, value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__cutin_cipv_ids  // resize(index) function pointer
  },
  {
    "nearest_cipv_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, nearest_cipv_ids),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__size_function__ReferenceLine__nearest_cipv_ids,  // size() function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_const_function__ReferenceLine__nearest_cipv_ids,  // get_const(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__get_function__ReferenceLine__nearest_cipv_ids,  // get(index) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__fetch_function__ReferenceLine__nearest_cipv_ids,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__assign_function__ReferenceLine__nearest_cipv_ids,  // assign(index, value) function pointer
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__resize_function__ReferenceLine__nearest_cipv_ids  // resize(index) function pointer
  },
  {
    "navi_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, navi_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effic_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, effic_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_scenario",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__ReferenceLine, turn_scenario),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "ReferenceLine",  // message name
  14,  // number of fields
  sizeof(deva_planning_msgs__msg__ReferenceLine),
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_member_array,  // message members
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, ReferenceLine)() {
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_msgs, msg, Path)();
  if (!deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__ReferenceLine__rosidl_typesupport_introspection_c__ReferenceLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
