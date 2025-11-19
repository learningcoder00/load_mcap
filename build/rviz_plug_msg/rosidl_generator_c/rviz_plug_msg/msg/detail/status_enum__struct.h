// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/StatusEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'AUTO_MODE'.
/**
  * 自动驾驶模式
 */
enum
{
  rviz_plug_msg__msg__StatusEnum__AUTO_MODE = 1
};

/// Constant 'LATE_MODE'.
/**
  * 横向模式
 */
enum
{
  rviz_plug_msg__msg__StatusEnum__LATE_MODE = 2
};

/// Constant 'LONGIT_MODE'.
/**
  * 纵向模式
 */
enum
{
  rviz_plug_msg__msg__StatusEnum__LONGIT_MODE = 3
};

/// Constant 'ORIGINAL'.
/**
  * 初始状态
 */
enum
{
  rviz_plug_msg__msg__StatusEnum__ORIGINAL = 4
};

/// Constant 'EXITING'.
/**
  * 退出状态
 */
enum
{
  rviz_plug_msg__msg__StatusEnum__EXITING = 5
};

/// Struct defined in msg/StatusEnum in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__StatusEnum
{
  uint8_t structure_needs_at_least_one_member;
} rviz_plug_msg__msg__StatusEnum;

// Struct for a sequence of rviz_plug_msg__msg__StatusEnum.
typedef struct rviz_plug_msg__msg__StatusEnum__Sequence
{
  rviz_plug_msg__msg__StatusEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__StatusEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_H_
