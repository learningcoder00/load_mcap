// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'clsle'
// Member 'clsri'
#include "deva_aeb_msgs/msg/detail/lane_fst_info__struct.h"
// Member 'secclsle'
// Member 'secclsri'
// Member 'thiclsle'
// Member 'thiclsri'
#include "deva_aeb_msgs/msg/detail/lane_sec_info__struct.h"
// Member 'rearclsle'
// Member 'rearclsri'
// Member 'rearsecclsle'
// Member 'rearsecclsri'
// Member 'rearthiclsle'
// Member 'rearthiclsri'
#include "deva_aeb_msgs/msg/detail/rear_lane_info__struct.h"

/// Struct defined in msg/SFFusionLaneMkrList in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionLaneMkrList
{
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t lanechg;
  uint8_t reserved;
  float distostopline;
  deva_aeb_msgs__msg__LaneFstInfo clsle;
  deva_aeb_msgs__msg__LaneFstInfo clsri;
  deva_aeb_msgs__msg__LaneSecInfo secclsle;
  deva_aeb_msgs__msg__LaneSecInfo secclsri;
  deva_aeb_msgs__msg__LaneSecInfo thiclsle;
  deva_aeb_msgs__msg__LaneSecInfo thiclsri;
  deva_aeb_msgs__msg__RearLaneInfo rearclsle;
  deva_aeb_msgs__msg__RearLaneInfo rearclsri;
  deva_aeb_msgs__msg__RearLaneInfo rearsecclsle;
  deva_aeb_msgs__msg__RearLaneInfo rearsecclsri;
  deva_aeb_msgs__msg__RearLaneInfo rearthiclsle;
  deva_aeb_msgs__msg__RearLaneInfo rearthiclsri;
  uint8_t isambiguouslinepatternleft;
  uint8_t isambiguouslinepatternright;
  float cmpforvisnyaw;
} deva_aeb_msgs__msg__SFFusionLaneMkrList;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionLaneMkrList.
typedef struct deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence
{
  deva_aeb_msgs__msg__SFFusionLaneMkrList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionLaneMkrList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_LANE_MKR_LIST__STRUCT_H_
