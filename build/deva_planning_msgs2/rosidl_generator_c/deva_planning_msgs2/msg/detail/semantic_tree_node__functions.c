// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `game_cost`
// Member `rollout_cost`
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
// Member `scalable_flags`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `scalable_multimap`
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"

bool
deva_planning_msgs2__msg__SemanticTreeNode__init(deva_planning_msgs2__msg__SemanticTreeNode * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  // rollout_start_time
  // total_score
  // game_score
  // rollout_score
  // game_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&msg->game_cost, 0)) {
    deva_planning_msgs2__msg__SemanticTreeNode__fini(msg);
    return false;
  }
  // rollout_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&msg->rollout_cost, 0)) {
    deva_planning_msgs2__msg__SemanticTreeNode__fini(msg);
    return false;
  }
  // scalable_flags
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->scalable_flags, 0)) {
    deva_planning_msgs2__msg__SemanticTreeNode__fini(msg);
    return false;
  }
  // scalable_multimap
  if (!deva_planning_msgs2__msg__String2String__Sequence__init(&msg->scalable_multimap, 0)) {
    deva_planning_msgs2__msg__SemanticTreeNode__fini(msg);
    return false;
  }
  return true;
}

void
deva_planning_msgs2__msg__SemanticTreeNode__fini(deva_planning_msgs2__msg__SemanticTreeNode * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  // rollout_start_time
  // total_score
  // game_score
  // rollout_score
  // game_cost
  deva_planning_msgs2__msg__String2Double__Sequence__fini(&msg->game_cost);
  // rollout_cost
  deva_planning_msgs2__msg__String2Double__Sequence__fini(&msg->rollout_cost);
  // scalable_flags
  rosidl_runtime_c__uint8__Sequence__fini(&msg->scalable_flags);
  // scalable_multimap
  deva_planning_msgs2__msg__String2String__Sequence__fini(&msg->scalable_multimap);
}

bool
deva_planning_msgs2__msg__SemanticTreeNode__are_equal(const deva_planning_msgs2__msg__SemanticTreeNode * lhs, const deva_planning_msgs2__msg__SemanticTreeNode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // rollout_start_time
  if (lhs->rollout_start_time != rhs->rollout_start_time) {
    return false;
  }
  // total_score
  if (lhs->total_score != rhs->total_score) {
    return false;
  }
  // game_score
  if (lhs->game_score != rhs->game_score) {
    return false;
  }
  // rollout_score
  if (lhs->rollout_score != rhs->rollout_score) {
    return false;
  }
  // game_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__are_equal(
      &(lhs->game_cost), &(rhs->game_cost)))
  {
    return false;
  }
  // rollout_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__are_equal(
      &(lhs->rollout_cost), &(rhs->rollout_cost)))
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
deva_planning_msgs2__msg__SemanticTreeNode__copy(
  const deva_planning_msgs2__msg__SemanticTreeNode * input,
  deva_planning_msgs2__msg__SemanticTreeNode * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  output->node_id = input->node_id;
  // rollout_start_time
  output->rollout_start_time = input->rollout_start_time;
  // total_score
  output->total_score = input->total_score;
  // game_score
  output->game_score = input->game_score;
  // rollout_score
  output->rollout_score = input->rollout_score;
  // game_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__copy(
      &(input->game_cost), &(output->game_cost)))
  {
    return false;
  }
  // rollout_cost
  if (!deva_planning_msgs2__msg__String2Double__Sequence__copy(
      &(input->rollout_cost), &(output->rollout_cost)))
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

deva_planning_msgs2__msg__SemanticTreeNode *
deva_planning_msgs2__msg__SemanticTreeNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__SemanticTreeNode * msg = (deva_planning_msgs2__msg__SemanticTreeNode *)allocator.allocate(sizeof(deva_planning_msgs2__msg__SemanticTreeNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__SemanticTreeNode));
  bool success = deva_planning_msgs2__msg__SemanticTreeNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__SemanticTreeNode__destroy(deva_planning_msgs2__msg__SemanticTreeNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__SemanticTreeNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__init(deva_planning_msgs2__msg__SemanticTreeNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__SemanticTreeNode * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__SemanticTreeNode *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__SemanticTreeNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__SemanticTreeNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__SemanticTreeNode__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__fini(deva_planning_msgs2__msg__SemanticTreeNode__Sequence * array)
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
      deva_planning_msgs2__msg__SemanticTreeNode__fini(&array->data[i]);
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

deva_planning_msgs2__msg__SemanticTreeNode__Sequence *
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__SemanticTreeNode__Sequence * array = (deva_planning_msgs2__msg__SemanticTreeNode__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__SemanticTreeNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__SemanticTreeNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__destroy(deva_planning_msgs2__msg__SemanticTreeNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__SemanticTreeNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__are_equal(const deva_planning_msgs2__msg__SemanticTreeNode__Sequence * lhs, const deva_planning_msgs2__msg__SemanticTreeNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__SemanticTreeNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__SemanticTreeNode__Sequence__copy(
  const deva_planning_msgs2__msg__SemanticTreeNode__Sequence * input,
  deva_planning_msgs2__msg__SemanticTreeNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__SemanticTreeNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__SemanticTreeNode * data =
      (deva_planning_msgs2__msg__SemanticTreeNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__SemanticTreeNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__SemanticTreeNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__SemanticTreeNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
