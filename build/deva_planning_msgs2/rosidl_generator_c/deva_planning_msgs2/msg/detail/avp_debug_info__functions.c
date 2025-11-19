// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/avp_debug_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `origin_ref_line`
#include "deva_planning_msgs2/msg/detail/avp_ref_line__functions.h"
// Member `smooth_line`
// Member `used_ref_line_tree`
// Member `driver_path`
#include "deva_planning_msgs2/msg/detail/avp_ref_line_tree_point_vec__functions.h"
// Member `now_mpc_data`
// Member `now_path_data`
// Member `past_path_data`
#include "deva_planning_msgs2/msg/detail/mpc_path_data__functions.h"
// Member `boundary_poses`
// Member `obstacle_poses`
#include "deva_planning_msgs2/msg/detail/path_point__functions.h"
// Member `stitch_data`
#include "deva_planning_msgs2/msg/detail/stitch_data__functions.h"

bool
deva_planning_msgs2__msg__AvpDebugInfo__init(deva_planning_msgs2__msg__AvpDebugInfo * msg)
{
  if (!msg) {
    return false;
  }
  // solve_num
  // acados_status
  // origin_ref_line
  if (!deva_planning_msgs2__msg__AvpRefLine__Sequence__init(&msg->origin_ref_line, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // smooth_line
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__init(&msg->smooth_line)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // used_ref_line_tree
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init(&msg->used_ref_line_tree, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // driver_path
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__init(&msg->driver_path, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // now_mpc_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__init(&msg->now_mpc_data, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // now_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__init(&msg->now_path_data, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // past_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__init(&msg->past_path_data, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // boundary_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__init(&msg->boundary_poses, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // obstacle_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__init(&msg->obstacle_poses, 0)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  // stitch_data
  if (!deva_planning_msgs2__msg__StitchData__init(&msg->stitch_data)) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__AvpDebugInfo__fini(deva_planning_msgs2__msg__AvpDebugInfo * msg)
{
  if (!msg) {
    return;
  }
  // solve_num
  // acados_status
  // origin_ref_line
  deva_planning_msgs2__msg__AvpRefLine__Sequence__fini(&msg->origin_ref_line);
  // smooth_line
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__fini(&msg->smooth_line);
  // used_ref_line_tree
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini(&msg->used_ref_line_tree);
  // driver_path
  deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__fini(&msg->driver_path);
  // now_mpc_data
  deva_planning_msgs2__msg__MpcPathData__Sequence__fini(&msg->now_mpc_data);
  // now_path_data
  deva_planning_msgs2__msg__MpcPathData__Sequence__fini(&msg->now_path_data);
  // past_path_data
  deva_planning_msgs2__msg__MpcPathData__Sequence__fini(&msg->past_path_data);
  // boundary_poses
  deva_planning_msgs2__msg__PathPoint__Sequence__fini(&msg->boundary_poses);
  // obstacle_poses
  deva_planning_msgs2__msg__PathPoint__Sequence__fini(&msg->obstacle_poses);
  // stitch_data
  deva_planning_msgs2__msg__StitchData__fini(&msg->stitch_data);
}

bool
deva_planning_msgs2__msg__AvpDebugInfo__are_equal(const deva_planning_msgs2__msg__AvpDebugInfo * lhs, const deva_planning_msgs2__msg__AvpDebugInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // solve_num
  if (lhs->solve_num != rhs->solve_num) {
    return false;
  }
  // acados_status
  if (lhs->acados_status != rhs->acados_status) {
    return false;
  }
  // origin_ref_line
  if (!deva_planning_msgs2__msg__AvpRefLine__Sequence__are_equal(
      &(lhs->origin_ref_line), &(rhs->origin_ref_line)))
  {
    return false;
  }
  // smooth_line
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__are_equal(
      &(lhs->smooth_line), &(rhs->smooth_line)))
  {
    return false;
  }
  // used_ref_line_tree
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__are_equal(
      &(lhs->used_ref_line_tree), &(rhs->used_ref_line_tree)))
  {
    return false;
  }
  // driver_path
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__are_equal(
      &(lhs->driver_path), &(rhs->driver_path)))
  {
    return false;
  }
  // now_mpc_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__are_equal(
      &(lhs->now_mpc_data), &(rhs->now_mpc_data)))
  {
    return false;
  }
  // now_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__are_equal(
      &(lhs->now_path_data), &(rhs->now_path_data)))
  {
    return false;
  }
  // past_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__are_equal(
      &(lhs->past_path_data), &(rhs->past_path_data)))
  {
    return false;
  }
  // boundary_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__are_equal(
      &(lhs->boundary_poses), &(rhs->boundary_poses)))
  {
    return false;
  }
  // obstacle_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__are_equal(
      &(lhs->obstacle_poses), &(rhs->obstacle_poses)))
  {
    return false;
  }
  // stitch_data
  if (!deva_planning_msgs2__msg__StitchData__are_equal(
      &(lhs->stitch_data), &(rhs->stitch_data)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpDebugInfo__copy(
  const deva_planning_msgs2__msg__AvpDebugInfo * input,
  deva_planning_msgs2__msg__AvpDebugInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // solve_num
  output->solve_num = input->solve_num;
  // acados_status
  output->acados_status = input->acados_status;
  // origin_ref_line
  if (!deva_planning_msgs2__msg__AvpRefLine__Sequence__copy(
      &(input->origin_ref_line), &(output->origin_ref_line)))
  {
    return false;
  }
  // smooth_line
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__copy(
      &(input->smooth_line), &(output->smooth_line)))
  {
    return false;
  }
  // used_ref_line_tree
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__copy(
      &(input->used_ref_line_tree), &(output->used_ref_line_tree)))
  {
    return false;
  }
  // driver_path
  if (!deva_planning_msgs2__msg__AvpRefLineTreePointVec__Sequence__copy(
      &(input->driver_path), &(output->driver_path)))
  {
    return false;
  }
  // now_mpc_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__copy(
      &(input->now_mpc_data), &(output->now_mpc_data)))
  {
    return false;
  }
  // now_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__copy(
      &(input->now_path_data), &(output->now_path_data)))
  {
    return false;
  }
  // past_path_data
  if (!deva_planning_msgs2__msg__MpcPathData__Sequence__copy(
      &(input->past_path_data), &(output->past_path_data)))
  {
    return false;
  }
  // boundary_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__copy(
      &(input->boundary_poses), &(output->boundary_poses)))
  {
    return false;
  }
  // obstacle_poses
  if (!deva_planning_msgs2__msg__PathPoint__Sequence__copy(
      &(input->obstacle_poses), &(output->obstacle_poses)))
  {
    return false;
  }
  // stitch_data
  if (!deva_planning_msgs2__msg__StitchData__copy(
      &(input->stitch_data), &(output->stitch_data)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__AvpDebugInfo *
deva_planning_msgs2__msg__AvpDebugInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpDebugInfo * msg = (deva_planning_msgs2__msg__AvpDebugInfo *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpDebugInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__AvpDebugInfo));
  bool success = deva_planning_msgs2__msg__AvpDebugInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__AvpDebugInfo__destroy(deva_planning_msgs2__msg__AvpDebugInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__AvpDebugInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__init(deva_planning_msgs2__msg__AvpDebugInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpDebugInfo * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__AvpDebugInfo *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__AvpDebugInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__AvpDebugInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__AvpDebugInfo__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__fini(deva_planning_msgs2__msg__AvpDebugInfo__Sequence * array)
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
      deva_planning_msgs2__msg__AvpDebugInfo__fini(&array->data[i]);
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

deva_planning_msgs2__msg__AvpDebugInfo__Sequence *
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__AvpDebugInfo__Sequence * array = (deva_planning_msgs2__msg__AvpDebugInfo__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__AvpDebugInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__AvpDebugInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__destroy(deva_planning_msgs2__msg__AvpDebugInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__AvpDebugInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__are_equal(const deva_planning_msgs2__msg__AvpDebugInfo__Sequence * lhs, const deva_planning_msgs2__msg__AvpDebugInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpDebugInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__AvpDebugInfo__Sequence__copy(
  const deva_planning_msgs2__msg__AvpDebugInfo__Sequence * input,
  deva_planning_msgs2__msg__AvpDebugInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__AvpDebugInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__AvpDebugInfo * data =
      (deva_planning_msgs2__msg__AvpDebugInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__AvpDebugInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__AvpDebugInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__AvpDebugInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
