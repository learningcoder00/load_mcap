// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'feature_point_id_s'
// Member 'feature_point_id_s_by_link_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'feature_point_id_by_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.h"

/// Struct defined in msg/FeaturePoint in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__FeaturePoint
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_id_s;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_id_s_by_link_id;
  deva_gaode_routing_msgs__msg__FeaturePointById feature_point_id_by_id;
} deva_gaode_routing_msgs__msg__FeaturePoint;

// Struct for a sequence of deva_gaode_routing_msgs__msg__FeaturePoint.
typedef struct deva_gaode_routing_msgs__msg__FeaturePoint__Sequence
{
  deva_gaode_routing_msgs__msg__FeaturePoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__FeaturePoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_H_
