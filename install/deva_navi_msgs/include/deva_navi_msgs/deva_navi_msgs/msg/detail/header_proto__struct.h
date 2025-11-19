// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/HeaderProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HeaderProto in the package deva_navi_msgs.
/**
  * HeaderProto.msg
 */
typedef struct deva_navi_msgs__msg__HeaderProto
{
  int32_t id;
  int64_t timestamp;
} deva_navi_msgs__msg__HeaderProto;

// Struct for a sequence of deva_navi_msgs__msg__HeaderProto.
typedef struct deva_navi_msgs__msg__HeaderProto__Sequence
{
  deva_navi_msgs__msg__HeaderProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__HeaderProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__HEADER_PROTO__STRUCT_H_
