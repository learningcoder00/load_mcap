// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/ego_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trajectory`
// Member `left_boundary`
// Member `right_boundary`
#include "deva_map_msgs/msg/detail/ego_trajectory_point__functions.h"

bool
deva_map_msgs__msg__EgoTrajectory__init(deva_map_msgs__msg__EgoTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&msg->trajectory, 0)) {
    deva_map_msgs__msg__EgoTrajectory__fini(msg);
    return false;
  }
  // left_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&msg->left_boundary, 0)) {
    deva_map_msgs__msg__EgoTrajectory__fini(msg);
    return false;
  }
  // right_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&msg->right_boundary, 0)) {
    deva_map_msgs__msg__EgoTrajectory__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__EgoTrajectory__fini(deva_map_msgs__msg__EgoTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // trajectory
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(&msg->trajectory);
  // left_boundary
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(&msg->left_boundary);
  // right_boundary
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(&msg->right_boundary);
}

bool
deva_map_msgs__msg__EgoTrajectory__are_equal(const deva_map_msgs__msg__EgoTrajectory * lhs, const deva_map_msgs__msg__EgoTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // left_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__are_equal(
      &(lhs->left_boundary), &(rhs->left_boundary)))
  {
    return false;
  }
  // right_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__are_equal(
      &(lhs->right_boundary), &(rhs->right_boundary)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__EgoTrajectory__copy(
  const deva_map_msgs__msg__EgoTrajectory * input,
  deva_map_msgs__msg__EgoTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // left_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__copy(
      &(input->left_boundary), &(output->left_boundary)))
  {
    return false;
  }
  // right_boundary
  if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__copy(
      &(input->right_boundary), &(output->right_boundary)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__EgoTrajectory *
deva_map_msgs__msg__EgoTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectory * msg = (deva_map_msgs__msg__EgoTrajectory *)allocator.allocate(sizeof(deva_map_msgs__msg__EgoTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__EgoTrajectory));
  bool success = deva_map_msgs__msg__EgoTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__EgoTrajectory__destroy(deva_map_msgs__msg__EgoTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__EgoTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__EgoTrajectory__Sequence__init(deva_map_msgs__msg__EgoTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectory * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__EgoTrajectory *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__EgoTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__EgoTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__EgoTrajectory__fini(&data[i - 1]);
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
deva_map_msgs__msg__EgoTrajectory__Sequence__fini(deva_map_msgs__msg__EgoTrajectory__Sequence * array)
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
      deva_map_msgs__msg__EgoTrajectory__fini(&array->data[i]);
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

deva_map_msgs__msg__EgoTrajectory__Sequence *
deva_map_msgs__msg__EgoTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectory__Sequence * array = (deva_map_msgs__msg__EgoTrajectory__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__EgoTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__EgoTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__EgoTrajectory__Sequence__destroy(deva_map_msgs__msg__EgoTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__EgoTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__EgoTrajectory__Sequence__are_equal(const deva_map_msgs__msg__EgoTrajectory__Sequence * lhs, const deva_map_msgs__msg__EgoTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__EgoTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__EgoTrajectory__Sequence__copy(
  const deva_map_msgs__msg__EgoTrajectory__Sequence * input,
  deva_map_msgs__msg__EgoTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__EgoTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__EgoTrajectory * data =
      (deva_map_msgs__msg__EgoTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__EgoTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__EgoTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__EgoTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
