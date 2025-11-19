// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fault_diagnosis/msg/detail/odd_status_array__rosidl_typesupport_introspection_c.h"
#include "fault_diagnosis/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fault_diagnosis/msg/detail/odd_status_array__functions.h"
#include "fault_diagnosis/msg/detail/odd_status_array__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `functions`
#include "fault_diagnosis/msg/odd_status.h"
// Member `functions`
#include "fault_diagnosis/msg/detail/odd_status__rosidl_typesupport_introspection_c.h"
// Member `global_faults`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fault_diagnosis__msg__ODDStatusArray__init(message_memory);
}

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_fini_function(void * message_memory)
{
  fault_diagnosis__msg__ODDStatusArray__fini(message_memory);
}

size_t fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__size_function__ODDStatusArray__functions(
  const void * untyped_member)
{
  const fault_diagnosis__msg__OddStatus__Sequence * member =
    (const fault_diagnosis__msg__OddStatus__Sequence *)(untyped_member);
  return member->size;
}

const void * fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__functions(
  const void * untyped_member, size_t index)
{
  const fault_diagnosis__msg__OddStatus__Sequence * member =
    (const fault_diagnosis__msg__OddStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__functions(
  void * untyped_member, size_t index)
{
  fault_diagnosis__msg__OddStatus__Sequence * member =
    (fault_diagnosis__msg__OddStatus__Sequence *)(untyped_member);
  return &member->data[index];
}

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__fetch_function__ODDStatusArray__functions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const fault_diagnosis__msg__OddStatus * item =
    ((const fault_diagnosis__msg__OddStatus *)
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__functions(untyped_member, index));
  fault_diagnosis__msg__OddStatus * value =
    (fault_diagnosis__msg__OddStatus *)(untyped_value);
  *value = *item;
}

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__assign_function__ODDStatusArray__functions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  fault_diagnosis__msg__OddStatus * item =
    ((fault_diagnosis__msg__OddStatus *)
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__functions(untyped_member, index));
  const fault_diagnosis__msg__OddStatus * value =
    (const fault_diagnosis__msg__OddStatus *)(untyped_value);
  *item = *value;
}

bool fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__resize_function__ODDStatusArray__functions(
  void * untyped_member, size_t size)
{
  fault_diagnosis__msg__OddStatus__Sequence * member =
    (fault_diagnosis__msg__OddStatus__Sequence *)(untyped_member);
  fault_diagnosis__msg__OddStatus__Sequence__fini(member);
  return fault_diagnosis__msg__OddStatus__Sequence__init(member, size);
}

size_t fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__size_function__ODDStatusArray__global_faults(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__global_faults(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__global_faults(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__fetch_function__ODDStatusArray__global_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__global_faults(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__assign_function__ODDStatusArray__global_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__global_faults(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__resize_function__ODDStatusArray__global_faults(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__ODDStatusArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "functions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__ODDStatusArray, functions),  // bytes offset in struct
    NULL,  // default value
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__size_function__ODDStatusArray__functions,  // size() function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__functions,  // get_const(index) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__functions,  // get(index) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__fetch_function__ODDStatusArray__functions,  // fetch(index, &value) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__assign_function__ODDStatusArray__functions,  // assign(index, value) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__resize_function__ODDStatusArray__functions  // resize(index) function pointer
  },
  {
    "global_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__ODDStatusArray, global_faults),  // bytes offset in struct
    NULL,  // default value
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__size_function__ODDStatusArray__global_faults,  // size() function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_const_function__ODDStatusArray__global_faults,  // get_const(index) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__get_function__ODDStatusArray__global_faults,  // get(index) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__fetch_function__ODDStatusArray__global_faults,  // fetch(index, &value) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__assign_function__ODDStatusArray__global_faults,  // assign(index, value) function pointer
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__resize_function__ODDStatusArray__global_faults  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_members = {
  "fault_diagnosis__msg",  // message namespace
  "ODDStatusArray",  // message name
  3,  // number of fields
  sizeof(fault_diagnosis__msg__ODDStatusArray),
  fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_member_array,  // message members
  fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_type_support_handle = {
  0,
  &fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fault_diagnosis
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fault_diagnosis, msg, ODDStatusArray)() {
  fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fault_diagnosis, msg, OddStatus)();
  if (!fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_type_support_handle.typesupport_identifier) {
    fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fault_diagnosis__msg__ODDStatusArray__rosidl_typesupport_introspection_c__ODDStatusArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
