// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/FMToDrivingCmd.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_H_

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

/// Struct defined in msg/FMToDrivingCmd in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__FMToDrivingCmd
{
  deva_common_msgs__msg__Header header;
  uint16_t err_num;
  uint8_t dilg_data[1000];
} deva_function_msgs__msg__FMToDrivingCmd;

// Struct for a sequence of deva_function_msgs__msg__FMToDrivingCmd.
typedef struct deva_function_msgs__msg__FMToDrivingCmd__Sequence
{
  deva_function_msgs__msg__FMToDrivingCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__FMToDrivingCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_H_
