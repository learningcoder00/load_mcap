// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/StateContext.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/state_context__functions.h"

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
// Member `cipv_obstacle_id`
// Member `nudge_obstacle_id`
// Member `cutin_follow_obstacle_id`
// Member `cutin_overtake_obstacle_id`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_planning_msgs__msg__StateContext__init(deva_planning_msgs__msg__StateContext * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // behavior_type
  // navi_map_mode
  // routing_mode
  // target_lane_seq_score
  // state_score
  // score
  // use_mdriver_ego
  // target_line_id
  // current_line_id
  // gap_id
  // gap_line_id
  // start_s
  // end_s
  // length
  // future_length
  // front_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->front_obstacle_id)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // rear_obstacle_id
  if (!rosidl_runtime_c__String__init(&msg->rear_obstacle_id)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // cipv_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->cipv_obstacle_id, 0)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // nudge_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->nudge_obstacle_id, 0)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // cutin_follow_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->cutin_follow_obstacle_id, 0)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // cutin_overtake_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->cutin_overtake_obstacle_id, 0)) {
    deva_planning_msgs__msg__StateContext__fini(msg);
    return false;
  }
  // lane_change_task
  return true;
}

void
deva_planning_msgs__msg__StateContext__fini(deva_planning_msgs__msg__StateContext * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // behavior_type
  // navi_map_mode
  // routing_mode
  // target_lane_seq_score
  // state_score
  // score
  // use_mdriver_ego
  // target_line_id
  // current_line_id
  // gap_id
  // gap_line_id
  // start_s
  // end_s
  // length
  // future_length
  // front_obstacle_id
  rosidl_runtime_c__String__fini(&msg->front_obstacle_id);
  // rear_obstacle_id
  rosidl_runtime_c__String__fini(&msg->rear_obstacle_id);
  // cipv_obstacle_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->cipv_obstacle_id);
  // nudge_obstacle_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->nudge_obstacle_id);
  // cutin_follow_obstacle_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->cutin_follow_obstacle_id);
  // cutin_overtake_obstacle_id
  rosidl_runtime_c__uint32__Sequence__fini(&msg->cutin_overtake_obstacle_id);
  // lane_change_task
}

bool
deva_planning_msgs__msg__StateContext__are_equal(const deva_planning_msgs__msg__StateContext * lhs, const deva_planning_msgs__msg__StateContext * rhs)
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
  // navi_map_mode
  if (lhs->navi_map_mode != rhs->navi_map_mode) {
    return false;
  }
  // routing_mode
  if (lhs->routing_mode != rhs->routing_mode) {
    return false;
  }
  // target_lane_seq_score
  if (lhs->target_lane_seq_score != rhs->target_lane_seq_score) {
    return false;
  }
  // state_score
  if (lhs->state_score != rhs->state_score) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
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
  // gap_id
  if (lhs->gap_id != rhs->gap_id) {
    return false;
  }
  // gap_line_id
  if (lhs->gap_line_id != rhs->gap_line_id) {
    return false;
  }
  // start_s
  if (lhs->start_s != rhs->start_s) {
    return false;
  }
  // end_s
  if (lhs->end_s != rhs->end_s) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // future_length
  if (lhs->future_length != rhs->future_length) {
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
  // cipv_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->cipv_obstacle_id), &(rhs->cipv_obstacle_id)))
  {
    return false;
  }
  // nudge_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->nudge_obstacle_id), &(rhs->nudge_obstacle_id)))
  {
    return false;
  }
  // cutin_follow_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->cutin_follow_obstacle_id), &(rhs->cutin_follow_obstacle_id)))
  {
    return false;
  }
  // cutin_overtake_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->cutin_overtake_obstacle_id), &(rhs->cutin_overtake_obstacle_id)))
  {
    return false;
  }
  // lane_change_task
  if (lhs->lane_change_task != rhs->lane_change_task) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__StateContext__copy(
  const deva_planning_msgs__msg__StateContext * input,
  deva_planning_msgs__msg__StateContext * output)
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
  // navi_map_mode
  output->navi_map_mode = input->navi_map_mode;
  // routing_mode
  output->routing_mode = input->routing_mode;
  // target_lane_seq_score
  output->target_lane_seq_score = input->target_lane_seq_score;
  // state_score
  output->state_score = input->state_score;
  // score
  output->score = input->score;
  // use_mdriver_ego
  output->use_mdriver_ego = input->use_mdriver_ego;
  // target_line_id
  output->target_line_id = input->target_line_id;
  // current_line_id
  output->current_line_id = input->current_line_id;
  // gap_id
  output->gap_id = input->gap_id;
  // gap_line_id
  output->gap_line_id = input->gap_line_id;
  // start_s
  output->start_s = input->start_s;
  // end_s
  output->end_s = input->end_s;
  // length
  output->length = input->length;
  // future_length
  output->future_length = input->future_length;
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
  // cipv_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->cipv_obstacle_id), &(output->cipv_obstacle_id)))
  {
    return false;
  }
  // nudge_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->nudge_obstacle_id), &(output->nudge_obstacle_id)))
  {
    return false;
  }
  // cutin_follow_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->cutin_follow_obstacle_id), &(output->cutin_follow_obstacle_id)))
  {
    return false;
  }
  // cutin_overtake_obstacle_id
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->cutin_overtake_obstacle_id), &(output->cutin_overtake_obstacle_id)))
  {
    return false;
  }
  // lane_change_task
  output->lane_change_task = input->lane_change_task;
  return true;
}

deva_planning_msgs__msg__StateContext *
deva_planning_msgs__msg__StateContext__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__StateContext * msg = (deva_planning_msgs__msg__StateContext *)allocator.allocate(sizeof(deva_planning_msgs__msg__StateContext), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__StateContext));
  bool success = deva_planning_msgs__msg__StateContext__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__StateContext__destroy(deva_planning_msgs__msg__StateContext * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__StateContext__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__StateContext__Sequence__init(deva_planning_msgs__msg__StateContext__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__StateContext * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__StateContext *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__StateContext), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__StateContext__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__StateContext__fini(&data[i - 1]);
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
deva_planning_msgs__msg__StateContext__Sequence__fini(deva_planning_msgs__msg__StateContext__Sequence * array)
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
      deva_planning_msgs__msg__StateContext__fini(&array->data[i]);
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

deva_planning_msgs__msg__StateContext__Sequence *
deva_planning_msgs__msg__StateContext__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__StateContext__Sequence * array = (deva_planning_msgs__msg__StateContext__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__StateContext__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__StateContext__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__StateContext__Sequence__destroy(deva_planning_msgs__msg__StateContext__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__StateContext__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__StateContext__Sequence__are_equal(const deva_planning_msgs__msg__StateContext__Sequence * lhs, const deva_planning_msgs__msg__StateContext__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__StateContext__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__StateContext__Sequence__copy(
  const deva_planning_msgs__msg__StateContext__Sequence * input,
  deva_planning_msgs__msg__StateContext__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__StateContext);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__StateContext * data =
      (deva_planning_msgs__msg__StateContext *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__StateContext__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__StateContext__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__StateContext__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
