// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_H_

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
// Member 'new_h_region'
// Member 'bind_ramp_region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.h"
// Member 'status'
#include "deva_perception_msgs/msg/detail/traffic_status__struct.h"

/// Struct defined in msg/TrafficObject in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__TrafficObject
{
  uint8_t class_idx;
  bool det_is_focus_light;
  uint8_t sign_appx_type;
  deva_perception_msgs__msg__TrafficRegion region;
  deva_perception_msgs__msg__TrafficRegion new_h_region;
  deva_perception_msgs__msg__TrafficStatus status[4];
  uint8_t f120_ori_color;
  uint8_t f120_ori_color_light_type;
  uint8_t color;
  uint8_t origin_color;
  uint8_t light_type;
  uint8_t origin_light_type;
  int32_t count_down;
  int32_t orig_count_down;
  bool has_count_down;
  bool ori_has_count_down;
  int32_t f120_origin_sign_type;
  int32_t origin_sign_type;
  int32_t sign_type;
  float sign_confidence;
  float digit_confidence;
  int32_t digit_type;
  uint8_t digit_class_idx;
  float ego_x;
  float ego_y;
  float ego_z;
  float ramp_confidence;
  bool is_ramp;
  bool origin_is_ramp;
  bool is_ramp_from_41;
  bool is_ramp_double_checked;
  int32_t pole;
  bool is_rechecked_ramp;
  float rechecked_ramp_score;
  deva_perception_msgs__msg__TrafficRegion bind_ramp_region;
  float ego_x_out;
  bool is_recheck_result;
  float model_depth;
  uint8_t tl_oriention;
} deva_perception_msgs__msg__TrafficObject;

// Struct for a sequence of deva_perception_msgs__msg__TrafficObject.
typedef struct deva_perception_msgs__msg__TrafficObject__Sequence
{
  deva_perception_msgs__msg__TrafficObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__TrafficObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_H_
