// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__functions.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trafficsign`
// Member `trafficsign_all`
#include "deva_perception_msgs/msg/sf_fusion_tsnoa.h"
// Member `trafficsign`
// Member `trafficsign_all`
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__SFFusionTSListNOA__init(message_memory);
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__SFFusionTSListNOA__fini(message_memory);
}

size_t deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__reversed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__reversed(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__reversed(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__reversed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__reversed(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__reversed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__reversed(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__trafficsign(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SFFusionTSNOA * member =
    (const deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SFFusionTSNOA * member =
    (deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__trafficsign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SFFusionTSNOA * item =
    ((const deva_perception_msgs__msg__SFFusionTSNOA *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign(untyped_member, index));
  deva_perception_msgs__msg__SFFusionTSNOA * value =
    (deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__trafficsign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SFFusionTSNOA * item =
    ((deva_perception_msgs__msg__SFFusionTSNOA *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign(untyped_member, index));
  const deva_perception_msgs__msg__SFFusionTSNOA * value =
    (const deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__trafficsign_all(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__SFFusionTSNOA__Sequence * member =
    (const deva_perception_msgs__msg__SFFusionTSNOA__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign_all(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SFFusionTSNOA__Sequence * member =
    (const deva_perception_msgs__msg__SFFusionTSNOA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign_all(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence * member =
    (deva_perception_msgs__msg__SFFusionTSNOA__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__trafficsign_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SFFusionTSNOA * item =
    ((const deva_perception_msgs__msg__SFFusionTSNOA *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign_all(untyped_member, index));
  deva_perception_msgs__msg__SFFusionTSNOA * value =
    (deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__trafficsign_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SFFusionTSNOA * item =
    ((deva_perception_msgs__msg__SFFusionTSNOA *)
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign_all(untyped_member, index));
  const deva_perception_msgs__msg__SFFusionTSNOA * value =
    (const deva_perception_msgs__msg__SFFusionTSNOA *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTSListNOA__trafficsign_all(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence * member =
    (deva_perception_msgs__msg__SFFusionTSNOA__Sequence *)(untyped_member);
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence__fini(member);
  return deva_perception_msgs__msg__SFFusionTSNOA__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, timestamp),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, framenum),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, reversed),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__reversed,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__reversed,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__reversed,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__reversed,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__reversed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trafficsign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, trafficsign),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__trafficsign,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__trafficsign,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__trafficsign,  // assign(index, value) function pointer
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
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, validsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trafficsign_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, trafficsign_all),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTSListNOA__trafficsign_all,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTSListNOA__trafficsign_all,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTSListNOA__trafficsign_all,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTSListNOA__trafficsign_all,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTSListNOA__trafficsign_all,  // assign(index, value) function pointer
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTSListNOA__trafficsign_all  // resize(index) function pointer
  },
  {
    "all_validsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTSListNOA, all_validsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "SFFusionTSListNOA",  // message name
  8,  // number of fields
  sizeof(deva_perception_msgs__msg__SFFusionTSListNOA),
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_member_array,  // message members
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTSListNOA)() {
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTSNOA)();
  deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTSNOA)();
  if (!deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__SFFusionTSListNOA__rosidl_typesupport_introspection_c__SFFusionTSListNOA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
