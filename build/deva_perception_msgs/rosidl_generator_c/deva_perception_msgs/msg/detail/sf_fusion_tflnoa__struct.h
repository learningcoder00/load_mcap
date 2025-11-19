// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_H_

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
// Member 'f120_region'
// Member 'f30_region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.h"
// Member 'tflquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.h"
// Member 'tflquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.h"

/// Struct defined in msg/SFFusionTFLNOA in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__SFFusionTFLNOA
{
  uint32_t id;
  uint32_t lifetime;
  uint8_t relevancy;
  uint8_t type;
  uint8_t color;
  uint8_t cycle_time;
  uint8_t number;
  uint8_t confi;
  uint8_t flashstatus;
  uint8_t background;
  uint8_t reserved;
  float poslgt;
  float poslat;
  float height;
  deva_perception_msgs__msg__TrafficRegion region;
  deva_perception_msgs__msg__QuadrangleVcs tflquadranglevcs;
  deva_perception_msgs__msg__QuadrangleImg tflquadrangleimg;
  float utmx;
  float utmy;
  float utmz;
  uint8_t type_list[4];
  uint8_t color_list[4];
  uint8_t blocked;
  uint8_t has_count_down;
  uint8_t light_num;
  uint8_t focus;
  int8_t pole;
  int64_t sync_from_track_id;
  uint8_t source;
  deva_perception_msgs__msg__TrafficRegion f120_region;
  deva_perception_msgs__msg__TrafficRegion f30_region;
  uint8_t i_back1;
  uint8_t i_back2;
  uint8_t i_back3;
  float f_back1;
  float f_back2;
  float f_back3;
} deva_perception_msgs__msg__SFFusionTFLNOA;

// Struct for a sequence of deva_perception_msgs__msg__SFFusionTFLNOA.
typedef struct deva_perception_msgs__msg__SFFusionTFLNOA__Sequence
{
  deva_perception_msgs__msg__SFFusionTFLNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SFFusionTFLNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_H_
