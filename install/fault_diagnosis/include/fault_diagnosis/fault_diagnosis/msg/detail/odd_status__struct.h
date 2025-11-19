// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__STRUCT_H_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACC'.
static const char * const fault_diagnosis__msg__OddStatus__ACC = "ACC";

/// Constant 'ICC'.
static const char * const fault_diagnosis__msg__OddStatus__ICC = "ICC";

/// Constant 'ALCA'.
static const char * const fault_diagnosis__msg__OddStatus__ALCA = "ALCA";

/// Constant 'HWA'.
static const char * const fault_diagnosis__msg__OddStatus__HWA = "HWA";

/// Constant 'NOA'.
static const char * const fault_diagnosis__msg__OddStatus__NOA = "NOA";

/// Constant 'D2D'.
static const char * const fault_diagnosis__msg__OddStatus__D2D = "D2D";

/// Constant 'UNACTAVABLE'.
/**
  * 状态枚举
  * 功能不可激活，不可运行（存在阻止条件）
 */
enum
{
  fault_diagnosis__msg__OddStatus__UNACTAVABLE = 0
};

/// Constant 'WORKABLE'.
/**
  * 功能不可激活，可运行（满足运行条件）
 */
enum
{
  fault_diagnosis__msg__OddStatus__WORKABLE = 1
};

/// Constant 'ACTIVABLE'.
/**
  * 功能可激活（满足激活条件）
 */
enum
{
  fault_diagnosis__msg__OddStatus__ACTIVABLE = 2
};

// Include directives for member types
// Member 'function_id'
// Member 'fault_reasons'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/OddStatus in the package fault_diagnosis.
/**
  * OddStatus.msg
  * 单个功能状态
 */
typedef struct fault_diagnosis__msg__OddStatus
{
  /// 功能标识
  rosidl_runtime_c__String function_id;
  uint8_t state;
  /// 模块专属故障列表
  rosidl_runtime_c__String__Sequence fault_reasons;
} fault_diagnosis__msg__OddStatus;

// Struct for a sequence of fault_diagnosis__msg__OddStatus.
typedef struct fault_diagnosis__msg__OddStatus__Sequence
{
  fault_diagnosis__msg__OddStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fault_diagnosis__msg__OddStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__STRUCT_H_
