// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_H_

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
// Member 'env_start_header'
// Member 'map_header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'env_lines'
#include "environment_model_msgs/msg/detail/env_line__struct.h"
// Member 'env_objects'
#include "environment_model_msgs/msg/detail/env_object__struct.h"
// Member 'env_signals'
#include "environment_model_msgs/msg/detail/env_signal__struct.h"
// Member 'junction_box'
// Member 'roadline_final'
// Member 'roadline'
#include "environment_model_msgs/msg/detail/vec2d__struct.h"
// Member 'passable_space'
// Member 'law_space'
// Member 'law_space_merged'
// Member 'hdair_driveline'
#include "environment_model_msgs/msg/detail/vec2d_array__struct.h"
// Member 'links'
#include "environment_model_msgs/msg/detail/env_link__struct.h"
// Member 'road_boundaries'
#include "environment_model_msgs/msg/detail/road_boundary__struct.h"
// Member 'scenario_info'
#include "environment_model_msgs/msg/detail/scenario_info__struct.h"

/// Struct defined in msg/EnvInfo in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__EnvInfo
{
  deva_common_msgs__msg__Header header;
  int32_t index;
  environment_model_msgs__msg__EnvLine__Sequence env_lines;
  environment_model_msgs__msg__EnvObject__Sequence env_objects;
  environment_model_msgs__msg__EnvSignal__Sequence env_signals;
  environment_model_msgs__msg__Vec2d__Sequence junction_box;
  deva_common_msgs__msg__Header env_start_header;
  deva_common_msgs__msg__Header map_header;
  uint8_t map_mode;
  uint8_t routing_mode;
  int32_t navi_index;
  bool has_map;
  environment_model_msgs__msg__Vec2dArray__Sequence passable_space;
  environment_model_msgs__msg__Vec2dArray__Sequence law_space;
  environment_model_msgs__msg__Vec2d__Sequence roadline_final;
  environment_model_msgs__msg__Vec2d__Sequence roadline;
  environment_model_msgs__msg__Vec2dArray__Sequence law_space_merged;
  uint8_t meg_map_mode;
  bool channel_valid;
  double dist_sd_junction;
  environment_model_msgs__msg__Vec2dArray__Sequence hdair_driveline;
  environment_model_msgs__msg__EnvLink__Sequence links;
  int32_t ownership;
  environment_model_msgs__msg__RoadBoundary__Sequence road_boundaries;
  environment_model_msgs__msg__ScenarioInfo__Sequence scenario_info;
  uint8_t highway_scene;
} environment_model_msgs__msg__EnvInfo;

// Struct for a sequence of environment_model_msgs__msg__EnvInfo.
typedef struct environment_model_msgs__msg__EnvInfo__Sequence
{
  environment_model_msgs__msg__EnvInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__EnvInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_H_
