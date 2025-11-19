// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFObjInfoNOA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFObjInfoNOA__init(message_memory);
}

void deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFObjInfoNOA__fini(message_memory);
}

size_t deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__size_function__SFObjInfoNOA__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_const_function__SFObjInfoNOA__reserved(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_function__SFObjInfoNOA__reserved(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__fetch_function__SFObjInfoNOA__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_const_function__SFObjInfoNOA__reserved(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__assign_function__SFObjInfoNOA__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_function__SFObjInfoNOA__reserved(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_member_array[16] = {
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hei",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, hei),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dstlatfrommidoflaneself",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, dstlatfrommidoflaneself),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "typ",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, typ),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sidenear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, sidenear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "indcrturn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, indcrturn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "indcrbrkli",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, indcrbrkli),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "indcrhzrdli",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, indcrhzrdli),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mtnpat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, mtnpat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mtnpathist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, mtnpathist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusnsrcraw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, fusnsrcraw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clisnsideradarctrlwarnqly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, clisnsideradarctrlwarnqly),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clisnsideradarctrlbrkqly",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, clisnsideradarctrlbrkqly),  // bytes offset in struct
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
    2,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, reserved),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__size_function__SFObjInfoNOA__reserved,  // size() function pointer
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_const_function__SFObjInfoNOA__reserved,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__get_function__SFObjInfoNOA__reserved,  // get(index) function pointer
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__fetch_function__SFObjInfoNOA__reserved,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__assign_function__SFObjInfoNOA__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lan_assignment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFObjInfoNOA, lan_assignment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFObjInfoNOA",  // message name
  16,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFObjInfoNOA),
  deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_member_array,  // message members
  deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFObjInfoNOA)() {
  if (!deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFObjInfoNOA__rosidl_typesupport_introspection_c__SFObjInfoNOA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
