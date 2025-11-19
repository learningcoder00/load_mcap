// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_ads_msgs:msg/AdsInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__STRUCT_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/AdsInfo in the package deva_ads_msgs.
typedef struct deva_ads_msgs__msg__AdsInfo
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} deva_ads_msgs__msg__AdsInfo;

// Struct for a sequence of deva_ads_msgs__msg__AdsInfo.
typedef struct deva_ads_msgs__msg__AdsInfo__Sequence
{
  deva_ads_msgs__msg__AdsInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_ads_msgs__msg__AdsInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__STRUCT_H_
