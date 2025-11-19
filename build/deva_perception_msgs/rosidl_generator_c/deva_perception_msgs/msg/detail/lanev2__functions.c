// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Lanev2.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/lanev2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `imagepoints`
// Member `rv_fork_point`
#include "deva_common_msgs/msg/detail/point2d__functions.h"
// Member `waypoints`
// Member `waypoints_extend`
// Member `bev_fork_point`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `lane_property_segment`
#include "deva_perception_msgs/msg/detail/lane_property_segment__functions.h"
// Member `lane_xy`
// Member `lane_xz`
#include "deva_common_msgs/msg/detail/line2d__functions.h"

bool
deva_perception_msgs__msg__Lanev2__init(deva_perception_msgs__msg__Lanev2 * msg)
{
  if (!msg) {
    return false;
  }
  // confidence
  // lane_id
  // left_lane_id
  // right_lane_id
  // fork_lane_id
  // imagepoints
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->imagepoints, 0)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // v_min
  // v_max
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->waypoints, 0)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // x_min
  // x_max
  // waypoints_extend
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->waypoints_extend, 0)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // x_min_extend
  // x_max_extend
  // lane_property
  // lane_property_segment
  if (!deva_perception_msgs__msg__LanePropertySegment__init(&msg->lane_property_segment)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // fork_property
  // rv_fork_point
  if (!deva_common_msgs__msg__Point2d__init(&msg->rv_fork_point)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // bev_fork_point
  if (!geometry_msgs__msg__Point__init(&msg->bev_fork_point)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // lane_xy
  if (!deva_common_msgs__msg__Line2d__init(&msg->lane_xy)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  // lane_xz
  if (!deva_common_msgs__msg__Line2d__init(&msg->lane_xz)) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__Lanev2__fini(deva_perception_msgs__msg__Lanev2 * msg)
{
  if (!msg) {
    return;
  }
  // confidence
  // lane_id
  // left_lane_id
  // right_lane_id
  // fork_lane_id
  // imagepoints
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->imagepoints);
  // v_min
  // v_max
  // waypoints
  geometry_msgs__msg__Point__Sequence__fini(&msg->waypoints);
  // x_min
  // x_max
  // waypoints_extend
  geometry_msgs__msg__Point__Sequence__fini(&msg->waypoints_extend);
  // x_min_extend
  // x_max_extend
  // lane_property
  // lane_property_segment
  deva_perception_msgs__msg__LanePropertySegment__fini(&msg->lane_property_segment);
  // fork_property
  // rv_fork_point
  deva_common_msgs__msg__Point2d__fini(&msg->rv_fork_point);
  // bev_fork_point
  geometry_msgs__msg__Point__fini(&msg->bev_fork_point);
  // lane_xy
  deva_common_msgs__msg__Line2d__fini(&msg->lane_xy);
  // lane_xz
  deva_common_msgs__msg__Line2d__fini(&msg->lane_xz);
}

bool
deva_perception_msgs__msg__Lanev2__are_equal(const deva_perception_msgs__msg__Lanev2 * lhs, const deva_perception_msgs__msg__Lanev2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // left_lane_id
  if (lhs->left_lane_id != rhs->left_lane_id) {
    return false;
  }
  // right_lane_id
  if (lhs->right_lane_id != rhs->right_lane_id) {
    return false;
  }
  // fork_lane_id
  if (lhs->fork_lane_id != rhs->fork_lane_id) {
    return false;
  }
  // imagepoints
  if (!deva_common_msgs__msg__Point2d__Sequence__are_equal(
      &(lhs->imagepoints), &(rhs->imagepoints)))
  {
    return false;
  }
  // v_min
  if (lhs->v_min != rhs->v_min) {
    return false;
  }
  // v_max
  if (lhs->v_max != rhs->v_max) {
    return false;
  }
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // x_min
  if (lhs->x_min != rhs->x_min) {
    return false;
  }
  // x_max
  if (lhs->x_max != rhs->x_max) {
    return false;
  }
  // waypoints_extend
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->waypoints_extend), &(rhs->waypoints_extend)))
  {
    return false;
  }
  // x_min_extend
  if (lhs->x_min_extend != rhs->x_min_extend) {
    return false;
  }
  // x_max_extend
  if (lhs->x_max_extend != rhs->x_max_extend) {
    return false;
  }
  // lane_property
  if (lhs->lane_property != rhs->lane_property) {
    return false;
  }
  // lane_property_segment
  if (!deva_perception_msgs__msg__LanePropertySegment__are_equal(
      &(lhs->lane_property_segment), &(rhs->lane_property_segment)))
  {
    return false;
  }
  // fork_property
  if (lhs->fork_property != rhs->fork_property) {
    return false;
  }
  // rv_fork_point
  if (!deva_common_msgs__msg__Point2d__are_equal(
      &(lhs->rv_fork_point), &(rhs->rv_fork_point)))
  {
    return false;
  }
  // bev_fork_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->bev_fork_point), &(rhs->bev_fork_point)))
  {
    return false;
  }
  // lane_xy
  if (!deva_common_msgs__msg__Line2d__are_equal(
      &(lhs->lane_xy), &(rhs->lane_xy)))
  {
    return false;
  }
  // lane_xz
  if (!deva_common_msgs__msg__Line2d__are_equal(
      &(lhs->lane_xz), &(rhs->lane_xz)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__Lanev2__copy(
  const deva_perception_msgs__msg__Lanev2 * input,
  deva_perception_msgs__msg__Lanev2 * output)
{
  if (!input || !output) {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // lane_id
  output->lane_id = input->lane_id;
  // left_lane_id
  output->left_lane_id = input->left_lane_id;
  // right_lane_id
  output->right_lane_id = input->right_lane_id;
  // fork_lane_id
  output->fork_lane_id = input->fork_lane_id;
  // imagepoints
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->imagepoints), &(output->imagepoints)))
  {
    return false;
  }
  // v_min
  output->v_min = input->v_min;
  // v_max
  output->v_max = input->v_max;
  // waypoints
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // x_min
  output->x_min = input->x_min;
  // x_max
  output->x_max = input->x_max;
  // waypoints_extend
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->waypoints_extend), &(output->waypoints_extend)))
  {
    return false;
  }
  // x_min_extend
  output->x_min_extend = input->x_min_extend;
  // x_max_extend
  output->x_max_extend = input->x_max_extend;
  // lane_property
  output->lane_property = input->lane_property;
  // lane_property_segment
  if (!deva_perception_msgs__msg__LanePropertySegment__copy(
      &(input->lane_property_segment), &(output->lane_property_segment)))
  {
    return false;
  }
  // fork_property
  output->fork_property = input->fork_property;
  // rv_fork_point
  if (!deva_common_msgs__msg__Point2d__copy(
      &(input->rv_fork_point), &(output->rv_fork_point)))
  {
    return false;
  }
  // bev_fork_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->bev_fork_point), &(output->bev_fork_point)))
  {
    return false;
  }
  // lane_xy
  if (!deva_common_msgs__msg__Line2d__copy(
      &(input->lane_xy), &(output->lane_xy)))
  {
    return false;
  }
  // lane_xz
  if (!deva_common_msgs__msg__Line2d__copy(
      &(input->lane_xz), &(output->lane_xz)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__Lanev2 *
deva_perception_msgs__msg__Lanev2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Lanev2 * msg = (deva_perception_msgs__msg__Lanev2 *)allocator.allocate(sizeof(deva_perception_msgs__msg__Lanev2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Lanev2));
  bool success = deva_perception_msgs__msg__Lanev2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Lanev2__destroy(deva_perception_msgs__msg__Lanev2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Lanev2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Lanev2__Sequence__init(deva_perception_msgs__msg__Lanev2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Lanev2 * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Lanev2 *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Lanev2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Lanev2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Lanev2__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Lanev2__Sequence__fini(deva_perception_msgs__msg__Lanev2__Sequence * array)
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
      deva_perception_msgs__msg__Lanev2__fini(&array->data[i]);
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

deva_perception_msgs__msg__Lanev2__Sequence *
deva_perception_msgs__msg__Lanev2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Lanev2__Sequence * array = (deva_perception_msgs__msg__Lanev2__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Lanev2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Lanev2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Lanev2__Sequence__destroy(deva_perception_msgs__msg__Lanev2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Lanev2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Lanev2__Sequence__are_equal(const deva_perception_msgs__msg__Lanev2__Sequence * lhs, const deva_perception_msgs__msg__Lanev2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Lanev2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Lanev2__Sequence__copy(
  const deva_perception_msgs__msg__Lanev2__Sequence * input,
  deva_perception_msgs__msg__Lanev2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Lanev2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Lanev2 * data =
      (deva_perception_msgs__msg__Lanev2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Lanev2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Lanev2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Lanev2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
