// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FsmModuleRunningStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'module_name'
// Member 'state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FsmModuleRunningStateMsg in the package deva_function_msgs.
/**
  * FSM receive running state form other module
 */
typedef struct deva_function_msgs__msg__FsmModuleRunningStateMsg
{
  deva_common_msgs__msg__Header header;
  rosidl_runtime_c__String module_name;
  rosidl_runtime_c__String state;
} deva_function_msgs__msg__FsmModuleRunningStateMsg;

// Struct for a sequence of deva_function_msgs__msg__FsmModuleRunningStateMsg.
typedef struct deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence
{
  deva_function_msgs__msg__FsmModuleRunningStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FsmModuleRunningStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_H_
