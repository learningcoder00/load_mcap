// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `xy_bounds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `obstacles_info`
#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__functions.h"
// Member `parking_slots`
#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__functions.h"
// Member `ref_points`
// Member `last_ref_points`
#include "deva_planning_msgs2/msg/detail/path_data__functions.h"
// Member `last_trajectory`
// Member `last_internal_trajectory_paths`
// Member `hybrid_astar_search_results`
// Member `optimization_results`
#include "deva_planning_msgs2/msg/detail/target_trajectory__functions.h"

bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__init(deva_planning_msgs2__msg__NavOpenspaceDebugInfo * msg)
{
  if (!msg) {
    return false;
  }
  // x_s
  // y_s
  // theta_s
  // x_e
  // y_e
  // theta_e
  // xy_bounds
  if (!rosidl_runtime_c__double__Sequence__init(&msg->xy_bounds, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // obstacles_info
  if (!deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__init(&msg->obstacles_info, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // parking_slots
  if (!deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__init(&msg->parking_slots, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // start_gear
  // speed
  // keep_start_gear_distance
  // kappa
  // timestamp
  // ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__init(&msg->ref_points, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // openspace_planning_status
  // last_trajectory
  if (!deva_planning_msgs2__msg__TargetTrajectory__init(&msg->last_trajectory)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // last_trajectory_timestamp
  // last_internal_trajectory_paths
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&msg->last_internal_trajectory_paths, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // current_path_index
  // is_arrived_path_end
  // last_ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__init(&msg->last_ref_points, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // hybrid_astar_search_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&msg->hybrid_astar_search_results, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  // optimization_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&msg->optimization_results, 0)) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(deva_planning_msgs2__msg__NavOpenspaceDebugInfo * msg)
{
  if (!msg) {
    return;
  }
  // x_s
  // y_s
  // theta_s
  // x_e
  // y_e
  // theta_e
  // xy_bounds
  rosidl_runtime_c__double__Sequence__fini(&msg->xy_bounds);
  // obstacles_info
  deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__fini(&msg->obstacles_info);
  // parking_slots
  deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__fini(&msg->parking_slots);
  // start_gear
  // speed
  // keep_start_gear_distance
  // kappa
  // timestamp
  // ref_points
  deva_planning_msgs2__msg__PathData__Sequence__fini(&msg->ref_points);
  // openspace_planning_status
  // last_trajectory
  deva_planning_msgs2__msg__TargetTrajectory__fini(&msg->last_trajectory);
  // last_trajectory_timestamp
  // last_internal_trajectory_paths
  deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&msg->last_internal_trajectory_paths);
  // current_path_index
  // is_arrived_path_end
  // last_ref_points
  deva_planning_msgs2__msg__PathData__Sequence__fini(&msg->last_ref_points);
  // hybrid_astar_search_results
  deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&msg->hybrid_astar_search_results);
  // optimization_results
  deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&msg->optimization_results);
}

bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__are_equal(const deva_planning_msgs2__msg__NavOpenspaceDebugInfo * lhs, const deva_planning_msgs2__msg__NavOpenspaceDebugInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_s
  if (lhs->x_s != rhs->x_s) {
    return false;
  }
  // y_s
  if (lhs->y_s != rhs->y_s) {
    return false;
  }
  // theta_s
  if (lhs->theta_s != rhs->theta_s) {
    return false;
  }
  // x_e
  if (lhs->x_e != rhs->x_e) {
    return false;
  }
  // y_e
  if (lhs->y_e != rhs->y_e) {
    return false;
  }
  // theta_e
  if (lhs->theta_e != rhs->theta_e) {
    return false;
  }
  // xy_bounds
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->xy_bounds), &(rhs->xy_bounds)))
  {
    return false;
  }
  // obstacles_info
  if (!deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__are_equal(
      &(lhs->obstacles_info), &(rhs->obstacles_info)))
  {
    return false;
  }
  // parking_slots
  if (!deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__are_equal(
      &(lhs->parking_slots), &(rhs->parking_slots)))
  {
    return false;
  }
  // start_gear
  if (lhs->start_gear != rhs->start_gear) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // keep_start_gear_distance
  if (lhs->keep_start_gear_distance != rhs->keep_start_gear_distance) {
    return false;
  }
  // kappa
  if (lhs->kappa != rhs->kappa) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__are_equal(
      &(lhs->ref_points), &(rhs->ref_points)))
  {
    return false;
  }
  // openspace_planning_status
  if (lhs->openspace_planning_status != rhs->openspace_planning_status) {
    return false;
  }
  // last_trajectory
  if (!deva_planning_msgs2__msg__TargetTrajectory__are_equal(
      &(lhs->last_trajectory), &(rhs->last_trajectory)))
  {
    return false;
  }
  // last_trajectory_timestamp
  if (lhs->last_trajectory_timestamp != rhs->last_trajectory_timestamp) {
    return false;
  }
  // last_internal_trajectory_paths
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__are_equal(
      &(lhs->last_internal_trajectory_paths), &(rhs->last_internal_trajectory_paths)))
  {
    return false;
  }
  // current_path_index
  if (lhs->current_path_index != rhs->current_path_index) {
    return false;
  }
  // is_arrived_path_end
  if (lhs->is_arrived_path_end != rhs->is_arrived_path_end) {
    return false;
  }
  // last_ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__are_equal(
      &(lhs->last_ref_points), &(rhs->last_ref_points)))
  {
    return false;
  }
  // hybrid_astar_search_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__are_equal(
      &(lhs->hybrid_astar_search_results), &(rhs->hybrid_astar_search_results)))
  {
    return false;
  }
  // optimization_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__are_equal(
      &(lhs->optimization_results), &(rhs->optimization_results)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__copy(
  const deva_planning_msgs2__msg__NavOpenspaceDebugInfo * input,
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // x_s
  output->x_s = input->x_s;
  // y_s
  output->y_s = input->y_s;
  // theta_s
  output->theta_s = input->theta_s;
  // x_e
  output->x_e = input->x_e;
  // y_e
  output->y_e = input->y_e;
  // theta_e
  output->theta_e = input->theta_e;
  // xy_bounds
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->xy_bounds), &(output->xy_bounds)))
  {
    return false;
  }
  // obstacles_info
  if (!deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__copy(
      &(input->obstacles_info), &(output->obstacles_info)))
  {
    return false;
  }
  // parking_slots
  if (!deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__copy(
      &(input->parking_slots), &(output->parking_slots)))
  {
    return false;
  }
  // start_gear
  output->start_gear = input->start_gear;
  // speed
  output->speed = input->speed;
  // keep_start_gear_distance
  output->keep_start_gear_distance = input->keep_start_gear_distance;
  // kappa
  output->kappa = input->kappa;
  // timestamp
  output->timestamp = input->timestamp;
  // ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__copy(
      &(input->ref_points), &(output->ref_points)))
  {
    return false;
  }
  // openspace_planning_status
  output->openspace_planning_status = input->openspace_planning_status;
  // last_trajectory
  if (!deva_planning_msgs2__msg__TargetTrajectory__copy(
      &(input->last_trajectory), &(output->last_trajectory)))
  {
    return false;
  }
  // last_trajectory_timestamp
  output->last_trajectory_timestamp = input->last_trajectory_timestamp;
  // last_internal_trajectory_paths
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__copy(
      &(input->last_internal_trajectory_paths), &(output->last_internal_trajectory_paths)))
  {
    return false;
  }
  // current_path_index
  output->current_path_index = input->current_path_index;
  // is_arrived_path_end
  output->is_arrived_path_end = input->is_arrived_path_end;
  // last_ref_points
  if (!deva_planning_msgs2__msg__PathData__Sequence__copy(
      &(input->last_ref_points), &(output->last_ref_points)))
  {
    return false;
  }
  // hybrid_astar_search_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__copy(
      &(input->hybrid_astar_search_results), &(output->hybrid_astar_search_results)))
  {
    return false;
  }
  // optimization_results
  if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__copy(
      &(input->optimization_results), &(output->optimization_results)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__NavOpenspaceDebugInfo *
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo * msg = (deva_planning_msgs2__msg__NavOpenspaceDebugInfo *)allocator.allocate(sizeof(deva_planning_msgs2__msg__NavOpenspaceDebugInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__NavOpenspaceDebugInfo));
  bool success = deva_planning_msgs2__msg__NavOpenspaceDebugInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__destroy(deva_planning_msgs2__msg__NavOpenspaceDebugInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__init(deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__NavOpenspaceDebugInfo *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__NavOpenspaceDebugInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__NavOpenspaceDebugInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__fini(deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence *
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * array = (deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__destroy(deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__are_equal(const deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * lhs, const deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence__copy(
  const deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * input,
  deva_planning_msgs2__msg__NavOpenspaceDebugInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__NavOpenspaceDebugInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__NavOpenspaceDebugInfo * data =
      (deva_planning_msgs2__msg__NavOpenspaceDebugInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__NavOpenspaceDebugInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__NavOpenspaceDebugInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
