// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Crosswalk2d.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/crosswalk2d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pixel_points`
#include "deva_common_msgs/msg/detail/point2d__functions.h"

bool
deva_perception_msgs__msg__Crosswalk2d__init(deva_perception_msgs__msg__Crosswalk2d * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  // confidence
  // lu_point_pos_lgt
  // lu_point_pos_lat
  // ru_point_pos_lgt
  // ru_point_pos_lat
  // rd_point_pos_lgt
  // rd_point_pos_lat
  // ld_point_pos_lgt
  // ld_point_pos_lat
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__init(&msg->pixel_points, 0)) {
    deva_perception_msgs__msg__Crosswalk2d__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__Crosswalk2d__fini(deva_perception_msgs__msg__Crosswalk2d * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  // confidence
  // lu_point_pos_lgt
  // lu_point_pos_lat
  // ru_point_pos_lgt
  // ru_point_pos_lat
  // rd_point_pos_lgt
  // rd_point_pos_lat
  // ld_point_pos_lgt
  // ld_point_pos_lat
  // pixel_points
  deva_common_msgs__msg__Point2d__Sequence__fini(&msg->pixel_points);
}

bool
deva_perception_msgs__msg__Crosswalk2d__are_equal(const deva_perception_msgs__msg__Crosswalk2d * lhs, const deva_perception_msgs__msg__Crosswalk2d * rhs)
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
  // lu_point_pos_lgt
  if (lhs->lu_point_pos_lgt != rhs->lu_point_pos_lgt) {
    return false;
  }
  // lu_point_pos_lat
  if (lhs->lu_point_pos_lat != rhs->lu_point_pos_lat) {
    return false;
  }
  // ru_point_pos_lgt
  if (lhs->ru_point_pos_lgt != rhs->ru_point_pos_lgt) {
    return false;
  }
  // ru_point_pos_lat
  if (lhs->ru_point_pos_lat != rhs->ru_point_pos_lat) {
    return false;
  }
  // rd_point_pos_lgt
  if (lhs->rd_point_pos_lgt != rhs->rd_point_pos_lgt) {
    return false;
  }
  // rd_point_pos_lat
  if (lhs->rd_point_pos_lat != rhs->rd_point_pos_lat) {
    return false;
  }
  // ld_point_pos_lgt
  if (lhs->ld_point_pos_lgt != rhs->ld_point_pos_lgt) {
    return false;
  }
  // ld_point_pos_lat
  if (lhs->ld_point_pos_lat != rhs->ld_point_pos_lat) {
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
deva_perception_msgs__msg__Crosswalk2d__copy(
  const deva_perception_msgs__msg__Crosswalk2d * input,
  deva_perception_msgs__msg__Crosswalk2d * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  output->lane_id = input->lane_id;
  // confidence
  output->confidence = input->confidence;
  // lu_point_pos_lgt
  output->lu_point_pos_lgt = input->lu_point_pos_lgt;
  // lu_point_pos_lat
  output->lu_point_pos_lat = input->lu_point_pos_lat;
  // ru_point_pos_lgt
  output->ru_point_pos_lgt = input->ru_point_pos_lgt;
  // ru_point_pos_lat
  output->ru_point_pos_lat = input->ru_point_pos_lat;
  // rd_point_pos_lgt
  output->rd_point_pos_lgt = input->rd_point_pos_lgt;
  // rd_point_pos_lat
  output->rd_point_pos_lat = input->rd_point_pos_lat;
  // ld_point_pos_lgt
  output->ld_point_pos_lgt = input->ld_point_pos_lgt;
  // ld_point_pos_lat
  output->ld_point_pos_lat = input->ld_point_pos_lat;
  // pixel_points
  if (!deva_common_msgs__msg__Point2d__Sequence__copy(
      &(input->pixel_points), &(output->pixel_points)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__Crosswalk2d *
deva_perception_msgs__msg__Crosswalk2d__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2d * msg = (deva_perception_msgs__msg__Crosswalk2d *)allocator.allocate(sizeof(deva_perception_msgs__msg__Crosswalk2d), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Crosswalk2d));
  bool success = deva_perception_msgs__msg__Crosswalk2d__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Crosswalk2d__destroy(deva_perception_msgs__msg__Crosswalk2d * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Crosswalk2d__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Crosswalk2d__Sequence__init(deva_perception_msgs__msg__Crosswalk2d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2d * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Crosswalk2d *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Crosswalk2d), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Crosswalk2d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Crosswalk2d__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Crosswalk2d__Sequence__fini(deva_perception_msgs__msg__Crosswalk2d__Sequence * array)
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
      deva_perception_msgs__msg__Crosswalk2d__fini(&array->data[i]);
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

deva_perception_msgs__msg__Crosswalk2d__Sequence *
deva_perception_msgs__msg__Crosswalk2d__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Crosswalk2d__Sequence * array = (deva_perception_msgs__msg__Crosswalk2d__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Crosswalk2d__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Crosswalk2d__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Crosswalk2d__Sequence__destroy(deva_perception_msgs__msg__Crosswalk2d__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Crosswalk2d__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Crosswalk2d__Sequence__are_equal(const deva_perception_msgs__msg__Crosswalk2d__Sequence * lhs, const deva_perception_msgs__msg__Crosswalk2d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Crosswalk2d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Crosswalk2d__Sequence__copy(
  const deva_perception_msgs__msg__Crosswalk2d__Sequence * input,
  deva_perception_msgs__msg__Crosswalk2d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Crosswalk2d);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Crosswalk2d * data =
      (deva_perception_msgs__msg__Crosswalk2d *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Crosswalk2d__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Crosswalk2d__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Crosswalk2d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
