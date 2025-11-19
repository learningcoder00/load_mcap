// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_H_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'next_road_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/WebCrossNaviInfo in the package deva_gaode_routing_msgs.
typedef struct deva_gaode_routing_msgs__msg__WebCrossNaviInfo
{
  int32_t assist_action;
  int32_t cross_maneuver_id;
  int32_t cur_to_segment_dist;
  int32_t cur_to_segment_time;
  int32_t dest_direction;
  int32_t main_action;
  int32_t maneuver_id;
  rosidl_runtime_c__String next_road_name;
  int32_t out_cnt;
  int32_t path_id;
  int32_t rev;
  int32_t reversed;
  int32_t seg_idx;
  int32_t tunnel_flag;
  int32_t via_num;
} deva_gaode_routing_msgs__msg__WebCrossNaviInfo;

// Struct for a sequence of deva_gaode_routing_msgs__msg__WebCrossNaviInfo.
typedef struct deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence
{
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_H_
