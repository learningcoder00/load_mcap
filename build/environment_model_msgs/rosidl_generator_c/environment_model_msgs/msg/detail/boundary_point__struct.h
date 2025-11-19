// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/BoundaryPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BoundaryPoint in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__BoundaryPoint
{
  double x;
  double y;
  /// bit 0 for is virutal or not
  uint8_t boundary_type;
} environment_model_msgs__msg__BoundaryPoint;

// Struct for a sequence of environment_model_msgs__msg__BoundaryPoint.
typedef struct environment_model_msgs__msg__BoundaryPoint__Sequence
{
  environment_model_msgs__msg__BoundaryPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__BoundaryPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUNDARY_POINT__STRUCT_H_
