// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/radar_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"
// Member `relative_velocity`
#include "geometry_msgs/msg/detail/twist_with_covariance__functions.h"
// Member `relative_acceleration`
#include "geometry_msgs/msg/detail/accel_with_covariance__functions.h"

bool
deva_perception_msgs__msg__RadarObject__init(deva_perception_msgs__msg__RadarObject * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // position
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->position)) {
    deva_perception_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // relative_velocity
  if (!geometry_msgs__msg__TwistWithCovariance__init(&msg->relative_velocity)) {
    deva_perception_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // relative_acceleration
  if (!geometry_msgs__msg__AccelWithCovariance__init(&msg->relative_acceleration)) {
    deva_perception_msgs__msg__RadarObject__fini(msg);
    return false;
  }
  // rcs
  // dynamic_property
  // quality_valid
  // meas_state
  // prob_of_exist
  // extended_valid
  // length
  // width
  // center_latitude
  // center_longitude
  // orientation_angle
  // class_type
  return true;
}

void
deva_perception_msgs__msg__RadarObject__fini(deva_perception_msgs__msg__RadarObject * msg)
{
  if (!msg) {
    return;
  }
  // id
  // position
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->position);
  // relative_velocity
  geometry_msgs__msg__TwistWithCovariance__fini(&msg->relative_velocity);
  // relative_acceleration
  geometry_msgs__msg__AccelWithCovariance__fini(&msg->relative_acceleration);
  // rcs
  // dynamic_property
  // quality_valid
  // meas_state
  // prob_of_exist
  // extended_valid
  // length
  // width
  // center_latitude
  // center_longitude
  // orientation_angle
  // class_type
}

bool
deva_perception_msgs__msg__RadarObject__are_equal(const deva_perception_msgs__msg__RadarObject * lhs, const deva_perception_msgs__msg__RadarObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // relative_velocity
  if (!geometry_msgs__msg__TwistWithCovariance__are_equal(
      &(lhs->relative_velocity), &(rhs->relative_velocity)))
  {
    return false;
  }
  // relative_acceleration
  if (!geometry_msgs__msg__AccelWithCovariance__are_equal(
      &(lhs->relative_acceleration), &(rhs->relative_acceleration)))
  {
    return false;
  }
  // rcs
  if (lhs->rcs != rhs->rcs) {
    return false;
  }
  // dynamic_property
  if (lhs->dynamic_property != rhs->dynamic_property) {
    return false;
  }
  // quality_valid
  if (lhs->quality_valid != rhs->quality_valid) {
    return false;
  }
  // meas_state
  if (lhs->meas_state != rhs->meas_state) {
    return false;
  }
  // prob_of_exist
  if (lhs->prob_of_exist != rhs->prob_of_exist) {
    return false;
  }
  // extended_valid
  if (lhs->extended_valid != rhs->extended_valid) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // center_latitude
  if (lhs->center_latitude != rhs->center_latitude) {
    return false;
  }
  // center_longitude
  if (lhs->center_longitude != rhs->center_longitude) {
    return false;
  }
  // orientation_angle
  if (lhs->orientation_angle != rhs->orientation_angle) {
    return false;
  }
  // class_type
  if (lhs->class_type != rhs->class_type) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarObject__copy(
  const deva_perception_msgs__msg__RadarObject * input,
  deva_perception_msgs__msg__RadarObject * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // position
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // relative_velocity
  if (!geometry_msgs__msg__TwistWithCovariance__copy(
      &(input->relative_velocity), &(output->relative_velocity)))
  {
    return false;
  }
  // relative_acceleration
  if (!geometry_msgs__msg__AccelWithCovariance__copy(
      &(input->relative_acceleration), &(output->relative_acceleration)))
  {
    return false;
  }
  // rcs
  output->rcs = input->rcs;
  // dynamic_property
  output->dynamic_property = input->dynamic_property;
  // quality_valid
  output->quality_valid = input->quality_valid;
  // meas_state
  output->meas_state = input->meas_state;
  // prob_of_exist
  output->prob_of_exist = input->prob_of_exist;
  // extended_valid
  output->extended_valid = input->extended_valid;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // center_latitude
  output->center_latitude = input->center_latitude;
  // center_longitude
  output->center_longitude = input->center_longitude;
  // orientation_angle
  output->orientation_angle = input->orientation_angle;
  // class_type
  output->class_type = input->class_type;
  return true;
}

deva_perception_msgs__msg__RadarObject *
deva_perception_msgs__msg__RadarObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObject * msg = (deva_perception_msgs__msg__RadarObject *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RadarObject));
  bool success = deva_perception_msgs__msg__RadarObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RadarObject__destroy(deva_perception_msgs__msg__RadarObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RadarObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RadarObject__Sequence__init(deva_perception_msgs__msg__RadarObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObject * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RadarObject *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RadarObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RadarObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RadarObject__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RadarObject__Sequence__fini(deva_perception_msgs__msg__RadarObject__Sequence * array)
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
      deva_perception_msgs__msg__RadarObject__fini(&array->data[i]);
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

deva_perception_msgs__msg__RadarObject__Sequence *
deva_perception_msgs__msg__RadarObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarObject__Sequence * array = (deva_perception_msgs__msg__RadarObject__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RadarObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RadarObject__Sequence__destroy(deva_perception_msgs__msg__RadarObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RadarObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RadarObject__Sequence__are_equal(const deva_perception_msgs__msg__RadarObject__Sequence * lhs, const deva_perception_msgs__msg__RadarObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RadarObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarObject__Sequence__copy(
  const deva_perception_msgs__msg__RadarObject__Sequence * input,
  deva_perception_msgs__msg__RadarObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RadarObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RadarObject * data =
      (deva_perception_msgs__msg__RadarObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RadarObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RadarObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RadarObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
