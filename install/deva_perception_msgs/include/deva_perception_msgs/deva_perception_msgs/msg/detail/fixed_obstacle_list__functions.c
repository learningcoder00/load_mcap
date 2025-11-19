// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/FixedObstacleList.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/fixed_obstacle_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fixed_obstacles`
#include "deva_perception_msgs/msg/detail/fixed_obstacle__functions.h"

bool
deva_perception_msgs__msg__FixedObstacleList__init(deva_perception_msgs__msg__FixedObstacleList * msg)
{
  if (!msg) {
    return false;
  }
  // fixed_obstacles
  if (!deva_perception_msgs__msg__FixedObstacle__Sequence__init(&msg->fixed_obstacles, 0)) {
    deva_perception_msgs__msg__FixedObstacleList__fini(msg);
    return false;
  }
  // source
  return true;
}

void
deva_perception_msgs__msg__FixedObstacleList__fini(deva_perception_msgs__msg__FixedObstacleList * msg)
{
  if (!msg) {
    return;
  }
  // fixed_obstacles
  deva_perception_msgs__msg__FixedObstacle__Sequence__fini(&msg->fixed_obstacles);
  // source
}

bool
deva_perception_msgs__msg__FixedObstacleList__are_equal(const deva_perception_msgs__msg__FixedObstacleList * lhs, const deva_perception_msgs__msg__FixedObstacleList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fixed_obstacles
  if (!deva_perception_msgs__msg__FixedObstacle__Sequence__are_equal(
      &(lhs->fixed_obstacles), &(rhs->fixed_obstacles)))
  {
    return false;
  }
  // source
  if (lhs->source != rhs->source) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__FixedObstacleList__copy(
  const deva_perception_msgs__msg__FixedObstacleList * input,
  deva_perception_msgs__msg__FixedObstacleList * output)
{
  if (!input || !output) {
    return false;
  }
  // fixed_obstacles
  if (!deva_perception_msgs__msg__FixedObstacle__Sequence__copy(
      &(input->fixed_obstacles), &(output->fixed_obstacles)))
  {
    return false;
  }
  // source
  output->source = input->source;
  return true;
}

deva_perception_msgs__msg__FixedObstacleList *
deva_perception_msgs__msg__FixedObstacleList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacleList * msg = (deva_perception_msgs__msg__FixedObstacleList *)allocator.allocate(sizeof(deva_perception_msgs__msg__FixedObstacleList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__FixedObstacleList));
  bool success = deva_perception_msgs__msg__FixedObstacleList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__FixedObstacleList__destroy(deva_perception_msgs__msg__FixedObstacleList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__FixedObstacleList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__FixedObstacleList__Sequence__init(deva_perception_msgs__msg__FixedObstacleList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacleList * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__FixedObstacleList *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__FixedObstacleList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__FixedObstacleList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__FixedObstacleList__fini(&data[i - 1]);
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
deva_perception_msgs__msg__FixedObstacleList__Sequence__fini(deva_perception_msgs__msg__FixedObstacleList__Sequence * array)
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
      deva_perception_msgs__msg__FixedObstacleList__fini(&array->data[i]);
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

deva_perception_msgs__msg__FixedObstacleList__Sequence *
deva_perception_msgs__msg__FixedObstacleList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__FixedObstacleList__Sequence * array = (deva_perception_msgs__msg__FixedObstacleList__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__FixedObstacleList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__FixedObstacleList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__FixedObstacleList__Sequence__destroy(deva_perception_msgs__msg__FixedObstacleList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__FixedObstacleList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__FixedObstacleList__Sequence__are_equal(const deva_perception_msgs__msg__FixedObstacleList__Sequence * lhs, const deva_perception_msgs__msg__FixedObstacleList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__FixedObstacleList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__FixedObstacleList__Sequence__copy(
  const deva_perception_msgs__msg__FixedObstacleList__Sequence * input,
  deva_perception_msgs__msg__FixedObstacleList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__FixedObstacleList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__FixedObstacleList * data =
      (deva_perception_msgs__msg__FixedObstacleList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__FixedObstacleList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__FixedObstacleList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__FixedObstacleList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
