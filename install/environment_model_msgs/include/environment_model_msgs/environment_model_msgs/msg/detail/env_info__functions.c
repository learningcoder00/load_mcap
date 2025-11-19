// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `env_start_header`
// Member `map_header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `env_lines`
#include "environment_model_msgs/msg/detail/env_line__functions.h"
// Member `env_objects`
#include "environment_model_msgs/msg/detail/env_object__functions.h"
// Member `env_signals`
#include "environment_model_msgs/msg/detail/env_signal__functions.h"
// Member `junction_box`
// Member `roadline_final`
// Member `roadline`
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
// Member `passable_space`
// Member `law_space`
// Member `law_space_merged`
// Member `hdair_driveline`
#include "environment_model_msgs/msg/detail/vec2d_array__functions.h"
// Member `links`
#include "environment_model_msgs/msg/detail/env_link__functions.h"
// Member `road_boundaries`
#include "environment_model_msgs/msg/detail/road_boundary__functions.h"
// Member `scenario_info`
#include "environment_model_msgs/msg/detail/scenario_info__functions.h"

bool
environment_model_msgs__msg__EnvInfo__init(environment_model_msgs__msg__EnvInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // index
  // env_lines
  if (!environment_model_msgs__msg__EnvLine__Sequence__init(&msg->env_lines, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // env_objects
  if (!environment_model_msgs__msg__EnvObject__Sequence__init(&msg->env_objects, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // env_signals
  if (!environment_model_msgs__msg__EnvSignal__Sequence__init(&msg->env_signals, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // junction_box
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->junction_box, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // env_start_header
  if (!deva_common_msgs__msg__Header__init(&msg->env_start_header)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // map_header
  if (!deva_common_msgs__msg__Header__init(&msg->map_header)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // map_mode
  // routing_mode
  // navi_index
  // has_map
  // passable_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&msg->passable_space, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // law_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&msg->law_space, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // roadline_final
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->roadline_final, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // roadline
  if (!environment_model_msgs__msg__Vec2d__Sequence__init(&msg->roadline, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // law_space_merged
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&msg->law_space_merged, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // meg_map_mode
  // channel_valid
  // dist_sd_junction
  // hdair_driveline
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&msg->hdair_driveline, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // links
  if (!environment_model_msgs__msg__EnvLink__Sequence__init(&msg->links, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // ownership
  // road_boundaries
  if (!environment_model_msgs__msg__RoadBoundary__Sequence__init(&msg->road_boundaries, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // scenario_info
  if (!environment_model_msgs__msg__ScenarioInfo__Sequence__init(&msg->scenario_info, 0)) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
    return false;
  }
  // highway_scene
  return true;
}

void
environment_model_msgs__msg__EnvInfo__fini(environment_model_msgs__msg__EnvInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // index
  // env_lines
  environment_model_msgs__msg__EnvLine__Sequence__fini(&msg->env_lines);
  // env_objects
  environment_model_msgs__msg__EnvObject__Sequence__fini(&msg->env_objects);
  // env_signals
  environment_model_msgs__msg__EnvSignal__Sequence__fini(&msg->env_signals);
  // junction_box
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->junction_box);
  // env_start_header
  deva_common_msgs__msg__Header__fini(&msg->env_start_header);
  // map_header
  deva_common_msgs__msg__Header__fini(&msg->map_header);
  // map_mode
  // routing_mode
  // navi_index
  // has_map
  // passable_space
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(&msg->passable_space);
  // law_space
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(&msg->law_space);
  // roadline_final
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->roadline_final);
  // roadline
  environment_model_msgs__msg__Vec2d__Sequence__fini(&msg->roadline);
  // law_space_merged
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(&msg->law_space_merged);
  // meg_map_mode
  // channel_valid
  // dist_sd_junction
  // hdair_driveline
  environment_model_msgs__msg__Vec2dArray__Sequence__fini(&msg->hdair_driveline);
  // links
  environment_model_msgs__msg__EnvLink__Sequence__fini(&msg->links);
  // ownership
  // road_boundaries
  environment_model_msgs__msg__RoadBoundary__Sequence__fini(&msg->road_boundaries);
  // scenario_info
  environment_model_msgs__msg__ScenarioInfo__Sequence__fini(&msg->scenario_info);
  // highway_scene
}

bool
environment_model_msgs__msg__EnvInfo__are_equal(const environment_model_msgs__msg__EnvInfo * lhs, const environment_model_msgs__msg__EnvInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // env_lines
  if (!environment_model_msgs__msg__EnvLine__Sequence__are_equal(
      &(lhs->env_lines), &(rhs->env_lines)))
  {
    return false;
  }
  // env_objects
  if (!environment_model_msgs__msg__EnvObject__Sequence__are_equal(
      &(lhs->env_objects), &(rhs->env_objects)))
  {
    return false;
  }
  // env_signals
  if (!environment_model_msgs__msg__EnvSignal__Sequence__are_equal(
      &(lhs->env_signals), &(rhs->env_signals)))
  {
    return false;
  }
  // junction_box
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->junction_box), &(rhs->junction_box)))
  {
    return false;
  }
  // env_start_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->env_start_header), &(rhs->env_start_header)))
  {
    return false;
  }
  // map_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->map_header), &(rhs->map_header)))
  {
    return false;
  }
  // map_mode
  if (lhs->map_mode != rhs->map_mode) {
    return false;
  }
  // routing_mode
  if (lhs->routing_mode != rhs->routing_mode) {
    return false;
  }
  // navi_index
  if (lhs->navi_index != rhs->navi_index) {
    return false;
  }
  // has_map
  if (lhs->has_map != rhs->has_map) {
    return false;
  }
  // passable_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__are_equal(
      &(lhs->passable_space), &(rhs->passable_space)))
  {
    return false;
  }
  // law_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__are_equal(
      &(lhs->law_space), &(rhs->law_space)))
  {
    return false;
  }
  // roadline_final
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->roadline_final), &(rhs->roadline_final)))
  {
    return false;
  }
  // roadline
  if (!environment_model_msgs__msg__Vec2d__Sequence__are_equal(
      &(lhs->roadline), &(rhs->roadline)))
  {
    return false;
  }
  // law_space_merged
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__are_equal(
      &(lhs->law_space_merged), &(rhs->law_space_merged)))
  {
    return false;
  }
  // meg_map_mode
  if (lhs->meg_map_mode != rhs->meg_map_mode) {
    return false;
  }
  // channel_valid
  if (lhs->channel_valid != rhs->channel_valid) {
    return false;
  }
  // dist_sd_junction
  if (lhs->dist_sd_junction != rhs->dist_sd_junction) {
    return false;
  }
  // hdair_driveline
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__are_equal(
      &(lhs->hdair_driveline), &(rhs->hdair_driveline)))
  {
    return false;
  }
  // links
  if (!environment_model_msgs__msg__EnvLink__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // ownership
  if (lhs->ownership != rhs->ownership) {
    return false;
  }
  // road_boundaries
  if (!environment_model_msgs__msg__RoadBoundary__Sequence__are_equal(
      &(lhs->road_boundaries), &(rhs->road_boundaries)))
  {
    return false;
  }
  // scenario_info
  if (!environment_model_msgs__msg__ScenarioInfo__Sequence__are_equal(
      &(lhs->scenario_info), &(rhs->scenario_info)))
  {
    return false;
  }
  // highway_scene
  if (lhs->highway_scene != rhs->highway_scene) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvInfo__copy(
  const environment_model_msgs__msg__EnvInfo * input,
  environment_model_msgs__msg__EnvInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // index
  output->index = input->index;
  // env_lines
  if (!environment_model_msgs__msg__EnvLine__Sequence__copy(
      &(input->env_lines), &(output->env_lines)))
  {
    return false;
  }
  // env_objects
  if (!environment_model_msgs__msg__EnvObject__Sequence__copy(
      &(input->env_objects), &(output->env_objects)))
  {
    return false;
  }
  // env_signals
  if (!environment_model_msgs__msg__EnvSignal__Sequence__copy(
      &(input->env_signals), &(output->env_signals)))
  {
    return false;
  }
  // junction_box
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->junction_box), &(output->junction_box)))
  {
    return false;
  }
  // env_start_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->env_start_header), &(output->env_start_header)))
  {
    return false;
  }
  // map_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->map_header), &(output->map_header)))
  {
    return false;
  }
  // map_mode
  output->map_mode = input->map_mode;
  // routing_mode
  output->routing_mode = input->routing_mode;
  // navi_index
  output->navi_index = input->navi_index;
  // has_map
  output->has_map = input->has_map;
  // passable_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__copy(
      &(input->passable_space), &(output->passable_space)))
  {
    return false;
  }
  // law_space
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__copy(
      &(input->law_space), &(output->law_space)))
  {
    return false;
  }
  // roadline_final
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->roadline_final), &(output->roadline_final)))
  {
    return false;
  }
  // roadline
  if (!environment_model_msgs__msg__Vec2d__Sequence__copy(
      &(input->roadline), &(output->roadline)))
  {
    return false;
  }
  // law_space_merged
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__copy(
      &(input->law_space_merged), &(output->law_space_merged)))
  {
    return false;
  }
  // meg_map_mode
  output->meg_map_mode = input->meg_map_mode;
  // channel_valid
  output->channel_valid = input->channel_valid;
  // dist_sd_junction
  output->dist_sd_junction = input->dist_sd_junction;
  // hdair_driveline
  if (!environment_model_msgs__msg__Vec2dArray__Sequence__copy(
      &(input->hdair_driveline), &(output->hdair_driveline)))
  {
    return false;
  }
  // links
  if (!environment_model_msgs__msg__EnvLink__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // ownership
  output->ownership = input->ownership;
  // road_boundaries
  if (!environment_model_msgs__msg__RoadBoundary__Sequence__copy(
      &(input->road_boundaries), &(output->road_boundaries)))
  {
    return false;
  }
  // scenario_info
  if (!environment_model_msgs__msg__ScenarioInfo__Sequence__copy(
      &(input->scenario_info), &(output->scenario_info)))
  {
    return false;
  }
  // highway_scene
  output->highway_scene = input->highway_scene;
  return true;
}

environment_model_msgs__msg__EnvInfo *
environment_model_msgs__msg__EnvInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvInfo * msg = (environment_model_msgs__msg__EnvInfo *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvInfo));
  bool success = environment_model_msgs__msg__EnvInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvInfo__destroy(environment_model_msgs__msg__EnvInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvInfo__Sequence__init(environment_model_msgs__msg__EnvInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvInfo * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvInfo *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvInfo__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvInfo__Sequence__fini(environment_model_msgs__msg__EnvInfo__Sequence * array)
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
      environment_model_msgs__msg__EnvInfo__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvInfo__Sequence *
environment_model_msgs__msg__EnvInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvInfo__Sequence * array = (environment_model_msgs__msg__EnvInfo__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvInfo__Sequence__destroy(environment_model_msgs__msg__EnvInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvInfo__Sequence__are_equal(const environment_model_msgs__msg__EnvInfo__Sequence * lhs, const environment_model_msgs__msg__EnvInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvInfo__Sequence__copy(
  const environment_model_msgs__msg__EnvInfo__Sequence * input,
  environment_model_msgs__msg__EnvInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvInfo * data =
      (environment_model_msgs__msg__EnvInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
