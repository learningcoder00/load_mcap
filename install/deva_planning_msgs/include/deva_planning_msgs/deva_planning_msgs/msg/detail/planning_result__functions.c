// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/PlanningResult.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/planning_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `sensor_time`
#include "deva_planning_msgs/msg/detail/sensor_time__functions.h"
// Member `trajectories`
#include "deva_planning_msgs/msg/detail/planning_trajectory__functions.h"

bool
deva_planning_msgs__msg__PlanningResult__init(deva_planning_msgs__msg__PlanningResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs__msg__PlanningResult__fini(msg);
    return false;
  }
  // sensor_time
  if (!deva_planning_msgs__msg__SensorTime__init(&msg->sensor_time)) {
    deva_planning_msgs__msg__PlanningResult__fini(msg);
    return false;
  }
  // trajectories
  if (!deva_planning_msgs__msg__PlanningTrajectory__Sequence__init(&msg->trajectories, 0)) {
    deva_planning_msgs__msg__PlanningResult__fini(msg);
    return false;
  }
  // status
  return true;
}

void
deva_planning_msgs__msg__PlanningResult__fini(deva_planning_msgs__msg__PlanningResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // sensor_time
  deva_planning_msgs__msg__SensorTime__fini(&msg->sensor_time);
  // trajectories
  deva_planning_msgs__msg__PlanningTrajectory__Sequence__fini(&msg->trajectories);
  // status
}

bool
deva_planning_msgs__msg__PlanningResult__are_equal(const deva_planning_msgs__msg__PlanningResult * lhs, const deva_planning_msgs__msg__PlanningResult * rhs)
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
  // sensor_time
  if (!deva_planning_msgs__msg__SensorTime__are_equal(
      &(lhs->sensor_time), &(rhs->sensor_time)))
  {
    return false;
  }
  // trajectories
  if (!deva_planning_msgs__msg__PlanningTrajectory__Sequence__are_equal(
      &(lhs->trajectories), &(rhs->trajectories)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__PlanningResult__copy(
  const deva_planning_msgs__msg__PlanningResult * input,
  deva_planning_msgs__msg__PlanningResult * output)
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
  // sensor_time
  if (!deva_planning_msgs__msg__SensorTime__copy(
      &(input->sensor_time), &(output->sensor_time)))
  {
    return false;
  }
  // trajectories
  if (!deva_planning_msgs__msg__PlanningTrajectory__Sequence__copy(
      &(input->trajectories), &(output->trajectories)))
  {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

deva_planning_msgs__msg__PlanningResult *
deva_planning_msgs__msg__PlanningResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningResult * msg = (deva_planning_msgs__msg__PlanningResult *)allocator.allocate(sizeof(deva_planning_msgs__msg__PlanningResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__PlanningResult));
  bool success = deva_planning_msgs__msg__PlanningResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__PlanningResult__destroy(deva_planning_msgs__msg__PlanningResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__PlanningResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__PlanningResult__Sequence__init(deva_planning_msgs__msg__PlanningResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningResult * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__PlanningResult *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__PlanningResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__PlanningResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__PlanningResult__fini(&data[i - 1]);
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
deva_planning_msgs__msg__PlanningResult__Sequence__fini(deva_planning_msgs__msg__PlanningResult__Sequence * array)
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
      deva_planning_msgs__msg__PlanningResult__fini(&array->data[i]);
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

deva_planning_msgs__msg__PlanningResult__Sequence *
deva_planning_msgs__msg__PlanningResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__PlanningResult__Sequence * array = (deva_planning_msgs__msg__PlanningResult__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__PlanningResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__PlanningResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__PlanningResult__Sequence__destroy(deva_planning_msgs__msg__PlanningResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__PlanningResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__PlanningResult__Sequence__are_equal(const deva_planning_msgs__msg__PlanningResult__Sequence * lhs, const deva_planning_msgs__msg__PlanningResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__PlanningResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__PlanningResult__Sequence__copy(
  const deva_planning_msgs__msg__PlanningResult__Sequence * input,
  deva_planning_msgs__msg__PlanningResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__PlanningResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__PlanningResult * data =
      (deva_planning_msgs__msg__PlanningResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__PlanningResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__PlanningResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__PlanningResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
