// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/RoadStructType.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RoadStructType in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__RoadStructType
{
  uint8_t enum_road_struct_type;
  double confidence;
} environment_model_msgs__msg__RoadStructType;

// Struct for a sequence of environment_model_msgs__msg__RoadStructType.
typedef struct environment_model_msgs__msg__RoadStructType__Sequence
{
  environment_model_msgs__msg__RoadStructType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__RoadStructType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__STRUCT_H_
