// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_H_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'prev_ids'
// Member 'succ_ids'
// Member 'link_kinds'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.h"
// Member 'points'
#include "environment_model_msgs/msg/detail/vec3d__struct.h"
// Member 'guidances'
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.h"

/// Struct defined in msg/StructuredLink in the package environment_model_msgs.
typedef struct environment_model_msgs__msg__StructuredLink
{
  uint64_t id;
  rosidl_runtime_c__uint64__Sequence prev_ids;
  rosidl_runtime_c__uint64__Sequence succ_ids;
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence feature_point_ids;
  environment_model_msgs__msg__Vec3d__Sequence points;
  uint8_t direction;
  int32_t length;
  uint32_t speed_limit_s2e;
  uint32_t speed_limit_e2s;
  uint16_t coverage_status;
  uint8_t lane_num;
  uint8_t lane_num_s2e;
  uint8_t lane_num_e2s;
  uint8_t relationship_with_junction;
  deva_gaode_routing_msgs__msg__Guidance__Sequence guidances;
  bool is_on_routing;
  bool need_revert;
  rosidl_runtime_c__uint8__Sequence link_kinds;
} environment_model_msgs__msg__StructuredLink;

// Struct for a sequence of environment_model_msgs__msg__StructuredLink.
typedef struct environment_model_msgs__msg__StructuredLink__Sequence
{
  environment_model_msgs__msg__StructuredLink * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} environment_model_msgs__msg__StructuredLink__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_H_
