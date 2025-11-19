// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/MutableObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/mutable_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `static_obstacle`
#include "deva_perception_msgs/msg/detail/static_obstacle__functions.h"

bool
deva_perception_msgs__msg__MutableObstacle__init(deva_perception_msgs__msg__MutableObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // static_obstacle
  if (!deva_perception_msgs__msg__StaticObstacle__init(&msg->static_obstacle)) {
    deva_perception_msgs__msg__MutableObstacle__fini(msg);
    return false;
  }
  // is_blocked
  return true;
}

void
deva_perception_msgs__msg__MutableObstacle__fini(deva_perception_msgs__msg__MutableObstacle * msg)
{
  if (!msg) {
    return;
  }
  // static_obstacle
  deva_perception_msgs__msg__StaticObstacle__fini(&msg->static_obstacle);
  // is_blocked
}

bool
deva_perception_msgs__msg__MutableObstacle__are_equal(const deva_perception_msgs__msg__MutableObstacle * lhs, const deva_perception_msgs__msg__MutableObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // static_obstacle
  if (!deva_perception_msgs__msg__StaticObstacle__are_equal(
      &(lhs->static_obstacle), &(rhs->static_obstacle)))
  {
    return false;
  }
  // is_blocked
  if (lhs->is_blocked != rhs->is_blocked) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__MutableObstacle__copy(
  const deva_perception_msgs__msg__MutableObstacle * input,
  deva_perception_msgs__msg__MutableObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // static_obstacle
  if (!deva_perception_msgs__msg__StaticObstacle__copy(
      &(input->static_obstacle), &(output->static_obstacle)))
  {
    return false;
  }
  // is_blocked
  output->is_blocked = input->is_blocked;
  return true;
}

deva_perception_msgs__msg__MutableObstacle *
deva_perception_msgs__msg__MutableObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__MutableObstacle * msg = (deva_perception_msgs__msg__MutableObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__MutableObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__MutableObstacle));
  bool success = deva_perception_msgs__msg__MutableObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__MutableObstacle__destroy(deva_perception_msgs__msg__MutableObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__MutableObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__MutableObstacle__Sequence__init(deva_perception_msgs__msg__MutableObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__MutableObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__MutableObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__MutableObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__MutableObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__MutableObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__MutableObstacle__Sequence__fini(deva_perception_msgs__msg__MutableObstacle__Sequence * array)
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
      deva_perception_msgs__msg__MutableObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__MutableObstacle__Sequence *
deva_perception_msgs__msg__MutableObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__MutableObstacle__Sequence * array = (deva_perception_msgs__msg__MutableObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__MutableObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__MutableObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__MutableObstacle__Sequence__destroy(deva_perception_msgs__msg__MutableObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__MutableObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__MutableObstacle__Sequence__are_equal(const deva_perception_msgs__msg__MutableObstacle__Sequence * lhs, const deva_perception_msgs__msg__MutableObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__MutableObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__MutableObstacle__Sequence__copy(
  const deva_perception_msgs__msg__MutableObstacle__Sequence * input,
  deva_perception_msgs__msg__MutableObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__MutableObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__MutableObstacle * data =
      (deva_perception_msgs__msg__MutableObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__MutableObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__MutableObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__MutableObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
