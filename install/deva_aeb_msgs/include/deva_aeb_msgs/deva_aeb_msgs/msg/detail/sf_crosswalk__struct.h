// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFCrosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFCrosswalk in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFCrosswalk
{
  uint32_t id;
  float lupointposlgt;
  float lupointposlat;
  float rupointposlgt;
  float rupointposlat;
  float rdpointposlgt;
  float rdpointposlat;
  float ldpointposlgt;
  float ldpointposlat;
  uint8_t confi;
  uint8_t reserved[3];
} deva_aeb_msgs__msg__SFCrosswalk;

// Struct for a sequence of deva_aeb_msgs__msg__SFCrosswalk.
typedef struct deva_aeb_msgs__msg__SFCrosswalk__Sequence
{
  deva_aeb_msgs__msg__SFCrosswalk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFCrosswalk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_CROSSWALK__STRUCT_H_
