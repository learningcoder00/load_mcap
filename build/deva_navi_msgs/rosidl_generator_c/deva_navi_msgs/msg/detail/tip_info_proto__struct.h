// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/TipInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tip'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/TipInfoProto in the package deva_navi_msgs.
/**
  * TipInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__TipInfoProto
{
  rosidl_runtime_c__String tip;
  int32_t type;
} deva_navi_msgs__msg__TipInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__TipInfoProto.
typedef struct deva_navi_msgs__msg__TipInfoProto__Sequence
{
  deva_navi_msgs__msg__TipInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__TipInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__TIP_INFO_PROTO__STRUCT_H_
