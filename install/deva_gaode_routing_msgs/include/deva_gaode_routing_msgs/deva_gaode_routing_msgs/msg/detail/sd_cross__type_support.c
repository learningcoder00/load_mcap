// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SDCross.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_cross__struct.h"


// Include directives for member types
// Member `sub_node`
// Member `inner_roads`
// Member `in_roads`
// Member `out_roads`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SDCross__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SDCross__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__sub_node(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__sub_node(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__sub_node(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__sub_node(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__sub_node(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__sub_node(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__sub_node(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__sub_node(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__inner_roads(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__inner_roads(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__inner_roads(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__inner_roads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__inner_roads(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__inner_roads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__inner_roads(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__inner_roads(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__in_roads(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__in_roads(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__in_roads(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__in_roads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__in_roads(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__in_roads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__in_roads(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__in_roads(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__out_roads(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__out_roads(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__out_roads(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__out_roads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__out_roads(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__out_roads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__out_roads(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__out_roads(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_member_array[7] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "main_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, main_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sub_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, sub_node),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__sub_node,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__sub_node,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__sub_node,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__sub_node,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__sub_node,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__sub_node  // resize(index) function pointer
  },
  {
    "inner_roads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, inner_roads),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__inner_roads,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__inner_roads,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__inner_roads,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__inner_roads,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__inner_roads,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__inner_roads  // resize(index) function pointer
  },
  {
    "in_roads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, in_roads),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__in_roads,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__in_roads,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__in_roads,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__in_roads,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__in_roads,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__in_roads  // resize(index) function pointer
  },
  {
    "out_roads",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SDCross, out_roads),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__size_function__SDCross__out_roads,  // size() function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_const_function__SDCross__out_roads,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__get_function__SDCross__out_roads,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__fetch_function__SDCross__out_roads,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__assign_function__SDCross__out_roads,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__resize_function__SDCross__out_roads  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SDCross",  // message name
  7,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SDCross),
  deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SDCross)() {
  if (!deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SDCross__rosidl_typesupport_introspection_c__SDCross_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
