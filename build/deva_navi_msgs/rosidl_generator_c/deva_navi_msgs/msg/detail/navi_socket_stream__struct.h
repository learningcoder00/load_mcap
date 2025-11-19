// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/NaviSocketStream.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic'
#include "rosidl_runtime_c/string.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NaviSocketStream in the package deva_navi_msgs.
typedef struct deva_navi_msgs__msg__NaviSocketStream
{
  int32_t id;
  int64_t timestamp;
  rosidl_runtime_c__String topic;
  /// array of data
  rosidl_runtime_c__octet__Sequence payload;
} deva_navi_msgs__msg__NaviSocketStream;

// Struct for a sequence of deva_navi_msgs__msg__NaviSocketStream.
typedef struct deva_navi_msgs__msg__NaviSocketStream__Sequence
{
  deva_navi_msgs__msg__NaviSocketStream * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__NaviSocketStream__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SOCKET_STREAM__STRUCT_H_
