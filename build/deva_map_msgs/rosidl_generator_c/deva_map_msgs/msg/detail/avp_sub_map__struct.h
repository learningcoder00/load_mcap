// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'avp_sub_lanes'
#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.h"

/// Struct defined in msg/AvpSubMap in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__AvpSubMap
{
  deva_map_msgs__msg__AvpSubLane__Sequence avp_sub_lanes;
} deva_map_msgs__msg__AvpSubMap;

// Struct for a sequence of deva_map_msgs__msg__AvpSubMap.
typedef struct deva_map_msgs__msg__AvpSubMap__Sequence
{
  deva_map_msgs__msg__AvpSubMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__AvpSubMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_H_
