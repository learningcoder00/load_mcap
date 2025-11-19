// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/RoadBoundary.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/road_boundary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `left_physical_bound_line`
// Member `right_physical_bound_line`
// Member `left_law_bound_line`
// Member `right_law_bound_line`
#include "environment_model_msgs/msg/detail/boundary_point__functions.h"
// Member `isolated_obj_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
environment_model_msgs__msg__RoadBoundary__init(environment_model_msgs__msg__RoadBoundary * msg)
{
  if (!msg) {
    return false;
  }
  // left_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__init(&msg->left_physical_bound_line, 0)) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
    return false;
  }
  // right_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__init(&msg->right_physical_bound_line, 0)) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
    return false;
  }
  // left_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__init(&msg->left_law_bound_line, 0)) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
    return false;
  }
  // right_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__init(&msg->right_law_bound_line, 0)) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
    return false;
  }
  // feature
  // isolated_obj_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->isolated_obj_ids, 0)) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__RoadBoundary__fini(environment_model_msgs__msg__RoadBoundary * msg)
{
  if (!msg) {
    return;
  }
  // left_physical_bound_line
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(&msg->left_physical_bound_line);
  // right_physical_bound_line
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(&msg->right_physical_bound_line);
  // left_law_bound_line
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(&msg->left_law_bound_line);
  // right_law_bound_line
  environment_model_msgs__msg__BoundaryPoint__Sequence__fini(&msg->right_law_bound_line);
  // feature
  // isolated_obj_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->isolated_obj_ids);
}

bool
environment_model_msgs__msg__RoadBoundary__are_equal(const environment_model_msgs__msg__RoadBoundary * lhs, const environment_model_msgs__msg__RoadBoundary * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__are_equal(
      &(lhs->left_physical_bound_line), &(rhs->left_physical_bound_line)))
  {
    return false;
  }
  // right_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__are_equal(
      &(lhs->right_physical_bound_line), &(rhs->right_physical_bound_line)))
  {
    return false;
  }
  // left_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__are_equal(
      &(lhs->left_law_bound_line), &(rhs->left_law_bound_line)))
  {
    return false;
  }
  // right_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__are_equal(
      &(lhs->right_law_bound_line), &(rhs->right_law_bound_line)))
  {
    return false;
  }
  // feature
  if (lhs->feature != rhs->feature) {
    return false;
  }
  // isolated_obj_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->isolated_obj_ids), &(rhs->isolated_obj_ids)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__RoadBoundary__copy(
  const environment_model_msgs__msg__RoadBoundary * input,
  environment_model_msgs__msg__RoadBoundary * output)
{
  if (!input || !output) {
    return false;
  }
  // left_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__copy(
      &(input->left_physical_bound_line), &(output->left_physical_bound_line)))
  {
    return false;
  }
  // right_physical_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__copy(
      &(input->right_physical_bound_line), &(output->right_physical_bound_line)))
  {
    return false;
  }
  // left_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__copy(
      &(input->left_law_bound_line), &(output->left_law_bound_line)))
  {
    return false;
  }
  // right_law_bound_line
  if (!environment_model_msgs__msg__BoundaryPoint__Sequence__copy(
      &(input->right_law_bound_line), &(output->right_law_bound_line)))
  {
    return false;
  }
  // feature
  output->feature = input->feature;
  // isolated_obj_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->isolated_obj_ids), &(output->isolated_obj_ids)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__RoadBoundary *
environment_model_msgs__msg__RoadBoundary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__RoadBoundary * msg = (environment_model_msgs__msg__RoadBoundary *)allocator.allocate(sizeof(environment_model_msgs__msg__RoadBoundary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__RoadBoundary));
  bool success = environment_model_msgs__msg__RoadBoundary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__RoadBoundary__destroy(environment_model_msgs__msg__RoadBoundary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__RoadBoundary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__RoadBoundary__Sequence__init(environment_model_msgs__msg__RoadBoundary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__RoadBoundary * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__RoadBoundary *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__RoadBoundary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__RoadBoundary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__RoadBoundary__fini(&data[i - 1]);
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
environment_model_msgs__msg__RoadBoundary__Sequence__fini(environment_model_msgs__msg__RoadBoundary__Sequence * array)
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
      environment_model_msgs__msg__RoadBoundary__fini(&array->data[i]);
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

environment_model_msgs__msg__RoadBoundary__Sequence *
environment_model_msgs__msg__RoadBoundary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__RoadBoundary__Sequence * array = (environment_model_msgs__msg__RoadBoundary__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__RoadBoundary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__RoadBoundary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__RoadBoundary__Sequence__destroy(environment_model_msgs__msg__RoadBoundary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__RoadBoundary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__RoadBoundary__Sequence__are_equal(const environment_model_msgs__msg__RoadBoundary__Sequence * lhs, const environment_model_msgs__msg__RoadBoundary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__RoadBoundary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__RoadBoundary__Sequence__copy(
  const environment_model_msgs__msg__RoadBoundary__Sequence * input,
  environment_model_msgs__msg__RoadBoundary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__RoadBoundary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__RoadBoundary * data =
      (environment_model_msgs__msg__RoadBoundary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__RoadBoundary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__RoadBoundary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__RoadBoundary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
