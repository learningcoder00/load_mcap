// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/ConeArray.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/cone_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cone_array`
#include "deva_perception_msgs/msg/detail/cone__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `translation`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_perception_msgs__msg__ConeArray__init(deva_perception_msgs__msg__ConeArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__ConeArray__fini(msg);
    return false;
  }
  // cone_array
  if (!deva_perception_msgs__msg__Cone__Sequence__init(&msg->cone_array, 0)) {
    deva_perception_msgs__msg__ConeArray__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    deva_perception_msgs__msg__ConeArray__fini(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Point__init(&msg->translation)) {
    deva_perception_msgs__msg__ConeArray__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__ConeArray__fini(deva_perception_msgs__msg__ConeArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // cone_array
  deva_perception_msgs__msg__Cone__Sequence__fini(&msg->cone_array);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // translation
  geometry_msgs__msg__Point__fini(&msg->translation);
}

bool
deva_perception_msgs__msg__ConeArray__are_equal(const deva_perception_msgs__msg__ConeArray * lhs, const deva_perception_msgs__msg__ConeArray * rhs)
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
  // cone_array
  if (!deva_perception_msgs__msg__Cone__Sequence__are_equal(
      &(lhs->cone_array), &(rhs->cone_array)))
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
deva_perception_msgs__msg__ConeArray__copy(
  const deva_perception_msgs__msg__ConeArray * input,
  deva_perception_msgs__msg__ConeArray * output)
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
  // cone_array
  if (!deva_perception_msgs__msg__Cone__Sequence__copy(
      &(input->cone_array), &(output->cone_array)))
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

deva_perception_msgs__msg__ConeArray *
deva_perception_msgs__msg__ConeArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ConeArray * msg = (deva_perception_msgs__msg__ConeArray *)allocator.allocate(sizeof(deva_perception_msgs__msg__ConeArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__ConeArray));
  bool success = deva_perception_msgs__msg__ConeArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__ConeArray__destroy(deva_perception_msgs__msg__ConeArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__ConeArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__ConeArray__Sequence__init(deva_perception_msgs__msg__ConeArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ConeArray * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__ConeArray *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__ConeArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__ConeArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__ConeArray__fini(&data[i - 1]);
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
deva_perception_msgs__msg__ConeArray__Sequence__fini(deva_perception_msgs__msg__ConeArray__Sequence * array)
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
      deva_perception_msgs__msg__ConeArray__fini(&array->data[i]);
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

deva_perception_msgs__msg__ConeArray__Sequence *
deva_perception_msgs__msg__ConeArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ConeArray__Sequence * array = (deva_perception_msgs__msg__ConeArray__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__ConeArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__ConeArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__ConeArray__Sequence__destroy(deva_perception_msgs__msg__ConeArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__ConeArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__ConeArray__Sequence__are_equal(const deva_perception_msgs__msg__ConeArray__Sequence * lhs, const deva_perception_msgs__msg__ConeArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__ConeArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__ConeArray__Sequence__copy(
  const deva_perception_msgs__msg__ConeArray__Sequence * input,
  deva_perception_msgs__msg__ConeArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__ConeArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__ConeArray * data =
      (deva_perception_msgs__msg__ConeArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__ConeArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__ConeArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__ConeArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
