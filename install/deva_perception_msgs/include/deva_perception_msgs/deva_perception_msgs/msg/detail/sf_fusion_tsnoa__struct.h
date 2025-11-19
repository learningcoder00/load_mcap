// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.h"
// Member 'tsquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.h"
// Member 'tsquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.h"

/// Struct defined in msg/SFFusionTSNOA in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__SFFusionTSNOA
{
  uint32_t id;
  float dstlgttoeve;
  float dstlattoeve;
  float height;
  float direction;
  uint8_t electcsgn;
  uint8_t lanelocn;
  uint8_t locn;
  uint8_t rlvc;
  uint8_t notrlvres;
  uint8_t qly;
  uint8_t typ;
  uint8_t val;
  bool is_ramp;
  deva_perception_msgs__msg__TrafficRegion region;
  uint8_t reserved;
  uint16_t spplinfoval;
  uint8_t spplinfotype;
  deva_perception_msgs__msg__QuadrangleVcs tsquadranglevcs;
  deva_perception_msgs__msg__QuadrangleImg tsquadrangleimg;
  float utmx;
  float utmy;
  float utmz;
  uint32_t pole;
} deva_perception_msgs__msg__SFFusionTSNOA;

// Struct for a sequence of deva_perception_msgs__msg__SFFusionTSNOA.
typedef struct deva_perception_msgs__msg__SFFusionTSNOA__Sequence
{
  deva_perception_msgs__msg__SFFusionTSNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SFFusionTSNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TSNOA__STRUCT_H_
