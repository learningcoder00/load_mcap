// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'env_points'
#include "environment_model_msgs/msg/detail/env_point__struct.h"
// Member 'last_ids'
// Member 'perception_ids'
// Member 'channel_id'
#include "environment_model_msgs/msg/detail/pair_int__struct.h"
// Member 'merge_lines'
// Member 'split_lines'
// Member 'lk_lines'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'merge_pos'
#include "environment_model_msgs/msg/detail/pair_double_int__struct.h"
// Member 'left_ids_map'
// Member 'right_ids_map'
// Member 'overwide_pairs'
#include "environment_model_msgs/msg/detail/map_ids__struct.h"
// Member 'road_struct_type'
#include "environment_model_msgs/msg/detail/road_struct_type__struct.h"
// Member 'signal_infos'
#include "environment_model_msgs/msg/detail/pair_string__struct.h"
// Member 'object_infos'
#include "environment_model_msgs/msg/detail/pair_string_double__struct.h"
// Member 'navi_score'
#include "environment_model_msgs/msg/detail/navi_score__struct.h"
// Member 'virtual_line_infos'
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.h"
// Member 'left_road_bound_line'
// Member 'right_road_bound_line'
#include "environment_model_msgs/msg/detail/vec2d__struct.h"
// Member 'lane_id'
// Member 'lane_sequence'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EnvLine in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvLine
{
  environment_model_msgs__msg__EnvPoint__Sequence env_points;
  int32_t id;
  environment_model_msgs__msg__PairInt__Sequence last_ids;
  environment_model_msgs__msg__PairInt perception_ids;
  double ego_s;
  double ego_l;
  bool is_on_road;
  uint8_t routing_status;
  bool is_reverse;
  uint8_t enum_turn_scenario;
  rosidl_runtime_c__int32__Sequence merge_lines;
  rosidl_runtime_c__int32__Sequence split_lines;
  environment_model_msgs__msg__PairDoubleInt__Sequence merge_pos;
  rosidl_runtime_c__int32__Sequence lk_lines;
  environment_model_msgs__msg__MapIds__Sequence left_ids_map;
  environment_model_msgs__msg__MapIds__Sequence right_ids_map;
  uint8_t enum_road_struct_type;
  environment_model_msgs__msg__RoadStructType road_struct_type;
  environment_model_msgs__msg__PairString__Sequence signal_infos;
  environment_model_msgs__msg__PairStringDouble__Sequence object_infos;
  environment_model_msgs__msg__NaviScore navi_score;
  environment_model_msgs__msg__VirtualLineInfo__Sequence virtual_line_infos;
  environment_model_msgs__msg__Vec2d__Sequence left_road_bound_line;
  environment_model_msgs__msg__Vec2d__Sequence right_road_bound_line;
  double lane_offset;
  rosidl_runtime_c__String lane_id;
  rosidl_runtime_c__String__Sequence lane_sequence;
  int32_t lane_seq_id;
  environment_model_msgs__msg__PairInt channel_id;
  bool virtual_line_to;
  int32_t midd_line_id;
  environment_model_msgs__msg__MapIds__Sequence overwide_pairs;
  bool usemdriver;
} environment_model_msgs__msg__EnvLine;

// Struct for a sequence of environment_model_msgs__msg__EnvLine.
typedef struct environment_model_msgs__msg__EnvLine__Sequence
{
  environment_model_msgs__msg__EnvLine * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvLine__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_H_
