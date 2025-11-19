// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/global_routing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `version`
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_point`
// Member `way_points`
// Member `end_point`
// Member `cur_point`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// Member `locate_step`
// Member `forward_step`
#include "deva_gaode_routing_msgs/msg/detail/web_step__functions.h"
// Member `call_back`
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__functions.h"
// Member `vocal_info`
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__functions.h"
// Member `global_path`
#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__functions.h"

bool
deva_gaode_routing_msgs__msg__GlobalRouting__init(deva_gaode_routing_msgs__msg__GlobalRouting * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // version
  if (!rosidl_runtime_c__String__init(&msg->version)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // status
  // md5
  if (!rosidl_runtime_c__String__init(&msg->md5)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // mode
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->start_point)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&msg->way_points, 0)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->end_point)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // distance
  // time
  // step_num
  // locate_step
  if (!deva_gaode_routing_msgs__msg__WebStep__init(&msg->locate_step)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // forward_step
  if (!deva_gaode_routing_msgs__msg__WebStep__init(&msg->forward_step)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // traffic_light_count
  // call_back
  if (!deva_gaode_routing_msgs__msg__WebCallBack__init(&msg->call_back)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // vocal_info
  if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__init(&msg->vocal_info)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // global_path
  if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__init(&msg->global_path)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // cur_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->cur_point)) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
    return false;
  }
  // orientation
  // speed
  return true;
}

void
deva_gaode_routing_msgs__msg__GlobalRouting__fini(deva_gaode_routing_msgs__msg__GlobalRouting * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // version
  rosidl_runtime_c__String__fini(&msg->version);
  // status
  // md5
  rosidl_runtime_c__String__fini(&msg->md5);
  // mode
  // start_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->start_point);
  // way_points
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(&msg->way_points);
  // end_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->end_point);
  // distance
  // time
  // step_num
  // locate_step
  deva_gaode_routing_msgs__msg__WebStep__fini(&msg->locate_step);
  // forward_step
  deva_gaode_routing_msgs__msg__WebStep__fini(&msg->forward_step);
  // traffic_light_count
  // call_back
  deva_gaode_routing_msgs__msg__WebCallBack__fini(&msg->call_back);
  // vocal_info
  deva_gaode_routing_msgs__msg__WebVocalRecMsg__fini(&msg->vocal_info);
  // global_path
  deva_gaode_routing_msgs__msg__GlobalPathMsg__fini(&msg->global_path);
  // cur_point
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->cur_point);
  // orientation
  // speed
}

bool
deva_gaode_routing_msgs__msg__GlobalRouting__are_equal(const deva_gaode_routing_msgs__msg__GlobalRouting * lhs, const deva_gaode_routing_msgs__msg__GlobalRouting * rhs)
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
  // version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->start_point), &(rhs->start_point)))
  {
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__are_equal(
      &(lhs->way_points), &(rhs->way_points)))
  {
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->end_point), &(rhs->end_point)))
  {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // step_num
  if (lhs->step_num != rhs->step_num) {
    return false;
  }
  // locate_step
  if (!deva_gaode_routing_msgs__msg__WebStep__are_equal(
      &(lhs->locate_step), &(rhs->locate_step)))
  {
    return false;
  }
  // forward_step
  if (!deva_gaode_routing_msgs__msg__WebStep__are_equal(
      &(lhs->forward_step), &(rhs->forward_step)))
  {
    return false;
  }
  // traffic_light_count
  if (lhs->traffic_light_count != rhs->traffic_light_count) {
    return false;
  }
  // call_back
  if (!deva_gaode_routing_msgs__msg__WebCallBack__are_equal(
      &(lhs->call_back), &(rhs->call_back)))
  {
    return false;
  }
  // vocal_info
  if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__are_equal(
      &(lhs->vocal_info), &(rhs->vocal_info)))
  {
    return false;
  }
  // global_path
  if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__are_equal(
      &(lhs->global_path), &(rhs->global_path)))
  {
    return false;
  }
  // cur_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->cur_point), &(rhs->cur_point)))
  {
    return false;
  }
  // orientation
  if (lhs->orientation != rhs->orientation) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__GlobalRouting__copy(
  const deva_gaode_routing_msgs__msg__GlobalRouting * input,
  deva_gaode_routing_msgs__msg__GlobalRouting * output)
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
  // version
  if (!rosidl_runtime_c__String__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // md5
  if (!rosidl_runtime_c__String__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // start_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->start_point), &(output->start_point)))
  {
    return false;
  }
  // way_points
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__copy(
      &(input->way_points), &(output->way_points)))
  {
    return false;
  }
  // end_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->end_point), &(output->end_point)))
  {
    return false;
  }
  // distance
  output->distance = input->distance;
  // time
  output->time = input->time;
  // step_num
  output->step_num = input->step_num;
  // locate_step
  if (!deva_gaode_routing_msgs__msg__WebStep__copy(
      &(input->locate_step), &(output->locate_step)))
  {
    return false;
  }
  // forward_step
  if (!deva_gaode_routing_msgs__msg__WebStep__copy(
      &(input->forward_step), &(output->forward_step)))
  {
    return false;
  }
  // traffic_light_count
  output->traffic_light_count = input->traffic_light_count;
  // call_back
  if (!deva_gaode_routing_msgs__msg__WebCallBack__copy(
      &(input->call_back), &(output->call_back)))
  {
    return false;
  }
  // vocal_info
  if (!deva_gaode_routing_msgs__msg__WebVocalRecMsg__copy(
      &(input->vocal_info), &(output->vocal_info)))
  {
    return false;
  }
  // global_path
  if (!deva_gaode_routing_msgs__msg__GlobalPathMsg__copy(
      &(input->global_path), &(output->global_path)))
  {
    return false;
  }
  // cur_point
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->cur_point), &(output->cur_point)))
  {
    return false;
  }
  // orientation
  output->orientation = input->orientation;
  // speed
  output->speed = input->speed;
  return true;
}

deva_gaode_routing_msgs__msg__GlobalRouting *
deva_gaode_routing_msgs__msg__GlobalRouting__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalRouting * msg = (deva_gaode_routing_msgs__msg__GlobalRouting *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__GlobalRouting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__GlobalRouting));
  bool success = deva_gaode_routing_msgs__msg__GlobalRouting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__GlobalRouting__destroy(deva_gaode_routing_msgs__msg__GlobalRouting * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__GlobalRouting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__init(deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalRouting * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__GlobalRouting *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__GlobalRouting), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__GlobalRouting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__GlobalRouting__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__fini(deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * array)
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
      deva_gaode_routing_msgs__msg__GlobalRouting__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__GlobalRouting__Sequence *
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * array = (deva_gaode_routing_msgs__msg__GlobalRouting__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__GlobalRouting__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__destroy(deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__are_equal(const deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * lhs, const deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__GlobalRouting__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__GlobalRouting__Sequence__copy(
  const deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * input,
  deva_gaode_routing_msgs__msg__GlobalRouting__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__GlobalRouting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__GlobalRouting * data =
      (deva_gaode_routing_msgs__msg__GlobalRouting *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__GlobalRouting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__GlobalRouting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__GlobalRouting__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
