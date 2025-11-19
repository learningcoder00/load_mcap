// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/NaviStatusProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_navi_msgs/msg/detail/header_proto__struct.h"

/// Struct defined in msg/NaviStatusProto in the package deva_navi_msgs.
typedef struct deva_navi_msgs__msg__NaviStatusProto
{
  deva_navi_msgs__msg__HeaderProto header;
  int32_t status;
} deva_navi_msgs__msg__NaviStatusProto;

// Struct for a sequence of deva_navi_msgs__msg__NaviStatusProto.
typedef struct deva_navi_msgs__msg__NaviStatusProto__Sequence
{
  deva_navi_msgs__msg__NaviStatusProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__NaviStatusProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_STATUS_PROTO__STRUCT_H_
