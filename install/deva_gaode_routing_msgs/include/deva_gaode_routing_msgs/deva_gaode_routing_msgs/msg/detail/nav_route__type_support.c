// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/nav_route__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/nav_route__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/nav_route__struct.h"


// Include directives for member types
// Member `route_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__NavRoute__init(message_memory);
}

void deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__NavRoute__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__size_function__NavRoute__route_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_const_function__NavRoute__route_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_function__NavRoute__route_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__fetch_function__NavRoute__route_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_const_function__NavRoute__route_list(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__assign_function__NavRoute__route_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_function__NavRoute__route_list(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__resize_function__NavRoute__route_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_member_array[4] = {
  {
    "route_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__NavRoute, route_list),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__size_function__NavRoute__route_list,  // size() function pointer
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_const_function__NavRoute__route_list,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__get_function__NavRoute__route_list,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__fetch_function__NavRoute__route_list,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__assign_function__NavRoute__route_list,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__resize_function__NavRoute__route_list  // resize(index) function pointer
  },
  {
    "navi_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__NavRoute, navi_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "match_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__NavRoute, match_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remain_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__NavRoute, remain_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "NavRoute",  // message name
  4,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__NavRoute),
  deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NavRoute)() {
  if (!deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__NavRoute__rosidl_typesupport_introspection_c__NavRoute_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
