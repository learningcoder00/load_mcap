// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'ref_line'
// Member 'expand_lane_center_border'
#include "deva_map_msgs/msg/detail/path_point__struct.h"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__struct.h"
// Member 'avp_sub_map'
#include "deva_map_msgs/msg/detail/avp_sub_map__struct.h"

/// Struct defined in msg/AvpLocalMap in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__AvpLocalMap
{
  deva_common_msgs__msg__Header header;
  deva_map_msgs__msg__PathPoint__Sequence ref_line;
  deva_map_msgs__msg__AvpBoundary__Sequence drivable_boundary;
  deva_map_msgs__msg__PathPoint__Sequence expand_lane_center_border;
  deva_map_msgs__msg__AvpSubMap avp_sub_map;
} deva_map_msgs__msg__AvpLocalMap;

// Struct for a sequence of deva_map_msgs__msg__AvpLocalMap.
typedef struct deva_map_msgs__msg__AvpLocalMap__Sequence
{
  deva_map_msgs__msg__AvpLocalMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__AvpLocalMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_H_
