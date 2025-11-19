// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/InfoEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__INFO_ENUM__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__INFO_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CANCEL_BYWIRE'.
/**
  * 取消线控状态
 */
enum
{
  rviz_plug_msg__msg__InfoEnum__CANCEL_BYWIRE = 1
};

/// Constant 'DRIVER_TAKEOVER'.
/**
  * 驾驶员接管
 */
enum
{
  rviz_plug_msg__msg__InfoEnum__DRIVER_TAKEOVER = 2
};

/// Struct defined in msg/InfoEnum in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__InfoEnum
{
  uint8_t structure_needs_at_least_one_member;
} rviz_plug_msg__msg__InfoEnum;

// Struct for a sequence of rviz_plug_msg__msg__InfoEnum.
typedef struct rviz_plug_msg__msg__InfoEnum__Sequence
{
  rviz_plug_msg__msg__InfoEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__InfoEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__INFO_ENUM__STRUCT_H_
