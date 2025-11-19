// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/state_context__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `front_obstacle_id`
// Member `rear_obstacle_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mcts_trees`
#include "deva_planning_msgs2/msg/detail/policy_scenario__functions.h"
// Member `tagged_obstacle`
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"
// Member `lane_bind_infos`
#include "deva_planning_msgs2/msg/detail/lane_bind_info__functions.h"
// Member `ego_sl_on_ref_lines`
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__functions.h"
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"
// Member `scalable_stream`
#include "deva_planning_msgs2/msg/detail/string2_u_int__functions.h"

bool
deva_planning_msgs2__msg__StateContext__init(deva_planning_msgs2__msg__StateContext * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // behavior_type
  // routing_mode
  // current_turn_type
  // use_mdriver_ego
  // target_line_id
  // current_line_id
  // front_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->front_obstacle_id)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // rear_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->rear_obstacle_id)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // lane_change_task
  // best_tree_id
  // mcts_trees
  if (!deva_planning_msgs2__msg__PolicyScenario__Sequence__init(&msg->mcts_trees, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // tagged_obstacle
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__init(&msg->tagged_obstacle, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // lane_bind_infos
  if (!deva_planning_msgs2__msg__LaneBindInfo__Sequence__init(&msg->lane_bind_infos, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // ego_sl_on_ref_lines
  if (!deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__init(&msg->ego_sl_on_ref_lines, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // lane_change_cancel_reason
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->scalable_flags, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__init(&msg->scalable_multimap, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__init(&msg->scalable_stream, 0)) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__StateContext__fini(deva_planning_msgs2__msg__StateContext * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // behavior_type
  // routing_mode
  // current_turn_type
  // use_mdriver_ego
  // target_line_id
  // current_line_id
  // front_obstacle_id
  rosidl_runtime_c__String__fini(&msg->front_obstacle_id);
  // rear_obstacle_id
  rosidl_runtime_c__String__fini(&msg->rear_obstacle_id);
  // lane_change_task
  // best_tree_id
  // mcts_trees
  deva_planning_msgs2__msg__PolicyScenario__Sequence__fini(&msg->mcts_trees);
  // tagged_obstacle
  deva_planning_msgs2__msg__UInt2String__Sequence__fini(&msg->tagged_obstacle);
  // lane_bind_infos
  deva_planning_msgs2__msg__LaneBindInfo__Sequence__fini(&msg->lane_bind_infos);
  // ego_sl_on_ref_lines
  deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__fini(&msg->ego_sl_on_ref_lines);
  // lane_change_cancel_reason
  // scalable_flags
  rosidl_runtime_c__uint8__Sequence__fini(&msg->scalable_flags);
  // scalable_multimap
  deva_planning_msgs2__msg__String2String__Sequence__fini(&msg->scalable_multimap);
  // scalable_stream
  deva_planning_msgs2__msg__String2UInt__Sequence__fini(&msg->scalable_stream);
}

bool
deva_planning_msgs2__msg__StateContext__are_equal(const deva_planning_msgs2__msg__StateContext * lhs, const deva_planning_msgs2__msg__StateContext * rhs)
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
  // behavior_type
  if (lhs->behavior_type != rhs->behavior_type) {
    return false;
  }
  // routing_mode
  if (lhs->routing_mode != rhs->routing_mode) {
    return false;
  }
  // current_turn_type
  if (lhs->current_turn_type != rhs->current_turn_type) {
    return false;
  }
  // use_mdriver_ego
  if (lhs->use_mdriver_ego != rhs->use_mdriver_ego) {
    return false;
  }
  // target_line_id
  if (lhs->target_line_id != rhs->target_line_id) {
    return false;
  }
  // current_line_id
  if (lhs->current_line_id != rhs->current_line_id) {
    return false;
  }
  // front_obstacle_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->front_obstacle_id), &(rhs->front_obstacle_id)))
  {
    return false;
  }
  // rear_obstacle_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->rear_obstacle_id), &(rhs->rear_obstacle_id)))
  {
    return false;
  }
  // lane_change_task
  if (lhs->lane_change_task != rhs->lane_change_task) {
    return false;
  }
  // best_tree_id
  if (lhs->best_tree_id != rhs->best_tree_id) {
    return false;
  }
  // mcts_trees
  if (!deva_planning_msgs2__msg__PolicyScenario__Sequence__are_equal(
      &(lhs->mcts_trees), &(rhs->mcts_trees)))
  {
    return false;
  }
  // tagged_obstacle
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__are_equal(
      &(lhs->tagged_obstacle), &(rhs->tagged_obstacle)))
  {
    return false;
  }
  // lane_bind_infos
  if (!deva_planning_msgs2__msg__LaneBindInfo__Sequence__are_equal(
      &(lhs->lane_bind_infos), &(rhs->lane_bind_infos)))
  {
    return false;
  }
  // ego_sl_on_ref_lines
  if (!deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__are_equal(
      &(lhs->ego_sl_on_ref_lines), &(rhs->ego_sl_on_ref_lines)))
  {
    return false;
  }
  // lane_change_cancel_reason
  if (lhs->lane_change_cancel_reason != rhs->lane_change_cancel_reason) {
    return false;
  }
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->scalable_flags), &(rhs->scalable_flags)))
  {
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__are_equal(
      &(lhs->scalable_multimap), &(rhs->scalable_multimap)))
  {
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__are_equal(
      &(lhs->scalable_stream), &(rhs->scalable_stream)))
  {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__StateContext__copy(
  const deva_planning_msgs2__msg__StateContext * input,
  deva_planning_msgs2__msg__StateContext * output)
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
  // behavior_type
  output->behavior_type = input->behavior_type;
  // routing_mode
  output->routing_mode = input->routing_mode;
  // current_turn_type
  output->current_turn_type = input->current_turn_type;
  // use_mdriver_ego
  output->use_mdriver_ego = input->use_mdriver_ego;
  // target_line_id
  output->target_line_id = input->target_line_id;
  // current_line_id
  output->current_line_id = input->current_line_id;
  // front_obstacle_id
  if (!rosidl_runtime_c__String__copy(
      &(input->front_obstacle_id), &(output->front_obstacle_id)))
  {
    return false;
  }
  // rear_obstacle_id
  if (!rosidl_runtime_c__String__copy(
      &(input->rear_obstacle_id), &(output->rear_obstacle_id)))
  {
    return false;
  }
  // lane_change_task
  output->lane_change_task = input->lane_change_task;
  // best_tree_id
  output->best_tree_id = input->best_tree_id;
  // mcts_trees
  if (!deva_planning_msgs2__msg__PolicyScenario__Sequence__copy(
      &(input->mcts_trees), &(output->mcts_trees)))
  {
    return false;
  }
  // tagged_obstacle
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__copy(
      &(input->tagged_obstacle), &(output->tagged_obstacle)))
  {
    return false;
  }
  // lane_bind_infos
  if (!deva_planning_msgs2__msg__LaneBindInfo__Sequence__copy(
      &(input->lane_bind_infos), &(output->lane_bind_infos)))
  {
    return false;
  }
  // ego_sl_on_ref_lines
  if (!deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__copy(
      &(input->ego_sl_on_ref_lines), &(output->ego_sl_on_ref_lines)))
  {
    return false;
  }
  // lane_change_cancel_reason
  output->lane_change_cancel_reason = input->lane_change_cancel_reason;
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->scalable_flags), &(output->scalable_flags)))
  {
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__copy(
      &(input->scalable_multimap), &(output->scalable_multimap)))
  {
    return false;
  }
  // scalable_stream
  if (!deva_planning_msgs2__msg__String2UInt__Sequence__copy(
      &(input->scalable_stream), &(output->scalable_stream)))
  {
    return false;
  }
  return true;
}

