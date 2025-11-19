// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/TurnInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TurnInfoProto in the package deva_navi_msgs.
/**
  * TurnInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__TurnInfoProto
{
  int32_t type;
  int32_t lot;
  int32_t lat;
} deva_navi_msgs__msg__TurnInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__TurnInfoProto.
typedef struct deva_navi_msgs__msg__TurnInfoProto__Sequence
{
  deva_navi_msgs__msg__TurnInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__TurnInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__TURN_INFO_PROTO__STRUCT_H_
