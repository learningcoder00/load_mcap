// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/QuadrangleImg in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__QuadrangleImg
{
  uint16_t imglupointposu;
  uint16_t imglupointposv;
  uint16_t imgrupointposu;
  uint16_t imgrupointposv;
  uint16_t imgrdpointposu;
  uint16_t imgrdpointposv;
  uint16_t imgldpointposu;
  uint16_t imgldpointposv;
} deva_perception_msgs__msg__QuadrangleImg;

// Struct for a sequence of deva_perception_msgs__msg__QuadrangleImg.
typedef struct deva_perception_msgs__msg__QuadrangleImg__Sequence
{
  deva_perception_msgs__msg__QuadrangleImg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__QuadrangleImg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_H_
