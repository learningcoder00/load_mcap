// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/String2Double.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/string2_double__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_double__struct.h"


// Include directives for member types
// Member `key`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__String2Double__init(message_memory);
}

void deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__String2Double__fini(message_memory);
}

size_t deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__size_function__String2Double__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_const_function__String2Double__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_function__String2Double__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__fetch_function__String2Double__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_const_function__String2Double__value(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__assign_function__String2Double__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_function__String2Double__value(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__resize_function__String2Double__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__String2Double, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__String2Double, value),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__size_function__String2Double__value,  // size() function pointer
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_const_function__String2Double__value,  // get_const(index) function pointer
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__get_function__String2Double__value,  // get(index) function pointer
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__fetch_function__String2Double__value,  // fetch(index, &value) function pointer
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__assign_function__String2Double__value,  // assign(index, value) function pointer
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__resize_function__String2Double__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "String2Double",  // message name
  2,  // number of fields
  sizeof(deva_planning_msgs2__msg__String2Double),
  deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_member_array,  // message members
  deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2Double)() {
  if (!deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__String2Double__rosidl_typesupport_introspection_c__String2Double_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
