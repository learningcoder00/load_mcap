// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xy_bounds'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'obstacles_info'
#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__struct.h"
// Member 'parking_slots'
#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__struct.h"
// Member 'ref_points'
// Member 'last_ref_points'
#include "deva_planning_msgs2/msg/detail/path_data__struct.h"
// Member 'last_trajectory'
// Member 'last_internal_trajectory_paths'
// Member 'hybrid_astar_search_results'
// Member 'optimization_results'
#include "deva_planning_msgs2/msg/detail/target_trajectory__struct.h"

/// Struct defined in msg/NavOpenspaceDebugInfo in the package deva_planning_msgs2.
/**
  * input
 */
typedef struct deva_planning_msgs2__msg__NavOpenspaceDebugInfo
{
  double x_s;
  double y_s;
  double theta_s;
  double x_e;
  double y_e;
  double theta_e;
  rosidl_runtime_c__double__Sequence xy_bounds;
  deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence obstacles_info;
  deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence parking_slots;
  /// 初始挡位, 0 为 D 挡, 1 为 R 挡位
  uint32_t start_gear;
  double speed;
  double keep_start_gear_distance;
  double kappa;
  double timestamp;
  deva_planning_msgs2__msg__PathData__Sequence ref_points;
  /// status
  uint32_t openspace_planning_status;
  deva_planning_msgs2__msg__TargetTrajectory last_trajectory;
  double last_trajectory_timestamp;
  deva_planning_msgs2__msg__TargetTrajectory__Sequence last_internal_trajectory_paths;
  uint32_t current_path_index;
  bool is_arrived_path_end;
  deva_planning_msgs2__msg__PathData__Sequence last_ref_points;
  /// internal results
  deva_planning_msgs2__msg__TargetTrajectory__Sequence hybrid_astar_search_results;
  deva_planning_msgs2__msg__TargetTrajectory__Sequence optimization_results;
} deva_planning_msgs2__msg__NavOpenspaceDebugInfo;

// Struct for a sequence of deva_planning_msgs2__msg__NavOpenspaceDebugInfo.
typedef struct deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence
{
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_H_
