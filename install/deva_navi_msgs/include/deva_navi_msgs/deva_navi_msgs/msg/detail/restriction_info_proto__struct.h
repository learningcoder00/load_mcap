// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'title'
// Member 'desc'
// Member 'tipc'
#include "rosidl_runtime_c/string.h"
// Member 'rule_ids'
// Member 'tail_nums'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RestrictionInfoProto in the package deva_navi_msgs.
/**
  * RestrictionInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__RestrictionInfoProto
{
  rosidl_runtime_c__String title;
  rosidl_runtime_c__String desc;
  rosidl_runtime_c__String tipc;
  int32_t city_code;
  int32_t type;
  int32_t title_type;
  rosidl_runtime_c__int64__Sequence rule_ids;
  rosidl_runtime_c__int32__Sequence tail_nums;
} deva_navi_msgs__msg__RestrictionInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__RestrictionInfoProto.
typedef struct deva_navi_msgs__msg__RestrictionInfoProto__Sequence
{
  deva_navi_msgs__msg__RestrictionInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__RestrictionInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_H_
