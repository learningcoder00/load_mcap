// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'send_localmap_header'
// Member 'received_preseptionmap_header'
// Member 'preseptionmap_header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LocalMapHeader in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__LocalMapHeader
{
  deva_common_msgs__msg__Header send_localmap_header;
  deva_common_msgs__msg__Header received_preseptionmap_header;
  deva_common_msgs__msg__Header preseptionmap_header;
} deva_map_msgs__msg__LocalMapHeader;

// Struct for a sequence of deva_map_msgs__msg__LocalMapHeader.
typedef struct deva_map_msgs__msg__LocalMapHeader__Sequence
{
  deva_map_msgs__msg__LocalMapHeader * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__LocalMapHeader__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP_HEADER__STRUCT_H_
