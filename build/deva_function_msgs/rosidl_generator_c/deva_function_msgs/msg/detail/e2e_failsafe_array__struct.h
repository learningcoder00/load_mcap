// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_

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
// Member 'e2e_failsafe_array'
#include "deva_function_msgs/msg/detail/e2e_failsafe__struct.h"

/// Struct defined in msg/E2eFailsafeArray in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__E2eFailsafeArray
{
  deva_common_msgs__msg__Header header;
  uint8_t index;
  deva_function_msgs__msg__E2eFailsafe__Sequence e2e_failsafe_array;
  uint8_t sum_result;
} deva_function_msgs__msg__E2eFailsafeArray;

// Struct for a sequence of deva_function_msgs__msg__E2eFailsafeArray.
typedef struct deva_function_msgs__msg__E2eFailsafeArray__Sequence
{
  deva_function_msgs__msg__E2eFailsafeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__E2eFailsafeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_
