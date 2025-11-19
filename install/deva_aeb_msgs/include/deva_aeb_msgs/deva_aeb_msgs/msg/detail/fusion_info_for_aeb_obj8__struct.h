// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObj8.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj'
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__struct.h"

/// Struct defined in msg/FusionInfoForAEBObj8 in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBObj8
{
  deva_aeb_msgs__msg__SFFusionObj obj[8];
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t snsrstate;
  uint8_t validsize;
  uint8_t reserved[2];
} deva_aeb_msgs__msg__FusionInfoForAEBObj8;

// Struct for a sequence of deva_aeb_msgs__msg__FusionInfoForAEBObj8.
typedef struct deva_aeb_msgs__msg__FusionInfoForAEBObj8__Sequence
{
  deva_aeb_msgs__msg__FusionInfoForAEBObj8 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__FusionInfoForAEBObj8__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__FUSION_INFO_FOR_AEB_OBJ8__STRUCT_H_
