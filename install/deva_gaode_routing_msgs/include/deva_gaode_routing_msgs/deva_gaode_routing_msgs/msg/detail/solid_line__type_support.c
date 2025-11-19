// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SolidLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/solid_line__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/solid_line__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/solid_line__struct.h"


// Include directives for member types
// Member `pass_list`
// Member `lane_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SolidLine__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SolidLine__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__size_function__SolidLine__pass_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__pass_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__pass_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__fetch_function__SolidLine__pass_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__pass_list(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__assign_function__SolidLine__pass_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__pass_list(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__resize_function__SolidLine__pass_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__size_function__SolidLine__lane_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__lane_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__lane_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__fetch_function__SolidLine__lane_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__lane_list(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__assign_function__SolidLine__lane_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__lane_list(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__resize_function__SolidLine__lane_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_member_array[8] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, in_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, pass_list),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__size_function__SolidLine__pass_list,  // size() function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__pass_list,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__pass_list,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__fetch_function__SolidLine__pass_list,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__assign_function__SolidLine__pass_list,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__resize_function__SolidLine__pass_list  // resize(index) function pointer
  },
  {
    "out_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, out_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, seq_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, lane_list),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__size_function__SolidLine__lane_list,  // size() function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_const_function__SolidLine__lane_list,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__get_function__SolidLine__lane_list,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__fetch_function__SolidLine__lane_list,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__assign_function__SolidLine__lane_list,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__resize_function__SolidLine__lane_list  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SolidLine, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SolidLine",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SolidLine),
  deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SolidLine)() {
  if (!deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SolidLine__rosidl_typesupport_introspection_c__SolidLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
