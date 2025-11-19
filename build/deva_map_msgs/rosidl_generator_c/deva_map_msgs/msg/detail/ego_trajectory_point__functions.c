// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/EgoTrajectoryPoint.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/ego_trajectory_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_map_msgs__msg__EgoTrajectoryPoint__init(deva_map_msgs__msg__EgoTrajectoryPoint * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
deva_map_msgs__msg__EgoTrajectoryPoint__fini(deva_map_msgs__msg__EgoTrajectoryPoint * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
deva_map_msgs__msg__EgoTrajectoryPoint__are_equal(const deva_map_msgs__msg__EgoTrajectoryPoint * lhs, const deva_map_msgs__msg__EgoTrajectoryPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__EgoTrajectoryPoint__copy(
  const deva_map_msgs__msg__EgoTrajectoryPoint * input,
  deva_map_msgs__msg__EgoTrajectoryPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

deva_map_msgs__msg__EgoTrajectoryPoint *
deva_map_msgs__msg__EgoTrajectoryPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectoryPoint * msg = (deva_map_msgs__msg__EgoTrajectoryPoint *)allocator.allocate(sizeof(deva_map_msgs__msg__EgoTrajectoryPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__EgoTrajectoryPoint));
  bool success = deva_map_msgs__msg__EgoTrajectoryPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__EgoTrajectoryPoint__destroy(deva_map_msgs__msg__EgoTrajectoryPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__EgoTrajectoryPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectoryPoint * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__EgoTrajectoryPoint *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__EgoTrajectoryPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__EgoTrajectoryPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__EgoTrajectoryPoint__fini(&data[i - 1]);
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
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * array)
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
      deva_map_msgs__msg__EgoTrajectoryPoint__fini(&array->data[i]);
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

deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * array = (deva_map_msgs__msg__EgoTrajectoryPoint__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__EgoTrajectoryPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__destroy(deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__are_equal(const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * lhs, const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__EgoTrajectoryPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__copy(
  const deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * input,
  deva_map_msgs__msg__EgoTrajectoryPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__EgoTrajectoryPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__EgoTrajectoryPoint * data =
      (deva_map_msgs__msg__EgoTrajectoryPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__EgoTrajectoryPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__EgoTrajectoryPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__EgoTrajectoryPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
