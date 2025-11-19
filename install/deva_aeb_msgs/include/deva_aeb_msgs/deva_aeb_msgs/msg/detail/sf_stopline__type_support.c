// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFStopline.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_stopline__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_stopline__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_stopline__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFStopline__init(message_memory);
}

void deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFStopline__fini(message_memory);
}

size_t deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__size_function__SFStopline__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_const_function__SFStopline__reserved(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_function__SFStopline__reserved(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__fetch_function__SFStopline__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_const_function__SFStopline__reserved(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__assign_function__SFStopline__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_function__SFStopline__reserved(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leftpointposlgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, leftpointposlgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leftpointposlat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, leftpointposlat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightpointposlgt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, rightpointposlgt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rightpointposlat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, rightpointposlat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, confi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFStopline, reserved),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__size_function__SFStopline__reserved,  // size() function pointer
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_const_function__SFStopline__reserved,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__get_function__SFStopline__reserved,  // get(index) function pointer
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__fetch_function__SFStopline__reserved,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__assign_function__SFStopline__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFStopline",  // message name
  7,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFStopline),
  deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_member_array,  // message members
  deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFStopline)() {
  if (!deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFStopline__rosidl_typesupport_introspection_c__SFStopline_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
