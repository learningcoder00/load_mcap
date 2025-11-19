// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/MachCalibrationResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_H_

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

/// Struct defined in msg/MachCalibrationResult in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__MachCalibrationResult
{
  deva_common_msgs__msg__Header header;
  uint8_t calibration_type;
  uint8_t senor_type;
  uint8_t length;
  uint8_t res_content[256];
} deva_function_msgs__msg__MachCalibrationResult;

// Struct for a sequence of deva_function_msgs__msg__MachCalibrationResult.
typedef struct deva_function_msgs__msg__MachCalibrationResult__Sequence
{
  deva_function_msgs__msg__MachCalibrationResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__MachCalibrationResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_H_
