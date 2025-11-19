// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/restriction_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/restriction_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.h"


// Include directives for member types
// Member `title`
// Member `desc`
// Member `tipc`
#include "rosidl_runtime_c/string_functions.h"
// Member `rule_ids`
// Member `tail_nums`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__RestrictionInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__RestrictionInfoProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__size_function__RestrictionInfoProto__rule_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__rule_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__rule_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__fetch_function__RestrictionInfoProto__rule_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__rule_ids(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__assign_function__RestrictionInfoProto__rule_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__rule_ids(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__resize_function__RestrictionInfoProto__rule_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__size_function__RestrictionInfoProto__tail_nums(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__tail_nums(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__tail_nums(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__fetch_function__RestrictionInfoProto__tail_nums(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__tail_nums(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__assign_function__RestrictionInfoProto__tail_nums(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__tail_nums(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__resize_function__RestrictionInfoProto__tail_nums(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_member_array[8] = {
  {
    "title",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, title),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "desc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, desc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tipc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, tipc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "city_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, city_code),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "title_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, title_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rule_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, rule_ids),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__size_function__RestrictionInfoProto__rule_ids,  // size() function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__rule_ids,  // get_const(index) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__rule_ids,  // get(index) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__fetch_function__RestrictionInfoProto__rule_ids,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__assign_function__RestrictionInfoProto__rule_ids,  // assign(index, value) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__resize_function__RestrictionInfoProto__rule_ids  // resize(index) function pointer
  },
  {
    "tail_nums",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RestrictionInfoProto, tail_nums),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__size_function__RestrictionInfoProto__tail_nums,  // size() function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_const_function__RestrictionInfoProto__tail_nums,  // get_const(index) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__get_function__RestrictionInfoProto__tail_nums,  // get(index) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__fetch_function__RestrictionInfoProto__tail_nums,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__assign_function__RestrictionInfoProto__tail_nums,  // assign(index, value) function pointer
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__resize_function__RestrictionInfoProto__tail_nums  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "RestrictionInfoProto",  // message name
  8,  // number of fields
  sizeof(deva_navi_msgs__msg__RestrictionInfoProto),
  deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, RestrictionInfoProto)() {
  if (!deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__RestrictionInfoProto__rosidl_typesupport_introspection_c__RestrictionInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
