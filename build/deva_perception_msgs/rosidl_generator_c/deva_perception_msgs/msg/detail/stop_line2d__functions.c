// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/StopLine2d.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/stop_line2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__functions.h"

bool
deva_perception_msgs__msg__StopLine2d__init(deva_perception_msgs__msg__StopLine2d * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // confidence
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->pixel_points, 0)) {
    deva_perception_msgs__msg__StopLine2d__fini(msg);
    return false;
  }
  // left_point_pos_lgt
  // left_point_pos_lat
  // right_point_pos_lgt
  // right_point_pos_lat
  return true;
}

void
deva_perception_msgs__msg__StopLine2d__fini(deva_perception_msgs__msg__StopLine2d * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // confidence
  // pixel_points
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->pixel_points);
  // left_point_pos_lgt
  // left_point_pos_lat
  // right_point_pos_lgt
  // right_point_pos_lat
}

bool
deva_perception_msgs__msg__StopLine2d__are_equal(const deva_perception_msgs__msg__StopLine2d * lhs, const deva_perception_msgs__msg__StopLine2d * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (lhs->lane_id != rhs->lane_id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__are_equal(
      &(lhs->pixel_points), &(rhs->pixel_points)))
  {
    return false;
  }
  // left_point_pos_lgt
  if (lhs->left_point_pos_lgt != rhs->left_point_pos_lgt) {
    return false;
  }
  // left_point_pos_lat
  if (lhs->left_point_pos_lat != rhs->left_point_pos_lat) {
    return false;
  }
  // right_point_pos_lgt
  if (lhs->right_point_pos_lgt != rhs->right_point_pos_lgt) {
    return false;
  }
  // right_point_pos_lat
  if (lhs->right_point_pos_lat != rhs->right_point_pos_lat) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__StopLine2d__copy(
  const deva_perception_msgs__msg__StopLine2d * input,
  deva_perception_msgs__msg__StopLine2d * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // confidence
  output->confidence = input->confidence;
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->pixel_points), &(output->pixel_points)))
  {
    return false;
  }
  // left_point_pos_lgt
  output->left_point_pos_lgt = input->left_point_pos_lgt;
  // left_point_pos_lat
  output->left_point_pos_lat = input->left_point_pos_lat;
  // right_point_pos_lgt
  output->right_point_pos_lgt = input->right_point_pos_lgt;
  // right_point_pos_lat
  output->right_point_pos_lat = input->right_point_pos_lat;
  return true;
}

deva_perception_msgs__msg__StopLine2d *
deva_perception_msgs__msg__StopLine2d__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__StopLine2d * msg = (deva_perception_msgs__msg__StopLine2d *)allocator.allocate(sizeof(deva_perception_msgs__msg__StopLine2d), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__StopLine2d));
  bool success = deva_perception_msgs__msg__StopLine2d__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__StopLine2d__destroy(deva_perception_msgs__msg__StopLine2d * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__StopLine2d__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__StopLine2d__Sequence__init(deva_perception_msgs__msg__StopLine2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__StopLine2d * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__StopLine2d *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__StopLine2d), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__StopLine2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__StopLine2d__fini(&data[i - 1]);
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
deva_perception_msgs__msg__StopLine2d__Sequence__fini(deva_perception_msgs__msg__StopLine2d__Sequence * array)
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
      deva_perception_msgs__msg__StopLine2d__fini(&array->data[i]);
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

deva_perception_msgs__msg__StopLine2d__Sequence *
deva_perception_msgs__msg__StopLine2d__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__StopLine2d__Sequence * array = (deva_perception_msgs__msg__StopLine2d__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__StopLine2d__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__StopLine2d__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__StopLine2d__Sequence__destroy(deva_perception_msgs__msg__StopLine2d__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__StopLine2d__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__StopLine2d__Sequence__are_equal(const deva_perception_msgs__msg__StopLine2d__Sequence * lhs, const deva_perception_msgs__msg__StopLine2d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__StopLine2d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__StopLine2d__Sequence__copy(
  const deva_perception_msgs__msg__StopLine2d__Sequence * input,
  deva_perception_msgs__msg__StopLine2d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__StopLine2d);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__StopLine2d * data =
      (deva_perception_msgs__msg__StopLine2d *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__StopLine2d__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__StopLine2d__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__StopLine2d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
