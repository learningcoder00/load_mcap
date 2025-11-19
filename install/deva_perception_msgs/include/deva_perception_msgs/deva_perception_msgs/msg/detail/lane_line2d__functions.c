// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/LaneLine2d.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/lane_line2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__functions.h"
// Member `curve_line_coeffs`
#include "deva_perception_msgs/msg/detail/curve_coef__functions.h"

bool
deva_perception_msgs__msg__LaneLine2d__init(deva_perception_msgs__msg__LaneLine2d * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // left_lane_id
  // right_lane_id
  // confidence
  // num_points
  // lane_type
  // lane_color
  // lane_property
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->pixel_points, 0)) {
    deva_perception_msgs__msg__LaneLine2d__fini(msg);
    return false;
  }
  // curve_line_coeffs
  if (!deva_perception_msgs__msg__CurveCoef__Sequence__init(&msg->curve_line_coeffs, 0)) {
    deva_perception_msgs__msg__LaneLine2d__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__LaneLine2d__fini(deva_perception_msgs__msg__LaneLine2d * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // left_lane_id
  // right_lane_id
  // confidence
  // num_points
  // lane_type
  // lane_color
  // lane_property
  // pixel_points
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->pixel_points);
  // curve_line_coeffs
  deva_perception_msgs__msg__CurveCoef__Sequence__fini(&msg->curve_line_coeffs);
}

bool
deva_perception_msgs__msg__LaneLine2d__are_equal(const deva_perception_msgs__msg__LaneLine2d * lhs, const deva_perception_msgs__msg__LaneLine2d * rhs)
{
  if (!lhs || !rhs) {
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
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // num_points
  if (lhs->num_points != rhs->num_points) {
    return false;
  }
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // lane_color
  if (lhs->lane_color != rhs->lane_color) {
    return false;
  }
  // lane_property
  if (lhs->lane_property != rhs->lane_property) {
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__are_equal(
      &(lhs->pixel_points), &(rhs->pixel_points)))
  {
    return false;
  }
  // curve_line_coeffs
  if (!deva_perception_msgs__msg__CurveCoef__Sequence__are_equal(
      &(lhs->curve_line_coeffs), &(rhs->curve_line_coeffs)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneLine2d__copy(
  const deva_perception_msgs__msg__LaneLine2d * input,
  deva_perception_msgs__msg__LaneLine2d * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // left_lane_id
  output->left_lane_id = input->left_lane_id;
  // right_lane_id
  output->right_lane_id = input->right_lane_id;
  // confidence
  output->confidence = input->confidence;
  // num_points
  output->num_points = input->num_points;
  // lane_type
  output->lane_type = input->lane_type;
  // lane_color
  output->lane_color = input->lane_color;
  // lane_property
  output->lane_property = input->lane_property;
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->pixel_points), &(output->pixel_points)))
  {
    return false;
  }
  // curve_line_coeffs
  if (!deva_perception_msgs__msg__CurveCoef__Sequence__copy(
      &(input->curve_line_coeffs), &(output->curve_line_coeffs)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__LaneLine2d *
deva_perception_msgs__msg__LaneLine2d__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneLine2d * msg = (deva_perception_msgs__msg__LaneLine2d *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneLine2d), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__LaneLine2d));
  bool success = deva_perception_msgs__msg__LaneLine2d__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__LaneLine2d__destroy(deva_perception_msgs__msg__LaneLine2d * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__LaneLine2d__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__LaneLine2d__Sequence__init(deva_perception_msgs__msg__LaneLine2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneLine2d * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__LaneLine2d *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__LaneLine2d), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__LaneLine2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__LaneLine2d__fini(&data[i - 1]);
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
deva_perception_msgs__msg__LaneLine2d__Sequence__fini(deva_perception_msgs__msg__LaneLine2d__Sequence * array)
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
      deva_perception_msgs__msg__LaneLine2d__fini(&array->data[i]);
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

deva_perception_msgs__msg__LaneLine2d__Sequence *
deva_perception_msgs__msg__LaneLine2d__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneLine2d__Sequence * array = (deva_perception_msgs__msg__LaneLine2d__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneLine2d__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__LaneLine2d__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__LaneLine2d__Sequence__destroy(deva_perception_msgs__msg__LaneLine2d__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__LaneLine2d__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__LaneLine2d__Sequence__are_equal(const deva_perception_msgs__msg__LaneLine2d__Sequence * lhs, const deva_perception_msgs__msg__LaneLine2d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__LaneLine2d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneLine2d__Sequence__copy(
  const deva_perception_msgs__msg__LaneLine2d__Sequence * input,
  deva_perception_msgs__msg__LaneLine2d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__LaneLine2d);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__LaneLine2d * data =
      (deva_perception_msgs__msg__LaneLine2d *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__LaneLine2d__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__LaneLine2d__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__LaneLine2d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
