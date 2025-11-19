// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/IconRoadProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__STRUCT_H_

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
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/IconRoadProto in the package deva_navi_msgs.
/**
  * IconRoadProto.msg
 */
typedef struct deva_navi_msgs__msg__IconRoadProto
{
  int32_t usage;
  int32_t type;
  rosidl_runtime_c__int32__Sequence points;
} deva_navi_msgs__msg__IconRoadProto;

// Struct for a sequence of deva_navi_msgs__msg__IconRoadProto.
typedef struct deva_navi_msgs__msg__IconRoadProto__Sequence
{
  deva_navi_msgs__msg__IconRoadProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__IconRoadProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ICON_ROAD_PROTO__STRUCT_H_
