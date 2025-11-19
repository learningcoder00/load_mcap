// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/HA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'feature_point'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.h"
// Member 'lane'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.h"

/// Struct defined in msg/HA in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__HA
{
  deva_gaode_routing_msgs__msg__FeaturePoint feature_point;
  deva_gaode_routing_msgs__msg__LANE lane;
} deva_gaode_routing_msgs__msg__HA;

// Struct for a sequence of deva_gaode_routing_msgs__msg__HA.
typedef struct deva_gaode_routing_msgs__msg__HA__Sequence
{
  deva_gaode_routing_msgs__msg__HA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__HA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_H_
