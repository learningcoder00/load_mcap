// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/ResponseProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ResponseProto in the package deva_navi_msgs.
/**
  * ResponseProto.msg
 */
typedef struct deva_navi_msgs__msg__ResponseProto
{
  int32_t id;
} deva_navi_msgs__msg__ResponseProto;

// Struct for a sequence of deva_navi_msgs__msg__ResponseProto.
typedef struct deva_navi_msgs__msg__ResponseProto__Sequence
{
  deva_navi_msgs__msg__ResponseProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__ResponseProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESPONSE_PROTO__STRUCT_H_
