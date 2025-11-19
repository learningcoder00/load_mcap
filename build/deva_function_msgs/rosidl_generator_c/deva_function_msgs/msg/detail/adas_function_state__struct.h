// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/ADASFunctionState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_H_

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

/// Struct defined in msg/ADASFunctionState in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__ADASFunctionState
{
  deva_common_msgs__msg__Header header;
  uint8_t adas_function_state;
} deva_function_msgs__msg__ADASFunctionState;

// Struct for a sequence of deva_function_msgs__msg__ADASFunctionState.
typedef struct deva_function_msgs__msg__ADASFunctionState__Sequence
{
  deva_function_msgs__msg__ADASFunctionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__ADASFunctionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_H_
