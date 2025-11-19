// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_H_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'POINT'.
/**
  * 0: point, 1: circle, 2: polyline, 3: polygon, 4: text
 */
enum
{
  deva_ads_msgs__msg__AdsMarkerArrayVec__POINT = 0
};

/// Constant 'CIRCLE'.
enum
{
  deva_ads_msgs__msg__AdsMarkerArrayVec__CIRCLE = 1
};

/// Constant 'POLYLINE'.
enum
{
  deva_ads_msgs__msg__AdsMarkerArrayVec__POLYLINE = 2
};

/// Constant 'POLYGON'.
enum
{
  deva_ads_msgs__msg__AdsMarkerArrayVec__POLYGON = 3
};

/// Constant 'TEXT'.
enum
{
  deva_ads_msgs__msg__AdsMarkerArrayVec__TEXT = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stream'
#include "rosidl_runtime_c/string.h"
// Member 'ads_marker_arrays'
#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.h"

/// Struct defined in msg/AdsMarkerArrayVec in the package deva_ads_msgs.
typedef struct deva_ads_msgs__msg__AdsMarkerArrayVec
{
  std_msgs__msg__Header header;
  /// stream：ads左边想要展示的命名  /planning/planning_box
  rosidl_runtime_c__String stream;
  uint8_t marker_type;
  deva_ads_msgs__msg__AdsMarkerArray__Sequence ads_marker_arrays;
} deva_ads_msgs__msg__AdsMarkerArrayVec;

// Struct for a sequence of deva_ads_msgs__msg__AdsMarkerArrayVec.
typedef struct deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence
{
  deva_ads_msgs__msg__AdsMarkerArrayVec * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_ads_msgs__msg__AdsMarkerArrayVec__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_H_
