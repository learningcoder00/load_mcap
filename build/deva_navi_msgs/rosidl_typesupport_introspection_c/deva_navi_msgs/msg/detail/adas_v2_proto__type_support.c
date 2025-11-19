// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/AdasV2Proto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/adas_v2_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/adas_v2_proto__functions.h"
#include "deva_navi_msgs/msg/detail/adas_v2_proto__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__AdasV2Proto__init(message_memory);
}

void deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__AdasV2Proto__fini(message_memory);
}

size_t deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__size_function__AdasV2Proto__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_const_function__AdasV2Proto__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_function__AdasV2Proto__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__fetch_function__AdasV2Proto__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_const_function__AdasV2Proto__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__assign_function__AdasV2Proto__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_function__AdasV2Proto__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__resize_function__AdasV2Proto__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_member_array[2] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AdasV2Proto, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AdasV2Proto, data),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__size_function__AdasV2Proto__data,  // size() function pointer
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_const_function__AdasV2Proto__data,  // get_const(index) function pointer
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__get_function__AdasV2Proto__data,  // get(index) function pointer
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__fetch_function__AdasV2Proto__data,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__assign_function__AdasV2Proto__data,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__resize_function__AdasV2Proto__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "AdasV2Proto",  // message name
  2,  // number of fields
  sizeof(deva_navi_msgs__msg__AdasV2Proto),
  deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_member_array,  // message members
  deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, AdasV2Proto)() {
  if (!deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__AdasV2Proto__rosidl_typesupport_introspection_c__AdasV2Proto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
