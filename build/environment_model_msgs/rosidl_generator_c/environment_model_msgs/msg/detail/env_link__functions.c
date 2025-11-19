// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from environment_model_msgs:msg/EnvLink.idl
// generated code does not contain a copyright notice
#include "environment_model_msgs/msg/detail/env_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
environment_model_msgs__msg__EnvLink__init(environment_model_msgs__msg__EnvLink * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // parent_link_id
  // angle_with_parent
  // length
  // is_on_routing
  // lane_num
  // sub_link_num
  return true;
}

void
environment_model_msgs__msg__EnvLink__fini(environment_model_msgs__msg__EnvLink * msg)
{
  if (!msg) {
    return;
  }
  // id
  // parent_link_id
  // angle_with_parent
  // length
  // is_on_routing
  // lane_num
  // sub_link_num
}

bool
environment_model_msgs__msg__EnvLink__are_equal(const environment_model_msgs__msg__EnvLink * lhs, const environment_model_msgs__msg__EnvLink * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // parent_link_id
  if (lhs->parent_link_id != rhs->parent_link_id) {
    return false;
  }
  // angle_with_parent
  if (lhs->angle_with_parent != rhs->angle_with_parent) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // is_on_routing
  if (lhs->is_on_routing != rhs->is_on_routing) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // sub_link_num
  if (lhs->sub_link_num != rhs->sub_link_num) {
    return false;
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLink__copy(
  const environment_model_msgs__msg__EnvLink * input,
  environment_model_msgs__msg__EnvLink * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // parent_link_id
  output->parent_link_id = input->parent_link_id;
  // angle_with_parent
  output->angle_with_parent = input->angle_with_parent;
  // length
  output->length = input->length;
  // is_on_routing
  output->is_on_routing = input->is_on_routing;
  // lane_num
  output->lane_num = input->lane_num;
  // sub_link_num
  output->sub_link_num = input->sub_link_num;
  return true;
}

environment_model_msgs__msg__EnvLink *
environment_model_msgs__msg__EnvLink__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLink * msg = (environment_model_msgs__msg__EnvLink *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLink), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(environment_model_msgs__msg__EnvLink));
  bool success = environment_model_msgs__msg__EnvLink__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
environment_model_msgs__msg__EnvLink__destroy(environment_model_msgs__msg__EnvLink * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    environment_model_msgs__msg__EnvLink__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
environment_model_msgs__msg__EnvLink__Sequence__init(environment_model_msgs__msg__EnvLink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLink * data = NULL;

  if (size) {
    data = (environment_model_msgs__msg__EnvLink *)allocator.zero_allocate(size, sizeof(environment_model_msgs__msg__EnvLink), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = environment_model_msgs__msg__EnvLink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        environment_model_msgs__msg__EnvLink__fini(&data[i - 1]);
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
environment_model_msgs__msg__EnvLink__Sequence__fini(environment_model_msgs__msg__EnvLink__Sequence * array)
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
      environment_model_msgs__msg__EnvLink__fini(&array->data[i]);
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

environment_model_msgs__msg__EnvLink__Sequence *
environment_model_msgs__msg__EnvLink__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  environment_model_msgs__msg__EnvLink__Sequence * array = (environment_model_msgs__msg__EnvLink__Sequence *)allocator.allocate(sizeof(environment_model_msgs__msg__EnvLink__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = environment_model_msgs__msg__EnvLink__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
environment_model_msgs__msg__EnvLink__Sequence__destroy(environment_model_msgs__msg__EnvLink__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    environment_model_msgs__msg__EnvLink__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
environment_model_msgs__msg__EnvLink__Sequence__are_equal(const environment_model_msgs__msg__EnvLink__Sequence * lhs, const environment_model_msgs__msg__EnvLink__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!environment_model_msgs__msg__EnvLink__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
environment_model_msgs__msg__EnvLink__Sequence__copy(
  const environment_model_msgs__msg__EnvLink__Sequence * input,
  environment_model_msgs__msg__EnvLink__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(environment_model_msgs__msg__EnvLink);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    environment_model_msgs__msg__EnvLink * data =
      (environment_model_msgs__msg__EnvLink *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!environment_model_msgs__msg__EnvLink__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          environment_model_msgs__msg__EnvLink__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!environment_model_msgs__msg__EnvLink__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
