// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'link_infos'
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.h"
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'toll_road_name'
// Member 'guideboard_name'
// Member 'exit_name'
// Member 'crossing_name'
#include "rosidl_runtime_c/string.h"
// Member 'maneuver_icons'
#include "deva_navi_msgs/msg/detail/icon_road_proto__struct.h"

/// Struct defined in msg/SegmentInfoProto in the package deva_navi_msgs.
/**
  * SegmentInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__SegmentInfoProto
{
  deva_navi_msgs__msg__LinkInfoProto__Sequence link_infos;
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence points;
  bool is_valid;
  int64_t related_path_id;
  int32_t segment_index;
  int32_t main_action;
  int32_t assistant_action;
  int32_t slope;
  int32_t length;
  int32_t toll_cost;
  int32_t toll_dist;
  int64_t travel_time;
  int64_t traffic_light_num;
  bool is_end_of_road;
  rosidl_runtime_c__String toll_road_name;
  rosidl_runtime_c__String guideboard_name;
  rosidl_runtime_c__String exit_name;
  rosidl_runtime_c__String crossing_name;
  deva_navi_msgs__msg__IconRoadProto__Sequence maneuver_icons;
  int32_t uturn_and_arrivedest;
} deva_navi_msgs__msg__SegmentInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__SegmentInfoProto.
typedef struct deva_navi_msgs__msg__SegmentInfoProto__Sequence
{
  deva_navi_msgs__msg__SegmentInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__SegmentInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_H_
