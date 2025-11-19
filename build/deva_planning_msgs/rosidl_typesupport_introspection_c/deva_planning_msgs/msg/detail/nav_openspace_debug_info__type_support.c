// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__functions.h"
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.h"


// Include directives for member types
// Member `xy_bounds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `obstacles_info`
#include "deva_planning_msgs/msg/nav_openspace_obstacle.h"
// Member `obstacles_info`
#include "deva_planning_msgs/msg/detail/nav_openspace_obstacle__rosidl_typesupport_introspection_c.h"
// Member `parking_slots`
#include "deva_planning_msgs/msg/nav_openspace_parking_slot.h"
// Member `parking_slots`
#include "deva_planning_msgs/msg/detail/nav_openspace_parking_slot__rosidl_typesupport_introspection_c.h"
// Member `ref_points`
// Member `last_ref_points`
#include "deva_planning_msgs/msg/path_data.h"
// Member `ref_points`
// Member `last_ref_points`
#include "deva_planning_msgs/msg/detail/path_data__rosidl_typesupport_introspection_c.h"
// Member `last_trajectory`
// Member `last_internal_trajectory_paths`
// Member `hybrid_astar_search_results`
// Member `optimization_results`
#include "deva_planning_msgs/msg/target_trajectory.h"
// Member `last_trajectory`
// Member `last_internal_trajectory_paths`
// Member `hybrid_astar_search_results`
// Member `optimization_results`
#include "deva_planning_msgs/msg/detail/target_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__init(message_memory);
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__fini(message_memory);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__xy_bounds(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__xy_bounds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__xy_bounds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__xy_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__xy_bounds(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__xy_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__xy_bounds(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__xy_bounds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__obstacles_info(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * member =
    (const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__obstacles_info(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * member =
    (const deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__obstacles_info(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * member =
    (deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__obstacles_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__NavOpenspaceObstacle * item =
    ((const deva_planning_msgs__msg__NavOpenspaceObstacle *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__obstacles_info(untyped_member, index));
  deva_planning_msgs__msg__NavOpenspaceObstacle * value =
    (deva_planning_msgs__msg__NavOpenspaceObstacle *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__obstacles_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__NavOpenspaceObstacle * item =
    ((deva_planning_msgs__msg__NavOpenspaceObstacle *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__obstacles_info(untyped_member, index));
  const deva_planning_msgs__msg__NavOpenspaceObstacle * value =
    (const deva_planning_msgs__msg__NavOpenspaceObstacle *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__obstacles_info(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence * member =
    (deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence *)(untyped_member);
  deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__fini(member);
  return deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__parking_slots(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence * member =
    (const deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__parking_slots(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence * member =
    (const deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__parking_slots(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence * member =
    (deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__parking_slots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__NavOpenspaceParkingSlot * item =
    ((const deva_planning_msgs__msg__NavOpenspaceParkingSlot *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__parking_slots(untyped_member, index));
  deva_planning_msgs__msg__NavOpenspaceParkingSlot * value =
    (deva_planning_msgs__msg__NavOpenspaceParkingSlot *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__parking_slots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__NavOpenspaceParkingSlot * item =
    ((deva_planning_msgs__msg__NavOpenspaceParkingSlot *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__parking_slots(untyped_member, index));
  const deva_planning_msgs__msg__NavOpenspaceParkingSlot * value =
    (const deva_planning_msgs__msg__NavOpenspaceParkingSlot *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__parking_slots(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence * member =
    (deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence *)(untyped_member);
  deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence__fini(member);
  return deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__ref_points(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PathData__Sequence * member =
    (const deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__ref_points(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PathData__Sequence * member =
    (const deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__ref_points(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PathData__Sequence * member =
    (deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__ref_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PathData * item =
    ((const deva_planning_msgs__msg__PathData *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__ref_points(untyped_member, index));
  deva_planning_msgs__msg__PathData * value =
    (deva_planning_msgs__msg__PathData *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__ref_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PathData * item =
    ((deva_planning_msgs__msg__PathData *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__ref_points(untyped_member, index));
  const deva_planning_msgs__msg__PathData * value =
    (const deva_planning_msgs__msg__PathData *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__ref_points(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PathData__Sequence * member =
    (deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PathData__Sequence__fini(member);
  return deva_planning_msgs__msg__PathData__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__TargetTrajectory * item =
    ((const deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(untyped_member, index));
  deva_planning_msgs__msg__TargetTrajectory * value =
    (deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__TargetTrajectory * item =
    ((deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(untyped_member, index));
  const deva_planning_msgs__msg__TargetTrajectory * value =
    (const deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  deva_planning_msgs__msg__TargetTrajectory__Sequence__fini(member);
  return deva_planning_msgs__msg__TargetTrajectory__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__last_ref_points(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PathData__Sequence * member =
    (const deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_ref_points(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PathData__Sequence * member =
    (const deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_ref_points(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PathData__Sequence * member =
    (deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__last_ref_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PathData * item =
    ((const deva_planning_msgs__msg__PathData *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_ref_points(untyped_member, index));
  deva_planning_msgs__msg__PathData * value =
    (deva_planning_msgs__msg__PathData *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__last_ref_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PathData * item =
    ((deva_planning_msgs__msg__PathData *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_ref_points(untyped_member, index));
  const deva_planning_msgs__msg__PathData * value =
    (const deva_planning_msgs__msg__PathData *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__last_ref_points(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PathData__Sequence * member =
    (deva_planning_msgs__msg__PathData__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PathData__Sequence__fini(member);
  return deva_planning_msgs__msg__PathData__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__TargetTrajectory * item =
    ((const deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(untyped_member, index));
  deva_planning_msgs__msg__TargetTrajectory * value =
    (deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__TargetTrajectory * item =
    ((deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(untyped_member, index));
  const deva_planning_msgs__msg__TargetTrajectory * value =
    (const deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  deva_planning_msgs__msg__TargetTrajectory__Sequence__fini(member);
  return deva_planning_msgs__msg__TargetTrajectory__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__optimization_results(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__optimization_results(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (const deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__optimization_results(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__optimization_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__TargetTrajectory * item =
    ((const deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__optimization_results(untyped_member, index));
  deva_planning_msgs__msg__TargetTrajectory * value =
    (deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__optimization_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__TargetTrajectory * item =
    ((deva_planning_msgs__msg__TargetTrajectory *)
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__optimization_results(untyped_member, index));
  const deva_planning_msgs__msg__TargetTrajectory * value =
    (const deva_planning_msgs__msg__TargetTrajectory *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__optimization_results(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__TargetTrajectory__Sequence * member =
    (deva_planning_msgs__msg__TargetTrajectory__Sequence *)(untyped_member);
  deva_planning_msgs__msg__TargetTrajectory__Sequence__fini(member);
  return deva_planning_msgs__msg__TargetTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[24] = {
  {
    "x_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, x_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, y_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, theta_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, x_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, y_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "theta_e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, theta_e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xy_bounds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, xy_bounds),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__xy_bounds,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__xy_bounds,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__xy_bounds,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__xy_bounds,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__xy_bounds,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__xy_bounds  // resize(index) function pointer
  },
  {
    "obstacles_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, obstacles_info),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__obstacles_info,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__obstacles_info,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__obstacles_info,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__obstacles_info,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__obstacles_info,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__obstacles_info  // resize(index) function pointer
  },
  {
    "parking_slots",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, parking_slots),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__parking_slots,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__parking_slots,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__parking_slots,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__parking_slots,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__parking_slots,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__parking_slots  // resize(index) function pointer
  },
  {
    "start_gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, start_gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keep_start_gear_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, keep_start_gear_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kappa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, kappa),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, ref_points),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__ref_points,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__ref_points,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__ref_points,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__ref_points,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__ref_points,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__ref_points  // resize(index) function pointer
  },
  {
    "openspace_planning_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, openspace_planning_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, last_trajectory),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_trajectory_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, last_trajectory_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_internal_trajectory_paths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, last_internal_trajectory_paths),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths  // resize(index) function pointer
  },
  {
    "current_path_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, current_path_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_arrived_path_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, is_arrived_path_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_ref_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, last_ref_points),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__last_ref_points,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__last_ref_points,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__last_ref_points,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__last_ref_points,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__last_ref_points,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__last_ref_points  // resize(index) function pointer
  },
  {
    "hybrid_astar_search_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, hybrid_astar_search_results),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__hybrid_astar_search_results  // resize(index) function pointer
  },
  {
    "optimization_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__NavOpenspaceDebugInfo, optimization_results),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__size_function__NavOpenspaceDebugInfo__optimization_results,  // size() function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_const_function__NavOpenspaceDebugInfo__optimization_results,  // get_const(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__get_function__NavOpenspaceDebugInfo__optimization_results,  // get(index) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__fetch_function__NavOpenspaceDebugInfo__optimization_results,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__assign_function__NavOpenspaceDebugInfo__optimization_results,  // assign(index, value) function pointer
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__resize_function__NavOpenspaceDebugInfo__optimization_results  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "NavOpenspaceDebugInfo",  // message name
  24,  // number of fields
  sizeof(deva_planning_msgs__msg__NavOpenspaceDebugInfo),
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array,  // message members
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, NavOpenspaceDebugInfo)() {
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, NavOpenspaceObstacle)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, NavOpenspaceParkingSlot)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathData)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TargetTrajectory)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TargetTrajectory)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathData)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TargetTrajectory)();
  deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, TargetTrajectory)();
  if (!deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__NavOpenspaceDebugInfo__rosidl_typesupport_introspection_c__NavOpenspaceDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
