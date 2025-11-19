// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/QuadrangleVcs in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__QuadrangleVcs
{
  float leftuppointx;
  float leftuppointy;
  float leftuppointz;
  float rightuppointx;
  float rightuppointy;
  float rightuppointz;
  float rightdownpointx;
  float rightdownpointy;
  float rightdownpointz;
  float leftdownpointx;
  float leftdownpointy;
  float leftdownpointz;
} deva_perception_msgs__msg__QuadrangleVcs;

// Struct for a sequence of deva_perception_msgs__msg__QuadrangleVcs.
typedef struct deva_perception_msgs__msg__QuadrangleVcs__Sequence
{
  deva_perception_msgs__msg__QuadrangleVcs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__QuadrangleVcs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_H_
