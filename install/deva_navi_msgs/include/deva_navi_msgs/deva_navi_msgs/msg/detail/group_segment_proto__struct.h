// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/GroupSegmentProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'road_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GroupSegmentProto in the package deva_navi_msgs.
/**
  * GroupSegmentProto.msg
 */
typedef struct deva_navi_msgs__msg__GroupSegmentProto
{
  int64_t length;
  int64_t toll_cost;
  rosidl_runtime_c__String road_name;
  int32_t start_segment_index;
  int32_t segment_count;
  int32_t status;
  int32_t speed;
  bool is_via_point;
  bool is_crucial;
} deva_navi_msgs__msg__GroupSegmentProto;

// Struct for a sequence of deva_navi_msgs__msg__GroupSegmentProto.
typedef struct deva_navi_msgs__msg__GroupSegmentProto__Sequence
{
  deva_navi_msgs__msg__GroupSegmentProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__GroupSegmentProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_H_
