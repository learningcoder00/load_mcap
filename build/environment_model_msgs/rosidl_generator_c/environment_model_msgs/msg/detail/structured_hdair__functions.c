// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/structured_hdair__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `links`
#include "environment_model_msgs/msg/detail/structured_link__functions.h"
// Member `feature_points`
#include "environment_model_msgs/msg/detail/structured_feature_point__functions.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"

bool
environment_model_msgs__msg__StructuredHdair__init(environment_model_msgs__msg__StructuredHdair * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    environment_model_msgs__msg__StructuredHdair__fini(msg);
    return false;
  }
  // current_link_id
  // links
  if (!environment_model_msgs__msg__StructuredLink__Sequence__init(&msg->links, 0)) {
    environment_model_msgs__msg__StructuredHdair__fini(msg);
    return false;
  }
  // feature_points
  if (!environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(&msg->feature_points, 0)) {
    environment_model_msgs__msg__StructuredHdair__fini(msg);
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__init(&msg->lanes, 0)) {
    environment_model_msgs__msg__StructuredHdair__fini(msg);
    return false;
  }
  return true;
}

void
environment_model_msgs__msg__StructuredHdair__fini(environment_model_msgs__msg__StructuredHdair * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // current_link_id
  // links
  environment_model_msgs__msg__StructuredLink__Sequence__fini(&msg->links);
  // feature_points
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini(&msg->feature_points);
  // lanes
  deva_gaode_routing_msgs__msg__LANE__Sequence__fini(&msg->lanes);
}

bool
environment_model_msgs__msg__StructuredHdair__are_equal(const environment_model_msgs__msg__StructuredHdair * lhs, const environment_model_msgs__msg__StructuredHdair * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // current_link_id
  if (lhs->current_link_id != rhs->current_link_id) {
    return false;
  }
  // links
  if (!environment_model_msgs__msg__StructuredLink__Sequence__are_equal(
      &(lhs->links), &(rhs->links)))
  {
    return false;
  }
  // feature_points
  if (!environment_model_msgs__msg__StructuredFeaturePoint__Sequence__are_equal(
      &(lhs->feature_points), &(rhs->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__are_equal(
      &(lhs->lanes), &(rhs->lanes)))
  {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredHdair__copy(
  const environment_model_msgs__msg__StructuredHdair * input,
  environment_model_msgs__msg__StructuredHdair * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // current_link_id
  output->current_link_id = input->current_link_id;
  // links
  if (!environment_model_msgs__msg__StructuredLink__Sequence__copy(
      &(input->links), &(output->links)))
  {
    return false;
  }
  // feature_points
  if (!environment_model_msgs__msg__StructuredFeaturePoint__Sequence__copy(
      &(input->feature_points), &(output->feature_points)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__LANE__Sequence__copy(
      &(input->lanes), &(output->lanes)))
  {
    return false;
  }
  return true;
}

environment_model_msgs__msg__StructuredHdair *
environment_model_msgs__msg__StructuredHdair__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredHdair * msg = (environment_model_msgs__msg__StructuredHdair *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredHdair), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__StructuredHdair));
  bool success = environment_model_msgs__msg__StructuredHdair__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__StructuredHdair__destroy(environment_model_msgs__msg__StructuredHdair * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__StructuredHdair__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__StructuredHdair__Sequence__init(environment_model_msgs__msg__StructuredHdair__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredHdair * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__StructuredHdair *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__StructuredHdair), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__StructuredHdair__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__StructuredHdair__fini(&data[i - 1]);
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
environment_model_msgs__msg__StructuredHdair__Sequence__fini(environment_model_msgs__msg__StructuredHdair__Sequence * array)
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
      environment_model_msgs__msg__StructuredHdair__fini(&array->data[i]);
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

environment_model_msgs__msg__StructuredHdair__Sequence *
environment_model_msgs__msg__StructuredHdair__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__StructuredHdair__Sequence * array = (environment_model_msgs__msg__StructuredHdair__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__StructuredHdair__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__StructuredHdair__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__StructuredHdair__Sequence__destroy(environment_model_msgs__msg__StructuredHdair__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__StructuredHdair__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__StructuredHdair__Sequence__are_equal(const environment_model_msgs__msg__StructuredHdair__Sequence * lhs, const environment_model_msgs__msg__StructuredHdair__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__StructuredHdair__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__StructuredHdair__Sequence__copy(
  const environment_model_msgs__msg__StructuredHdair__Sequence * input,
  environment_model_msgs__msg__StructuredHdair__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__StructuredHdair);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__StructuredHdair * data =
      (environment_model_msgs__msg__StructuredHdair *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__StructuredHdair__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__StructuredHdair__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__StructuredHdair__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
