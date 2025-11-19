// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_H_

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
// Member 'poi_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ViaPointInfoProto in the package deva_navi_msgs.
/**
  * ViaPointInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__ViaPointInfoProto
{
  int32_t segment_idx;
  int32_t direction;
  deva_navi_msgs__msg__Coord3DDoubleProto show;
  deva_navi_msgs__msg__Coord3DDoubleProto projective;
  rosidl_runtime_c__String poi_name;
} deva_navi_msgs__msg__ViaPointInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__ViaPointInfoProto.
typedef struct deva_navi_msgs__msg__ViaPointInfoProto__Sequence
{
  deva_navi_msgs__msg__ViaPointInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__ViaPointInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_H_
