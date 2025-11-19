// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFVisionInfo in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFVisionInfo
{
  float cornerx;
  float cornery;
  float distinlane;
  uint8_t objcutinflag;
  uint8_t objcutinlanetype;
  uint8_t reserved[3];
  float visionposx;
  float visionposy;
  uint8_t laneassignment;
  uint8_t iscipv;
  uint8_t mtncatergory;
  uint8_t mtnstatus;
  uint8_t distconvergence;
  uint8_t coverdproperty;
  uint8_t unstable;
} deva_aeb_msgs__msg__SFVisionInfo;

// Struct for a sequence of deva_aeb_msgs__msg__SFVisionInfo.
typedef struct deva_aeb_msgs__msg__SFVisionInfo__Sequence
{
  deva_aeb_msgs__msg__SFVisionInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFVisionInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VISION_INFO__STRUCT_H_
