// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'navi_route'
#include "deva_gaode_routing_msgs/msg/detail/nav_route__struct.h"
// Member 'paths'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__struct.h"
// Member 'links'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__struct.h"
// Member 'path_splits'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__struct.h"
// Member 'path_merges'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__struct.h"
// Member 'sd_nodes'
#include "deva_gaode_routing_msgs/msg/detail/sd_node__struct.h"

/// Struct defined in msg/SdProMap in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__SdProMap
{
  uint32_t version;
  uint32_t city_code;
  deva_gaode_routing_msgs__msg__NavRoute navi_route;
  deva_gaode_routing_msgs__msg__SdProPath__Sequence paths;
  deva_gaode_routing_msgs__msg__SdProLink__Sequence links;
  deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence path_splits;
  deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence path_merges;
  deva_gaode_routing_msgs__msg__SDNode__Sequence sd_nodes;
} deva_gaode_routing_msgs__msg__SdProMap;

// Struct for a sequence of deva_gaode_routing_msgs__msg__SdProMap.
typedef struct deva_gaode_routing_msgs__msg__SdProMap__Sequence
{
  deva_gaode_routing_msgs__msg__SdProMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__SdProMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_MAP__STRUCT_H_
