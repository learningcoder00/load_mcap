// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'weather'
// Member 'scene'
// Member 'rdsuf'
// Member 'light'
// Member 'time'
#include "deva_aeb_msgs/msg/detail/sf_diag_info__struct.h"

/// Struct defined in msg/SFDiagList in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFDiagList
{
  uint64_t timestamp;
  uint32_t framenum;
  deva_aeb_msgs__msg__SFDiagInfo weather;
  deva_aeb_msgs__msg__SFDiagInfo scene;
  deva_aeb_msgs__msg__SFDiagInfo rdsuf;
  deva_aeb_msgs__msg__SFDiagInfo light;
  deva_aeb_msgs__msg__SFDiagInfo time;
} deva_aeb_msgs__msg__SFDiagList;

// Struct for a sequence of deva_aeb_msgs__msg__SFDiagList.
typedef struct deva_aeb_msgs__msg__SFDiagList__Sequence
{
  deva_aeb_msgs__msg__SFDiagList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFDiagList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_DIAG_LIST__STRUCT_H_
