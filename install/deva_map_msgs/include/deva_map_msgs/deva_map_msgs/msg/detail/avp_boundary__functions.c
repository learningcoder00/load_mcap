// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_map_msgs__msg__AvpBoundary__init(deva_map_msgs__msg__AvpBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // s
  // left_x
  // left_y
  // left_z
  // left_region_width
  // right_x
  // right_y
  // right_z
  // right_region_width
  return true;
}

void
deva_map_msgs__msg__AvpBoundary__fini(deva_map_msgs__msg__AvpBoundary * msg)
{
  if (!msg) {
    return;
  }
  // s
  // left_x
  // left_y
  // left_z
  // left_region_width
  // right_x
  // right_y
  // right_z
  // right_region_width
}

bool
deva_map_msgs__msg__AvpBoundary__are_equal(const deva_map_msgs__msg__AvpBoundary * lhs, const deva_map_msgs__msg__AvpBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
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
  // left_region_width
  if (lhs->left_region_width != rhs->left_region_width) {
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
  // right_region_width
  if (lhs->right_region_width != rhs->right_region_width) {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__AvpBoundary__copy(
  const deva_map_msgs__msg__AvpBoundary * input,
  deva_map_msgs__msg__AvpBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // s
  output->s = input->s;
  // left_x
  output->left_x = input->left_x;
  // left_y
  output->left_y = input->left_y;
  // left_z
  output->left_z = input->left_z;
  // left_region_width
  output->left_region_width = input->left_region_width;
  // right_x
  output->right_x = input->right_x;
  // right_y
  output->right_y = input->right_y;
  // right_z
  output->right_z = input->right_z;
  // right_region_width
  output->right_region_width = input->right_region_width;
  return true;
}

deva_map_msgs__msg__AvpBoundary *
deva_map_msgs__msg__AvpBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpBoundary * msg = (deva_map_msgs__msg__AvpBoundary *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__AvpBoundary));
  bool success = deva_map_msgs__msg__AvpBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__AvpBoundary__destroy(deva_map_msgs__msg__AvpBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__AvpBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__AvpBoundary__Sequence__init(deva_map_msgs__msg__AvpBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpBoundary * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__AvpBoundary *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__AvpBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__AvpBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__AvpBoundary__fini(&data[i - 1]);
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
deva_map_msgs__msg__AvpBoundary__Sequence__fini(deva_map_msgs__msg__AvpBoundary__Sequence * array)
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
      deva_map_msgs__msg__AvpBoundary__fini(&array->data[i]);
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

deva_map_msgs__msg__AvpBoundary__Sequence *
deva_map_msgs__msg__AvpBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpBoundary__Sequence * array = (deva_map_msgs__msg__AvpBoundary__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__AvpBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__AvpBoundary__Sequence__destroy(deva_map_msgs__msg__AvpBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__AvpBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__AvpBoundary__Sequence__are_equal(const deva_map_msgs__msg__AvpBoundary__Sequence * lhs, const deva_map_msgs__msg__AvpBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__AvpBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__AvpBoundary__Sequence__copy(
  const deva_map_msgs__msg__AvpBoundary__Sequence * input,
  deva_map_msgs__msg__AvpBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__AvpBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__AvpBoundary * data =
      (deva_map_msgs__msg__AvpBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__AvpBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__AvpBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__AvpBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
