// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'real_pos'
// Member 'navi_pos'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'poi_id'
// Member 'name'
// Member 'floor_name'
// Member 'parent_name'
// Member 'parent_simple_name'
// Member 'angel'
// Member 'parent_id'
// Member 'parent_rel'
// Member 'type_code'
// Member 'extend_info_flag'
// Member 'src_app'
#include "rosidl_runtime_c/string.h"
// Member 'points'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'charge_info'
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__struct.h"

/// Struct defined in msg/POIInfoProto in the package deva_navi_msgs.
/**
  * POIInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__POIInfoProto
{
  deva_navi_msgs__msg__Coord3DDoubleProto real_pos;
  deva_navi_msgs__msg__Coord3DDoubleProto navi_pos;
  float sigshelter;
  int32_t type;
  int64_t road_id;
  rosidl_runtime_c__String poi_id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String floor_name;
  rosidl_runtime_c__String parent_name;
  rosidl_runtime_c__String parent_simple_name;
  rosidl_runtime_c__String angel;
  rosidl_runtime_c__int32__Sequence points;
  rosidl_runtime_c__String parent_id;
  rosidl_runtime_c__String parent_rel;
  rosidl_runtime_c__String type_code;
  int32_t from_jump;
  int32_t overhead;
  int32_t point_cnt;
  int64_t check_point_link_id;
  float overhead_back_alt_diff;
  int32_t floor;
  rosidl_runtime_c__String extend_info_flag;
  rosidl_runtime_c__String src_app;
  deva_navi_msgs__msg__ChargingArgumentsInfoProto charge_info;
} deva_navi_msgs__msg__POIInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__POIInfoProto.
typedef struct deva_navi_msgs__msg__POIInfoProto__Sequence
{
  deva_navi_msgs__msg__POIInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__POIInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_H_
