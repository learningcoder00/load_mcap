// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/Vec3d.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC3D__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Vec3d in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__Vec3d
{
  double x;
  double y;
  double z;
} environment_model_msgs__msg__Vec3d;

// Struct for a sequence of environment_model_msgs__msg__Vec3d.
typedef struct environment_model_msgs__msg__Vec3d__Sequence
{
  environment_model_msgs__msg__Vec3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__Vec3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC3D__STRUCT_H_
