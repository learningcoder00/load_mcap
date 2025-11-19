// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/radar_object_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
// Member `position_std`
// Member `nearest_point`
// Member `nearest_point_std`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `velocity_rel`
// Member `velocity_rel_std`
// Member `velocity_abs`
// Member `velocity_abs_std`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `acceleration_rel`
// Member `acceleration_abs`
#include "geometry_msgs/msg/detail/accel__functions.h"
// Member `box_lwh`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_perception_msgs__msg__RadarObjectInfo__init(deva_perception_msgs__msg__RadarObjectInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  if (!geometry_msgs__msg__Pose__init(&msg->position)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // position_std
  if (!geometry_msgs__msg__Pose__init(&msg->position_std)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // nearest_point
  if (!geometry_msgs__msg__Pose__init(&msg->nearest_point)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // nearest_point_std
  if (!geometry_msgs__msg__Pose__init(&msg->nearest_point_std)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // velocity_rel
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_rel)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // velocity_rel_std
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_rel_std)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // velocity_abs
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_abs)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // velocity_abs_std
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_abs_std)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // acceleration_rel
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration_rel)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // acceleration_abs
  if (!geometry_msgs__msg__Accel__init(&msg->acceleration_abs)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // dynamic_property
  // heading_angle
  // life_cycles
  // box_lwh
  if (!geometry_msgs__msg__Point__init(&msg->box_lwh)) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
    return false;
  }
  // box_center_lat
  // box_center_lgt
  // snr
  // classification
  // obstacle_probability
  // probability_of_existence
  // mirror_probability
  // not_real_probability
  // rcs
  // target_classification_confidence
  // track_status
  return true;
}

void
deva_perception_msgs__msg__RadarObjectInfo__fini(deva_perception_msgs__msg__RadarObjectInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
  geometry_msgs__msg__Pose__fini(&msg->position);
  // position_std
  geometry_msgs__msg__Pose__fini(&msg->position_std);
  // nearest_point
  geometry_msgs__msg__Pose__fini(&msg->nearest_point);
  // nearest_point_std
  geometry_msgs__msg__Pose__fini(&msg->nearest_point_std);
  // velocity_rel
  geometry_msgs__msg__Twist__fini(&msg->velocity_rel);
  // velocity_rel_std
  geometry_msgs__msg__Twist__fini(&msg->velocity_rel_std);
  // velocity_abs
  geometry_msgs__msg__Twist__fini(&msg->velocity_abs);
  // velocity_abs_std
  geometry_msgs__msg__Twist__fini(&msg->velocity_abs_std);
  // acceleration_rel
  geometry_msgs__msg__Accel__fini(&msg->acceleration_rel);
  // acceleration_abs
  geometry_msgs__msg__Accel__fini(&msg->acceleration_abs);
  // dynamic_property
  // heading_angle
  // life_cycles
  // box_lwh
  geometry_msgs__msg__Point__fini(&msg->box_lwh);
  // box_center_lat
  // box_center_lgt
  // snr
  // classification
  // obstacle_probability
  // probability_of_existence
  // mirror_probability
  // not_real_probability
  // rcs
  // target_classification_confidence
  // track_status
}

