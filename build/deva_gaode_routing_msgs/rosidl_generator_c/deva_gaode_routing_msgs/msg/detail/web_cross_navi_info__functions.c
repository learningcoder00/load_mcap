// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `next_road_name`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__init(deva_gaode_routing_msgs__msg__WebCrossNaviInfo * msg)
{
  if (!msg) {
    return false;
  }
  // assist_action
  // cross_maneuver_id
  // cur_to_segment_dist
  // cur_to_segment_time
  // dest_direction
  // main_action
  // maneuver_id
  // next_road_name
  if (!rosidl_runtime_c__String__init(&msg->next_road_name)) {
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(msg);
    return false;
  }
  // out_cnt
  // path_id
  // rev
  // reversed
  // seg_idx
  // tunnel_flag
  // via_num
  return true;
}

void
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(deva_gaode_routing_msgs__msg__WebCrossNaviInfo * msg)
{
  if (!msg) {
    return;
  }
  // assist_action
  // cross_maneuver_id
  // cur_to_segment_dist
  // cur_to_segment_time
  // dest_direction
  // main_action
  // maneuver_id
  // next_road_name
  rosidl_runtime_c__String__fini(&msg->next_road_name);
  // out_cnt
  // path_id
  // rev
  // reversed
  // seg_idx
  // tunnel_flag
  // via_num
}

bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__are_equal(const deva_gaode_routing_msgs__msg__WebCrossNaviInfo * lhs, const deva_gaode_routing_msgs__msg__WebCrossNaviInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // assist_action
  if (lhs->assist_action != rhs->assist_action) {
    return false;
  }
  // cross_maneuver_id
  if (lhs->cross_maneuver_id != rhs->cross_maneuver_id) {
    return false;
  }
  // cur_to_segment_dist
  if (lhs->cur_to_segment_dist != rhs->cur_to_segment_dist) {
    return false;
  }
  // cur_to_segment_time
  if (lhs->cur_to_segment_time != rhs->cur_to_segment_time) {
    return false;
  }
  // dest_direction
  if (lhs->dest_direction != rhs->dest_direction) {
    return false;
  }
  // main_action
  if (lhs->main_action != rhs->main_action) {
    return false;
  }
  // maneuver_id
  if (lhs->maneuver_id != rhs->maneuver_id) {
    return false;
  }
  // next_road_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->next_road_name), &(rhs->next_road_name)))
  {
    return false;
  }
  // out_cnt
  if (lhs->out_cnt != rhs->out_cnt) {
    return false;
  }
  // path_id
  if (lhs->path_id != rhs->path_id) {
    return false;
  }
  // rev
  if (lhs->rev != rhs->rev) {
    return false;
  }
  // reversed
  if (lhs->reversed != rhs->reversed) {
    return false;
  }
  // seg_idx
  if (lhs->seg_idx != rhs->seg_idx) {
    return false;
  }
  // tunnel_flag
  if (lhs->tunnel_flag != rhs->tunnel_flag) {
    return false;
  }
  // via_num
  if (lhs->via_num != rhs->via_num) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__copy(
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo * input,
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // assist_action
  output->assist_action = input->assist_action;
  // cross_maneuver_id
  output->cross_maneuver_id = input->cross_maneuver_id;
  // cur_to_segment_dist
  output->cur_to_segment_dist = input->cur_to_segment_dist;
  // cur_to_segment_time
  output->cur_to_segment_time = input->cur_to_segment_time;
  // dest_direction
  output->dest_direction = input->dest_direction;
  // main_action
  output->main_action = input->main_action;
  // maneuver_id
  output->maneuver_id = input->maneuver_id;
  // next_road_name
  if (!rosidl_runtime_c__String__copy(
      &(input->next_road_name), &(output->next_road_name)))
  {
    return false;
  }
  // out_cnt
  output->out_cnt = input->out_cnt;
  // path_id
  output->path_id = input->path_id;
  // rev
  output->rev = input->rev;
  // reversed
  output->reversed = input->reversed;
  // seg_idx
  output->seg_idx = input->seg_idx;
  // tunnel_flag
  output->tunnel_flag = input->tunnel_flag;
  // via_num
  output->via_num = input->via_num;
  return true;
}

deva_gaode_routing_msgs__msg__WebCrossNaviInfo *
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * msg = (deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebCrossNaviInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebCrossNaviInfo));
  bool success = deva_gaode_routing_msgs__msg__WebCrossNaviInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__destroy(deva_gaode_routing_msgs__msg__WebCrossNaviInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebCrossNaviInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebCrossNaviInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__fini(deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * array = (deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebCrossNaviInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo * data =
      (deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebCrossNaviInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
