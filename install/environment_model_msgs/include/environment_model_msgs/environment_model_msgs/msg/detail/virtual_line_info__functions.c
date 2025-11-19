// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ori_ids`
#include "environment_model_msgs/msg/detail/pair_int__functions.h"
// Member `e2e_pair`
#include "environment_model_msgs/msg/detail/pair_double__functions.h"
// Member `exit_lane_id`
#include "rosidl_runtime_c/string_functions.h"

bool
environment_model_msgs__msg__VirtualLineInfo__init(environment_model_msgs__msg__VirtualLineInfo * msg)
{
  if (!msg) {
    return false;
  }
  // enum_vlane_type
  // virtual_score
  // ori_ids
  if (!environment_model_msgs__msg__PairInt__init(&msg->ori_ids)) {
    environment_model_msgs__msg__VirtualLineInfo__fini(msg);
    return false;
  }
  // e2e_pair
  if (!environment_model_msgs__msg__PairDouble__init(&msg->e2e_pair)) {
    environment_model_msgs__msg__VirtualLineInfo__fini(msg);
    return false;
  }
  // exit_lane_id
  if (!rosidl_runtime_c__String__init(&msg->exit_lane_id)) {
    environment_model_msgs__msg__VirtualLineInfo__fini(msg);
    return false;
  }
  // exit_seq_id
  return true;
}

void
environment_model_msgs__msg__VirtualLineInfo__fini(environment_model_msgs__msg__VirtualLineInfo * msg)
{
  if (!msg) {
    return;
  }
  // enum_vlane_type
  // virtual_score
  // ori_ids
  environment_model_msgs__msg__PairInt__fini(&msg->ori_ids);
  // e2e_pair
  environment_model_msgs__msg__PairDouble__fini(&msg->e2e_pair);
  // exit_lane_id
  rosidl_runtime_c__String__fini(&msg->exit_lane_id);
  // exit_seq_id
}

bool
environment_model_msgs__msg__VirtualLineInfo__are_equal(const environment_model_msgs__msg__VirtualLineInfo * lhs, const environment_model_msgs__msg__VirtualLineInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // enum_vlane_type
  if (lhs->enum_vlane_type != rhs->enum_vlane_type) {
    return false;
  }
  // virtual_score
  if (lhs->virtual_score != rhs->virtual_score) {
    return false;
  }
  // ori_ids
  if (!environment_model_msgs__msg__PairInt__are_equal(
      &(lhs->ori_ids), &(rhs->ori_ids)))
  {
    return false;
  }
  // e2e_pair
  if (!environment_model_msgs__msg__PairDouble__are_equal(
      &(lhs->e2e_pair), &(rhs->e2e_pair)))
  {
    return false;
  }
  // exit_lane_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->exit_lane_id), &(rhs->exit_lane_id)))
  {
    return false;
  }
  // exit_seq_id
  if (lhs->exit_seq_id != rhs->exit_seq_id) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__VirtualLineInfo__copy(
  const environment_model_msgs__msg__VirtualLineInfo * input,
  environment_model_msgs__msg__VirtualLineInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // enum_vlane_type
  output->enum_vlane_type = input->enum_vlane_type;
  // virtual_score
  output->virtual_score = input->virtual_score;
  // ori_ids
  if (!environment_model_msgs__msg__PairInt__copy(
      &(input->ori_ids), &(output->ori_ids)))
  {
    return false;
  }
  // e2e_pair
  if (!environment_model_msgs__msg__PairDouble__copy(
      &(input->e2e_pair), &(output->e2e_pair)))
  {
    return false;
  }
  // exit_lane_id
  if (!rosidl_runtime_c__String__copy(
      &(input->exit_lane_id), &(output->exit_lane_id)))
  {
    return false;
  }
  // exit_seq_id
  output->exit_seq_id = input->exit_seq_id;
  return true;
}

environment_model_msgs__msg__VirtualLineInfo *
environment_model_msgs__msg__VirtualLineInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__VirtualLineInfo * msg = (environment_model_msgs__msg__VirtualLineInfo *)allocator.allocate(sizeof(environment_model_msgs__msg__VirtualLineInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__VirtualLineInfo));
  bool success = environment_model_msgs__msg__VirtualLineInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__VirtualLineInfo__destroy(environment_model_msgs__msg__VirtualLineInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__VirtualLineInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__VirtualLineInfo__Sequence__init(environment_model_msgs__msg__VirtualLineInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__VirtualLineInfo * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__VirtualLineInfo *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__VirtualLineInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__VirtualLineInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__VirtualLineInfo__fini(&data[i - 1]);
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
environment_model_msgs__msg__VirtualLineInfo__Sequence__fini(environment_model_msgs__msg__VirtualLineInfo__Sequence * array)
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
      environment_model_msgs__msg__VirtualLineInfo__fini(&array->data[i]);
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

environment_model_msgs__msg__VirtualLineInfo__Sequence *
environment_model_msgs__msg__VirtualLineInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__VirtualLineInfo__Sequence * array = (environment_model_msgs__msg__VirtualLineInfo__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__VirtualLineInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__VirtualLineInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__VirtualLineInfo__Sequence__destroy(environment_model_msgs__msg__VirtualLineInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__VirtualLineInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__VirtualLineInfo__Sequence__are_equal(const environment_model_msgs__msg__VirtualLineInfo__Sequence * lhs, const environment_model_msgs__msg__VirtualLineInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__VirtualLineInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__VirtualLineInfo__Sequence__copy(
  const environment_model_msgs__msg__VirtualLineInfo__Sequence * input,
  environment_model_msgs__msg__VirtualLineInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__VirtualLineInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__VirtualLineInfo * data =
      (environment_model_msgs__msg__VirtualLineInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__VirtualLineInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__VirtualLineInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__VirtualLineInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
