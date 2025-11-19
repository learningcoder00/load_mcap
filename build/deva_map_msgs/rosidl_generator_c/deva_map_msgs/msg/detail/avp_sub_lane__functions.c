// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/AvpSubLane.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_sub_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_id`
// Member `successor_lane_ids`
// Member `left_lane_ids`
// Member `right_lane_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `ref_line`
#include "deva_map_msgs/msg/detail/path_point__functions.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/detail/avp_boundary__functions.h"

bool
deva_map_msgs__msg__AvpSubLane__init(deva_map_msgs__msg__AvpSubLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__init(&msg->lane_id)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__init(&msg->ref_line, 0)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__init(&msg->drivable_boundary, 0)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  // successor_lane_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->successor_lane_ids, 0)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  // left_lane_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->left_lane_ids, 0)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  // right_lane_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->right_lane_ids, 0)) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__AvpSubLane__fini(deva_map_msgs__msg__AvpSubLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  rosidl_runtime_c__String__fini(&msg->lane_id);
  // ref_line
  deva_map_msgs__msg__PathPoint__Sequence__fini(&msg->ref_line);
  // drivable_boundary
  deva_map_msgs__msg__AvpBoundary__Sequence__fini(&msg->drivable_boundary);
  // successor_lane_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->successor_lane_ids);
  // left_lane_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->left_lane_ids);
  // right_lane_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->right_lane_ids);
}

bool
deva_map_msgs__msg__AvpSubLane__are_equal(const deva_map_msgs__msg__AvpSubLane * lhs, const deva_map_msgs__msg__AvpSubLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__are_equal(
      &(lhs->ref_line), &(rhs->ref_line)))
  {
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__are_equal(
      &(lhs->drivable_boundary), &(rhs->drivable_boundary)))
  {
    return false;
  }
  // successor_lane_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->successor_lane_ids), &(rhs->successor_lane_ids)))
  {
    return false;
  }
  // left_lane_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->left_lane_ids), &(rhs->left_lane_ids)))
  {
    return false;
  }
  // right_lane_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->right_lane_ids), &(rhs->right_lane_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__AvpSubLane__copy(
  const deva_map_msgs__msg__AvpSubLane * input,
  deva_map_msgs__msg__AvpSubLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__copy(
      &(input->ref_line), &(output->ref_line)))
  {
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__copy(
      &(input->drivable_boundary), &(output->drivable_boundary)))
  {
    return false;
  }
  // successor_lane_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->successor_lane_ids), &(output->successor_lane_ids)))
  {
    return false;
  }
  // left_lane_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->left_lane_ids), &(output->left_lane_ids)))
  {
    return false;
  }
  // right_lane_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->right_lane_ids), &(output->right_lane_ids)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__AvpSubLane *
deva_map_msgs__msg__AvpSubLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubLane * msg = (deva_map_msgs__msg__AvpSubLane *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpSubLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__AvpSubLane));
  bool success = deva_map_msgs__msg__AvpSubLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__AvpSubLane__destroy(deva_map_msgs__msg__AvpSubLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__AvpSubLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__AvpSubLane__Sequence__init(deva_map_msgs__msg__AvpSubLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubLane * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__AvpSubLane *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__AvpSubLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__AvpSubLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__AvpSubLane__fini(&data[i - 1]);
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
deva_map_msgs__msg__AvpSubLane__Sequence__fini(deva_map_msgs__msg__AvpSubLane__Sequence * array)
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
      deva_map_msgs__msg__AvpSubLane__fini(&array->data[i]);
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

deva_map_msgs__msg__AvpSubLane__Sequence *
deva_map_msgs__msg__AvpSubLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpSubLane__Sequence * array = (deva_map_msgs__msg__AvpSubLane__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpSubLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__AvpSubLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__AvpSubLane__Sequence__destroy(deva_map_msgs__msg__AvpSubLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__AvpSubLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__AvpSubLane__Sequence__are_equal(const deva_map_msgs__msg__AvpSubLane__Sequence * lhs, const deva_map_msgs__msg__AvpSubLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__AvpSubLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__AvpSubLane__Sequence__copy(
  const deva_map_msgs__msg__AvpSubLane__Sequence * input,
  deva_map_msgs__msg__AvpSubLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__AvpSubLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__AvpSubLane * data =
      (deva_map_msgs__msg__AvpSubLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__AvpSubLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__AvpSubLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__AvpSubLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
