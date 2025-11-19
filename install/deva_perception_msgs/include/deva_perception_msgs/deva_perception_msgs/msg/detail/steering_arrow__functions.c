// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/SteeringArrow.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/steering_arrow__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `center_point`
// Member `vertices`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_perception_msgs__msg__SteeringArrow__init(deva_perception_msgs__msg__SteeringArrow * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // confidence
  // center_point
  if (!geometry_msgs__msg__Point__init(&msg->center_point)) {
    deva_perception_msgs__msg__SteeringArrow__fini(msg);
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__init(&msg->vertices, 0)) {
    deva_perception_msgs__msg__SteeringArrow__fini(msg);
    return false;
  }
  // center_line_id
  // property
  return true;
}

void
deva_perception_msgs__msg__SteeringArrow__fini(deva_perception_msgs__msg__SteeringArrow * msg)
{
  if (!msg) {
    return;
  }
  // id
  // confidence
  // center_point
  geometry_msgs__msg__Point__fini(&msg->center_point);
  // vertices
  geometry_msgs__msg__Point__Sequence__fini(&msg->vertices);
  // center_line_id
  // property
}

bool
deva_perception_msgs__msg__SteeringArrow__are_equal(const deva_perception_msgs__msg__SteeringArrow * lhs, const deva_perception_msgs__msg__SteeringArrow * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // center_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->center_point), &(rhs->center_point)))
  {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__are_equal(
      &(lhs->vertices), &(rhs->vertices)))
  {
    return false;
  }
  // center_line_id
  if (lhs->center_line_id != rhs->center_line_id) {
    return false;
  }
  // property
  if (lhs->property != rhs->property) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__SteeringArrow__copy(
  const deva_perception_msgs__msg__SteeringArrow * input,
  deva_perception_msgs__msg__SteeringArrow * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // confidence
  output->confidence = input->confidence;
  // center_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->center_point), &(output->center_point)))
  {
    return false;
  }
  // vertices
  if (!geometry_msgs__msg__Point__Sequence__copy(
      &(input->vertices), &(output->vertices)))
  {
    return false;
  }
  // center_line_id
  output->center_line_id = input->center_line_id;
  // property
  output->property = input->property;
  return true;
}

deva_perception_msgs__msg__SteeringArrow *
deva_perception_msgs__msg__SteeringArrow__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SteeringArrow * msg = (deva_perception_msgs__msg__SteeringArrow *)allocator.allocate(sizeof(deva_perception_msgs__msg__SteeringArrow), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__SteeringArrow));
  bool success = deva_perception_msgs__msg__SteeringArrow__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__SteeringArrow__destroy(deva_perception_msgs__msg__SteeringArrow * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__SteeringArrow__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__SteeringArrow__Sequence__init(deva_perception_msgs__msg__SteeringArrow__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SteeringArrow * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__SteeringArrow *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__SteeringArrow), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__SteeringArrow__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__SteeringArrow__fini(&data[i - 1]);
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
deva_perception_msgs__msg__SteeringArrow__Sequence__fini(deva_perception_msgs__msg__SteeringArrow__Sequence * array)
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
      deva_perception_msgs__msg__SteeringArrow__fini(&array->data[i]);
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

deva_perception_msgs__msg__SteeringArrow__Sequence *
deva_perception_msgs__msg__SteeringArrow__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SteeringArrow__Sequence * array = (deva_perception_msgs__msg__SteeringArrow__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__SteeringArrow__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__SteeringArrow__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__SteeringArrow__Sequence__destroy(deva_perception_msgs__msg__SteeringArrow__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__SteeringArrow__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__SteeringArrow__Sequence__are_equal(const deva_perception_msgs__msg__SteeringArrow__Sequence * lhs, const deva_perception_msgs__msg__SteeringArrow__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__SteeringArrow__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__SteeringArrow__Sequence__copy(
  const deva_perception_msgs__msg__SteeringArrow__Sequence * input,
  deva_perception_msgs__msg__SteeringArrow__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__SteeringArrow);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__SteeringArrow * data =
      (deva_perception_msgs__msg__SteeringArrow *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__SteeringArrow__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__SteeringArrow__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__SteeringArrow__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
