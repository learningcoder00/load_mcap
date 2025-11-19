// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FsmTestToolDataMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__STRUCT_H_

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
// Member 'keys'
// Member 'values'
// Member 'state'
// Member 'conditions'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FsmTestToolDataMsg in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FsmTestToolDataMsg
{
  deva_common_msgs__msg__Header header;
  uint8_t cmd;
  uint32_t request_id;
  rosidl_runtime_c__String__Sequence keys;
  rosidl_runtime_c__String__Sequence values;
  rosidl_runtime_c__String state;
  rosidl_runtime_c__String__Sequence conditions;
} deva_function_msgs__msg__FsmTestToolDataMsg;

// Struct for a sequence of deva_function_msgs__msg__FsmTestToolDataMsg.
typedef struct deva_function_msgs__msg__FsmTestToolDataMsg__Sequence
{
  deva_function_msgs__msg__FsmTestToolDataMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FsmTestToolDataMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_TEST_TOOL_DATA_MSG__STRUCT_H_
