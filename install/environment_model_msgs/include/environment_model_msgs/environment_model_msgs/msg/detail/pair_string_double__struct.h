// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/PairStringDouble.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'first'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PairStringDouble in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__PairStringDouble
{
  rosidl_runtime_c__String first;
  double second;
} environment_model_msgs__msg__PairStringDouble;

// Struct for a sequence of environment_model_msgs__msg__PairStringDouble.
typedef struct environment_model_msgs__msg__PairStringDouble__Sequence
{
  environment_model_msgs__msg__PairStringDouble * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__PairStringDouble__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__PAIR_STRING_DOUBLE__STRUCT_H_
