// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `env_points`
#include "environment_model_msgs/msg/detail/env_point__functions.h"
// Member `last_ids`
// Member `perception_ids`
// Member `channel_id`
#include "environment_model_msgs/msg/detail/pair_int__functions.h"
// Member `merge_lines`
// Member `split_lines`
// Member `lk_lines`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `merge_pos`
#include "environment_model_msgs/msg/detail/pair_double_int__functions.h"
// Member `left_ids_map`
// Member `right_ids_map`
// Member `overwide_pairs`
#include "environment_model_msgs/msg/detail/map_ids__functions.h"
// Member `road_struct_type`
#include "environment_model_msgs/msg/detail/road_struct_type__functions.h"
// Member `signal_infos`
#include "environment_model_msgs/msg/detail/pair_string__functions.h"
// Member `object_infos`
#include "environment_model_msgs/msg/detail/pair_string_double__functions.h"
// Member `navi_score`
#include "environment_model_msgs/msg/detail/navi_score__functions.h"
// Member `virtual_line_infos`
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"
// Member `left_road_bound_line`
// Member `right_road_bound_line`
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
// Member `lane_id`
// Member `lane_sequence`
#include "rosidl_runtime_c/string_functions.h"

bool
environment_model_msgs__msg__EnvLine__init(environment_model_msgs__msg__EnvLine * msg)
{
  if (!msg) {
    return false;
  }
  // env_points
  if (!environment_model_msgs__msg__EnvPoint__Sequence__init(&msg->env_points, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // id
  // last_ids
  if (!environment_model_msgs__msg__PairInt__Sequence__init(&msg->last_ids, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // perception_ids
  if (!environment_model_msgs__msg__PairInt__init(&msg->perception_ids)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // ego_s
  // ego_l
  // is_on_road
  // routing_status
  // is_reverse
  // enum_turn_scenario
  // merge_lines
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->merge_lines, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // split_lines
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->split_lines, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // merge_pos
  if (!environment_model_msgs__msg__PairDoubleInt__Sequence__init(&msg->merge_pos, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // lk_lines
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->lk_lines, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // left_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__init(&msg->left_ids_map, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // right_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__init(&msg->right_ids_map, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // enum_road_struct_type
  // road_struct_type
  if (!environment_model_msgs__msg__RoadStructType__init(&msg->road_struct_type)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // signal_infos
  if (!environment_model_msgs__msg__PairString__Sequence__init(&msg->signal_infos, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // object_infos
  if (!environment_model_msgs__msg__PairStringDouble__Sequence__init(&msg->object_infos, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // navi_score
  if (!environment_model_msgs__msg__NaviScore__init(&msg->navi_score)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // virtual_line_infos
  if (!environment_model_msgs__msg__VirtualLineInfo__Sequence__init(&msg->virtual_line_infos, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // left_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->left_road_bound_line, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // right_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->right_road_bound_line, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // lane_offset
  // lane_id
  if (!rosidl_runtime_c__String__init(&msg->lane_id)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // lane_sequence
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lane_sequence, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // lane_seq_id
  // channel_id
  if (!environment_model_msgs__msg__PairInt__init(&msg->channel_id)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // virtual_line_to
  // midd_line_id
  // overwide_pairs
  if (!environment_model_msgs__msg__MapIds__Sequence__init(&msg->overwide_pairs, 0)) {
    environment_model_msgs__msg__EnvLine__fini(msg);
    return false;
  }
  // usemdriver
  return true;
}

void
environment_model_msgs__msg__EnvLine__fini(environment_model_msgs__msg__EnvLine * msg)
{
  if (!msg) {
    return;
  }
  // env_points
  environment_model_msgs__msg__EnvPoint__Sequence__fini(&msg->env_points);
  // id
  // last_ids
  environment_model_msgs__msg__PairInt__Sequence__fini(&msg->last_ids);
  // perception_ids
  environment_model_msgs__msg__PairInt__fini(&msg->perception_ids);
  // ego_s
  // ego_l
  // is_on_road
  // routing_status
  // is_reverse
  // enum_turn_scenario
  // merge_lines
  rosidl_runtime_c__int32__Sequence__fini(&msg->merge_lines);
  // split_lines
  rosidl_runtime_c__int32__Sequence__fini(&msg->split_lines);
  // merge_pos
  environment_model_msgs__msg__PairDoubleInt__Sequence__fini(&msg->merge_pos);
  // lk_lines
  rosidl_runtime_c__int32__Sequence__fini(&msg->lk_lines);
  // left_ids_map
  environment_model_msgs__msg__MapIds__Sequence__fini(&msg->left_ids_map);
  // right_ids_map
  environment_model_msgs__msg__MapIds__Sequence__fini(&msg->right_ids_map);
  // enum_road_struct_type
  // road_struct_type
  environment_model_msgs__msg__RoadStructType__fini(&msg->road_struct_type);
  // signal_infos
  environment_model_msgs__msg__PairString__Sequence__fini(&msg->signal_infos);
  // object_infos
  environment_model_msgs__msg__PairStringDouble__Sequence__fini(&msg->object_infos);
  // navi_score
  environment_model_msgs__msg__NaviScore__fini(&msg->navi_score);
  // virtual_line_infos
  environment_model_msgs__msg__VirtualLineInfo__Sequence__fini(&msg->virtual_line_infos);
  // left_road_bound_line
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->left_road_bound_line);
  // right_road_bound_line
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->right_road_bound_line);
  // lane_offset
  // lane_id
  rosidl_runtime_c__String__fini(&msg->lane_id);
  // lane_sequence
  rosidl_runtime_c__String__Sequence__fini(&msg->lane_sequence);
  // lane_seq_id
  // channel_id
  environment_model_msgs__msg__PairInt__fini(&msg->channel_id);
  // virtual_line_to
  // midd_line_id
  // overwide_pairs
  environment_model_msgs__msg__MapIds__Sequence__fini(&msg->overwide_pairs);
  // usemdriver
}

bool
environment_model_msgs__msg__EnvLine__are_equal(const environment_model_msgs__msg__EnvLine * lhs, const environment_model_msgs__msg__EnvLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // env_points
  if (!environment_model_msgs__msg__EnvPoint__Sequence__are_equal(
      &(lhs->env_points), &(rhs->env_points)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // last_ids
  if (!environment_model_msgs__msg__PairInt__Sequence__are_equal(
      &(lhs->last_ids), &(rhs->last_ids)))
  {
    return false;
  }
  // perception_ids
  if (!environment_model_msgs__msg__PairInt__are_equal(
      &(lhs->perception_ids), &(rhs->perception_ids)))
  {
    return false;
  }
  // ego_s
  if (lhs->ego_s != rhs->ego_s) {
    return false;
  }
  // ego_l
  if (lhs->ego_l != rhs->ego_l) {
    return false;
  }
  // is_on_road
  if (lhs->is_on_road != rhs->is_on_road) {
    return false;
  }
  // routing_status
  if (lhs->routing_status != rhs->routing_status) {
    return false;
  }
  // is_reverse
  if (lhs->is_reverse != rhs->is_reverse) {
    return false;
  }
  // enum_turn_scenario
  if (lhs->enum_turn_scenario != rhs->enum_turn_scenario) {
    return false;
  }
  // merge_lines
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->merge_lines), &(rhs->merge_lines)))
  {
    return false;
  }
  // split_lines
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->split_lines), &(rhs->split_lines)))
  {
    return false;
  }
  // merge_pos
  if (!environment_model_msgs__msg__PairDoubleInt__Sequence__are_equal(
      &(lhs->merge_pos), &(rhs->merge_pos)))
  {
    return false;
  }
  // lk_lines
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->lk_lines), &(rhs->lk_lines)))
  {
    return false;
  }
  // left_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__are_equal(
      &(lhs->left_ids_map), &(rhs->left_ids_map)))
  {
    return false;
  }
  // right_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__are_equal(
      &(lhs->right_ids_map), &(rhs->right_ids_map)))
  {
    return false;
  }
  // enum_road_struct_type
  if (lhs->enum_road_struct_type != rhs->enum_road_struct_type) {
    return false;
  }
  // road_struct_type
  if (!environment_model_msgs__msg__RoadStructType__are_equal(
      &(lhs->road_struct_type), &(rhs->road_struct_type)))
  {
    return false;
  }
  // signal_infos
  if (!environment_model_msgs__msg__PairString__Sequence__are_equal(
      &(lhs->signal_infos), &(rhs->signal_infos)))
  {
    return false;
  }
  // object_infos
  if (!environment_model_msgs__msg__PairStringDouble__Sequence__are_equal(
      &(lhs->object_infos), &(rhs->object_infos)))
  {
    return false;
  }
  // navi_score
  if (!environment_model_msgs__msg__NaviScore__are_equal(
      &(lhs->navi_score), &(rhs->navi_score)))
  {
    return false;
  }
  // virtual_line_infos
  if (!environment_model_msgs__msg__VirtualLineInfo__Sequence__are_equal(
      &(lhs->virtual_line_infos), &(rhs->virtual_line_infos)))
  {
    return false;
  }
  // left_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->left_road_bound_line), &(rhs->left_road_bound_line)))
  {
    return false;
  }
  // right_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->right_road_bound_line), &(rhs->right_road_bound_line)))
  {
    return false;
  }
  // lane_offset
  if (lhs->lane_offset != rhs->lane_offset) {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // lane_sequence
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lane_sequence), &(rhs->lane_sequence)))
  {
    return false;
  }
  // lane_seq_id
  if (lhs->lane_seq_id != rhs->lane_seq_id) {
    return false;
  }
  // channel_id
  if (!environment_model_msgs__msg__PairInt__are_equal(
      &(lhs->channel_id), &(rhs->channel_id)))
  {
    return false;
  }
  // virtual_line_to
  if (lhs->virtual_line_to != rhs->virtual_line_to) {
    return false;
  }
  // midd_line_id
  if (lhs->midd_line_id != rhs->midd_line_id) {
    return false;
  }
  // overwide_pairs
  if (!environment_model_msgs__msg__MapIds__Sequence__are_equal(
      &(lhs->overwide_pairs), &(rhs->overwide_pairs)))
  {
    return false;
  }
  // usemdriver
  if (lhs->usemdriver != rhs->usemdriver) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLine__copy(
  const environment_model_msgs__msg__EnvLine * input,
  environment_model_msgs__msg__EnvLine * output)
{
  if (!input || !output) {
    return false;
  }
  // env_points
  if (!environment_model_msgs__msg__EnvPoint__Sequence__copy(
      &(input->env_points), &(output->env_points)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // last_ids
  if (!environment_model_msgs__msg__PairInt__Sequence__copy(
      &(input->last_ids), &(output->last_ids)))
  {
    return false;
  }
  // perception_ids
  if (!environment_model_msgs__msg__PairInt__copy(
      &(input->perception_ids), &(output->perception_ids)))
  {
    return false;
  }
  // ego_s
  output->ego_s = input->ego_s;
  // ego_l
  output->ego_l = input->ego_l;
  // is_on_road
  output->is_on_road = input->is_on_road;
  // routing_status
  output->routing_status = input->routing_status;
  // is_reverse
  output->is_reverse = input->is_reverse;
  // enum_turn_scenario
  output->enum_turn_scenario = input->enum_turn_scenario;
  // merge_lines
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->merge_lines), &(output->merge_lines)))
  {
    return false;
  }
  // split_lines
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->split_lines), &(output->split_lines)))
  {
    return false;
  }
  // merge_pos
  if (!environment_model_msgs__msg__PairDoubleInt__Sequence__copy(
      &(input->merge_pos), &(output->merge_pos)))
  {
    return false;
  }
  // lk_lines
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->lk_lines), &(output->lk_lines)))
  {
    return false;
  }
  // left_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__copy(
      &(input->left_ids_map), &(output->left_ids_map)))
  {
    return false;
  }
  // right_ids_map
  if (!environment_model_msgs__msg__MapIds__Sequence__copy(
      &(input->right_ids_map), &(output->right_ids_map)))
  {
    return false;
  }
  // enum_road_struct_type
  output->enum_road_struct_type = input->enum_road_struct_type;
  // road_struct_type
  if (!environment_model_msgs__msg__RoadStructType__copy(
      &(input->road_struct_type), &(output->road_struct_type)))
  {
    return false;
  }
  // signal_infos
  if (!environment_model_msgs__msg__PairString__Sequence__copy(
      &(input->signal_infos), &(output->signal_infos)))
  {
    return false;
  }
  // object_infos
  if (!environment_model_msgs__msg__PairStringDouble__Sequence__copy(
      &(input->object_infos), &(output->object_infos)))
  {
    return false;
  }
  // navi_score
  if (!environment_model_msgs__msg__NaviScore__copy(
      &(input->navi_score), &(output->navi_score)))
  {
    return false;
  }
  // virtual_line_infos
  if (!environment_model_msgs__msg__VirtualLineInfo__Sequence__copy(
      &(input->virtual_line_infos), &(output->virtual_line_infos)))
  {
    return false;
  }
  // left_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->left_road_bound_line), &(output->left_road_bound_line)))
  {
    return false;
  }
  // right_road_bound_line
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->right_road_bound_line), &(output->right_road_bound_line)))
  {
    return false;
  }
  // lane_offset
  output->lane_offset = input->lane_offset;
  // lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // lane_sequence
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lane_sequence), &(output->lane_sequence)))
  {
    return false;
  }
  // lane_seq_id
  output->lane_seq_id = input->lane_seq_id;
  // channel_id
  if (!environment_model_msgs__msg__PairInt__copy(
      &(input->channel_id), &(output->channel_id)))
  {
    return false;
  }
  // virtual_line_to
  output->virtual_line_to = input->virtual_line_to;
  // midd_line_id
  output->midd_line_id = input->midd_line_id;
  // overwide_pairs
  if (!environment_model_msgs__msg__MapIds__Sequence__copy(
      &(input->overwide_pairs), &(output->overwide_pairs)))
  {
    return false;
  }
  // usemdriver
  output->usemdriver = input->usemdriver;
  return true;
}

environment_model_msgs__msg__EnvLine *
environment_model_msgs__msg__EnvLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLine * msg = (environment_model_msgs__msg__EnvLine *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvLine));
  bool success = environment_model_msgs__msg__EnvLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvLine__destroy(environment_model_msgs__msg__EnvLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvLine__Sequence__init(environment_model_msgs__msg__EnvLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLine * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvLine *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvLine__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvLine__Sequence__fini(environment_model_msgs__msg__EnvLine__Sequence * array)
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
      environment_model_msgs__msg__EnvLine__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvLine__Sequence *
environment_model_msgs__msg__EnvLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLine__Sequence * array = (environment_model_msgs__msg__EnvLine__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvLine__Sequence__destroy(environment_model_msgs__msg__EnvLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvLine__Sequence__are_equal(const environment_model_msgs__msg__EnvLine__Sequence * lhs, const environment_model_msgs__msg__EnvLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLine__Sequence__copy(
  const environment_model_msgs__msg__EnvLine__Sequence * input,
  environment_model_msgs__msg__EnvLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvLine * data =
      (environment_model_msgs__msg__EnvLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
