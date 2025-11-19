// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_aeb_msgs:msg/SFObjInfoNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__STRUCT_H_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SFObjInfoNOA in the package deva_aeb_msgs.
typedef struct deva_aeb_msgs__msg__SFObjInfoNOA
{
  float length;
  float width;
  float hei;
  float dstlatfrommidoflaneself;
  uint8_t typ;
  uint8_t sidenear;
  uint8_t indcrturn;
  uint8_t indcrbrkli;
  uint8_t indcrhzrdli;
  uint8_t mtnpat;
  uint8_t mtnpathist;
  uint8_t fusnsrcraw;
  uint8_t clisnsideradarctrlwarnqly;
  uint8_t clisnsideradarctrlbrkqly;
  uint8_t reserved[2];
  uint8_t lan_assignment;
} deva_aeb_msgs__msg__SFObjInfoNOA;

// Struct for a sequence of deva_aeb_msgs__msg__SFObjInfoNOA.
typedef struct deva_aeb_msgs__msg__SFObjInfoNOA__Sequence
{
  deva_aeb_msgs__msg__SFObjInfoNOA * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_aeb_msgs__msg__SFObjInfoNOA__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_INFO_NOA__STRUCT_H_
