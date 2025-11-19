// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rviz_plug_msg:msg/ErrorEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_H_
#define RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXISTS_ERROR'.
/**
  * 存在错误
 */
enum
{
  rviz_plug_msg__msg__ErrorEnum__EXISTS_ERROR = 1
};

/// Constant 'CONDITION_INVALID'.
/**
  * 进入/维持线控条件不满足
 */
enum
{
  rviz_plug_msg__msg__ErrorEnum__CONDITION_INVALID = 2
};

/// Constant 'REQUEST_TIMEOUT'.
/**
  * 请求线控超时
 */
enum
{
  rviz_plug_msg__msg__ErrorEnum__REQUEST_TIMEOUT = 3
};

/// Struct defined in msg/ErrorEnum in the package rviz_plug_msg.
typedef struct rviz_plug_msg__msg__ErrorEnum
{
  uint8_t structure_needs_at_least_one_member;
} rviz_plug_msg__msg__ErrorEnum;

// Struct for a sequence of rviz_plug_msg__msg__ErrorEnum.
typedef struct rviz_plug_msg__msg__ErrorEnum__Sequence
{
  rviz_plug_msg__msg__ErrorEnum * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rviz_plug_msg__msg__ErrorEnum__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_H_
