// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FsmParkingState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FsmParkingState in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FsmParkingState
{
  double publish_timestamp;
  uint8_t fsm_apa_current_state;
} deva_function_msgs__msg__FsmParkingState;

// Struct for a sequence of deva_function_msgs__msg__FsmParkingState.
typedef struct deva_function_msgs__msg__FsmParkingState__Sequence
{
  deva_function_msgs__msg__FsmParkingState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FsmParkingState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__STRUCT_H_
