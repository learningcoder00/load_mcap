// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/reference_lines__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `reference_lines`
#include "deva_planning_msgs2/msg/detail/reference_line__functions.h"

bool
deva_planning_msgs2__msg__ReferenceLines__init(deva_planning_msgs2__msg__ReferenceLines * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs2__msg__ReferenceLines__fini(msg);
    return false;
  }
  // reference_lines
  if (!deva_planning_msgs2__msg__ReferenceLine__Sequence__init(&msg->reference_lines, 0)) {
    deva_planning_msgs2__msg__ReferenceLines__fini(msg);
    return false;
  }
  // curr_id
  // tar_id
  // curr_model_id
  // curr_line_virtual
  // curr_left_nums
  // curr_right_nums
  return true;
}

void
deva_planning_msgs2__msg__ReferenceLines__fini(deva_planning_msgs2__msg__ReferenceLines * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // reference_lines
  deva_planning_msgs2__msg__ReferenceLine__Sequence__fini(&msg->reference_lines);
  // curr_id
  // tar_id
  // curr_model_id
  // curr_line_virtual
  // curr_left_nums
  // curr_right_nums
}

bool
deva_planning_msgs2__msg__ReferenceLines__are_equal(const deva_planning_msgs2__msg__ReferenceLines * lhs, const deva_planning_msgs2__msg__ReferenceLines * rhs)
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
  // reference_lines
  if (!deva_planning_msgs2__msg__ReferenceLine__Sequence__are_equal(
      &(lhs->reference_lines), &(rhs->reference_lines)))
  {
    return false;
  }
  // curr_id
  if (lhs->curr_id != rhs->curr_id) {
    return false;
  }
  // tar_id
  if (lhs->tar_id != rhs->tar_id) {
    return false;
  }
  // curr_model_id
  if (lhs->curr_model_id != rhs->curr_model_id) {
    return false;
  }
  // curr_line_virtual
  if (lhs->curr_line_virtual != rhs->curr_line_virtual) {
    return false;
  }
  // curr_left_nums
  if (lhs->curr_left_nums != rhs->curr_left_nums) {
    return false;
  }
  // curr_right_nums
  if (lhs->curr_right_nums != rhs->curr_right_nums) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs2__msg__ReferenceLines__copy(
  const deva_planning_msgs2__msg__ReferenceLines * input,
  deva_planning_msgs2__msg__ReferenceLines * output)
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
  // reference_lines
  if (!deva_planning_msgs2__msg__ReferenceLine__Sequence__copy(
      &(input->reference_lines), &(output->reference_lines)))
  {
    return false;
  }
  // curr_id
  output->curr_id = input->curr_id;
  // tar_id
  output->tar_id = input->tar_id;
  // curr_model_id
  output->curr_model_id = input->curr_model_id;
  // curr_line_virtual
  output->curr_line_virtual = input->curr_line_virtual;
  // curr_left_nums
  output->curr_left_nums = input->curr_left_nums;
  // curr_right_nums
  output->curr_right_nums = input->curr_right_nums;
  return true;
}

deva_planning_msgs2__msg__ReferenceLines *
deva_planning_msgs2__msg__ReferenceLines__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__ReferenceLines * msg = (deva_planning_msgs2__msg__ReferenceLines *)allocator.allocate(sizeof(deva_planning_msgs2__msg__ReferenceLines), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs2__msg__ReferenceLines));
  bool success = deva_planning_msgs2__msg__ReferenceLines__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs2__msg__ReferenceLines__destroy(deva_planning_msgs2__msg__ReferenceLines * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs2__msg__ReferenceLines__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs2__msg__ReferenceLines__Sequence__init(deva_planning_msgs2__msg__ReferenceLines__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__ReferenceLines * data = NULL;

  if (size) {
    data = (deva_planning_msgs2__msg__ReferenceLines *)allocator.zero_allocate(size, sizeof(deva_planning_msgs2__msg__ReferenceLines), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs2__msg__ReferenceLines__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs2__msg__ReferenceLines__fini(&data[i - 1]);
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
deva_planning_msgs2__msg__ReferenceLines__Sequence__fini(deva_planning_msgs2__msg__ReferenceLines__Sequence * array)
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
      deva_planning_msgs2__msg__ReferenceLines__fini(&array->data[i]);
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

deva_planning_msgs2__msg__ReferenceLines__Sequence *
deva_planning_msgs2__msg__ReferenceLines__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs2__msg__ReferenceLines__Sequence * array = (deva_planning_msgs2__msg__ReferenceLines__Sequence *)allocator.allocate(sizeof(deva_planning_msgs2__msg__ReferenceLines__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs2__msg__ReferenceLines__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs2__msg__ReferenceLines__Sequence__destroy(deva_planning_msgs2__msg__ReferenceLines__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs2__msg__ReferenceLines__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs2__msg__ReferenceLines__Sequence__are_equal(const deva_planning_msgs2__msg__ReferenceLines__Sequence * lhs, const deva_planning_msgs2__msg__ReferenceLines__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs2__msg__ReferenceLines__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs2__msg__ReferenceLines__Sequence__copy(
  const deva_planning_msgs2__msg__ReferenceLines__Sequence * input,
  deva_planning_msgs2__msg__ReferenceLines__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs2__msg__ReferenceLines);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs2__msg__ReferenceLines * data =
      (deva_planning_msgs2__msg__ReferenceLines *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs2__msg__ReferenceLines__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs2__msg__ReferenceLines__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs2__msg__ReferenceLines__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
