// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obs_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
// Member `dims`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `pose`
#include "deva_localization_msgs/msg/detail/pose__functions.h"
// Member `bounding_box`
#include "deva_common_msgs/msg/detail/bounding_box__functions.h"
// Member `associated_infos`
#include "deva_perception_msgs/msg/detail/associated_info__functions.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__functions.h"

bool
deva_perception_msgs__msg__ObstacleCommon__init(deva_perception_msgs__msg__ObstacleCommon * msg)
{
  if (!msg) {
    return false;
  }
  // obs_name
  if (!rosidl_runtime_c__String__init(&msg->obs_name)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->points, 0)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // obs_id
  // dims
  if (!geometry_msgs__msg__Point__init(&msg->dims)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // pose
  if (!deva_localization_msgs__msg__Pose__init(&msg->pose)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // score
  // track_length
  // tracking_time
  // bounding_box
  if (!deva_common_msgs__msg__BoundingBox__init(&msg->bounding_box)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // miss_length
  // is_stable_tracked
  // in_parking_slot
  // associated_infos
  if (!deva_perception_msgs__msg__AssociatedInfo__Sequence__init(&msg->associated_infos, 0)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_infos, 0)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->pixel_points, 0)) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__ObstacleCommon__fini(deva_perception_msgs__msg__ObstacleCommon * msg)
{
  if (!msg) {
    return;
  }
  // obs_name
  rosidl_runtime_c__String__fini(&msg->obs_name);
  // points
  geometry_msgs__msg__Point__Sequence__fini(&msg->points);
  // obs_id
  // dims
  geometry_msgs__msg__Point__fini(&msg->dims);
  // pose
  deva_localization_msgs__msg__Pose__fini(&msg->pose);
  // score
  // track_length
  // tracking_time
  // bounding_box
  deva_common_msgs__msg__BoundingBox__fini(&msg->bounding_box);
  // miss_length
  // is_stable_tracked
  // in_parking_slot
  // associated_infos
  deva_perception_msgs__msg__AssociatedInfo__Sequence__fini(&msg->associated_infos);
  // extra_infos
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_infos);
  // pixel_points
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->pixel_points);
}

bool
deva_perception_msgs__msg__ObstacleCommon__are_equal(const deva_perception_msgs__msg__ObstacleCommon * lhs, const deva_perception_msgs__msg__ObstacleCommon * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obs_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->obs_name), &(rhs->obs_name)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // obs_id
  if (lhs->obs_id != rhs->obs_id) {
    return false;
  }
  // dims
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->dims), &(rhs->dims)))
  {
    return false;
  }
  // pose
  if (!deva_localization_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // track_length
  if (lhs->track_length != rhs->track_length) {
    return false;
  }
  // tracking_time
  if (lhs->tracking_time != rhs->tracking_time) {
    return false;
  }
  // bounding_box
  if (!deva_common_msgs__msg__BoundingBox__are_equal(
      &(lhs->bounding_box), &(rhs->bounding_box)))
  {
    return false;
  }
  // miss_length
  if (lhs->miss_length != rhs->miss_length) {
    return false;
  }
  // is_stable_tracked
  if (lhs->is_stable_tracked != rhs->is_stable_tracked) {
    return false;
  }
  // in_parking_slot
  if (lhs->in_parking_slot != rhs->in_parking_slot) {
    return false;
  }
  // associated_infos
  if (!deva_perception_msgs__msg__AssociatedInfo__Sequence__are_equal(
      &(lhs->associated_infos), &(rhs->associated_infos)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__are_equal(
      &(lhs->extra_infos), &(rhs->extra_infos)))
  {
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__are_equal(
      &(lhs->pixel_points), &(rhs->pixel_points)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__ObstacleCommon__copy(
  const deva_perception_msgs__msg__ObstacleCommon * input,
  deva_perception_msgs__msg__ObstacleCommon * output)
{
  if (!input || !output) {
    return false;
  }
  // obs_name
  if (!rosidl_runtime_c__String__copy(
      &(input->obs_name), &(output->obs_name)))
  {
    return false;
  }
  // points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // obs_id
  output->obs_id = input->obs_id;
  // dims
  if (!geometry_msgs__msg__Point__copy(
      &(input->dims), &(output->dims)))
  {
    return false;
  }
  // pose
  if (!deva_localization_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // score
  output->score = input->score;
  // track_length
  output->track_length = input->track_length;
  // tracking_time
  output->tracking_time = input->tracking_time;
  // bounding_box
  if (!deva_common_msgs__msg__BoundingBox__copy(
      &(input->bounding_box), &(output->bounding_box)))
  {
    return false;
  }
  // miss_length
  output->miss_length = input->miss_length;
  // is_stable_tracked
  output->is_stable_tracked = input->is_stable_tracked;
  // in_parking_slot
  output->in_parking_slot = input->in_parking_slot;
  // associated_infos
  if (!deva_perception_msgs__msg__AssociatedInfo__Sequence__copy(
      &(input->associated_infos), &(output->associated_infos)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_infos), &(output->extra_infos)))
  {
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->pixel_points), &(output->pixel_points)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__ObstacleCommon *
deva_perception_msgs__msg__ObstacleCommon__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleCommon * msg = (deva_perception_msgs__msg__ObstacleCommon *)allocator.allocate(sizeof(deva_perception_msgs__msg__ObstacleCommon), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__ObstacleCommon));
  bool success = deva_perception_msgs__msg__ObstacleCommon__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__ObstacleCommon__destroy(deva_perception_msgs__msg__ObstacleCommon * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__ObstacleCommon__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__ObstacleCommon__Sequence__init(deva_perception_msgs__msg__ObstacleCommon__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleCommon * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__ObstacleCommon *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__ObstacleCommon), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__ObstacleCommon__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__ObstacleCommon__fini(&data[i - 1]);
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
deva_perception_msgs__msg__ObstacleCommon__Sequence__fini(deva_perception_msgs__msg__ObstacleCommon__Sequence * array)
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
      deva_perception_msgs__msg__ObstacleCommon__fini(&array->data[i]);
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

deva_perception_msgs__msg__ObstacleCommon__Sequence *
deva_perception_msgs__msg__ObstacleCommon__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ObstacleCommon__Sequence * array = (deva_perception_msgs__msg__ObstacleCommon__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__ObstacleCommon__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__ObstacleCommon__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__ObstacleCommon__Sequence__destroy(deva_perception_msgs__msg__ObstacleCommon__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__ObstacleCommon__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__ObstacleCommon__Sequence__are_equal(const deva_perception_msgs__msg__ObstacleCommon__Sequence * lhs, const deva_perception_msgs__msg__ObstacleCommon__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__ObstacleCommon__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__ObstacleCommon__Sequence__copy(
  const deva_perception_msgs__msg__ObstacleCommon__Sequence * input,
  deva_perception_msgs__msg__ObstacleCommon__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__ObstacleCommon);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__ObstacleCommon * data =
      (deva_perception_msgs__msg__ObstacleCommon *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__ObstacleCommon__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__ObstacleCommon__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__ObstacleCommon__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
