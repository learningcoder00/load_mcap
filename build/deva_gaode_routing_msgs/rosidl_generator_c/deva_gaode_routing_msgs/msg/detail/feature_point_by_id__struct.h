// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'lane_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'types'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.h"
// Member 'link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.h"

/// Struct defined in msg/FeaturePointById in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__FeaturePointById
{
  deva_gaode_routing_msgs__msg__FeatureIDType id;
  rosidl_runtime_c__uint8__Sequence types;
  uint8_t direction;
  deva_gaode_routing_msgs__msg__Coordinate coordinate;
  deva_gaode_routing_msgs__msg__LinkIDType link_id;
  float project_percent;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence lane_id_s;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence previous_id_s;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence next_id_s;
} deva_gaode_routing_msgs__msg__FeaturePointById;

// Struct for a sequence of deva_gaode_routing_msgs__msg__FeaturePointById.
typedef struct deva_gaode_routing_msgs__msg__FeaturePointById__Sequence
{
  deva_gaode_routing_msgs__msg__FeaturePointById * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__FeaturePointById__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_H_
