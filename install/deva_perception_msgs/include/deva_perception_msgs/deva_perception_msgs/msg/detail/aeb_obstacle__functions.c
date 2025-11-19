// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/aeb_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"
// Member `head_bbox`
// Member `tail_bbox`
#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"
// Member `ground_points`
#include "deva_common_msgs/msg/detail/ground_point__functions.h"

bool
deva_perception_msgs__msg__AEBObstacle__init(deva_perception_msgs__msg__AEBObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__init(&msg->obstacle)) {
    deva_perception_msgs__msg__AEBObstacle__fini(msg);
    return false;
  }
  // obstacle_type
  // head_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->head_bbox)) {
    deva_perception_msgs__msg__AEBObstacle__fini(msg);
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->tail_bbox)) {
    deva_perception_msgs__msg__AEBObstacle__fini(msg);
    return false;
  }
  // ground_points
  if (!deva_common_msgs__msg__GroundPoint__Sequence__init(&msg->ground_points, 0)) {
    deva_perception_msgs__msg__AEBObstacle__fini(msg);
    return false;
  }
  // full_occ_score
  // head_occ_score
  // tail_occ_score
  // full_trunc_score
  // head_trunc_score
  // tail_trunc_score
  return true;
}

void
deva_perception_msgs__msg__AEBObstacle__fini(deva_perception_msgs__msg__AEBObstacle * msg)
{
  if (!msg) {
    return;
  }
  // obstacle
  deva_perception_msgs__msg__ObstacleCommon__fini(&msg->obstacle);
  // obstacle_type
  // head_bbox
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->head_bbox);
  // tail_bbox
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->tail_bbox);
  // ground_points
  deva_common_msgs__msg__GroundPoint__Sequence__fini(&msg->ground_points);
  // full_occ_score
  // head_occ_score
  // tail_occ_score
  // full_trunc_score
  // head_trunc_score
  // tail_trunc_score
}

bool
deva_perception_msgs__msg__AEBObstacle__are_equal(const deva_perception_msgs__msg__AEBObstacle * lhs, const deva_perception_msgs__msg__AEBObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__are_equal(
      &(lhs->obstacle), &(rhs->obstacle)))
  {
    return false;
  }
  // obstacle_type
  if (lhs->obstacle_type != rhs->obstacle_type) {
    return false;
  }
  // head_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->head_bbox), &(rhs->head_bbox)))
  {
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->tail_bbox), &(rhs->tail_bbox)))
  {
    return false;
  }
  // ground_points
  if (!deva_common_msgs__msg__GroundPoint__Sequence__are_equal(
      &(lhs->ground_points), &(rhs->ground_points)))
  {
    return false;
  }
  // full_occ_score
  if (lhs->full_occ_score != rhs->full_occ_score) {
    return false;
  }
  // head_occ_score
  if (lhs->head_occ_score != rhs->head_occ_score) {
    return false;
  }
  // tail_occ_score
  if (lhs->tail_occ_score != rhs->tail_occ_score) {
    return false;
  }
  // full_trunc_score
  if (lhs->full_trunc_score != rhs->full_trunc_score) {
    return false;
  }
  // head_trunc_score
  if (lhs->head_trunc_score != rhs->head_trunc_score) {
    return false;
  }
  // tail_trunc_score
  if (lhs->tail_trunc_score != rhs->tail_trunc_score) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__AEBObstacle__copy(
  const deva_perception_msgs__msg__AEBObstacle * input,
  deva_perception_msgs__msg__AEBObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__copy(
      &(input->obstacle), &(output->obstacle)))
  {
    return false;
  }
  // obstacle_type
  output->obstacle_type = input->obstacle_type;
  // head_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->head_bbox), &(output->head_bbox)))
  {
    return false;
  }
  // tail_bbox
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->tail_bbox), &(output->tail_bbox)))
  {
    return false;
  }
  // ground_points
  if (!deva_common_msgs__msg__GroundPoint__Sequence__copy(
      &(input->ground_points), &(output->ground_points)))
  {
    return false;
  }
  // full_occ_score
  output->full_occ_score = input->full_occ_score;
  // head_occ_score
  output->head_occ_score = input->head_occ_score;
  // tail_occ_score
  output->tail_occ_score = input->tail_occ_score;
  // full_trunc_score
  output->full_trunc_score = input->full_trunc_score;
  // head_trunc_score
  output->head_trunc_score = input->head_trunc_score;
  // tail_trunc_score
  output->tail_trunc_score = input->tail_trunc_score;
  return true;
}

deva_perception_msgs__msg__AEBObstacle *
deva_perception_msgs__msg__AEBObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AEBObstacle * msg = (deva_perception_msgs__msg__AEBObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__AEBObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__AEBObstacle));
  bool success = deva_perception_msgs__msg__AEBObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__AEBObstacle__destroy(deva_perception_msgs__msg__AEBObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__AEBObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__AEBObstacle__Sequence__init(deva_perception_msgs__msg__AEBObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AEBObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__AEBObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__AEBObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__AEBObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__AEBObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__AEBObstacle__Sequence__fini(deva_perception_msgs__msg__AEBObstacle__Sequence * array)
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
      deva_perception_msgs__msg__AEBObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__AEBObstacle__Sequence *
deva_perception_msgs__msg__AEBObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__AEBObstacle__Sequence * array = (deva_perception_msgs__msg__AEBObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__AEBObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__AEBObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__AEBObstacle__Sequence__destroy(deva_perception_msgs__msg__AEBObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__AEBObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__AEBObstacle__Sequence__are_equal(const deva_perception_msgs__msg__AEBObstacle__Sequence * lhs, const deva_perception_msgs__msg__AEBObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__AEBObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__AEBObstacle__Sequence__copy(
  const deva_perception_msgs__msg__AEBObstacle__Sequence * input,
  deva_perception_msgs__msg__AEBObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__AEBObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__AEBObstacle * data =
      (deva_perception_msgs__msg__AEBObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__AEBObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__AEBObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__AEBObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
