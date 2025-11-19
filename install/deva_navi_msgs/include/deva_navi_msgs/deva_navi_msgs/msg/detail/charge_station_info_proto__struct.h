// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'show'
// Member 'projective'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.h"
// Member 'poi_id'
// Member 'name'
// Member 'brand_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChargeStationInfoProto in the package deva_navi_msgs.
/**
  * ChargeStationInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__ChargeStationInfoProto
{
  int32_t segment_idx;
  int32_t direction;
  deva_navi_msgs__msg__Coord3DDoubleProto show;
  deva_navi_msgs__msg__Coord3DDoubleProto projective;
  rosidl_runtime_c__String poi_id;
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String brand_name;
  int32_t max_power;
  int32_t charge_percent;
  int32_t charge_time;
  int32_t remaining_capacity;
} deva_navi_msgs__msg__ChargeStationInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__ChargeStationInfoProto.
typedef struct deva_navi_msgs__msg__ChargeStationInfoProto__Sequence
{
  deva_navi_msgs__msg__ChargeStationInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__ChargeStationInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_H_
