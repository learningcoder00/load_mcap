// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_function_msgs/msg/detail/dba_state_msg__rosidl_typesupport_introspection_c.h"
#include "deva_function_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_function_msgs/msg/detail/dba_state_msg__functions.h"
#include "deva_function_msgs/msg/detail/dba_state_msg__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_function_msgs__msg__DbaStateMsg__init(message_memory);
}

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_fini_function(void * message_memory)
{
  deva_function_msgs__msg__DbaStateMsg__fini(message_memory);
}

size_t deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__size_function__DbaStateMsg__door_open_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__door_open_state(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__door_open_state(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__fetch_function__DbaStateMsg__door_open_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__door_open_state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__assign_function__DbaStateMsg__door_open_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__door_open_state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__size_function__DbaStateMsg__belt(
  const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__belt(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__belt(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__fetch_function__DbaStateMsg__belt(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__belt(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__assign_function__DbaStateMsg__belt(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__belt(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_member_array[18] = {
  {
    "publish_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, publish_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epb_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, epb_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, acc_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brake_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, brake_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_open_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, door_open_state),  // bytes offset in struct
    NULL,  // default value
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__size_function__DbaStateMsg__door_open_state,  // size() function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__door_open_state,  // get_const(index) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__door_open_state,  // get(index) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__fetch_function__DbaStateMsg__door_open_state,  // fetch(index, &value) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__assign_function__DbaStateMsg__door_open_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_lamp_lever_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, turn_lamp_lever_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, late_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_driveover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, late_driveover),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, longit_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_driveover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, longit_driveover),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "belt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, belt),  // bytes offset in struct
    NULL,  // default value
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__size_function__DbaStateMsg__belt,  // size() function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_const_function__DbaStateMsg__belt,  // get_const(index) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__get_function__DbaStateMsg__belt,  // get(index) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__fetch_function__DbaStateMsg__belt,  // fetch(index, &value) function pointer
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__assign_function__DbaStateMsg__belt,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "save_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, save_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, slot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "park_out_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, park_out_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "run_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__DbaStateMsg, run_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_members = {
  "deva_function_msgs__msg",  // message namespace
  "DbaStateMsg",  // message name
  18,  // number of fields
  sizeof(deva_function_msgs__msg__DbaStateMsg),
  deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_member_array,  // message members
  deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_type_support_handle = {
  0,
  &deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_function_msgs, msg, DbaStateMsg)() {
  if (!deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_type_support_handle.typesupport_identifier) {
    deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_function_msgs__msg__DbaStateMsg__rosidl_typesupport_introspection_c__DbaStateMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
