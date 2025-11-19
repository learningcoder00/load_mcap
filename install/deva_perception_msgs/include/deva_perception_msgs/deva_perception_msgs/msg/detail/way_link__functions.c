// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/way_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `car_coord_points`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `corner_points_idx`
// Member `point_confidences`
// Member `corner_confidences`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__functions.h"

bool
deva_perception_msgs__msg__WayLink__init(deva_perception_msgs__msg__WayLink * msg)
{
  if (!msg) {
    return false;
  }
  // car_coord_points
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->car_coord_points, 0)) {
    deva_perception_msgs__msg__WayLink__fini(msg);
    return false;
  }
  // corner_points_idx
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->corner_points_idx, 0)) {
    deva_perception_msgs__msg__WayLink__fini(msg);
    return false;
  }
  // point_confidences
  if (!rosidl_runtime_c__float__Sequence__init(&msg->point_confidences, 0)) {
    deva_perception_msgs__msg__WayLink__fini(msg);
    return false;
  }
  // corner_confidences
  if (!rosidl_runtime_c__float__Sequence__init(&msg->corner_confidences, 0)) {
    deva_perception_msgs__msg__WayLink__fini(msg);
    return false;
  }
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->pixel_points, 0)) {
    deva_perception_msgs__msg__WayLink__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__WayLink__fini(deva_perception_msgs__msg__WayLink * msg)
{
  if (!msg) {
    return;
  }
  // car_coord_points
  geometry_msgs__msg__Point__Sequence__fini(&msg->car_coord_points);
  // corner_points_idx
  rosidl_runtime_c__int32__Sequence__fini(&msg->corner_points_idx);
  // point_confidences
  rosidl_runtime_c__float__Sequence__fini(&msg->point_confidences);
  // corner_confidences
  rosidl_runtime_c__float__Sequence__fini(&msg->corner_confidences);
  // pixel_points
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->pixel_points);
}

bool
deva_perception_msgs__msg__WayLink__are_equal(const deva_perception_msgs__msg__WayLink * lhs, const deva_perception_msgs__msg__WayLink * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // car_coord_points
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->car_coord_points), &(rhs->car_coord_points)))
  {
    return false;
  }
  // corner_points_idx
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->corner_points_idx), &(rhs->corner_points_idx)))
  {
    return false;
  }
  // point_confidences
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->point_confidences), &(rhs->point_confidences)))
  {
    return false;
  }
  // corner_confidences
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->corner_confidences), &(rhs->corner_confidences)))
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
deva_perception_msgs__msg__WayLink__copy(
  const deva_perception_msgs__msg__WayLink * input,
  deva_perception_msgs__msg__WayLink * output)
{
  if (!input || !output) {
    return false;
  }
  // car_coord_points
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->car_coord_points), &(output->car_coord_points)))
  {
    return false;
  }
  // corner_points_idx
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->corner_points_idx), &(output->corner_points_idx)))
  {
    return false;
  }
  // point_confidences
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->point_confidences), &(output->point_confidences)))
  {
    return false;
  }
  // corner_confidences
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->corner_confidences), &(output->corner_confidences)))
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

deva_perception_msgs__msg__WayLink *
deva_perception_msgs__msg__WayLink__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__WayLink * msg = (deva_perception_msgs__msg__WayLink *)allocator.allocate(sizeof(deva_perception_msgs__msg__WayLink), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__WayLink));
  bool success = deva_perception_msgs__msg__WayLink__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__WayLink__destroy(deva_perception_msgs__msg__WayLink * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__WayLink__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__WayLink__Sequence__init(deva_perception_msgs__msg__WayLink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__WayLink * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__WayLink *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__WayLink), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__WayLink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__WayLink__fini(&data[i - 1]);
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
deva_perception_msgs__msg__WayLink__Sequence__fini(deva_perception_msgs__msg__WayLink__Sequence * array)
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
      deva_perception_msgs__msg__WayLink__fini(&array->data[i]);
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

deva_perception_msgs__msg__WayLink__Sequence *
deva_perception_msgs__msg__WayLink__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__WayLink__Sequence * array = (deva_perception_msgs__msg__WayLink__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__WayLink__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__WayLink__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__WayLink__Sequence__destroy(deva_perception_msgs__msg__WayLink__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__WayLink__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__WayLink__Sequence__are_equal(const deva_perception_msgs__msg__WayLink__Sequence * lhs, const deva_perception_msgs__msg__WayLink__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__WayLink__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__WayLink__Sequence__copy(
  const deva_perception_msgs__msg__WayLink__Sequence * input,
  deva_perception_msgs__msg__WayLink__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__WayLink);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__WayLink * data =
      (deva_perception_msgs__msg__WayLink *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__WayLink__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__WayLink__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__WayLink__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
