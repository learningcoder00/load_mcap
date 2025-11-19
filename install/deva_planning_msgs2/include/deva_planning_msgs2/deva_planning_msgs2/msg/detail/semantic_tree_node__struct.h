// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'game_cost'
// Member 'rollout_cost'
#include "deva_planning_msgs2/msg/detail/string2_double__struct.h"
// Member 'scalable_flags'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'scalable_multimap'
#include "deva_planning_msgs2/msg/detail/string2_string__struct.h"

/// Struct defined in msg/SemanticTreeNode in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__SemanticTreeNode
{
  int32_t node_id;
  double rollout_start_time;
  double total_score;
  double game_score;
  double rollout_score;
  deva_planning_msgs2__msg__String2Double__Sequence game_cost;
  deva_planning_msgs2__msg__String2Double__Sequence rollout_cost;
  /// 可扩展的标志位
  rosidl_runtime_c__uint8__Sequence scalable_flags;
  /// 可扩展的键值对
  deva_planning_msgs2__msg__String2String__Sequence scalable_multimap;
} deva_planning_msgs2__msg__SemanticTreeNode;

// Struct for a sequence of deva_planning_msgs2__msg__SemanticTreeNode.
typedef struct deva_planning_msgs2__msg__SemanticTreeNode__Sequence
{
  deva_planning_msgs2__msg__SemanticTreeNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__SemanticTreeNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SEMANTIC_TREE_NODE__STRUCT_H_
