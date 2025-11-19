// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed_limit'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'time_range'
#include "deva_navi_msgs/msg/detail/group_time_range_proto__struct.h"

/// Struct defined in msg/RoadFacilityProto in the package deva_navi_msgs.
/**
  * RoadFacilityProto.msg
 */
typedef struct deva_navi_msgs__msg__RoadFacilityProto
{
  int32_t type;
  int32_t lon;
  int32_t lat;
  rosidl_runtime_c__int32__Sequence speed_limit;
  int32_t dist_to_end;
  int32_t valid_lane;
  int32_t lane_num;
  deva_navi_msgs__msg__GroupTimeRangeProto__Sequence time_range;
} deva_navi_msgs__msg__RoadFacilityProto;

// Struct for a sequence of deva_navi_msgs__msg__RoadFacilityProto.
typedef struct deva_navi_msgs__msg__RoadFacilityProto__Sequence
{
  deva_navi_msgs__msg__RoadFacilityProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__RoadFacilityProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__STRUCT_H_
