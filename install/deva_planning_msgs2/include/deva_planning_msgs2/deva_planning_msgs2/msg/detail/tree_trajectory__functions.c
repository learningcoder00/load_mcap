// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obs_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory_points`
#include "deva_planning_msgs2/msg/detail/trajectory_point__functions.h"
// Member `traj_score`
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"

bool
deva_planning_msgs2__msg__TreeTrajectory__init(deva_planning_msgs2__msg__TreeTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // obs_id
  if (!rosidl_runtime_c__String__init(&msg->obs_id)) {
    deva_planning_msgs2__msg__TreeTrajectory__fini(msg);
    return false;
  }
  // confidence
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(&msg->trajectory_points, 0)) {
    deva_planning_msgs2__msg__TreeTrajectory__fini(msg);
    return false;
  }
  // traj_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&msg->traj_score, 0)) {
    deva_planning_msgs2__msg__TreeTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__TreeTrajectory__fini(deva_planning_msgs2__msg__TreeTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // obs_id
  rosidl_runtime_c__String__fini(&msg->obs_id);
  // confidence
  // trajectory_points
  deva_planning_msgs2__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory_points);
  // traj_score
  deva_planning_msgs2__msg__String2Double__Sequence__fini(&msg->traj_score);
}

bool
deva_planning_msgs2__msg__TreeTrajectory__are_equal(const deva_planning_msgs2__msg__TreeTrajectory * lhs, const deva_planning_msgs2__msg__TreeTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obs_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obs_id), &(rhs->obs_id)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory_points), &(rhs->trajectory_points)))
  {
    return false;
  }
  // traj_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__are_equal(
      &(lhs->traj_score), &(rhs->traj_score)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__TreeTrajectory__copy(
  const deva_planning_msgs2__msg__TreeTrajectory * input,
  deva_planning_msgs2__msg__TreeTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // obs_id
  if (!rosidl_runtime_c__String__copy(
      &(input->obs_id), &(output->obs_id)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // trajectory_points
  if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory_points), &(output->trajectory_points)))
  {
    return false;
  }
  // traj_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__copy(
      &(input->traj_score), &(output->traj_score)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__TreeTrajectory *
deva_planning_msgs2__msg__TreeTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TreeTrajectory * msg = (deva_planning_msgs2__msg__TreeTrajectory *)allocator.allocate(sizeof(deva_planning_msgs2__msg__TreeTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__TreeTrajectory));
  bool success = deva_planning_msgs2__msg__TreeTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__TreeTrajectory__destroy(deva_planning_msgs2__msg__TreeTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__TreeTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__TreeTrajectory__Sequence__init(deva_planning_msgs2__msg__TreeTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TreeTrajectory * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__TreeTrajectory *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__TreeTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__TreeTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__TreeTrajectory__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__TreeTrajectory__Sequence__fini(deva_planning_msgs2__msg__TreeTrajectory__Sequence * array)
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
      deva_planning_msgs2__msg__TreeTrajectory__fini(&array->data[i]);
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

deva_planning_msgs2__msg__TreeTrajectory__Sequence *
deva_planning_msgs2__msg__TreeTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__TreeTrajectory__Sequence * array = (deva_planning_msgs2__msg__TreeTrajectory__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__TreeTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__TreeTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__TreeTrajectory__Sequence__destroy(deva_planning_msgs2__msg__TreeTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__TreeTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__TreeTrajectory__Sequence__are_equal(const deva_planning_msgs2__msg__TreeTrajectory__Sequence * lhs, const deva_planning_msgs2__msg__TreeTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__TreeTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__TreeTrajectory__Sequence__copy(
  const deva_planning_msgs2__msg__TreeTrajectory__Sequence * input,
  deva_planning_msgs2__msg__TreeTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__TreeTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__TreeTrajectory * data =
      (deva_planning_msgs2__msg__TreeTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__TreeTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__TreeTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__TreeTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
