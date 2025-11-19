// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/center_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_equalization`
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"

bool
deva_perception_msgs__msg__CenterLine__init(deva_perception_msgs__msg__CenterLine * msg)
{
  if (!msg) {
    return false;
  }
  // center_line_id
  // left_lane_id
  // right_lane_id
  // lane_equalization
  if (!deva_common_msgs__msg__EquationCurve__Sequence__init(&msg->lane_equalization, 0)) {
    deva_perception_msgs__msg__CenterLine__fini(msg);
    return false;
  }
  // is_current_lane
  // is_virtual_lane
  return true;
}

void
deva_perception_msgs__msg__CenterLine__fini(deva_perception_msgs__msg__CenterLine * msg)
{
  if (!msg) {
    return;
  }
  // center_line_id
  // left_lane_id
  // right_lane_id
  // lane_equalization
  deva_common_msgs__msg__EquationCurve__Sequence__fini(&msg->lane_equalization);
  // is_current_lane
  // is_virtual_lane
}

bool
deva_perception_msgs__msg__CenterLine__are_equal(const deva_perception_msgs__msg__CenterLine * lhs, const deva_perception_msgs__msg__CenterLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // center_line_id
  if (lhs->center_line_id != rhs->center_line_id) {
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
  // lane_equalization
  if (!deva_common_msgs__msg__EquationCurve__Sequence__are_equal(
      &(lhs->lane_equalization), &(rhs->lane_equalization)))
  {
    return false;
  }
  // is_current_lane
  if (lhs->is_current_lane != rhs->is_current_lane) {
    return false;
  }
  // is_virtual_lane
  if (lhs->is_virtual_lane != rhs->is_virtual_lane) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__CenterLine__copy(
  const deva_perception_msgs__msg__CenterLine * input,
  deva_perception_msgs__msg__CenterLine * output)
{
  if (!input || !output) {
    return false;
  }
  // center_line_id
  output->center_line_id = input->center_line_id;
  // left_lane_id
  output->left_lane_id = input->left_lane_id;
  // right_lane_id
  output->right_lane_id = input->right_lane_id;
  // lane_equalization
  if (!deva_common_msgs__msg__EquationCurve__Sequence__copy(
      &(input->lane_equalization), &(output->lane_equalization)))
  {
    return false;
  }
  // is_current_lane
  output->is_current_lane = input->is_current_lane;
  // is_virtual_lane
  output->is_virtual_lane = input->is_virtual_lane;
  return true;
}

deva_perception_msgs__msg__CenterLine *
deva_perception_msgs__msg__CenterLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CenterLine * msg = (deva_perception_msgs__msg__CenterLine *)allocator.allocate(sizeof(deva_perception_msgs__msg__CenterLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__CenterLine));
  bool success = deva_perception_msgs__msg__CenterLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__CenterLine__destroy(deva_perception_msgs__msg__CenterLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__CenterLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__CenterLine__Sequence__init(deva_perception_msgs__msg__CenterLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CenterLine * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__CenterLine *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__CenterLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__CenterLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__CenterLine__fini(&data[i - 1]);
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
deva_perception_msgs__msg__CenterLine__Sequence__fini(deva_perception_msgs__msg__CenterLine__Sequence * array)
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
      deva_perception_msgs__msg__CenterLine__fini(&array->data[i]);
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

deva_perception_msgs__msg__CenterLine__Sequence *
deva_perception_msgs__msg__CenterLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__CenterLine__Sequence * array = (deva_perception_msgs__msg__CenterLine__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__CenterLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__CenterLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__CenterLine__Sequence__destroy(deva_perception_msgs__msg__CenterLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__CenterLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__CenterLine__Sequence__are_equal(const deva_perception_msgs__msg__CenterLine__Sequence * lhs, const deva_perception_msgs__msg__CenterLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__CenterLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__CenterLine__Sequence__copy(
  const deva_perception_msgs__msg__CenterLine__Sequence * input,
  deva_perception_msgs__msg__CenterLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__CenterLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__CenterLine * data =
      (deva_perception_msgs__msg__CenterLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__CenterLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__CenterLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__CenterLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
