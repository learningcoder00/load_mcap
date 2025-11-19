// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_function_msgs:msg/FaultStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_function_msgs/msg/detail/fault_status__rosidl_typesupport_introspection_c.h"
#include "deva_function_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_function_msgs/msg/detail/fault_status__functions.h"
#include "deva_function_msgs/msg/detail/fault_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_function_msgs__msg__FaultStatus__init(message_memory);
}

void deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_fini_function(void * message_memory)
{
  deva_function_msgs__msg__FaultStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_member_array[3] = {
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__FaultStatus, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__FaultStatus, error_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "report_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__FaultStatus, report_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_members = {
  "deva_function_msgs__msg",  // message namespace
  "FaultStatus",  // message name
  3,  // number of fields
  sizeof(deva_function_msgs__msg__FaultStatus),
  deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_member_array,  // message members
  deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_type_support_handle = {
  0,
  &deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_function_msgs, msg, FaultStatus)() {
  if (!deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_type_support_handle.typesupport_identifier) {
    deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_function_msgs__msg__FaultStatus__rosidl_typesupport_introspection_c__FaultStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
