// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `perception_obstacle`
#include "deva_perception_msgs/msg/detail/moving_obstacle__functions.h"
// Member `trajectory`
#include "deva_planning_msgs/msg/detail/trajectory_point__functions.h"
// Member `decision`
// Member `cov`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `acc_heading_steering_stats`
#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__functions.h"
// Member `prediction_debug_info`
#include "deva_mdriver_msgs/msg/detail/debug_info__functions.h"

bool
deva_mdriver_msgs__msg__MPredictionObstacle__init(deva_mdriver_msgs__msg__MPredictionObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__MovingObstacle__init(&msg->perception_obstacle)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  // trajectory
  if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(&msg->trajectory, 0)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  // decision
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->decision, 0)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  // obs_id
  // score
  // cov
  if (!rosidl_runtime_c__double__Sequence__init(&msg->cov, 0)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  // is_static
  // acc_heading_steering_stats
  if (!deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__init(&msg->acc_heading_steering_stats, 0)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  // prediction_debug_info
  if (!deva_mdriver_msgs__msg__DebugInfo__Sequence__init(&msg->prediction_debug_info, 0)) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
    return false;
  }
  return true;
}

void
deva_mdriver_msgs__msg__MPredictionObstacle__fini(deva_mdriver_msgs__msg__MPredictionObstacle * msg)
{
  if (!msg) {
    return;
  }
  // perception_obstacle
  deva_perception_msgs__msg__MovingObstacle__fini(&msg->perception_obstacle);
  // trajectory
  deva_planning_msgs__msg__TrajectoryPoint__Sequence__fini(&msg->trajectory);
  // decision
  rosidl_runtime_c__uint8__Sequence__fini(&msg->decision);
  // obs_id
  // score
  // cov
  rosidl_runtime_c__double__Sequence__fini(&msg->cov);
  // is_static
  // acc_heading_steering_stats
  deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__fini(&msg->acc_heading_steering_stats);
  // prediction_debug_info
  deva_mdriver_msgs__msg__DebugInfo__Sequence__fini(&msg->prediction_debug_info);
}

bool
deva_mdriver_msgs__msg__MPredictionObstacle__are_equal(const deva_mdriver_msgs__msg__MPredictionObstacle * lhs, const deva_mdriver_msgs__msg__MPredictionObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__MovingObstacle__are_equal(
      &(lhs->perception_obstacle), &(rhs->perception_obstacle)))
  {
    return false;
  }
  // trajectory
  if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->decision), &(rhs->decision)))
  {
    return false;
  }
  // obs_id
  if (lhs->obs_id != rhs->obs_id) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // cov
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->cov), &(rhs->cov)))
  {
    return false;
  }
  // is_static
  if (lhs->is_static != rhs->is_static) {
    return false;
  }
  // acc_heading_steering_stats
  if (!deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__are_equal(
      &(lhs->acc_heading_steering_stats), &(rhs->acc_heading_steering_stats)))
  {
    return false;
  }
  // prediction_debug_info
  if (!deva_mdriver_msgs__msg__DebugInfo__Sequence__are_equal(
      &(lhs->prediction_debug_info), &(rhs->prediction_debug_info)))
  {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MPredictionObstacle__copy(
  const deva_mdriver_msgs__msg__MPredictionObstacle * input,
  deva_mdriver_msgs__msg__MPredictionObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__MovingObstacle__copy(
      &(input->perception_obstacle), &(output->perception_obstacle)))
  {
    return false;
  }
  // trajectory
  if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->decision), &(output->decision)))
  {
    return false;
  }
  // obs_id
  output->obs_id = input->obs_id;
  // score
  output->score = input->score;
  // cov
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->cov), &(output->cov)))
  {
    return false;
  }
  // is_static
  output->is_static = input->is_static;
  // acc_heading_steering_stats
  if (!deva_mdriver_msgs__msg__AccHeadingSteeringStats__Sequence__copy(
      &(input->acc_heading_steering_stats), &(output->acc_heading_steering_stats)))
  {
    return false;
  }
  // prediction_debug_info
  if (!deva_mdriver_msgs__msg__DebugInfo__Sequence__copy(
      &(input->prediction_debug_info), &(output->prediction_debug_info)))
  {
    return false;
  }
  return true;
}

deva_mdriver_msgs__msg__MPredictionObstacle *
deva_mdriver_msgs__msg__MPredictionObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MPredictionObstacle * msg = (deva_mdriver_msgs__msg__MPredictionObstacle *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MPredictionObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__MPredictionObstacle));
  bool success = deva_mdriver_msgs__msg__MPredictionObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__MPredictionObstacle__destroy(deva_mdriver_msgs__msg__MPredictionObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__MPredictionObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MPredictionObstacle * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__MPredictionObstacle *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__MPredictionObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__MPredictionObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__MPredictionObstacle__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__fini(deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * array)
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
      deva_mdriver_msgs__msg__MPredictionObstacle__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * array = (deva_mdriver_msgs__msg__MPredictionObstacle__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__MPredictionObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__destroy(deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__are_equal(const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * lhs, const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__MPredictionObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__copy(
  const deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * input,
  deva_mdriver_msgs__msg__MPredictionObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__MPredictionObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__MPredictionObstacle * data =
      (deva_mdriver_msgs__msg__MPredictionObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__MPredictionObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__MPredictionObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__MPredictionObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
