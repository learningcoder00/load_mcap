// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_H_

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
// Member 'fsm_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/FsmStateMsg in the package deva_function_msgs.
/**
  * FSM sends out the current state and the state of the sub-state machine.
  * Driving and Parking state machine and sub-state machine state
 */
typedef struct deva_function_msgs__msg__FsmStateMsg
{
  deva_common_msgs__msg__Header header;
  double publish_timestamp;
  rosidl_runtime_c__String fsm_state;
  uint8_t top_state;
  uint8_t acc_state;
  uint8_t icc_state;
  uint8_t noa_state;
  uint8_t d2d_state;
  uint8_t calibra_state;
  uint8_t mapping_state;
  uint8_t parking_state;
} deva_function_msgs__msg__FsmStateMsg;

// Struct for a sequence of deva_function_msgs__msg__FsmStateMsg.
typedef struct deva_function_msgs__msg__FsmStateMsg__Sequence
{
  deva_function_msgs__msg__FsmStateMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FsmStateMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_H_
