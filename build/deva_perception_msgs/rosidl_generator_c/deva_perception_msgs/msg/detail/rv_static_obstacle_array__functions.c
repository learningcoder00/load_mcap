// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RvStaticObstacleArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_static_obstacle_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `obstacle_array`
#include "deva_perception_msgs/msg/detail/rv_static_obstacle__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `translation`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_perception_msgs__msg__RvStaticObstacleArray__init(deva_perception_msgs__msg__RvStaticObstacleArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__RvStaticObstacleArray__fini(msg);
    return false;
  }
  // obstacle_array
  if (!deva_perception_msgs__msg__RvStaticObstacle__Sequence__init(&msg->obstacle_array, 0)) {
    deva_perception_msgs__msg__RvStaticObstacleArray__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    deva_perception_msgs__msg__RvStaticObstacleArray__fini(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Point__init(&msg->translation)) {
    deva_perception_msgs__msg__RvStaticObstacleArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__RvStaticObstacleArray__fini(deva_perception_msgs__msg__RvStaticObstacleArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // obstacle_array
  deva_perception_msgs__msg__RvStaticObstacle__Sequence__fini(&msg->obstacle_array);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // translation
  geometry_msgs__msg__Point__fini(&msg->translation);
}

bool
deva_perception_msgs__msg__RvStaticObstacleArray__are_equal(const deva_perception_msgs__msg__RvStaticObstacleArray * lhs, const deva_perception_msgs__msg__RvStaticObstacleArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // obstacle_array
  if (!deva_perception_msgs__msg__RvStaticObstacle__Sequence__are_equal(
      &(lhs->obstacle_array), &(rhs->obstacle_array)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RvStaticObstacleArray__copy(
  const deva_perception_msgs__msg__RvStaticObstacleArray * input,
  deva_perception_msgs__msg__RvStaticObstacleArray * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // obstacle_array
  if (!deva_perception_msgs__msg__RvStaticObstacle__Sequence__copy(
      &(input->obstacle_array), &(output->obstacle_array)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Point__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__RvStaticObstacleArray *
deva_perception_msgs__msg__RvStaticObstacleArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacleArray * msg = (deva_perception_msgs__msg__RvStaticObstacleArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__RvStaticObstacleArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RvStaticObstacleArray));
  bool success = deva_perception_msgs__msg__RvStaticObstacleArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RvStaticObstacleArray__destroy(deva_perception_msgs__msg__RvStaticObstacleArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RvStaticObstacleArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__init(deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacleArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RvStaticObstacleArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RvStaticObstacleArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RvStaticObstacleArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RvStaticObstacleArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__fini(deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * array)
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
      deva_perception_msgs__msg__RvStaticObstacleArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__RvStaticObstacleArray__Sequence *
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * array = (deva_perception_msgs__msg__RvStaticObstacleArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RvStaticObstacleArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__destroy(deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__are_equal(const deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * lhs, const deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RvStaticObstacleArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RvStaticObstacleArray__Sequence__copy(
  const deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * input,
  deva_perception_msgs__msg__RvStaticObstacleArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RvStaticObstacleArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RvStaticObstacleArray * data =
      (deva_perception_msgs__msg__RvStaticObstacleArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RvStaticObstacleArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RvStaticObstacleArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RvStaticObstacleArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
