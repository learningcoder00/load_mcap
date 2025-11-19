// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/FeatureIDType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_ID_TYPE__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_ID_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FeatureIDType in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__FeatureIDType
{
  uint32_t tile_id;
  uint32_t id;
} deva_gaode_routing_msgs__msg__FeatureIDType;

// Struct for a sequence of deva_gaode_routing_msgs__msg__FeatureIDType.
typedef struct deva_gaode_routing_msgs__msg__FeatureIDType__Sequence
{
  deva_gaode_routing_msgs__msg__FeatureIDType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__FeatureIDType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_ID_TYPE__STRUCT_H_
