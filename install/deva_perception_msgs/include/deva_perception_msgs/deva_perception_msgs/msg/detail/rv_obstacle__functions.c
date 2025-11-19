// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RVObstacle.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_obstacle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bbox2d`
#include "deva_common_msgs/msg/detail/bounding_box2d__functions.h"

bool
deva_perception_msgs__msg__RVObstacle__init(deva_perception_msgs__msg__RVObstacle * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // score
  // distance
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__init(&msg->bbox2d)) {
    deva_perception_msgs__msg__RVObstacle__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__RVObstacle__fini(deva_perception_msgs__msg__RVObstacle * msg)
{
  if (!msg) {
    return;
  }
  // type
  // score
  // distance
  // bbox2d
  deva_common_msgs__msg__BoundingBox2d__fini(&msg->bbox2d);
}

bool
deva_perception_msgs__msg__RVObstacle__are_equal(const deva_perception_msgs__msg__RVObstacle * lhs, const deva_perception_msgs__msg__RVObstacle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // score
  if (lhs->score != rhs->score) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__are_equal(
      &(lhs->bbox2d), &(rhs->bbox2d)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RVObstacle__copy(
  const deva_perception_msgs__msg__RVObstacle * input,
  deva_perception_msgs__msg__RVObstacle * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // score
  output->score = input->score;
  // distance
  output->distance = input->distance;
  // bbox2d
  if (!deva_common_msgs__msg__BoundingBox2d__copy(
      &(input->bbox2d), &(output->bbox2d)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__RVObstacle *
deva_perception_msgs__msg__RVObstacle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVObstacle * msg = (deva_perception_msgs__msg__RVObstacle *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVObstacle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RVObstacle));
  bool success = deva_perception_msgs__msg__RVObstacle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RVObstacle__destroy(deva_perception_msgs__msg__RVObstacle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RVObstacle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RVObstacle__Sequence__init(deva_perception_msgs__msg__RVObstacle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVObstacle * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RVObstacle *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RVObstacle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RVObstacle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RVObstacle__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RVObstacle__Sequence__fini(deva_perception_msgs__msg__RVObstacle__Sequence * array)
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
      deva_perception_msgs__msg__RVObstacle__fini(&array->data[i]);
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

deva_perception_msgs__msg__RVObstacle__Sequence *
deva_perception_msgs__msg__RVObstacle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVObstacle__Sequence * array = (deva_perception_msgs__msg__RVObstacle__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVObstacle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RVObstacle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RVObstacle__Sequence__destroy(deva_perception_msgs__msg__RVObstacle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RVObstacle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RVObstacle__Sequence__are_equal(const deva_perception_msgs__msg__RVObstacle__Sequence * lhs, const deva_perception_msgs__msg__RVObstacle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RVObstacle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RVObstacle__Sequence__copy(
  const deva_perception_msgs__msg__RVObstacle__Sequence * input,
  deva_perception_msgs__msg__RVObstacle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RVObstacle);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RVObstacle * data =
      (deva_perception_msgs__msg__RVObstacle *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RVObstacle__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RVObstacle__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RVObstacle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
