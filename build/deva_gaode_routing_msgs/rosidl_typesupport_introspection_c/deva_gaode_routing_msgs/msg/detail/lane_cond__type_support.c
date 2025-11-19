// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.h"


// Include directives for member types
// Member `date`
#include "rosidl_runtime_c/string_functions.h"
// Member `vehicles`
// Member `special_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__LaneCond__init(message_memory);
}

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__LaneCond__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__size_function__LaneCond__vehicles(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__vehicles(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__vehicles(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__fetch_function__LaneCond__vehicles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__vehicles(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__assign_function__LaneCond__vehicles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__vehicles(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__resize_function__LaneCond__vehicles(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__size_function__LaneCond__special_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__special_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__special_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__fetch_function__LaneCond__special_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__special_times(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__assign_function__LaneCond__special_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__special_times(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__resize_function__LaneCond__special_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_member_array[5] = {
  {
    "laneinfo_cond",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneCond, laneinfo_cond),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneCond, link_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneCond, date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneCond, vehicles),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__size_function__LaneCond__vehicles,  // size() function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__vehicles,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__vehicles,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__fetch_function__LaneCond__vehicles,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__assign_function__LaneCond__vehicles,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__resize_function__LaneCond__vehicles  // resize(index) function pointer
  },
  {
    "special_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneCond, special_times),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__size_function__LaneCond__special_times,  // size() function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_const_function__LaneCond__special_times,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__get_function__LaneCond__special_times,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__fetch_function__LaneCond__special_times,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__assign_function__LaneCond__special_times,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__resize_function__LaneCond__special_times  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "LaneCond",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__LaneCond),
  deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneCond)() {
  if (!deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__LaneCond__rosidl_typesupport_introspection_c__LaneCond_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
