// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/Signal.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `so`
#include "deva_perception_msgs/msg/detail/static_obstacle__functions.h"

bool
deva_perception_msgs__msg__Signal__init(deva_perception_msgs__msg__Signal * msg)
{
  if (!msg) {
    return false;
  }
  // so
  if (!deva_perception_msgs__msg__StaticObstacle__init(&msg->so)) {
    deva_perception_msgs__msg__Signal__fini(msg);
    return false;
  }
  // signal_type
  // geometry_type
  // state_type
  return true;
}

void
deva_perception_msgs__msg__Signal__fini(deva_perception_msgs__msg__Signal * msg)
{
  if (!msg) {
    return;
  }
  // so
  deva_perception_msgs__msg__StaticObstacle__fini(&msg->so);
  // signal_type
  // geometry_type
  // state_type
}

bool
deva_perception_msgs__msg__Signal__are_equal(const deva_perception_msgs__msg__Signal * lhs, const deva_perception_msgs__msg__Signal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // so
  if (!deva_perception_msgs__msg__StaticObstacle__are_equal(
      &(lhs->so), &(rhs->so)))
  {
    return false;
  }
  // signal_type
  if (lhs->signal_type != rhs->signal_type) {
    return false;
  }
  // geometry_type
  if (lhs->geometry_type != rhs->geometry_type) {
    return false;
  }
  // state_type
  if (lhs->state_type != rhs->state_type) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__Signal__copy(
  const deva_perception_msgs__msg__Signal * input,
  deva_perception_msgs__msg__Signal * output)
{
  if (!input || !output) {
    return false;
  }
  // so
  if (!deva_perception_msgs__msg__StaticObstacle__copy(
      &(input->so), &(output->so)))
  {
    return false;
  }
  // signal_type
  output->signal_type = input->signal_type;
  // geometry_type
  output->geometry_type = input->geometry_type;
  // state_type
  output->state_type = input->state_type;
  return true;
}

deva_perception_msgs__msg__Signal *
deva_perception_msgs__msg__Signal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Signal * msg = (deva_perception_msgs__msg__Signal *)allocator.allocate(sizeof(deva_perception_msgs__msg__Signal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__Signal));
  bool success = deva_perception_msgs__msg__Signal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__Signal__destroy(deva_perception_msgs__msg__Signal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__Signal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__Signal__Sequence__init(deva_perception_msgs__msg__Signal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Signal * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__Signal *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__Signal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__Signal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__Signal__fini(&data[i - 1]);
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
deva_perception_msgs__msg__Signal__Sequence__fini(deva_perception_msgs__msg__Signal__Sequence * array)
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
      deva_perception_msgs__msg__Signal__fini(&array->data[i]);
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

deva_perception_msgs__msg__Signal__Sequence *
deva_perception_msgs__msg__Signal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__Signal__Sequence * array = (deva_perception_msgs__msg__Signal__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__Signal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__Signal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__Signal__Sequence__destroy(deva_perception_msgs__msg__Signal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__Signal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__Signal__Sequence__are_equal(const deva_perception_msgs__msg__Signal__Sequence * lhs, const deva_perception_msgs__msg__Signal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__Signal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__Signal__Sequence__copy(
  const deva_perception_msgs__msg__Signal__Sequence * input,
  deva_perception_msgs__msg__Signal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__Signal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__Signal * data =
      (deva_perception_msgs__msg__Signal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__Signal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__Signal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__Signal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
