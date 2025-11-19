// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/GantryInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'num'
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GantryInfoProto in the package deva_navi_msgs.
/**
  * GantryInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__GantryInfoProto
{
  int32_t flag;
  int32_t type;
  int64_t dist_end;
  rosidl_runtime_c__String num;
  rosidl_runtime_c__String name;
} deva_navi_msgs__msg__GantryInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__GantryInfoProto.
typedef struct deva_navi_msgs__msg__GantryInfoProto__Sequence
{
  deva_navi_msgs__msg__GantryInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__GantryInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_H_
