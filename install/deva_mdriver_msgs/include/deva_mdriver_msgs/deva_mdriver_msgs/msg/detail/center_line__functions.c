// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_mdriver_msgs:msg/CenterLine.idl
// generated code does not contain a copyright notice
#include "deva_mdriver_msgs/msg/detail/center_line__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pts`
#include "deva_mdriver_msgs/msg/detail/center_line_point__functions.h"
// Member `pre_ids`
// Member `suc_ids`
// Member `traffic_elem_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_mdriver_msgs__msg__CenterLine__init(deva_mdriver_msgs__msg__CenterLine * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // pts
  if (!deva_mdriver_msgs__msg__CenterLinePoint__Sequence__init(&msg->pts, 0)) {
    deva_mdriver_msgs__msg__CenterLine__fini(msg);
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->pre_ids, 0)) {
    deva_mdriver_msgs__msg__CenterLine__fini(msg);
    return false;
  }
  // suc_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->suc_ids, 0)) {
    deva_mdriver_msgs__msg__CenterLine__fini(msg);
    return false;
  }
  // left_line_attr
  // right_line_attr
  // left_line_dist
  // right_line_dist
  // traffic_elem_ids
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->traffic_elem_ids, 0)) {
    deva_mdriver_msgs__msg__CenterLine__fini(msg);
    return false;
  }
  return true;
}

void
deva_mdriver_msgs__msg__CenterLine__fini(deva_mdriver_msgs__msg__CenterLine * msg)
{
  if (!msg) {
    return;
  }
  // id
  // pts
  deva_mdriver_msgs__msg__CenterLinePoint__Sequence__fini(&msg->pts);
  // pre_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->pre_ids);
  // suc_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->suc_ids);
  // left_line_attr
  // right_line_attr
  // left_line_dist
  // right_line_dist
  // traffic_elem_ids
  rosidl_runtime_c__int32__Sequence__fini(&msg->traffic_elem_ids);
}

bool
deva_mdriver_msgs__msg__CenterLine__are_equal(const deva_mdriver_msgs__msg__CenterLine * lhs, const deva_mdriver_msgs__msg__CenterLine * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pts
  if (!deva_mdriver_msgs__msg__CenterLinePoint__Sequence__are_equal(
      &(lhs->pts), &(rhs->pts)))
  {
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->pre_ids), &(rhs->pre_ids)))
  {
    return false;
  }
  // suc_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->suc_ids), &(rhs->suc_ids)))
  {
    return false;
  }
  // left_line_attr
  if (lhs->left_line_attr != rhs->left_line_attr) {
    return false;
  }
  // right_line_attr
  if (lhs->right_line_attr != rhs->right_line_attr) {
    return false;
  }
  // left_line_dist
  if (lhs->left_line_dist != rhs->left_line_dist) {
    return false;
  }
  // right_line_dist
  if (lhs->right_line_dist != rhs->right_line_dist) {
    return false;
  }
  // traffic_elem_ids
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->traffic_elem_ids), &(rhs->traffic_elem_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_mdriver_msgs__msg__CenterLine__copy(
  const deva_mdriver_msgs__msg__CenterLine * input,
  deva_mdriver_msgs__msg__CenterLine * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // pts
  if (!deva_mdriver_msgs__msg__CenterLinePoint__Sequence__copy(
      &(input->pts), &(output->pts)))
  {
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->pre_ids), &(output->pre_ids)))
  {
    return false;
  }
  // suc_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->suc_ids), &(output->suc_ids)))
  {
    return false;
  }
  // left_line_attr
  output->left_line_attr = input->left_line_attr;
  // right_line_attr
  output->right_line_attr = input->right_line_attr;
  // left_line_dist
  output->left_line_dist = input->left_line_dist;
  // right_line_dist
  output->right_line_dist = input->right_line_dist;
  // traffic_elem_ids
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->traffic_elem_ids), &(output->traffic_elem_ids)))
  {
    return false;
  }
  return true;
}

deva_mdriver_msgs__msg__CenterLine *
deva_mdriver_msgs__msg__CenterLine__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLine * msg = (deva_mdriver_msgs__msg__CenterLine *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__CenterLine), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_mdriver_msgs__msg__CenterLine));
  bool success = deva_mdriver_msgs__msg__CenterLine__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_mdriver_msgs__msg__CenterLine__destroy(deva_mdriver_msgs__msg__CenterLine * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_mdriver_msgs__msg__CenterLine__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_mdriver_msgs__msg__CenterLine__Sequence__init(deva_mdriver_msgs__msg__CenterLine__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLine * data = NULL;

  if (size) {
    data = (deva_mdriver_msgs__msg__CenterLine *)allocator.zero_allocate(size, sizeof(deva_mdriver_msgs__msg__CenterLine), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_mdriver_msgs__msg__CenterLine__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_mdriver_msgs__msg__CenterLine__fini(&data[i - 1]);
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
deva_mdriver_msgs__msg__CenterLine__Sequence__fini(deva_mdriver_msgs__msg__CenterLine__Sequence * array)
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
      deva_mdriver_msgs__msg__CenterLine__fini(&array->data[i]);
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

deva_mdriver_msgs__msg__CenterLine__Sequence *
deva_mdriver_msgs__msg__CenterLine__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_mdriver_msgs__msg__CenterLine__Sequence * array = (deva_mdriver_msgs__msg__CenterLine__Sequence *)allocator.allocate(sizeof(deva_mdriver_msgs__msg__CenterLine__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_mdriver_msgs__msg__CenterLine__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_mdriver_msgs__msg__CenterLine__Sequence__destroy(deva_mdriver_msgs__msg__CenterLine__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_mdriver_msgs__msg__CenterLine__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_mdriver_msgs__msg__CenterLine__Sequence__are_equal(const deva_mdriver_msgs__msg__CenterLine__Sequence * lhs, const deva_mdriver_msgs__msg__CenterLine__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_mdriver_msgs__msg__CenterLine__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_mdriver_msgs__msg__CenterLine__Sequence__copy(
  const deva_mdriver_msgs__msg__CenterLine__Sequence * input,
  deva_mdriver_msgs__msg__CenterLine__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_mdriver_msgs__msg__CenterLine);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_mdriver_msgs__msg__CenterLine * data =
      (deva_mdriver_msgs__msg__CenterLine *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_mdriver_msgs__msg__CenterLine__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_mdriver_msgs__msg__CenterLine__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_mdriver_msgs__msg__CenterLine__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
