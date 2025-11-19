// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `via_retain_dis`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lane_info`
#include "deva_gaode_routing_msgs/msg/detail/web_lane__functions.h"
// Member `camera_callback`
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__functions.h"
// Member `not_avoid_info`
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__functions.h"
// Member `next_cross_info`
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"
// Member `traffic_light_cd`
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__functions.h"
// Member `parallel_road`
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__functions.h"
// Member `cross_image`
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__functions.h"

bool
deva_gaode_routing_msgs__msg__WebCallBack__init(deva_gaode_routing_msgs__msg__WebCallBack * msg)
{
  if (!msg) {
    return false;
  }
  // index
  // cur_step
  // cur_road
  // cur_point
  // cur_road_retain_dis
  // cur_step_retain_dis
  // cur_step_retain_time
  // via_retain_dis
  if (!rosidl_runtime_c__double__Sequence__init(&msg->via_retain_dis, 0)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // path_retain_dis
  // path_retain_time
  // trun_icon
  // trun_icon_retain_dis
  // lane_info
  if (!deva_gaode_routing_msgs__msg__WebLane__init(&msg->lane_info)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // camera_callback
  if (!deva_gaode_routing_msgs__msg__CameraCallbackInfo__init(&msg->camera_callback)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // ring_out_cnt
  // roundabout_out_angle
  // cur_link_speed
  // not_avoid_info
  if (!deva_gaode_routing_msgs__msg__WebNotAvoidInfo__init(&msg->not_avoid_info)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // cross_maneuver_id
  // next_cross_info
  if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(&msg->next_cross_info, 0)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // traffic_light_cd
  if (!deva_gaode_routing_msgs__msg__WebTrafficLight__init(&msg->traffic_light_cd)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // parallel_road
  if (!deva_gaode_routing_msgs__msg__WebParallelRoad__init(&msg->parallel_road)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // ownership
  // cur_road_limit_speed
  // cross_image
  if (!deva_gaode_routing_msgs__msg__WebCrossImage__init(&msg->cross_image)) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
    return false;
  }
  // cur_cross_dir
  // cur_cross_dist
  return true;
}

void
deva_gaode_routing_msgs__msg__WebCallBack__fini(deva_gaode_routing_msgs__msg__WebCallBack * msg)
{
  if (!msg) {
    return;
  }
  // index
  // cur_step
  // cur_road
  // cur_point
  // cur_road_retain_dis
  // cur_step_retain_dis
  // cur_step_retain_time
  // via_retain_dis
  rosidl_runtime_c__double__Sequence__fini(&msg->via_retain_dis);
  // path_retain_dis
  // path_retain_time
  // trun_icon
  // trun_icon_retain_dis
  // lane_info
  deva_gaode_routing_msgs__msg__WebLane__fini(&msg->lane_info);
  // camera_callback
  deva_gaode_routing_msgs__msg__CameraCallbackInfo__fini(&msg->camera_callback);
  // ring_out_cnt
  // roundabout_out_angle
  // cur_link_speed
  // not_avoid_info
  deva_gaode_routing_msgs__msg__WebNotAvoidInfo__fini(&msg->not_avoid_info);
  // cross_maneuver_id
  // next_cross_info
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__fini(&msg->next_cross_info);
  // traffic_light_cd
  deva_gaode_routing_msgs__msg__WebTrafficLight__fini(&msg->traffic_light_cd);
  // parallel_road
  deva_gaode_routing_msgs__msg__WebParallelRoad__fini(&msg->parallel_road);
  // ownership
  // cur_road_limit_speed
  // cross_image
  deva_gaode_routing_msgs__msg__WebCrossImage__fini(&msg->cross_image);
  // cur_cross_dir
  // cur_cross_dist
}

bool
deva_gaode_routing_msgs__msg__WebCallBack__are_equal(const deva_gaode_routing_msgs__msg__WebCallBack * lhs, const deva_gaode_routing_msgs__msg__WebCallBack * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  // cur_step
  if (lhs->cur_step != rhs->cur_step) {
    return false;
  }
  // cur_road
  if (lhs->cur_road != rhs->cur_road) {
    return false;
  }
  // cur_point
  if (lhs->cur_point != rhs->cur_point) {
    return false;
  }
  // cur_road_retain_dis
  if (lhs->cur_road_retain_dis != rhs->cur_road_retain_dis) {
    return false;
  }
  // cur_step_retain_dis
  if (lhs->cur_step_retain_dis != rhs->cur_step_retain_dis) {
    return false;
  }
  // cur_step_retain_time
  if (lhs->cur_step_retain_time != rhs->cur_step_retain_time) {
    return false;
  }
  // via_retain_dis
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->via_retain_dis), &(rhs->via_retain_dis)))
  {
    return false;
  }
  // path_retain_dis
  if (lhs->path_retain_dis != rhs->path_retain_dis) {
    return false;
  }
  // path_retain_time
  if (lhs->path_retain_time != rhs->path_retain_time) {
    return false;
  }
  // trun_icon
  if (lhs->trun_icon != rhs->trun_icon) {
    return false;
  }
  // trun_icon_retain_dis
  if (lhs->trun_icon_retain_dis != rhs->trun_icon_retain_dis) {
    return false;
  }
  // lane_info
  if (!deva_gaode_routing_msgs__msg__WebLane__are_equal(
      &(lhs->lane_info), &(rhs->lane_info)))
  {
    return false;
  }
  // camera_callback
  if (!deva_gaode_routing_msgs__msg__CameraCallbackInfo__are_equal(
      &(lhs->camera_callback), &(rhs->camera_callback)))
  {
    return false;
  }
  // ring_out_cnt
  if (lhs->ring_out_cnt != rhs->ring_out_cnt) {
    return false;
  }
  // roundabout_out_angle
  if (lhs->roundabout_out_angle != rhs->roundabout_out_angle) {
    return false;
  }
  // cur_link_speed
  if (lhs->cur_link_speed != rhs->cur_link_speed) {
    return false;
  }
  // not_avoid_info
  if (!deva_gaode_routing_msgs__msg__WebNotAvoidInfo__are_equal(
      &(lhs->not_avoid_info), &(rhs->not_avoid_info)))
  {
    return false;
  }
  // cross_maneuver_id
  if (lhs->cross_maneuver_id != rhs->cross_maneuver_id) {
    return false;
  }
  // next_cross_info
  if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__are_equal(
      &(lhs->next_cross_info), &(rhs->next_cross_info)))
  {
    return false;
  }
  // traffic_light_cd
  if (!deva_gaode_routing_msgs__msg__WebTrafficLight__are_equal(
      &(lhs->traffic_light_cd), &(rhs->traffic_light_cd)))
  {
    return false;
  }
  // parallel_road
  if (!deva_gaode_routing_msgs__msg__WebParallelRoad__are_equal(
      &(lhs->parallel_road), &(rhs->parallel_road)))
  {
    return false;
  }
  // ownership
  if (lhs->ownership != rhs->ownership) {
    return false;
  }
  // cur_road_limit_speed
  if (lhs->cur_road_limit_speed != rhs->cur_road_limit_speed) {
    return false;
  }
  // cross_image
  if (!deva_gaode_routing_msgs__msg__WebCrossImage__are_equal(
      &(lhs->cross_image), &(rhs->cross_image)))
  {
    return false;
  }
  // cur_cross_dir
  if (lhs->cur_cross_dir != rhs->cur_cross_dir) {
    return false;
  }
  // cur_cross_dist
  if (lhs->cur_cross_dist != rhs->cur_cross_dist) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebCallBack__copy(
  const deva_gaode_routing_msgs__msg__WebCallBack * input,
  deva_gaode_routing_msgs__msg__WebCallBack * output)
{
  if (!input || !output) {
    return false;
  }
  // index
  output->index = input->index;
  // cur_step
  output->cur_step = input->cur_step;
  // cur_road
  output->cur_road = input->cur_road;
  // cur_point
  output->cur_point = input->cur_point;
  // cur_road_retain_dis
  output->cur_road_retain_dis = input->cur_road_retain_dis;
  // cur_step_retain_dis
  output->cur_step_retain_dis = input->cur_step_retain_dis;
  // cur_step_retain_time
  output->cur_step_retain_time = input->cur_step_retain_time;
  // via_retain_dis
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->via_retain_dis), &(output->via_retain_dis)))
  {
    return false;
  }
  // path_retain_dis
  output->path_retain_dis = input->path_retain_dis;
  // path_retain_time
  output->path_retain_time = input->path_retain_time;
  // trun_icon
  output->trun_icon = input->trun_icon;
  // trun_icon_retain_dis
  output->trun_icon_retain_dis = input->trun_icon_retain_dis;
  // lane_info
  if (!deva_gaode_routing_msgs__msg__WebLane__copy(
      &(input->lane_info), &(output->lane_info)))
  {
    return false;
  }
  // camera_callback
  if (!deva_gaode_routing_msgs__msg__CameraCallbackInfo__copy(
      &(input->camera_callback), &(output->camera_callback)))
  {
    return false;
  }
  // ring_out_cnt
  output->ring_out_cnt = input->ring_out_cnt;
  // roundabout_out_angle
  output->roundabout_out_angle = input->roundabout_out_angle;
  // cur_link_speed
  output->cur_link_speed = input->cur_link_speed;
  // not_avoid_info
  if (!deva_gaode_routing_msgs__msg__WebNotAvoidInfo__copy(
      &(input->not_avoid_info), &(output->not_avoid_info)))
  {
    return false;
  }
  // cross_maneuver_id
  output->cross_maneuver_id = input->cross_maneuver_id;
  // next_cross_info
  if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__copy(
      &(input->next_cross_info), &(output->next_cross_info)))
  {
    return false;
  }
  // traffic_light_cd
  if (!deva_gaode_routing_msgs__msg__WebTrafficLight__copy(
      &(input->traffic_light_cd), &(output->traffic_light_cd)))
  {
    return false;
  }
  // parallel_road
  if (!deva_gaode_routing_msgs__msg__WebParallelRoad__copy(
      &(input->parallel_road), &(output->parallel_road)))
  {
    return false;
  }
  // ownership
  output->ownership = input->ownership;
  // cur_road_limit_speed
  output->cur_road_limit_speed = input->cur_road_limit_speed;
  // cross_image
  if (!deva_gaode_routing_msgs__msg__WebCrossImage__copy(
      &(input->cross_image), &(output->cross_image)))
  {
    return false;
  }
  // cur_cross_dir
  output->cur_cross_dir = input->cur_cross_dir;
  // cur_cross_dist
  output->cur_cross_dist = input->cur_cross_dist;
  return true;
}

