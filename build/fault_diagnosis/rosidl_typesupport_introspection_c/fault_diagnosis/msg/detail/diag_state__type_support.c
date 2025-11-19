// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fault_diagnosis/msg/detail/diag_state__rosidl_typesupport_introspection_c.h"
#include "fault_diagnosis/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fault_diagnosis/msg/detail/diag_state__functions.h"
#include "fault_diagnosis/msg/detail/diag_state__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `fault_name`
// Member `info`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fault_diagnosis__msg__DiagState__init(message_memory);
}

void fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_fini_function(void * message_memory)
{
  fault_diagnosis__msg__DiagState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__DiagState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fault_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__DiagState, fault_name),  // bytes offset in struct
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
    offsetof(fault_diagnosis__msg__DiagState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis__msg__DiagState, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_members = {
  "fault_diagnosis__msg",  // message namespace
  "DiagState",  // message name
  4,  // number of fields
  sizeof(fault_diagnosis__msg__DiagState),
  fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_member_array,  // message members
  fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_init_function,  // function to initialize message memory (memory has to be allocated)
  fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_type_support_handle = {
  0,
  &fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fault_diagnosis
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fault_diagnosis, msg, DiagState)() {
  fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  if (!fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_type_support_handle.typesupport_identifier) {
    fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fault_diagnosis__msg__DiagState__rosidl_typesupport_introspection_c__DiagState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
