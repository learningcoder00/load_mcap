// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_H_

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
// Member 'fusionlanemkrlist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.h"
// Member 'fusionroadedge'
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.h"

/// Struct defined in msg/FusionInfoForAEBLaneAndEdge in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge
{
  deva_common_msgs__msg__Header header;
  deva_aeb_msgs__msg__SFFusionLaneMkrList fusionlanemkrlist;
  deva_aeb_msgs__msg__SFFusionRoadEdge fusionroadedge;
} deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge;

// Struct for a sequence of deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence
{
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_LANE_AND_EDGE__STRUCT_H_
