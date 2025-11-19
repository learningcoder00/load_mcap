// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin_ref_line'
#include "deva_planning_msgs2/msg/detail/avp_ref_line__struct.h"
// Member 'smooth_line'
// Member 'used_ref_line_tree'
// Member 'driver_path'
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__struct.h"
// Member 'now_mpc_data'
// Member 'now_path_data'
// Member 'past_path_data'
#include "deva_planning_msgs2/msg/detail/mpc_path_data__struct.h"
// Member 'boundary_poses'
// Member 'obstacle_poses'
#include "deva_planning_msgs2/msg/detail/path_point__struct.h"
// Member 'stitch_data'
#include "deva_planning_msgs2/msg/detail/stitch_data__struct.h"

/// Struct defined in msg/AvpDebugInfo in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__AvpDebugInfo
{
  int32_t solve_num;
  int32_t acados_status;
  deva_planning_msgs2__msg__AvpRefLine__Sequence origin_ref_line;
  deva_planning_msgs2__msg__AvpRefLineTreePointVec smooth_line;
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence used_ref_line_tree;
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence driver_path;
  deva_planning_msgs2__msg__MpcPathData__Sequence now_mpc_data;
  deva_planning_msgs2__msg__MpcPathData__Sequence now_path_data;
  deva_planning_msgs2__msg__MpcPathData__Sequence past_path_data;
  deva_planning_msgs2__msg__PathPoint__Sequence boundary_poses;
  deva_planning_msgs2__msg__PathPoint__Sequence obstacle_poses;
  deva_planning_msgs2__msg__StitchData stitch_data;
} deva_planning_msgs2__msg__AvpDebugInfo;

// Struct for a sequence of deva_planning_msgs2__msg__AvpDebugInfo.
typedef struct deva_planning_msgs2__msg__AvpDebugInfo__Sequence
{
  deva_planning_msgs2__msg__AvpDebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__AvpDebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_DEBUG_INFO__STRUCT_H_
