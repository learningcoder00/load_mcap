// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionTFLList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tfllist'
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl__struct.h"

/// Struct defined in msg/SFFusionTFLList in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionTFLList
{
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t tflcount;
  uint8_t reserved[2];
  deva_aeb_msgs__msg__SFFusionTFL tfllist[8];
  uint8_t validsize;
} deva_aeb_msgs__msg__SFFusionTFLList;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionTFLList.
typedef struct deva_aeb_msgs__msg__SFFusionTFLList__Sequence
{
  deva_aeb_msgs__msg__SFFusionTFLList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionTFLList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST__STRUCT_H_
