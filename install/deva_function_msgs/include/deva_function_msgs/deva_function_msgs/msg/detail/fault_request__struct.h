// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FaultRequest.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_H_

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
// Member 'report_fault_status'
#include "deva_function_msgs/msg/detail/fault_status__struct.h"

/// Struct defined in msg/FaultRequest in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FaultRequest
{
  deva_common_msgs__msg__Header header;
  uint8_t request_type;
  deva_function_msgs__msg__FaultStatus report_fault_status;
  uint8_t response_status;
} deva_function_msgs__msg__FaultRequest;

// Struct for a sequence of deva_function_msgs__msg__FaultRequest.
typedef struct deva_function_msgs__msg__FaultRequest__Sequence
{
  deva_function_msgs__msg__FaultRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FaultRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_H_