bool
deva_perception_msgs__msg__RadarObjectInfo__are_equal(const deva_perception_msgs__msg__RadarObjectInfo * lhs, const deva_perception_msgs__msg__RadarObjectInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // position_std
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->position_std), &(rhs->position_std)))
  {
    return false;
  }
  // nearest_point
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->nearest_point), &(rhs->nearest_point)))
  {
    return false;
  }
  // nearest_point_std
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->nearest_point_std), &(rhs->nearest_point_std)))
  {
    return false;
  }
  // velocity_rel
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_rel), &(rhs->velocity_rel)))
  {
    return false;
  }
  // velocity_rel_std
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_rel_std), &(rhs->velocity_rel_std)))
  {
    return false;
  }
  // velocity_abs
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_abs), &(rhs->velocity_abs)))
  {
    return false;
  }
  // velocity_abs_std
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_abs_std), &(rhs->velocity_abs_std)))
  {
    return false;
  }
  // acceleration_rel
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration_rel), &(rhs->acceleration_rel)))
  {
    return false;
  }
  // acceleration_abs
  if (!geometry_msgs__msg__Accel__are_equal(
      &(lhs->acceleration_abs), &(rhs->acceleration_abs)))
  {
    return false;
  }
  // dynamic_property
  if (lhs->dynamic_property != rhs->dynamic_property) {
    return false;
  }
  // heading_angle
  if (lhs->heading_angle != rhs->heading_angle) {
    return false;
  }
  // life_cycles
  if (lhs->life_cycles != rhs->life_cycles) {
    return false;
  }
  // box_lwh
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->box_lwh), &(rhs->box_lwh)))
  {
    return false;
  }
  // box_center_lat
  if (lhs->box_center_lat != rhs->box_center_lat) {
    return false;
  }
  // box_center_lgt
  if (lhs->box_center_lgt != rhs->box_center_lgt) {
    return false;
  }
  // snr
  if (lhs->snr != rhs->snr) {
    return false;
  }
  // classification
  if (lhs->classification != rhs->classification) {
    return false;
  }
  // obstacle_probability
  if (lhs->obstacle_probability != rhs->obstacle_probability) {
    return false;
  }
  // probability_of_existence
  if (lhs->probability_of_existence != rhs->probability_of_existence) {
    return false;
  }
  // mirror_probability
  if (lhs->mirror_probability != rhs->mirror_probability) {
    return false;
  }
  // not_real_probability
  if (lhs->not_real_probability != rhs->not_real_probability) {
    return false;
  }
  // rcs
  if (lhs->rcs != rhs->rcs) {
    return false;
  }
  // target_classification_confidence
  if (lhs->target_classification_confidence != rhs->target_classification_confidence) {
    return false;
  }
  // track_status
  if (lhs->track_status != rhs->track_status) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarObjectInfo__copy(
  const deva_perception_msgs__msg__RadarObjectInfo * input,
  deva_perception_msgs__msg__RadarObjectInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  if (!geometry_msgs__msg__Pose__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // position_std
  if (!geometry_msgs__msg__Pose__copy(
      &(input->position_std), &(output->position_std)))
  {
    return false;
  }
  // nearest_point
  if (!geometry_msgs__msg__Pose__copy(
      &(input->nearest_point), &(output->nearest_point)))
  {
    return false;
  }
  // nearest_point_std
  if (!geometry_msgs__msg__Pose__copy(
      &(input->nearest_point_std), &(output->nearest_point_std)))
  {
    return false;
  }
  // velocity_rel
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_rel), &(output->velocity_rel)))
  {
    return false;
  }
  // velocity_rel_std
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_rel_std), &(output->velocity_rel_std)))
  {
    return false;
  }
  // velocity_abs
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_abs), &(output->velocity_abs)))
  {
    return false;
  }
  // velocity_abs_std
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_abs_std), &(output->velocity_abs_std)))
  {
    return false;
  }
  // acceleration_rel
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration_rel), &(output->acceleration_rel)))
  {
    return false;
  }
  // acceleration_abs
  if (!geometry_msgs__msg__Accel__copy(
      &(input->acceleration_abs), &(output->acceleration_abs)))
  {
    return false;
  }
  // dynamic_property
  output->dynamic_property = input->dynamic_property;
  // heading_angle
  output->heading_angle = input->heading_angle;
  // life_cycles
  output->life_cycles = input->life_cycles;
  // box_lwh
  if (!geometry_msgs__msg__Point__copy(
      &(input->box_lwh), &(output->box_lwh)))
  {
    return false;
  }
  // box_center_lat
  output->box_center_lat = input->box_center_lat;
  // box_center_lgt
  output->box_center_lgt = input->box_center_lgt;
  // snr
  output->snr = input->snr;
  // classification
  output->classification = input->classification;
  // obstacle_probability
  output->obstacle_probability = input->obstacle_probability;
  // probability_of_existence
  output->probability_of_existence = input->probability_of_existence;
  // mirror_probability
  output->mirror_probability = input->mirror_probability;
  // not_real_probability
  output->not_real_probability = input->not_real_probability;
  // rcs
  output->rcs = input->rcs;
  // target_classification_confidence
  output->target_classification_confidence = input->target_classification_confidence;
  // track_status
  output->track_status = input->track_status;
  return true;
}

deva_perception_msgs__msg__RadarObjectInfo *
deva_perception_msgs__msg__RadarObjectInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObjectInfo * msg = (deva_perception_msgs__msg__RadarObjectInfo *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarObjectInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RadarObjectInfo));
  bool success = deva_perception_msgs__msg__RadarObjectInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RadarObjectInfo__destroy(deva_perception_msgs__msg__RadarObjectInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RadarObjectInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RadarObjectInfo__Sequence__init(deva_perception_msgs__msg__RadarObjectInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObjectInfo * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RadarObjectInfo *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RadarObjectInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RadarObjectInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RadarObjectInfo__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RadarObjectInfo__Sequence__fini(deva_perception_msgs__msg__RadarObjectInfo__Sequence * array)
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
      deva_perception_msgs__msg__RadarObjectInfo__fini(&array->data[i]);
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

deva_perception_msgs__msg__RadarObjectInfo__Sequence *
deva_perception_msgs__msg__RadarObjectInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObjectInfo__Sequence * array = (deva_perception_msgs__msg__RadarObjectInfo__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarObjectInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RadarObjectInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RadarObjectInfo__Sequence__destroy(deva_perception_msgs__msg__RadarObjectInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RadarObjectInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RadarObjectInfo__Sequence__are_equal(const deva_perception_msgs__msg__RadarObjectInfo__Sequence * lhs, const deva_perception_msgs__msg__RadarObjectInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RadarObjectInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarObjectInfo__Sequence__copy(
  const deva_perception_msgs__msg__RadarObjectInfo__Sequence * input,
  deva_perception_msgs__msg__RadarObjectInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RadarObjectInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RadarObjectInfo * data =
      (deva_perception_msgs__msg__RadarObjectInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RadarObjectInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RadarObjectInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RadarObjectInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
