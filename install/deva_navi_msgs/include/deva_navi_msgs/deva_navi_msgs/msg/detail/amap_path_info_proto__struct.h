// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'all_3d_traffic_lights'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'segment_infos'
#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.h"
// Member 'line_icon_points'
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__struct.h"
// Member 'city_adcode_list'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'via_point_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.h"
// Member 'charge_station_info'
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.h"
// Member 'odd_seg_infos'
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.h"
// Member 'plan_channel_id'
// Member 'offline_req_custom_identity_id'
// Member 'navi_id'
#include "rosidl_runtime_c/string.h"
// Member 'group_segments'
#include "deva_navi_msgs/msg/detail/group_segment_proto__struct.h"
// Member 'restriction_info'
#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.h"
// Member 'end_poi'
#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.h"
// Member 'tip'
#include "deva_navi_msgs/msg/detail/tip_info_proto__struct.h"
// Member 'elec_path_info'
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.h"
// Member 'path_description_info'
#include "deva_navi_msgs/msg/detail/path_description_info_proto__struct.h"

/// Struct defined in msg/AmapPathInfoProto in the package deva_navi_msgs.
/**
  * AmapPathInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__AmapPathInfoProto
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence all_3d_traffic_lights;
  deva_navi_msgs__msg__SegmentInfoProto__Sequence segment_infos;
  deva_navi_msgs__msg__LineIconPointProto__Sequence line_icon_points;
  rosidl_runtime_c__int64__Sequence city_adcode_list;
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence via_point_info;
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence charge_station_info;
  deva_navi_msgs__msg__OddSegInfoProto__Sequence odd_seg_infos;
  rosidl_runtime_c__String plan_channel_id;
  rosidl_runtime_c__String offline_req_custom_identity_id;
  bool is_valid;
  int64_t path_id;
  int32_t type;
  int64_t length;
  int64_t strategy;
  int64_t travel_time;
  int64_t static_travel_time;
  int32_t toll_cost;
  rosidl_runtime_c__String navi_id;
  bool is_online;
  deva_navi_msgs__msg__GroupSegmentProto__Sequence group_segments;
  deva_navi_msgs__msg__RestrictionInfoProto restriction_info;
  deva_navi_msgs__msg__POIInfoProto end_poi;
  deva_navi_msgs__msg__TipInfoProto tip;
  int32_t end_direction;
  bool is_holiday_free;
  bool is_truck_path;
  int64_t data_version;
  int64_t normal_plan_time;
  int32_t route_type;
  deva_navi_msgs__msg__ElecPathInfoProto elec_path_info;
  deva_navi_msgs__msg__PathDescriptionInfoProto path_description_info;
  int64_t remain_toll_cost;
  int64_t main_route_remain_toll_cost;
} deva_navi_msgs__msg__AmapPathInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__AmapPathInfoProto.
typedef struct deva_navi_msgs__msg__AmapPathInfoProto__Sequence
{
  deva_navi_msgs__msg__AmapPathInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__AmapPathInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_H_
