// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RVResult.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/rv_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `translation`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__functions.h"
// Member `dynamic_obs_list`
#include "deva_perception_msgs/msg/detail/dynamic_obstacle_list__functions.h"
// Member `fixed_obs_list`
#include "deva_perception_msgs/msg/detail/fixed_obstacle_list__functions.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"

bool
deva_perception_msgs__msg__RVResult__init(deva_perception_msgs__msg__RVResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  // translation
  if (!geometry_msgs__msg__Vector3__init(&msg->translation)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__init(&msg->orientation)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  // dynamic_obs_list
  if (!deva_perception_msgs__msg__DynamicObstacleList__Sequence__init(&msg->dynamic_obs_list, 0)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  // fixed_obs_list
  if (!deva_perception_msgs__msg__FixedObstacleList__Sequence__init(&msg->fixed_obs_list, 0)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&msg->extra_infos, 0)) {
    deva_perception_msgs__msg__RVResult__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__RVResult__fini(deva_perception_msgs__msg__RVResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // translation
  geometry_msgs__msg__Vector3__fini(&msg->translation);
  // orientation
  geometry_msgs__msg__Quaternion__fini(&msg->orientation);
  // dynamic_obs_list
  deva_perception_msgs__msg__DynamicObstacleList__Sequence__fini(&msg->dynamic_obs_list);
  // fixed_obs_list
  deva_perception_msgs__msg__FixedObstacleList__Sequence__fini(&msg->fixed_obs_list);
  // extra_infos
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(&msg->extra_infos);
}

bool
deva_perception_msgs__msg__RVResult__are_equal(const deva_perception_msgs__msg__RVResult * lhs, const deva_perception_msgs__msg__RVResult * rhs)
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
  // translation
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->translation), &(rhs->translation)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->orientation), &(rhs->orientation)))
  {
    return false;
  }
  // dynamic_obs_list
  if (!deva_perception_msgs__msg__DynamicObstacleList__Sequence__are_equal(
      &(lhs->dynamic_obs_list), &(rhs->dynamic_obs_list)))
  {
    return false;
  }
  // fixed_obs_list
  if (!deva_perception_msgs__msg__FixedObstacleList__Sequence__are_equal(
      &(lhs->fixed_obs_list), &(rhs->fixed_obs_list)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__are_equal(
      &(lhs->extra_infos), &(rhs->extra_infos)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RVResult__copy(
  const deva_perception_msgs__msg__RVResult * input,
  deva_perception_msgs__msg__RVResult * output)
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
  // translation
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->translation), &(output->translation)))
  {
    return false;
  }
  // orientation
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->orientation), &(output->orientation)))
  {
    return false;
  }
  // dynamic_obs_list
  if (!deva_perception_msgs__msg__DynamicObstacleList__Sequence__copy(
      &(input->dynamic_obs_list), &(output->dynamic_obs_list)))
  {
    return false;
  }
  // fixed_obs_list
  if (!deva_perception_msgs__msg__FixedObstacleList__Sequence__copy(
      &(input->fixed_obs_list), &(output->fixed_obs_list)))
  {
    return false;
  }
  // extra_infos
  if (!deva_perception_msgs__msg__ExtraInfo__Sequence__copy(
      &(input->extra_infos), &(output->extra_infos)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__RVResult *
deva_perception_msgs__msg__RVResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVResult * msg = (deva_perception_msgs__msg__RVResult *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RVResult));
  bool success = deva_perception_msgs__msg__RVResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RVResult__destroy(deva_perception_msgs__msg__RVResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RVResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RVResult__Sequence__init(deva_perception_msgs__msg__RVResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVResult * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RVResult *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RVResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RVResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RVResult__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RVResult__Sequence__fini(deva_perception_msgs__msg__RVResult__Sequence * array)
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
      deva_perception_msgs__msg__RVResult__fini(&array->data[i]);
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

deva_perception_msgs__msg__RVResult__Sequence *
deva_perception_msgs__msg__RVResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RVResult__Sequence * array = (deva_perception_msgs__msg__RVResult__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RVResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RVResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RVResult__Sequence__destroy(deva_perception_msgs__msg__RVResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RVResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RVResult__Sequence__are_equal(const deva_perception_msgs__msg__RVResult__Sequence * lhs, const deva_perception_msgs__msg__RVResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RVResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RVResult__Sequence__copy(
  const deva_perception_msgs__msg__RVResult__Sequence * input,
  deva_perception_msgs__msg__RVResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RVResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RVResult * data =
      (deva_perception_msgs__msg__RVResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RVResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RVResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RVResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
