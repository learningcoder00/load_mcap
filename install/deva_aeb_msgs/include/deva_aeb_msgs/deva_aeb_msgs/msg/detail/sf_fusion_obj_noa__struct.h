// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFFusionObjNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'estimn'
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn_noa__struct.h"
// Member 'info'
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.h"
// Member 'ppty'
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.h"
// Member 'visinfo'
#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.h"

/// Struct defined in msg/SFFusionObjNOA in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFFusionObjNOA
{
  deva_aeb_msgs__msg__SFObjEstimnNOA estimn;
  deva_aeb_msgs__msg__SFObjInfoNOA info;
  deva_aeb_msgs__msg__SFObjPpty ppty;
  deva_aeb_msgs__msg__SFVisionInfo visinfo;
} deva_aeb_msgs__msg__SFFusionObjNOA;

// Struct for a sequence of deva_aeb_msgs__msg__SFFusionObjNOA.
typedef struct deva_aeb_msgs__msg__SFFusionObjNOA__Sequence
{
  deva_aeb_msgs__msg__SFFusionObjNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFFusionObjNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBJ_NOA__STRUCT_H_
