// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/target_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `sensor_timestamp`
#include "deva_planning_msgs2/msg/detail/sensor_time__functions.h"
// Member `trajectory_point`
#include "deva_planning_msgs2/msg/detail/trajectory_point__functions.h"
// Member `path_point`
// Member `stop_pose`
#include "deva_planning_msgs2/msg/detail/path_point__functions.h"
// Member `gear`
// Member `estop_reason`
// Member `stop_reason`
// Member `replan_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_planning_msgs2__msg__TargetTrajectory__init(deva_planning_msgs2__msg__TargetTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // sensor_timestamp
  if (!deva_planning_msgs2__msg__SensorTime__init(&msg->sensor_timestamp)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // start_gnss_time
  // total_path_length
  // total_path_time
  // trajectory_point
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(&msg->trajectory_point, 0)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // path_point
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__init(&msg->path_point, 0)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // gear
  if (!rosidl_runtime_c__String__init(&msg->gear)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // is_estop
  // estop_reason
  if (!rosidl_runtime_c__String__init(&msg->estop_reason)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // is_stop
  // stop_pose
  if (!deva_planning_msgs2__msg__PathPoint__init(&msg->stop_pose)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // stop_reason
  if (!rosidl_runtime_c__String__init(&msg->stop_reason)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // is_replan
  // replan_reason
  if (!rosidl_runtime_c__String__init(&msg->replan_reason)) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
    return false;
  }
  // car_in_dead_end
  // high_beam
  // low_beam
  // horn
  // emergency_light
  // trace_type
  return true;
}

void
deva_planning_msgs2__msg__TargetTrajectory__fini(deva_planning_msgs2__msg__TargetTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor_timestamp
  deva_planning_msgs2__msg__SensorTime__fini(&msg->sensor_timestamp);
  // start_gnss_time
  // total_path_length
  // total_path_time
  // trajectory_point
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory_point);
  // path_point
  deva_planning_msgs2__msg__PathPoint__Sequence__fini(&msg->path_point);
  // gear
  rosidl_runtime_c__String__fini(&msg->gear);
  // is_estop
  // estop_reason
  rosidl_runtime_c__String__fini(&msg->estop_reason);
  // is_stop
  // stop_pose
  deva_planning_msgs2__msg__PathPoint__fini(&msg->stop_pose);
  // stop_reason
  rosidl_runtime_c__String__fini(&msg->stop_reason);
  // is_replan
  // replan_reason
  rosidl_runtime_c__String__fini(&msg->replan_reason);
  // car_in_dead_end
  // high_beam
  // low_beam
  // horn
  // emergency_light
  // trace_type
}

bool
deva_planning_msgs2__msg__TargetTrajectory__are_equal(const deva_planning_msgs2__msg__TargetTrajectory * lhs, const deva_planning_msgs2__msg__TargetTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // sensor_timestamp
  if (!deva_planning_msgs2__msg__SensorTime__are_equal(
      &(lhs->sensor_timestamp), &(rhs->sensor_timestamp)))
  {
    return false;
  }
  // start_gnss_time
  if (lhs->start_gnss_time != rhs->start_gnss_time) {
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
  // trajectory_point
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory_point), &(rhs->trajectory_point)))
  {
    return false;
  }
  // path_point
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__are_equal(
      &(lhs->path_point), &(rhs->path_point)))
  {
    return false;
  }
  // gear
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->gear), &(rhs->gear)))
  {
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
  // stop_pose
  if (!deva_planning_msgs2__msg__PathPoint__are_equal(
      &(lhs->stop_pose), &(rhs->stop_pose)))
  {
    return false;
  }
  // stop_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stop_reason), &(rhs->stop_reason)))
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
  // car_in_dead_end
  if (lhs->car_in_dead_end != rhs->car_in_dead_end) {
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
  // emergency_light
  if (lhs->emergency_light != rhs->emergency_light) {
    return false;
  }
  // trace_type
  if (lhs->trace_type != rhs->trace_type) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__TargetTrajectory__copy(
  const deva_planning_msgs2__msg__TargetTrajectory * input,
  deva_planning_msgs2__msg__TargetTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // sensor_timestamp
  if (!deva_planning_msgs2__msg__SensorTime__copy(
      &(input->sensor_timestamp), &(output->sensor_timestamp)))
  {
    return false;
  }
  // start_gnss_time
  output->start_gnss_time = input->start_gnss_time;
  // total_path_length
  output->total_path_length = input->total_path_length;
  // total_path_time
  output->total_path_time = input->total_path_time;
  // trajectory_point
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory_point), &(output->trajectory_point)))
  {
    return false;
  }
  // path_point
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__copy(
      &(input->path_point), &(output->path_point)))
  {
    return false;
  }
  // gear
  if (!rosidl_runtime_c__String__copy(
      &(input->gear), &(output->gear)))
  {
    return false;
  }
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
  // stop_pose
  if (!deva_planning_msgs2__msg__PathPoint__copy(
      &(input->stop_pose), &(output->stop_pose)))
  {
    return false;
  }
  // stop_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->stop_reason), &(output->stop_reason)))
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
  // car_in_dead_end
  output->car_in_dead_end = input->car_in_dead_end;
  // high_beam
  output->high_beam = input->high_beam;
  // low_beam
  output->low_beam = input->low_beam;
  // horn
  output->horn = input->horn;
  // emergency_light
  output->emergency_light = input->emergency_light;
  // trace_type
  output->trace_type = input->trace_type;
  return true;
}

deva_planning_msgs2__msg__TargetTrajectory *
deva_planning_msgs2__msg__TargetTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TargetTrajectory * msg = (deva_planning_msgs2__msg__TargetTrajectory *)allocator.allocate(sizeof(deva_planning_msgs2__msg__TargetTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__TargetTrajectory));
  bool success = deva_planning_msgs2__msg__TargetTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__TargetTrajectory__destroy(deva_planning_msgs2__msg__TargetTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__TargetTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(deva_planning_msgs2__msg__TargetTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TargetTrajectory * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__TargetTrajectory *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__TargetTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__TargetTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__TargetTrajectory__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(deva_planning_msgs2__msg__TargetTrajectory__Sequence * array)
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
      deva_planning_msgs2__msg__TargetTrajectory__fini(&array->data[i]);
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

deva_planning_msgs2__msg__TargetTrajectory__Sequence *
deva_planning_msgs2__msg__TargetTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TargetTrajectory__Sequence * array = (deva_planning_msgs2__msg__TargetTrajectory__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__TargetTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__TargetTrajectory__Sequence__destroy(deva_planning_msgs2__msg__TargetTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__TargetTrajectory__Sequence__are_equal(const deva_planning_msgs2__msg__TargetTrajectory__Sequence * lhs, const deva_planning_msgs2__msg__TargetTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__TargetTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__TargetTrajectory__Sequence__copy(
  const deva_planning_msgs2__msg__TargetTrajectory__Sequence * input,
  deva_planning_msgs2__msg__TargetTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__TargetTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__TargetTrajectory * data =
      (deva_planning_msgs2__msg__TargetTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__TargetTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__TargetTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__TargetTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