deva_gaode_routing_msgs__msg__WebCallBack *
deva_gaode_routing_msgs__msg__WebCallBack__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCallBack * msg = (deva_gaode_routing_msgs__msg__WebCallBack *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebCallBack), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebCallBack));
  bool success = deva_gaode_routing_msgs__msg__WebCallBack__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebCallBack__destroy(deva_gaode_routing_msgs__msg__WebCallBack * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebCallBack__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__init(deva_gaode_routing_msgs__msg__WebCallBack__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCallBack * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebCallBack *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebCallBack), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebCallBack__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebCallBack__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__fini(deva_gaode_routing_msgs__msg__WebCallBack__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebCallBack__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebCallBack__Sequence *
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebCallBack__Sequence * array = (deva_gaode_routing_msgs__msg__WebCallBack__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebCallBack__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebCallBack__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__destroy(deva_gaode_routing_msgs__msg__WebCallBack__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebCallBack__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebCallBack__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebCallBack__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebCallBack__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebCallBack__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebCallBack__Sequence * input,
  deva_gaode_routing_msgs__msg__WebCallBack__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebCallBack);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebCallBack * data =
      (deva_gaode_routing_msgs__msg__WebCallBack *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebCallBack__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebCallBack__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebCallBack__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