deva_planning_msgs2__msg__StateContext *
deva_planning_msgs2__msg__StateContext__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StateContext * msg = (deva_planning_msgs2__msg__StateContext *)allocator.allocate(sizeof(deva_planning_msgs2__msg__StateContext), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__StateContext));
  bool success = deva_planning_msgs2__msg__StateContext__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__StateContext__destroy(deva_planning_msgs2__msg__StateContext * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__StateContext__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__StateContext__Sequence__init(deva_planning_msgs2__msg__StateContext__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StateContext * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__StateContext *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__StateContext), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__StateContext__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__StateContext__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__StateContext__Sequence__fini(deva_planning_msgs2__msg__StateContext__Sequence * array)
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
      deva_planning_msgs2__msg__StateContext__fini(&array->data[i]);
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

deva_planning_msgs2__msg__StateContext__Sequence *
deva_planning_msgs2__msg__StateContext__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__StateContext__Sequence * array = (deva_planning_msgs2__msg__StateContext__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__StateContext__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__StateContext__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__StateContext__Sequence__destroy(deva_planning_msgs2__msg__StateContext__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__StateContext__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__StateContext__Sequence__are_equal(const deva_planning_msgs2__msg__StateContext__Sequence * lhs, const deva_planning_msgs2__msg__StateContext__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__StateContext__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__StateContext__Sequence__copy(
  const deva_planning_msgs2__msg__StateContext__Sequence * input,
  deva_planning_msgs2__msg__StateContext__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__StateContext);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__StateContext * data =
      (deva_planning_msgs2__msg__StateContext *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__StateContext__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__StateContext__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__StateContext__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
