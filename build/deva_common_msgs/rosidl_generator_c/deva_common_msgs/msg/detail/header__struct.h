// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_H_
#define DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
// Member 'pub_stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'frame_id'
#include "deva_common_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/Header in the package deva_common_msgs.
typedef struct deva_common_msgs__msg__Header
{
  /// primary unix timestamp. It is the sensor time for the driver nodes, and the timestamp where multiple input messages are synchronized for the other nodes
  builtin_interfaces__msg__Time stamp;
  /// message publishing unix timestamp
  builtin_interfaces__msg__Time pub_stamp;
  /// publish index, starting from 0 on startup
  uint32_t index;
  /// present the coordinate system of the msg
  deva_common_msgs__msg__String frame_id;
} deva_common_msgs__msg__Header;

// Struct for a sequence of deva_common_msgs__msg__Header.
typedef struct deva_common_msgs__msg__Header__Sequence
{
  deva_common_msgs__msg__Header * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_common_msgs__msg__Header__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_H_
