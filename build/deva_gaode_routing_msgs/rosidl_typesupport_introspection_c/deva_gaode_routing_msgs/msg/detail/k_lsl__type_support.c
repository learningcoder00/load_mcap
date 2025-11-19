// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__struct.h"


// Include directives for member types
// Member `in_link_id`
// Member `pass_link_id_s`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `in_link_id`
// Member `pass_link_id_s`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"
// Member `node_id`
#include "deva_gaode_routing_msgs/msg/node_id_type.h"
// Member `node_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__rosidl_typesupport_introspection_c.h"
// Member `lsl_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__KLsl__init(message_memory);
}

void deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__KLsl__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__size_function__KLsl__lsl_lanes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_const_function__KLsl__lsl_lanes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_function__KLsl__lsl_lanes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__fetch_function__KLsl__lsl_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_const_function__KLsl__lsl_lanes(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__assign_function__KLsl__lsl_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_function__KLsl__lsl_lanes(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__resize_function__KLsl__lsl_lanes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_member_array[7] = {
  {
    "in_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, in_link_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_link_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, pass_link_id_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seqnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, seqnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lsl_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, lsl_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, lane_nums),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lsl_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLsl, lsl_lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__size_function__KLsl__lsl_lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_const_function__KLsl__lsl_lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__get_function__KLsl__lsl_lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__fetch_function__KLsl__lsl_lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__assign_function__KLsl__lsl_lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__resize_function__KLsl__lsl_lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "KLsl",  // message name
  7,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__KLsl),
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, KLsl)() {
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NodeIDType)();
  deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  if (!deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__KLsl__rosidl_typesupport_introspection_c__KLsl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
