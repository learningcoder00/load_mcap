// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/GroupTimeRangeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GroupTimeRangeProto in the package deva_navi_msgs.
typedef struct deva_navi_msgs__msg__GroupTimeRangeProto
{
  int64_t start_time;
  int64_t end_time;
} deva_navi_msgs__msg__GroupTimeRangeProto;

// Struct for a sequence of deva_navi_msgs__msg__GroupTimeRangeProto.
typedef struct deva_navi_msgs__msg__GroupTimeRangeProto__Sequence
{
  deva_navi_msgs__msg__GroupTimeRangeProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__GroupTimeRangeProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_H_
