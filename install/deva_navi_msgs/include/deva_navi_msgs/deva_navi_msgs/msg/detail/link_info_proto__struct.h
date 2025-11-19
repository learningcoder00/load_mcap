// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'gantry_infos'
#include "deva_navi_msgs/msg/detail/gantry_info_proto__struct.h"
// Member 'cameras'
#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.h"
// Member 'road_name'
// Member 'service_name'
#include "rosidl_runtime_c/string.h"
// Member 'road_facilities'
#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.h"
// Member 'turn_infos'
#include "deva_navi_msgs/msg/detail/turn_info_proto__struct.h"

/// Struct defined in msg/LinkInfoProto in the package deva_navi_msgs.
/**
  * LinkInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__LinkInfoProto
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence points;
  deva_navi_msgs__msg__GantryInfoProto__Sequence gantry_infos;
  deva_navi_msgs__msg__NaviCameraProto__Sequence cameras;
  bool is_valid;
  int64_t related_path_id;
  int32_t related_segment_index;
  int32_t link_index;
  int32_t length;
  int64_t travel_time;
  int64_t static_travel_time;
  rosidl_runtime_c__String road_name;
  deva_navi_msgs__msg__RoadFacilityProto__Sequence road_facilities;
  int64_t topo_id_64;
  int32_t urid;
  int32_t link_direction;
  int32_t main_action;
  int32_t assistant_action;
  int64_t adcode;
  int32_t link_type;
  int32_t formway;
  int32_t road_class;
  int32_t road_direction;
  int32_t ownership;
  bool is_toll;
  bool is_over_head;
  bool has_parallel_road;
  bool has_multi_out;
  bool has_traffic_light;
  bool has_mix_fork;
  bool is_at_service;
  bool is_restricting;
  int32_t limit_flag;
  int32_t speed;
  deva_navi_msgs__msg__TurnInfoProto__Sequence turn_infos;
  rosidl_runtime_c__String service_name;
  bool inner_road;
  bool is_parking_road;
  int32_t traffic_status;
} deva_navi_msgs__msg__LinkInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__LinkInfoProto.
typedef struct deva_navi_msgs__msg__LinkInfoProto__Sequence
{
  deva_navi_msgs__msg__LinkInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__LinkInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_H_
