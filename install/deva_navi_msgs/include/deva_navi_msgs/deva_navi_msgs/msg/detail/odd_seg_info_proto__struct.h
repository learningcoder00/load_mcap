// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/OddSegInfoProto in the package deva_navi_msgs.
/**
  * OddSegInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__OddSegInfoProto
{
  int64_t m_odd_len;
  int64_t m_start_seg_idx;
  int64_t m_start_link_idx;
  float m_start_off_set;
  int64_t m_end_seg_idx;
  int64_t m_end_link_idx;
  float m_end_off_set;
} deva_navi_msgs__msg__OddSegInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__OddSegInfoProto.
typedef struct deva_navi_msgs__msg__OddSegInfoProto__Sequence
{
  deva_navi_msgs__msg__OddSegInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__OddSegInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_H_
