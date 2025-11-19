// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_H_

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
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'trafficsign'
// Member 'trafficsign_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.h"

/// Struct defined in msg/SFFusionTSListNOA in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__SFFusionTSListNOA
{
  deva_common_msgs__msg__Header header;
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t reversed[3];
  deva_perception_msgs__msg__SFFusionTSNOA trafficsign[16];
  uint8_t validsize;
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence trafficsign_all;
  uint8_t all_validsize;
} deva_perception_msgs__msg__SFFusionTSListNOA;

// Struct for a sequence of deva_perception_msgs__msg__SFFusionTSListNOA.
typedef struct deva_perception_msgs__msg__SFFusionTSListNOA__Sequence
{
  deva_perception_msgs__msg__SFFusionTSListNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__SFFusionTSListNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TS_LIST_NOA__STRUCT_H_
