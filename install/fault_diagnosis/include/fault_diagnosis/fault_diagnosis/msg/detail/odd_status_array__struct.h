// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_H_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'functions'
#include "fault_diagnosis/msg/detail/odd_status__struct.h"
// Member 'global_faults'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ODDStatusArray in the package fault_diagnosis.
/**
  * ODDStatusArray.msg
 */
typedef struct fault_diagnosis__msg__ODDStatusArray
{
  deva_common_msgs__msg__Header header;
  /// 功能模块状态列表
  fault_diagnosis__msg__OddStatus__Sequence functions;
  /// 全局故障列表（非功能专属）
  rosidl_runtime_c__String__Sequence global_faults;
} fault_diagnosis__msg__ODDStatusArray;

// Struct for a sequence of fault_diagnosis__msg__ODDStatusArray.
typedef struct fault_diagnosis__msg__ODDStatusArray__Sequence
{
  fault_diagnosis__msg__ODDStatusArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fault_diagnosis__msg__ODDStatusArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_H_
