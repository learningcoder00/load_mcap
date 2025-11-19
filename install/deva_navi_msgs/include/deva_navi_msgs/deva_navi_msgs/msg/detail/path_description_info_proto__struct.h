// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_navi_msgs:msg/PathDescriptionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_H_
#define DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PathDescriptionInfoProto in the package deva_navi_msgs.
/**
  * PathDescriptionInfoProto.msg
 */
typedef struct deva_navi_msgs__msg__PathDescriptionInfoProto
{
  int32_t path_type;
  int32_t flag1;
  int32_t flag2;
} deva_navi_msgs__msg__PathDescriptionInfoProto;

// Struct for a sequence of deva_navi_msgs__msg__PathDescriptionInfoProto.
typedef struct deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence
{
  deva_navi_msgs__msg__PathDescriptionInfoProto * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_navi_msgs__msg__PathDescriptionInfoProto__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_H_
