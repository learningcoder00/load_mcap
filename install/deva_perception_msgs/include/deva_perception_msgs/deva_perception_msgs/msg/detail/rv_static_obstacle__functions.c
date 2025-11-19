// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RvStaticObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_static_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bbox2d`
#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `dimensions`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
deva_perception_msgs__msg__RvStaticObstacle__init(deva_perception_msgs__msg__RvStaticObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // type
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->bbox2d)) {
    deva_perception_msgs__msg__RvStaticObstacle__fini(msg);
    return false;
  }
  // with_bev_info
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    deva_perception_msgs__msg__RvStaticObstacle__fini(msg);
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__init(&msg->dimensions)) {
    deva_perception_msgs__msg__RvStaticObstacle__fini(msg);
    return false;
  }
  // bind_type
  // score
  // vertical_distance
  // horizontal_distance
  // left_lane_id
  // right_lane_id
  // left_lane_distance
  // right_lane_distance
  return true;
}

void
deva_perception_msgs__msg__RvStaticObstacle__fini(deva_perception_msgs__msg__RvStaticObstacle * msg)
{
  if (!msg) {
    return;
  }
  // id
  // type
  // bbox2d
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->bbox2d);
  // with_bev_info
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // dimensions
  geometry_msgs__msg__Vector3__fini(&msg->dimensions);
  // bind_type
  // score
  // vertical_distance
  // horizontal_distance
  // left_lane_id
  // right_lane_id
  // left_lane_distance
  // right_lane_distance
}

bool
deva_perception_msgs__msg__RvStaticObstacle__are_equal(const deva_perception_msgs__msg__RvStaticObstacle * lhs, const deva_perception_msgs__msg__RvStaticObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->bbox2d), &(rhs->bbox2d)))
  {
    return false;
  }
  // with_bev_info
  if (lhs->with_bev_info != rhs->with_bev_info) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // bind_type
  if (lhs->bind_type != rhs->bind_type) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // vertical_distance
  if (lhs->vertical_distance != rhs->vertical_distance) {
    return false;
  }
  // horizontal_distance
  if (lhs->horizontal_distance != rhs->horizontal_distance) {
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
  // left_lane_distance
  if (lhs->left_lane_distance != rhs->left_lane_distance) {
    return false;
  }
  // right_lane_distance
  if (lhs->right_lane_distance != rhs->right_lane_distance) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RvStaticObstacle__copy(
  const deva_perception_msgs__msg__RvStaticObstacle * input,
  deva_perception_msgs__msg__RvStaticObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // type
  output->type = input->type;
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->bbox2d), &(output->bbox2d)))
  {
    return false;
  }
  // with_bev_info
  output->with_bev_info = input->with_bev_info;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // dimensions
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // bind_type
  output->bind_type = input->bind_type;
  // score
  output->score = input->score;
  // vertical_distance
  output->vertical_distance = input->vertical_distance;
  // horizontal_distance
  output->horizontal_distance = input->horizontal_distance;
  // left_lane_id
  output->left_lane_id = input->left_lane_id;
  // right_lane_id
  output->right_lane_id = input->right_lane_id;
  // left_lane_distance
  output->left_lane_distance = input->left_lane_distance;
  // right_lane_distance
  output->right_lane_distance = input->right_lane_distance;
  return true;
}

deva_perception_msgs__msg__RvStaticObstacle *
deva_perception_msgs__msg__RvStaticObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacle * msg = (deva_perception_msgs__msg__RvStaticObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__RvStaticObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RvStaticObstacle));
  bool success = deva_perception_msgs__msg__RvStaticObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RvStaticObstacle__destroy(deva_perception_msgs__msg__RvStaticObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RvStaticObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RvStaticObstacle__Sequence__init(deva_perception_msgs__msg__RvStaticObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RvStaticObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RvStaticObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RvStaticObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RvStaticObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RvStaticObstacle__Sequence__fini(deva_perception_msgs__msg__RvStaticObstacle__Sequence * array)
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
      deva_perception_msgs__msg__RvStaticObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__RvStaticObstacle__Sequence *
deva_perception_msgs__msg__RvStaticObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacle__Sequence * array = (deva_perception_msgs__msg__RvStaticObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RvStaticObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RvStaticObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RvStaticObstacle__Sequence__destroy(deva_perception_msgs__msg__RvStaticObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RvStaticObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RvStaticObstacle__Sequence__are_equal(const deva_perception_msgs__msg__RvStaticObstacle__Sequence * lhs, const deva_perception_msgs__msg__RvStaticObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RvStaticObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RvStaticObstacle__Sequence__copy(
  const deva_perception_msgs__msg__RvStaticObstacle__Sequence * input,
  deva_perception_msgs__msg__RvStaticObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RvStaticObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RvStaticObstacle * data =
      (deva_perception_msgs__msg__RvStaticObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RvStaticObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RvStaticObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RvStaticObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
