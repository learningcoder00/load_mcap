// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `route_points`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `rg_intersection_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__functions.h"
// Member `rg_lane_info_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__functions.h"
// Member `rg_red_light_result`
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__functions.h"
// Member `rg_tips_result`
#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__functions.h"

bool
deva_gaode_routing_msgs__msg__Route__init(deva_gaode_routing_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // route_points
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->route_points, 0)) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
    return false;
  }
  // rg_intersection_result
  if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__init(&msg->rg_intersection_result, 0)) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
    return false;
  }
  // rg_lane_info_result
  if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__init(&msg->rg_lane_info_result, 0)) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
    return false;
  }
  // rg_red_light_result
  if (!deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__init(&msg->rg_red_light_result, 0)) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
    return false;
  }
  // rg_tips_result
  if (!deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__init(&msg->rg_tips_result, 0)) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__Route__fini(deva_gaode_routing_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // route_points
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->route_points);
  // rg_intersection_result
  deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__fini(&msg->rg_intersection_result);
  // rg_lane_info_result
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__fini(&msg->rg_lane_info_result);
  // rg_red_light_result
  deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__fini(&msg->rg_red_light_result);
  // rg_tips_result
  deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__fini(&msg->rg_tips_result);
}

bool
deva_gaode_routing_msgs__msg__Route__are_equal(const deva_gaode_routing_msgs__msg__Route * lhs, const deva_gaode_routing_msgs__msg__Route * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // route_points
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->route_points), &(rhs->route_points)))
  {
    return false;
  }
  // rg_intersection_result
  if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__are_equal(
      &(lhs->rg_intersection_result), &(rhs->rg_intersection_result)))
  {
    return false;
  }
  // rg_lane_info_result
  if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__are_equal(
      &(lhs->rg_lane_info_result), &(rhs->rg_lane_info_result)))
  {
    return false;
  }
  // rg_red_light_result
  if (!deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__are_equal(
      &(lhs->rg_red_light_result), &(rhs->rg_red_light_result)))
  {
    return false;
  }
  // rg_tips_result
  if (!deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__are_equal(
      &(lhs->rg_tips_result), &(rhs->rg_tips_result)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Route__copy(
  const deva_gaode_routing_msgs__msg__Route * input,
  deva_gaode_routing_msgs__msg__Route * output)
{
  if (!input || !output) {
    return false;
  }
  // route_points
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->route_points), &(output->route_points)))
  {
    return false;
  }
  // rg_intersection_result
  if (!deva_gaode_routing_msgs__msg__RGIntersectionResult__Sequence__copy(
      &(input->rg_intersection_result), &(output->rg_intersection_result)))
  {
    return false;
  }
  // rg_lane_info_result
  if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__Sequence__copy(
      &(input->rg_lane_info_result), &(output->rg_lane_info_result)))
  {
    return false;
  }
  // rg_red_light_result
  if (!deva_gaode_routing_msgs__msg__RGRedLightResult__Sequence__copy(
      &(input->rg_red_light_result), &(output->rg_red_light_result)))
  {
    return false;
  }
  // rg_tips_result
  if (!deva_gaode_routing_msgs__msg__RGVTipsPointResult__Sequence__copy(
      &(input->rg_tips_result), &(output->rg_tips_result)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__Route *
deva_gaode_routing_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Route * msg = (deva_gaode_routing_msgs__msg__Route *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__Route));
  bool success = deva_gaode_routing_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__Route__destroy(deva_gaode_routing_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__Route__Sequence__init(deva_gaode_routing_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Route * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__Route__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__Route__Sequence__fini(deva_gaode_routing_msgs__msg__Route__Sequence * array)
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
      deva_gaode_routing_msgs__msg__Route__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__Route__Sequence *
deva_gaode_routing_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__Route__Sequence * array = (deva_gaode_routing_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__Route__Sequence__destroy(deva_gaode_routing_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__Route__Sequence__are_equal(const deva_gaode_routing_msgs__msg__Route__Sequence * lhs, const deva_gaode_routing_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__Route__Sequence__copy(
  const deva_gaode_routing_msgs__msg__Route__Sequence * input,
  deva_gaode_routing_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__Route);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__Route * data =
      (deva_gaode_routing_msgs__msg__Route *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__Route__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__Route__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
