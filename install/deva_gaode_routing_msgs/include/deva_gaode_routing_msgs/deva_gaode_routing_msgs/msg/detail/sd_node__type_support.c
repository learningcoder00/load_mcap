// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SDNode.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_node__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_node__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_node__struct.h"


// Include directives for member types
// Member `geo`
#include "deva_gaode_routing_msgs/msg/web_point.h"
// Member `geo`
#include "deva_gaode_routing_msgs/msg/detail/web_point__rosidl_typesupport_introspection_c.h"
// Member `in_linklist`
// Member `out_linklist`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `sd_cross`
#include "deva_gaode_routing_msgs/msg/sd_cross.h"
// Member `sd_cross`
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__rosidl_typesupport_introspection_c.h"
// Member `solid_line`
#include "deva_gaode_routing_msgs/msg/solid_line.h"
// Member `solid_line`
#include "deva_gaode_routing_msgs/msg/detail/solid_line__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SDNode__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SDNode__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__in_linklist(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__in_linklist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__in_linklist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__in_linklist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__in_linklist(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__in_linklist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__in_linklist(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__in_linklist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__out_linklist(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__out_linklist(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__out_linklist(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__out_linklist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__out_linklist(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__out_linklist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__out_linklist(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__out_linklist(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__solid_line(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SolidLine__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SolidLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__solid_line(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SolidLine__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SolidLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__solid_line(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SolidLine__Sequence * member =
    (deva_gaode_routing_msgs__msg__SolidLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__solid_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SolidLine * item =
    ((const deva_gaode_routing_msgs__msg__SolidLine *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__solid_line(untyped_member, index));
  deva_gaode_routing_msgs__msg__SolidLine * value =
    (deva_gaode_routing_msgs__msg__SolidLine *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__solid_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SolidLine * item =
    ((deva_gaode_routing_msgs__msg__SolidLine *)
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__solid_line(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SolidLine * value =
    (const deva_gaode_routing_msgs__msg__SolidLine *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__solid_line(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SolidLine__Sequence * member =
    (deva_gaode_routing_msgs__msg__SolidLine__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SolidLine__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SolidLine__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, geo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_linklist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, in_linklist),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__in_linklist,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__in_linklist,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__in_linklist,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__in_linklist,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__in_linklist,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__in_linklist  // resize(index) function pointer
  },
  {
    "out_linklist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, out_linklist),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__out_linklist,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__out_linklist,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__out_linklist,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__out_linklist,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__out_linklist,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__out_linklist  // resize(index) function pointer
  },
  {
    "change_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, change_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sd_cross",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, sd_cross),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solid_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDNode, solid_line),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__size_function__SDNode__solid_line,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_const_function__SDNode__solid_line,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__get_function__SDNode__solid_line,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__fetch_function__SDNode__solid_line,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__assign_function__SDNode__solid_line,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__resize_function__SDNode__solid_line  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SDNode",  // message name
  7,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SDNode),
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SDNode)() {
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SDCross)();
  deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SolidLine)();
  if (!deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SDNode__rosidl_typesupport_introspection_c__SDNode_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
