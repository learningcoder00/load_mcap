// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/occ_visualization__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
// Member `lidar_header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `points_type`
// Member `image_points_contours`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_perception_msgs__msg__OCCVisualization__init(deva_perception_msgs__msg__OCCVisualization * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__OCCVisualization__fini(msg);
    return false;
  }
  // lidar_header
  if (!deva_common_msgs__msg__Header__init(&msg->lidar_header)) {
    deva_perception_msgs__msg__OCCVisualization__fini(msg);
    return false;
  }
  // points_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->points_type, 0)) {
    deva_perception_msgs__msg__OCCVisualization__fini(msg);
    return false;
  }
  // voxel_pc_params
  // image_points_contours
  if (!rosidl_runtime_c__double__Sequence__init(&msg->image_points_contours, 0)) {
    deva_perception_msgs__msg__OCCVisualization__fini(msg);
    return false;
  }
  // rfu_pixel_matrix
  // rfu_utm_matrix
  return true;
}

void
deva_perception_msgs__msg__OCCVisualization__fini(deva_perception_msgs__msg__OCCVisualization * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // lidar_header
  deva_common_msgs__msg__Header__fini(&msg->lidar_header);
  // points_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->points_type);
  // voxel_pc_params
  // image_points_contours
  rosidl_runtime_c__double__Sequence__fini(&msg->image_points_contours);
  // rfu_pixel_matrix
  // rfu_utm_matrix
}

bool
deva_perception_msgs__msg__OCCVisualization__are_equal(const deva_perception_msgs__msg__OCCVisualization * lhs, const deva_perception_msgs__msg__OCCVisualization * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // lidar_header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->lidar_header), &(rhs->lidar_header)))
  {
    return false;
  }
  // points_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->points_type), &(rhs->points_type)))
  {
    return false;
  }
  // voxel_pc_params
  for (size_t i = 0; i < 4; ++i) {
    if (lhs->voxel_pc_params[i] != rhs->voxel_pc_params[i]) {
      return false;
    }
  }
  // image_points_contours
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->image_points_contours), &(rhs->image_points_contours)))
  {
    return false;
  }
  // rfu_pixel_matrix
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->rfu_pixel_matrix[i] != rhs->rfu_pixel_matrix[i]) {
      return false;
    }
  }
  // rfu_utm_matrix
  for (size_t i = 0; i < 16; ++i) {
    if (lhs->rfu_utm_matrix[i] != rhs->rfu_utm_matrix[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__OCCVisualization__copy(
  const deva_perception_msgs__msg__OCCVisualization * input,
  deva_perception_msgs__msg__OCCVisualization * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // lidar_header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->lidar_header), &(output->lidar_header)))
  {
    return false;
  }
  // points_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->points_type), &(output->points_type)))
  {
    return false;
  }
  // voxel_pc_params
  for (size_t i = 0; i < 4; ++i) {
    output->voxel_pc_params[i] = input->voxel_pc_params[i];
  }
  // image_points_contours
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->image_points_contours), &(output->image_points_contours)))
  {
    return false;
  }
  // rfu_pixel_matrix
  for (size_t i = 0; i < 16; ++i) {
    output->rfu_pixel_matrix[i] = input->rfu_pixel_matrix[i];
  }
  // rfu_utm_matrix
  for (size_t i = 0; i < 16; ++i) {
    output->rfu_utm_matrix[i] = input->rfu_utm_matrix[i];
  }
  return true;
}

deva_perception_msgs__msg__OCCVisualization *
deva_perception_msgs__msg__OCCVisualization__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__OCCVisualization * msg = (deva_perception_msgs__msg__OCCVisualization *)allocator.allocate(sizeof(deva_perception_msgs__msg__OCCVisualization), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__OCCVisualization));
  bool success = deva_perception_msgs__msg__OCCVisualization__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__OCCVisualization__destroy(deva_perception_msgs__msg__OCCVisualization * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__OCCVisualization__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__OCCVisualization__Sequence__init(deva_perception_msgs__msg__OCCVisualization__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__OCCVisualization * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__OCCVisualization *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__OCCVisualization), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__OCCVisualization__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__OCCVisualization__fini(&data[i - 1]);
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
deva_perception_msgs__msg__OCCVisualization__Sequence__fini(deva_perception_msgs__msg__OCCVisualization__Sequence * array)
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
      deva_perception_msgs__msg__OCCVisualization__fini(&array->data[i]);
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

deva_perception_msgs__msg__OCCVisualization__Sequence *
deva_perception_msgs__msg__OCCVisualization__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__OCCVisualization__Sequence * array = (deva_perception_msgs__msg__OCCVisualization__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__OCCVisualization__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__OCCVisualization__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__OCCVisualization__Sequence__destroy(deva_perception_msgs__msg__OCCVisualization__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__OCCVisualization__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__OCCVisualization__Sequence__are_equal(const deva_perception_msgs__msg__OCCVisualization__Sequence * lhs, const deva_perception_msgs__msg__OCCVisualization__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__OCCVisualization__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__OCCVisualization__Sequence__copy(
  const deva_perception_msgs__msg__OCCVisualization__Sequence * input,
  deva_perception_msgs__msg__OCCVisualization__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__OCCVisualization);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__OCCVisualization * data =
      (deva_perception_msgs__msg__OCCVisualization *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__OCCVisualization__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__OCCVisualization__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__OCCVisualization__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
