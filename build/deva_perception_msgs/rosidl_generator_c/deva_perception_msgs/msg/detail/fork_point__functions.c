// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/ForkPoint.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/fork_point__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `fork_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
deva_perception_msgs__msg__ForkPoint__init(deva_perception_msgs__msg__ForkPoint * msg)
{
  if (!msg) {
    return false;
  }
  // fork_property_type
  // fork_id
  // lane_ids
  if (!rosidl_runtime_c__int16__Sequence__init(&msg->lane_ids, 0)) {
    deva_perception_msgs__msg__ForkPoint__fini(msg);
    return false;
  }
  // fork_point
  if (!geometry_msgs__msg__Point__init(&msg->fork_point)) {
    deva_perception_msgs__msg__ForkPoint__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__ForkPoint__fini(deva_perception_msgs__msg__ForkPoint * msg)
{
  if (!msg) {
    return;
  }
  // fork_property_type
  // fork_id
  // lane_ids
  rosidl_runtime_c__int16__Sequence__fini(&msg->lane_ids);
  // fork_point
  geometry_msgs__msg__Point__fini(&msg->fork_point);
}

bool
deva_perception_msgs__msg__ForkPoint__are_equal(const deva_perception_msgs__msg__ForkPoint * lhs, const deva_perception_msgs__msg__ForkPoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fork_property_type
  if (lhs->fork_property_type != rhs->fork_property_type) {
    return false;
  }
  // fork_id
  if (lhs->fork_id != rhs->fork_id) {
    return false;
  }
  // lane_ids
  if (!rosidl_runtime_c__int16__Sequence__are_equal(
      &(lhs->lane_ids), &(rhs->lane_ids)))
  {
    return false;
  }
  // fork_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->fork_point), &(rhs->fork_point)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__ForkPoint__copy(
  const deva_perception_msgs__msg__ForkPoint * input,
  deva_perception_msgs__msg__ForkPoint * output)
{
  if (!input || !output) {
    return false;
  }
  // fork_property_type
  output->fork_property_type = input->fork_property_type;
  // fork_id
  output->fork_id = input->fork_id;
  // lane_ids
  if (!rosidl_runtime_c__int16__Sequence__copy(
      &(input->lane_ids), &(output->lane_ids)))
  {
    return false;
  }
  // fork_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->fork_point), &(output->fork_point)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__ForkPoint *
deva_perception_msgs__msg__ForkPoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ForkPoint * msg = (deva_perception_msgs__msg__ForkPoint *)allocator.allocate(sizeof(deva_perception_msgs__msg__ForkPoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__ForkPoint));
  bool success = deva_perception_msgs__msg__ForkPoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__ForkPoint__destroy(deva_perception_msgs__msg__ForkPoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__ForkPoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__ForkPoint__Sequence__init(deva_perception_msgs__msg__ForkPoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ForkPoint * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__ForkPoint *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__ForkPoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__ForkPoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__ForkPoint__fini(&data[i - 1]);
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
deva_perception_msgs__msg__ForkPoint__Sequence__fini(deva_perception_msgs__msg__ForkPoint__Sequence * array)
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
      deva_perception_msgs__msg__ForkPoint__fini(&array->data[i]);
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

deva_perception_msgs__msg__ForkPoint__Sequence *
deva_perception_msgs__msg__ForkPoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__ForkPoint__Sequence * array = (deva_perception_msgs__msg__ForkPoint__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__ForkPoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__ForkPoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__ForkPoint__Sequence__destroy(deva_perception_msgs__msg__ForkPoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__ForkPoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__ForkPoint__Sequence__are_equal(const deva_perception_msgs__msg__ForkPoint__Sequence * lhs, const deva_perception_msgs__msg__ForkPoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__ForkPoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__ForkPoint__Sequence__copy(
  const deva_perception_msgs__msg__ForkPoint__Sequence * input,
  deva_perception_msgs__msg__ForkPoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__ForkPoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__ForkPoint * data =
      (deva_perception_msgs__msg__ForkPoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__ForkPoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__ForkPoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__ForkPoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
