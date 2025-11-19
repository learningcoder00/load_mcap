// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fault_diagnosis/msg/detail/odd_status__rosidl_typesupport_introspection_c.h"
#include "fault_diagnosis/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fault_diagnosis/msg/detail/odd_status__functions.h"
#include "fault_diagnosis/msg/detail/odd_status__struct.h"


// Include directives for member types
// Member `function_id`
// Member `fault_reasons`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fault_diagnosis__msg__OddStatus__init(message_memory);
}

void fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_fini_function(void * message_memory)
{
  fault_diagnosis__msg__OddStatus__fini(message_memory);
}

size_t fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__size_function__OddStatus__fault_reasons(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_const_function__OddStatus__fault_reasons(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_function__OddStatus__fault_reasons(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__fetch_function__OddStatus__fault_reasons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_const_function__OddStatus__fault_reasons(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__assign_function__OddStatus__fault_reasons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_function__OddStatus__fault_reasons(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__resize_function__OddStatus__fault_reasons(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_member_array[3] = {
  {
    "function_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__OddStatus, function_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__OddStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_reasons",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__OddStatus, fault_reasons),  // bytes offset in struct
    NULL,  // default value
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__size_function__OddStatus__fault_reasons,  // size() function pointer
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_const_function__OddStatus__fault_reasons,  // get_const(index) function pointer
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__get_function__OddStatus__fault_reasons,  // get(index) function pointer
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__fetch_function__OddStatus__fault_reasons,  // fetch(index, &value) function pointer
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__assign_function__OddStatus__fault_reasons,  // assign(index, value) function pointer
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__resize_function__OddStatus__fault_reasons  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_members = {
  "fault_diagnosis__msg",  // message namespace
  "OddStatus",  // message name
  3,  // number of fields
  sizeof(fault_diagnosis__msg__OddStatus),
  fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_member_array,  // message members
  fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_type_support_handle = {
  0,
  &fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fault_diagnosis
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fault_diagnosis, msg, OddStatus)() {
  if (!fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_type_support_handle.typesupport_identifier) {
    fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fault_diagnosis__msg__OddStatus__rosidl_typesupport_introspection_c__OddStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
