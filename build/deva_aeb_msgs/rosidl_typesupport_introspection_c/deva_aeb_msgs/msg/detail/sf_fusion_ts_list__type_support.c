// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionTSList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__struct.h"


// Include directives for member types
// Member `trafficsign`
#include "deva_aeb_msgs/msg/sf_fusion_ts.h"
// Member `trafficsign`
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFFusionTSList__init(message_memory);
}

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFFusionTSList__fini(message_memory);
}

size_t deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__size_function__SFFusionTSList__reversed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__reversed(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__reversed(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSList__reversed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__reversed(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__assign_function__SFFusionTSList__reversed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__reversed(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__size_function__SFFusionTSList__trafficsign(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__trafficsign(
  const void * untyped_member, size_t index)
{
  const deva_aeb_msgs__msg__SFFusionTS * member =
    (const deva_aeb_msgs__msg__SFFusionTS *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__trafficsign(
  void * untyped_member, size_t index)
{
  deva_aeb_msgs__msg__SFFusionTS * member =
    (deva_aeb_msgs__msg__SFFusionTS *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSList__trafficsign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_aeb_msgs__msg__SFFusionTS * item =
    ((const deva_aeb_msgs__msg__SFFusionTS *)
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__trafficsign(untyped_member, index));
  deva_aeb_msgs__msg__SFFusionTS * value =
    (deva_aeb_msgs__msg__SFFusionTS *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__assign_function__SFFusionTSList__trafficsign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_aeb_msgs__msg__SFFusionTS * item =
    ((deva_aeb_msgs__msg__SFFusionTS *)
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__trafficsign(untyped_member, index));
  const deva_aeb_msgs__msg__SFFusionTS * value =
    (const deva_aeb_msgs__msg__SFFusionTS *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionTSList, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "framenum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionTSList, framenum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reversed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionTSList, reversed),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__size_function__SFFusionTSList__reversed,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__reversed,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__reversed,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSList__reversed,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__assign_function__SFFusionTSList__reversed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trafficsign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionTSList, trafficsign),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__size_function__SFFusionTSList__trafficsign,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSList__trafficsign,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__get_function__SFFusionTSList__trafficsign,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSList__trafficsign,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__assign_function__SFFusionTSList__trafficsign,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "validsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionTSList, validsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFFusionTSList",  // message name
  5,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFFusionTSList),
  deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_member_array,  // message members
  deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionTSList)() {
  deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionTS)();
  if (!deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFFusionTSList__rosidl_typesupport_introspection_c__SFFusionTSList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
