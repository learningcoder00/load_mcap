// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FaultStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FaultStatus in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FaultStatus
{
  uint32_t error_code;
  uint8_t error_status;
  uint64_t report_time;
} deva_function_msgs__msg__FaultStatus;

// Struct for a sequence of deva_function_msgs__msg__FaultStatus.
typedef struct deva_function_msgs__msg__FaultStatus__Sequence
{
  deva_function_msgs__msg__FaultStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FaultStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_H_
