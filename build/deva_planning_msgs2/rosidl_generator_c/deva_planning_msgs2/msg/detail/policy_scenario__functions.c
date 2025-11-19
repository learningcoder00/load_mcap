// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/policy_scenario__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `front_obstacle_id`
// Member `rear_obstacle_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `game_obstacles`
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"
// Member `critical_obstacles`
#include "deva_planning_msgs2/msg/detail/planning_obstacle__functions.h"
// Member `tree_score`
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
// Member `tree_nodes`
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__functions.h"
// Member `tree_output_trajs`
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"

bool
deva_planning_msgs2__msg__PolicyScenario__init(deva_planning_msgs2__msg__PolicyScenario * msg)
{
  if (!msg) {
    return false;
  }
  // tree_id
  // behavior_type
  // target_line_id
  // current_line_id
  // is_from_mdriver
  // front_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->front_obstacle_id)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // rear_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->rear_obstacle_id)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // game_obstacles
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__init(&msg->game_obstacles, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // critical_obstacles
  if (!deva_planning_msgs2__msg__PlanningObstacle__Sequence__init(&msg->critical_obstacles, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // tree_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&msg->tree_score, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // rollout_start_time
  // tree_nodes
  if (!deva_planning_msgs2__msg__SemanticTreeNode__Sequence__init(&msg->tree_nodes, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // tree_output_trajs
  if (!deva_planning_msgs2__msg__TreeTrajectory__Sequence__init(&msg->tree_output_trajs, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->scalable_flags, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__init(&msg->scalable_multimap, 0)) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__PolicyScenario__fini(deva_planning_msgs2__msg__PolicyScenario * msg)
{
  if (!msg) {
    return;
  }
  // tree_id
  // behavior_type
  // target_line_id
  // current_line_id
  // is_from_mdriver
  // front_obstacle_id
  rosidl_runtime_c__String__fini(&msg->front_obstacle_id);
  // rear_obstacle_id
  rosidl_runtime_c__String__fini(&msg->rear_obstacle_id);
  // game_obstacles
  deva_planning_msgs2__msg__UInt2String__Sequence__fini(&msg->game_obstacles);
  // critical_obstacles
  deva_planning_msgs2__msg__PlanningObstacle__Sequence__fini(&msg->critical_obstacles);
  // tree_score
  deva_planning_msgs2__msg__String2Double__Sequence__fini(&msg->tree_score);
  // rollout_start_time
  // tree_nodes
  deva_planning_msgs2__msg__SemanticTreeNode__Sequence__fini(&msg->tree_nodes);
  // tree_output_trajs
  deva_planning_msgs2__msg__TreeTrajectory__Sequence__fini(&msg->tree_output_trajs);
  // scalable_flags
  rosidl_runtime_c__uint8__Sequence__fini(&msg->scalable_flags);
  // scalable_multimap
  deva_planning_msgs2__msg__String2String__Sequence__fini(&msg->scalable_multimap);
}

bool
deva_planning_msgs2__msg__PolicyScenario__are_equal(const deva_planning_msgs2__msg__PolicyScenario * lhs, const deva_planning_msgs2__msg__PolicyScenario * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tree_id
  if (lhs->tree_id != rhs->tree_id) {
    return false;
  }
  // behavior_type
  if (lhs->behavior_type != rhs->behavior_type) {
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
  // is_from_mdriver
  if (lhs->is_from_mdriver != rhs->is_from_mdriver) {
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
  // game_obstacles
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__are_equal(
      &(lhs->game_obstacles), &(rhs->game_obstacles)))
  {
    return false;
  }
  // critical_obstacles
  if (!deva_planning_msgs2__msg__PlanningObstacle__Sequence__are_equal(
      &(lhs->critical_obstacles), &(rhs->critical_obstacles)))
  {
    return false;
  }
  // tree_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__are_equal(
      &(lhs->tree_score), &(rhs->tree_score)))
  {
    return false;
  }
  // rollout_start_time
  if (lhs->rollout_start_time != rhs->rollout_start_time) {
    return false;
  }
  // tree_nodes
  if (!deva_planning_msgs2__msg__SemanticTreeNode__Sequence__are_equal(
      &(lhs->tree_nodes), &(rhs->tree_nodes)))
  {
    return false;
  }
  // tree_output_trajs
  if (!deva_planning_msgs2__msg__TreeTrajectory__Sequence__are_equal(
      &(lhs->tree_output_trajs), &(rhs->tree_output_trajs)))
  {
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
  return true;
}

bool
deva_planning_msgs2__msg__PolicyScenario__copy(
  const deva_planning_msgs2__msg__PolicyScenario * input,
  deva_planning_msgs2__msg__PolicyScenario * output)
{
  if (!input || !output) {
    return false;
  }
  // tree_id
  output->tree_id = input->tree_id;
  // behavior_type
  output->behavior_type = input->behavior_type;
  // target_line_id
  output->target_line_id = input->target_line_id;
  // current_line_id
  output->current_line_id = input->current_line_id;
  // is_from_mdriver
  output->is_from_mdriver = input->is_from_mdriver;
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
  // game_obstacles
  if (!deva_planning_msgs2__msg__UInt2String__Sequence__copy(
      &(input->game_obstacles), &(output->game_obstacles)))
  {
    return false;
  }
  // critical_obstacles
  if (!deva_planning_msgs2__msg__PlanningObstacle__Sequence__copy(
      &(input->critical_obstacles), &(output->critical_obstacles)))
  {
    return false;
  }
  // tree_score
  if (!deva_planning_msgs2__msg__String2Double__Sequence__copy(
      &(input->tree_score), &(output->tree_score)))
  {
    return false;
  }
  // rollout_start_time
  output->rollout_start_time = input->rollout_start_time;
  // tree_nodes
  if (!deva_planning_msgs2__msg__SemanticTreeNode__Sequence__copy(
      &(input->tree_nodes), &(output->tree_nodes)))
  {
    return false;
  }
  // tree_output_trajs
  if (!deva_planning_msgs2__msg__TreeTrajectory__Sequence__copy(
      &(input->tree_output_trajs), &(output->tree_output_trajs)))
  {
    return false;
  }
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
  return true;
}

deva_planning_msgs2__msg__PolicyScenario *
deva_planning_msgs2__msg__PolicyScenario__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PolicyScenario * msg = (deva_planning_msgs2__msg__PolicyScenario *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PolicyScenario), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__PolicyScenario));
  bool success = deva_planning_msgs2__msg__PolicyScenario__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__PolicyScenario__destroy(deva_planning_msgs2__msg__PolicyScenario * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__PolicyScenario__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__PolicyScenario__Sequence__init(deva_planning_msgs2__msg__PolicyScenario__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PolicyScenario * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__PolicyScenario *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__PolicyScenario), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__PolicyScenario__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__PolicyScenario__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__PolicyScenario__Sequence__fini(deva_planning_msgs2__msg__PolicyScenario__Sequence * array)
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
      deva_planning_msgs2__msg__PolicyScenario__fini(&array->data[i]);
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

deva_planning_msgs2__msg__PolicyScenario__Sequence *
deva_planning_msgs2__msg__PolicyScenario__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__PolicyScenario__Sequence * array = (deva_planning_msgs2__msg__PolicyScenario__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__PolicyScenario__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__PolicyScenario__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__PolicyScenario__Sequence__destroy(deva_planning_msgs2__msg__PolicyScenario__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__PolicyScenario__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__PolicyScenario__Sequence__are_equal(const deva_planning_msgs2__msg__PolicyScenario__Sequence * lhs, const deva_planning_msgs2__msg__PolicyScenario__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__PolicyScenario__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__PolicyScenario__Sequence__copy(
  const deva_planning_msgs2__msg__PolicyScenario__Sequence * input,
  deva_planning_msgs2__msg__PolicyScenario__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__PolicyScenario);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__PolicyScenario * data =
      (deva_planning_msgs2__msg__PolicyScenario *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__PolicyScenario__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__PolicyScenario__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__PolicyScenario__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
