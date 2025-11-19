// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_control_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_control_msgs/msg/detail/wheel_speed__rosidl_typesupport_introspection_c.h"
#include "deva_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_control_msgs/msg/detail/wheel_speed__functions.h"
#include "deva_control_msgs/msg/detail/wheel_speed__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_control_msgs__msg__WheelSpeed__init(message_memory);
}

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_fini_function(void * message_memory)
{
  deva_control_msgs__msg__WheelSpeed__fini(message_memory);
}

size_t deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__size_function__WheelSpeed__wheelspeed_rc_valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc_valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc_valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__fetch_function__WheelSpeed__wheelspeed_rc_valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc_valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__assign_function__WheelSpeed__wheelspeed_rc_valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc_valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__size_function__WheelSpeed__wheelspeed_rc(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__fetch_function__WheelSpeed__wheelspeed_rc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__assign_function__WheelSpeed__wheelspeed_rc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__WheelSpeed, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_count_start",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__WheelSpeed, loop_count_start),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_count_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__WheelSpeed, loop_count_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_rc_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__WheelSpeed, wheelspeed_rc_valid),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__size_function__WheelSpeed__wheelspeed_rc_valid,  // size() function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc_valid,  // get_const(index) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc_valid,  // get(index) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__fetch_function__WheelSpeed__wheelspeed_rc_valid,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__assign_function__WheelSpeed__wheelspeed_rc_valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_rc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__WheelSpeed, wheelspeed_rc),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__size_function__WheelSpeed__wheelspeed_rc,  // size() function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_const_function__WheelSpeed__wheelspeed_rc,  // get_const(index) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__get_function__WheelSpeed__wheelspeed_rc,  // get(index) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__fetch_function__WheelSpeed__wheelspeed_rc,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__assign_function__WheelSpeed__wheelspeed_rc,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_members = {
  "deva_control_msgs__msg",  // message namespace
  "WheelSpeed",  // message name
  5,  // number of fields
  sizeof(deva_control_msgs__msg__WheelSpeed),
  deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_member_array,  // message members
  deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_type_support_handle = {
  0,
  &deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, WheelSpeed)() {
  deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  if (!deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_type_support_handle.typesupport_identifier) {
    deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_control_msgs__msg__WheelSpeed__rosidl_typesupport_introspection_c__WheelSpeed_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
