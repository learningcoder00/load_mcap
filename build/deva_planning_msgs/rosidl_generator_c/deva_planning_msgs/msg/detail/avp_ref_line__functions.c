// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/AvpRefLine.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/avp_ref_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_planning_msgs__msg__AvpRefLine__init(deva_planning_msgs__msg__AvpRefLine * msg)
{
  if (!msg) {
    return false;
  }
  // s
  // x
  // y
  // z
  // heading
  // left_boundary_x
  // left_boundary_y
  // left_boundary_z
  // right_boundary_x
  // right_boundary_y
  // right_boundary_z
  // left_boundary_n
  // right_boundary_n
  // is_junction
  return true;
}

void
deva_planning_msgs__msg__AvpRefLine__fini(deva_planning_msgs__msg__AvpRefLine * msg)
{
  if (!msg) {
    return;
  }
  // s
  // x
  // y
  // z
  // heading
  // left_boundary_x
  // left_boundary_y
  // left_boundary_z
  // right_boundary_x
  // right_boundary_y
  // right_boundary_z
  // left_boundary_n
  // right_boundary_n
  // is_junction
}

bool
deva_planning_msgs__msg__AvpRefLine__are_equal(const deva_planning_msgs__msg__AvpRefLine * lhs, const deva_planning_msgs__msg__AvpRefLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // heading
  if (lhs->heading != rhs->heading) {
    return false;
  }
  // left_boundary_x
  if (lhs->left_boundary_x != rhs->left_boundary_x) {
    return false;
  }
  // left_boundary_y
  if (lhs->left_boundary_y != rhs->left_boundary_y) {
    return false;
  }
  // left_boundary_z
  if (lhs->left_boundary_z != rhs->left_boundary_z) {
    return false;
  }
  // right_boundary_x
  if (lhs->right_boundary_x != rhs->right_boundary_x) {
    return false;
  }
  // right_boundary_y
  if (lhs->right_boundary_y != rhs->right_boundary_y) {
    return false;
  }
  // right_boundary_z
  if (lhs->right_boundary_z != rhs->right_boundary_z) {
    return false;
  }
  // left_boundary_n
  if (lhs->left_boundary_n != rhs->left_boundary_n) {
    return false;
  }
  // right_boundary_n
  if (lhs->right_boundary_n != rhs->right_boundary_n) {
    return false;
  }
  // is_junction
  if (lhs->is_junction != rhs->is_junction) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__AvpRefLine__copy(
  const deva_planning_msgs__msg__AvpRefLine * input,
  deva_planning_msgs__msg__AvpRefLine * output)
{
  if (!input || !output) {
    return false;
  }
  // s
  output->s = input->s;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // heading
  output->heading = input->heading;
  // left_boundary_x
  output->left_boundary_x = input->left_boundary_x;
  // left_boundary_y
  output->left_boundary_y = input->left_boundary_y;
  // left_boundary_z
  output->left_boundary_z = input->left_boundary_z;
  // right_boundary_x
  output->right_boundary_x = input->right_boundary_x;
  // right_boundary_y
  output->right_boundary_y = input->right_boundary_y;
  // right_boundary_z
  output->right_boundary_z = input->right_boundary_z;
  // left_boundary_n
  output->left_boundary_n = input->left_boundary_n;
  // right_boundary_n
  output->right_boundary_n = input->right_boundary_n;
  // is_junction
  output->is_junction = input->is_junction;
  return true;
}

deva_planning_msgs__msg__AvpRefLine *
deva_planning_msgs__msg__AvpRefLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLine * msg = (deva_planning_msgs__msg__AvpRefLine *)allocator.allocate(sizeof(deva_planning_msgs__msg__AvpRefLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__AvpRefLine));
  bool success = deva_planning_msgs__msg__AvpRefLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__AvpRefLine__destroy(deva_planning_msgs__msg__AvpRefLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__AvpRefLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__AvpRefLine__Sequence__init(deva_planning_msgs__msg__AvpRefLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLine * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__AvpRefLine *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__AvpRefLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__AvpRefLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__AvpRefLine__fini(&data[i - 1]);
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
deva_planning_msgs__msg__AvpRefLine__Sequence__fini(deva_planning_msgs__msg__AvpRefLine__Sequence * array)
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
      deva_planning_msgs__msg__AvpRefLine__fini(&array->data[i]);
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

deva_planning_msgs__msg__AvpRefLine__Sequence *
deva_planning_msgs__msg__AvpRefLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__AvpRefLine__Sequence * array = (deva_planning_msgs__msg__AvpRefLine__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__AvpRefLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__AvpRefLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__AvpRefLine__Sequence__destroy(deva_planning_msgs__msg__AvpRefLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__AvpRefLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__AvpRefLine__Sequence__are_equal(const deva_planning_msgs__msg__AvpRefLine__Sequence * lhs, const deva_planning_msgs__msg__AvpRefLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__AvpRefLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__AvpRefLine__Sequence__copy(
  const deva_planning_msgs__msg__AvpRefLine__Sequence * input,
  deva_planning_msgs__msg__AvpRefLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__AvpRefLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__AvpRefLine * data =
      (deva_planning_msgs__msg__AvpRefLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__AvpRefLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__AvpRefLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__AvpRefLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
