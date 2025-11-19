// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sllist'
#include "deva_aeb_msgs/msg/detail/sf_stopline__struct.h"
// Member 'cwlist'
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__struct.h"
// Member 'ralist'
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__struct.h"

/// Struct defined in msg/SFFusionRoadSignList in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionRoadSignList
{
  deva_aeb_msgs__msg__SFStopline sllist[8];
  deva_aeb_msgs__msg__SFCrosswalk cwlist[4];
  deva_aeb_msgs__msg__SFRoadArrow ralist[8];
  uint64_t timestamp;
  uint32_t framenum;
  uint8_t cwcount;
  uint8_t racount;
  uint8_t slvalidsize;
  uint8_t cwvalidsize;
  uint8_t ravalidsize;
  uint8_t reserved[3];
} deva_aeb_msgs__msg__SFFusionRoadSignList;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionRoadSignList.
typedef struct deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence
{
  deva_aeb_msgs__msg__SFFusionRoadSignList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionRoadSignList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_ROAD_SIGN_LIST__STRUCT_H_
