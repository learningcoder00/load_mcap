// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PlanningTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/planning_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/detail/trajectory_point__functions.h"
// Member `curve`
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"
// Member `estop_reason`
// Member `stop_reason`
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `stop_pose`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_planning_msgs2__msg__PlanningTrajectory__init(deva_planning_msgs2__msg__PlanningTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // path_type
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(&msg->trajectory_points, 0)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // curve
  if (!deva_common_msgs__msg__EquationCurve__init(&msg->curve)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // total_path_length
  // total_path_time
  // gear
  // is_estop
  // estop_reason
  if (!rosidl_runtime_c__String__init(&msg->estop_reason)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // is_stop
  // stop_reason
  if (!rosidl_runtime_c__String__init(&msg->stop_reason)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Point__init(&msg->stop_pose)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // is_replan
  // replan_reason
  if (!rosidl_runtime_c__String__init(&msg->replan_reason)) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
    return false;
  }
  // high_beam
  // low_beam
  // horn
  // turn_light
  // id
  return true;
}

void
deva_planning_msgs2__msg__PlanningTrajectory__fini(deva_planning_msgs2__msg__PlanningTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // path_type
  // trajectory_points
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory_points);
  // curve
  deva_common_msgs__msg__EquationCurve__fini(&msg->curve);
  // total_path_length
  // total_path_time
  // gear
  // is_estop
  // estop_reason
  rosidl_runtime_c__String__fini(&msg->estop_reason);
  // is_stop
  // stop_reason
  rosidl_runtime_c__String__fini(&msg->stop_reason);
  // stop_pose
  geometry_msgs__msg__Point__fini(&msg->stop_pose);
  // is_replan
  // replan_reason
  rosidl_runtime_c__String__fini(&msg->replan_reason);
  // high_beam
  // low_beam
  // horn
  // turn_light
  // id
}

bool
deva_planning_msgs2__msg__PlanningTrajectory__are_equal(const deva_planning_msgs2__msg__PlanningTrajectory * lhs, const deva_planning_msgs2__msg__PlanningTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // path_type
  if (lhs->path_type != rhs->path_type) {
    return false;
  }
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory_points), &(rhs->trajectory_points)))
  {
    return false;
  }
  // curve
  if (!deva_common_msgs__msg__EquationCurve__are_equal(
      &(lhs->curve), &(rhs->curve)))
  {
    return false;
  }
  // total_path_length
  if (lhs->total_path_length != rhs->total_path_length) {
    return false;
  }
  // total_path_time
  if (lhs->total_path_time != rhs->total_path_time) {
    return false;
  }
  // gear
  if (lhs->gear != rhs->gear) {
    return false;
  }
  // is_estop
  if (lhs->is_estop != rhs->is_estop) {
    return false;
  }
  // estop_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->estop_reason), &(rhs->estop_reason)))
  {
    return false;
  }
  // is_stop
  if (lhs->is_stop != rhs->is_stop) {
    return false;
  }
  // stop_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stop_reason), &(rhs->stop_reason)))
  {
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->stop_pose), &(rhs->stop_pose)))
  {
    return false;
  }
  // is_replan
  if (lhs->is_replan != rhs->is_replan) {
    return false;
  }
  // replan_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->replan_reason), &(rhs->replan_reason)))
  {
    return false;
  }
  // high_beam
  if (lhs->high_beam != rhs->high_beam) {
    return false;
  }
  // low_beam
  if (lhs->low_beam != rhs->low_beam) {
    return false;
  }
  // horn
  if (lhs->horn != rhs->horn) {
    return false;
  }
  // turn_light
  if (lhs->turn_light != rhs->turn_light) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningTrajectory__copy(
  const deva_planning_msgs2__msg__PlanningTrajectory * input,
  deva_planning_msgs2__msg__PlanningTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // path_type
  output->path_type = input->path_type;
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory_points), &(output->trajectory_points)))
  {
    return false;
  }
  // curve
  if (!deva_common_msgs__msg__EquationCurve__copy(
      &(input->curve), &(output->curve)))
  {
    return false;
  }
  // total_path_length
  output->total_path_length = input->total_path_length;
  // total_path_time
  output->total_path_time = input->total_path_time;
  // gear
  output->gear = input->gear;
  // is_estop
  output->is_estop = input->is_estop;
  // estop_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->estop_reason), &(output->estop_reason)))
  {
    return false;
  }
  // is_stop
  output->is_stop = input->is_stop;
  // stop_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->stop_reason), &(output->stop_reason)))
  {
    return false;
  }
  // stop_pose
  if (!geometry_msgs__msg__Point__copy(
      &(input->stop_pose), &(output->stop_pose)))
  {
    return false;
  }
  // is_replan
  output->is_replan = input->is_replan;
  // replan_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->replan_reason), &(output->replan_reason)))
  {
    return false;
  }
  // high_beam
  output->high_beam = input->high_beam;
  // low_beam
  output->low_beam = input->low_beam;
  // horn
  output->horn = input->horn;
  // turn_light
  output->turn_light = input->turn_light;
  // id
  output->id = input->id;
  return true;
}

deva_planning_msgs2__msg__PlanningTrajectory *
deva_planning_msgs2__msg__PlanningTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningTrajectory * msg = (deva_planning_msgs2__msg__PlanningTrajectory *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PlanningTrajectory));
  bool success = deva_planning_msgs2__msg__PlanningTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PlanningTrajectory__destroy(deva_planning_msgs2__msg__PlanningTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PlanningTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__init(deva_planning_msgs2__msg__PlanningTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningTrajectory * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PlanningTrajectory *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PlanningTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PlanningTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PlanningTrajectory__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__fini(deva_planning_msgs2__msg__PlanningTrajectory__Sequence * array)
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
      deva_planning_msgs2__msg__PlanningTrajectory__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PlanningTrajectory__Sequence *
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PlanningTrajectory__Sequence * array = (deva_planning_msgs2__msg__PlanningTrajectory__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PlanningTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PlanningTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__destroy(deva_planning_msgs2__msg__PlanningTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PlanningTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__are_equal(const deva_planning_msgs2__msg__PlanningTrajectory__Sequence * lhs, const deva_planning_msgs2__msg__PlanningTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PlanningTrajectory__Sequence__copy(
  const deva_planning_msgs2__msg__PlanningTrajectory__Sequence * input,
  deva_planning_msgs2__msg__PlanningTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PlanningTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PlanningTrajectory * data =
      (deva_planning_msgs2__msg__PlanningTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PlanningTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PlanningTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PlanningTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
