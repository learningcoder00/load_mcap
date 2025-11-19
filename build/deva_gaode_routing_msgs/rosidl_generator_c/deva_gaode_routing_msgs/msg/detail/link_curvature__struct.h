// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/LinkCurvature.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LinkCurvature in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__LinkCurvature
{
  uint32_t offset;
  int32_t curvature;
} deva_gaode_routing_msgs__msg__LinkCurvature;

// Struct for a sequence of deva_gaode_routing_msgs__msg__LinkCurvature.
typedef struct deva_gaode_routing_msgs__msg__LinkCurvature__Sequence
{
  deva_gaode_routing_msgs__msg__LinkCurvature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__LinkCurvature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_CURVATURE__STRUCT_H_
