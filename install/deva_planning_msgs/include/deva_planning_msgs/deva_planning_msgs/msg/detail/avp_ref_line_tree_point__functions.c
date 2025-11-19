// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_planning_msgs__msg__AvpRefLineTreePoint__init(deva_planning_msgs__msg__AvpRefLineTreePoint * msg)
{
  if (!msg) {
    return false;
  }
  // idx
  // directory
  // center_n
  // center_point_x
  // center_point_y
  // center_point_z
  // left_n
  // right_n
  // left_x
  // left_y
  // left_z
  // right_x
  // right_y
  // right_z
  return true;
}

void
deva_planning_msgs__msg__AvpRefLineTreePoint__fini(deva_planning_msgs__msg__AvpRefLineTreePoint * msg)
{
  if (!msg) {
    return;
  }
  // idx
  // directory
  // center_n
  // center_point_x
  // center_point_y
  // center_point_z
  // left_n
  // right_n
  // left_x
  // left_y
  // left_z
  // right_x
  // right_y
  // right_z
}

bool
deva_planning_msgs__msg__AvpRefLineTreePoint__are_equal(const deva_planning_msgs__msg__AvpRefLineTreePoint * lhs, const deva_planning_msgs__msg__AvpRefLineTreePoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // idx
  if (lhs->idx != rhs->idx) {
    return false;
  }
  // directory
  if (lhs->directory != rhs->directory) {
    return false;
  }
  // center_n
  if (lhs->center_n != rhs->center_n) {
    return false;
  }
  // center_point_x
  if (lhs->center_point_x != rhs->center_point_x) {
    return false;
  }
  // center_point_y
  if (lhs->center_point_y != rhs->center_point_y) {
    return false;
  }
  // center_point_z
  if (lhs->center_point_z != rhs->center_point_z) {
    return false;
  }
  // left_n
  if (lhs->left_n != rhs->left_n) {
    return false;
  }
  // right_n
  if (lhs->right_n != rhs->right_n) {
    return false;
  }
  // left_x
  if (lhs->left_x != rhs->left_x) {
    return false;
  }
  // left_y
  if (lhs->left_y != rhs->left_y) {
    return false;
  }
  // left_z
  if (lhs->left_z != rhs->left_z) {
    return false;
  }
  // right_x
  if (lhs->right_x != rhs->right_x) {
    return false;
  }
  // right_y
  if (lhs->right_y != rhs->right_y) {
    return false;
  }
  // right_z
  if (lhs->right_z != rhs->right_z) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__AvpRefLineTreePoint__copy(
  const deva_planning_msgs__msg__AvpRefLineTreePoint * input,
  deva_planning_msgs__msg__AvpRefLineTreePoint * output)
{
  if (!input || !output) {
    return false;
  }
  // idx
  output->idx = input->idx;
  // directory
  output->directory = input->directory;
  // center_n
  output->center_n = input->center_n;
  // center_point_x
  output->center_point_x = input->center_point_x;
  // center_point_y
  output->center_point_y = input->center_point_y;
  // center_point_z
  output->center_point_z = input->center_point_z;
  // left_n
  output->left_n = input->left_n;
  // right_n
  output->right_n = input->right_n;
  // left_x
  output->left_x = input->left_x;
  // left_y
  output->left_y = input->left_y;
  // left_z
  output->left_z = input->left_z;
  // right_x
  output->right_x = input->right_x;
  // right_y
  output->right_y = input->right_y;
  // right_z
  output->right_z = input->right_z;
  return true;
}

deva_planning_msgs__msg__AvpRefLineTreePoint *
deva_planning_msgs__msg__AvpRefLineTreePoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLineTreePoint * msg = (deva_planning_msgs__msg__AvpRefLineTreePoint *)allocator.allocate(sizeof(deva_planning_msgs__msg__AvpRefLineTreePoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__AvpRefLineTreePoint));
  bool success = deva_planning_msgs__msg__AvpRefLineTreePoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__AvpRefLineTreePoint__destroy(deva_planning_msgs__msg__AvpRefLineTreePoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__AvpRefLineTreePoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__init(deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLineTreePoint * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__AvpRefLineTreePoint *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__AvpRefLineTreePoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__AvpRefLineTreePoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__AvpRefLineTreePoint__fini(&data[i - 1]);
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
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__fini(deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * array)
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
      deva_planning_msgs__msg__AvpRefLineTreePoint__fini(&array->data[i]);
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

deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence *
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * array = (deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__destroy(deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__are_equal(const deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * lhs, const deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__AvpRefLineTreePoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence__copy(
  const deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * input,
  deva_planning_msgs__msg__AvpRefLineTreePoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__AvpRefLineTreePoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__AvpRefLineTreePoint * data =
      (deva_planning_msgs__msg__AvpRefLineTreePoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__AvpRefLineTreePoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__AvpRefLineTreePoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__AvpRefLineTreePoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
