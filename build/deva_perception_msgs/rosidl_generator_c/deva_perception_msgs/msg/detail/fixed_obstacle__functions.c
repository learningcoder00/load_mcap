// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/FixedObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/fixed_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"
// Member `match_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"

bool
deva_perception_msgs__msg__FixedObstacle__init(deva_perception_msgs__msg__FixedObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__init(&msg->obstacle)) {
    deva_perception_msgs__msg__FixedObstacle__fini(msg);
    return false;
  }
  // fixed_obstacle_type
  // det_score
  // source
  // match_indices
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->match_indices, 0)) {
    deva_perception_msgs__msg__FixedObstacle__fini(msg);
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_infos, 0)) {
    deva_perception_msgs__msg__FixedObstacle__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__FixedObstacle__fini(deva_perception_msgs__msg__FixedObstacle * msg)
{
  if (!msg) {
    return;
  }
  // obstacle
  deva_perception_msgs__msg__ObstacleCommon__fini(&msg->obstacle);
  // fixed_obstacle_type
  // det_score
  // source
  // match_indices
  rosidl_runtime_c__int32__Sequence__fini(&msg->match_indices);
  // extra_infos
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_infos);
}

bool
deva_perception_msgs__msg__FixedObstacle__are_equal(const deva_perception_msgs__msg__FixedObstacle * lhs, const deva_perception_msgs__msg__FixedObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__are_equal(
      &(lhs->obstacle), &(rhs->obstacle)))
  {
    return false;
  }
  // fixed_obstacle_type
  if (lhs->fixed_obstacle_type != rhs->fixed_obstacle_type) {
    return false;
  }
  // det_score
  if (lhs->det_score != rhs->det_score) {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  // match_indices
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->match_indices), &(rhs->match_indices)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__are_equal(
      &(lhs->extra_infos), &(rhs->extra_infos)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__FixedObstacle__copy(
  const deva_perception_msgs__msg__FixedObstacle * input,
  deva_perception_msgs__msg__FixedObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__copy(
      &(input->obstacle), &(output->obstacle)))
  {
    return false;
  }
  // fixed_obstacle_type
  output->fixed_obstacle_type = input->fixed_obstacle_type;
  // det_score
  output->det_score = input->det_score;
  // source
  output->source = input->source;
  // match_indices
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->match_indices), &(output->match_indices)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_infos), &(output->extra_infos)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__FixedObstacle *
deva_perception_msgs__msg__FixedObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacle * msg = (deva_perception_msgs__msg__FixedObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__FixedObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__FixedObstacle));
  bool success = deva_perception_msgs__msg__FixedObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__FixedObstacle__destroy(deva_perception_msgs__msg__FixedObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__FixedObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__FixedObstacle__Sequence__init(deva_perception_msgs__msg__FixedObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__FixedObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__FixedObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__FixedObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__FixedObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__FixedObstacle__Sequence__fini(deva_perception_msgs__msg__FixedObstacle__Sequence * array)
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
      deva_perception_msgs__msg__FixedObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__FixedObstacle__Sequence *
deva_perception_msgs__msg__FixedObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacle__Sequence * array = (deva_perception_msgs__msg__FixedObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__FixedObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__FixedObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__FixedObstacle__Sequence__destroy(deva_perception_msgs__msg__FixedObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__FixedObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__FixedObstacle__Sequence__are_equal(const deva_perception_msgs__msg__FixedObstacle__Sequence * lhs, const deva_perception_msgs__msg__FixedObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__FixedObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__FixedObstacle__Sequence__copy(
  const deva_perception_msgs__msg__FixedObstacle__Sequence * input,
  deva_perception_msgs__msg__FixedObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__FixedObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__FixedObstacle * data =
      (deva_perception_msgs__msg__FixedObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__FixedObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__FixedObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__FixedObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
