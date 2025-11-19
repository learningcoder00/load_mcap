// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'amap_path_info'
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.h"

/// Struct defined in msg/AmapNavingPathInfoProto in the package deva_navi_msgs.
typedef struct deva_navi_msgs__msg__AmapNavingPathInfoProto
{
  int32_t id;
  deva_navi_msgs__msg__AmapPathInfoProto amap_path_info;
  int64_t timestamp;
} deva_navi_msgs__msg__AmapNavingPathInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__AmapNavingPathInfoProto.
typedef struct deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence
{
  deva_navi_msgs__msg__AmapNavingPathInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__AmapNavingPathInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_NAVING_PATH_INFO_PROTO__STRUCT_H_
