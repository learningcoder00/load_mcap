// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `valid_period`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__RestrictionDetail__init(deva_gaode_routing_msgs__msg__RestrictionDetail * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // direction
  // vehicle_limit
  // period_approx
  // valid_period
  if (!rosidl_runtime_c__String__init(&msg->valid_period)) {
    deva_gaode_routing_msgs__msg__RestrictionDetail__fini(msg);
    return false;
  }
  // time_type
  return true;
}

void
deva_gaode_routing_msgs__msg__RestrictionDetail__fini(deva_gaode_routing_msgs__msg__RestrictionDetail * msg)
{
  if (!msg) {
    return;
  }
  // id
  // direction
  // vehicle_limit
  // period_approx
  // valid_period
  rosidl_runtime_c__String__fini(&msg->valid_period);
  // time_type
}

bool
deva_gaode_routing_msgs__msg__RestrictionDetail__are_equal(const deva_gaode_routing_msgs__msg__RestrictionDetail * lhs, const deva_gaode_routing_msgs__msg__RestrictionDetail * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // vehicle_limit
  if (lhs->vehicle_limit != rhs->vehicle_limit) {
    return false;
  }
  // period_approx
  if (lhs->period_approx != rhs->period_approx) {
    return false;
  }
  // valid_period
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->valid_period), &(rhs->valid_period)))
  {
    return false;
  }
  // time_type
  if (lhs->time_type != rhs->time_type) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RestrictionDetail__copy(
  const deva_gaode_routing_msgs__msg__RestrictionDetail * input,
  deva_gaode_routing_msgs__msg__RestrictionDetail * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // direction
  output->direction = input->direction;
  // vehicle_limit
  output->vehicle_limit = input->vehicle_limit;
  // period_approx
  output->period_approx = input->period_approx;
  // valid_period
  if (!rosidl_runtime_c__String__copy(
      &(input->valid_period), &(output->valid_period)))
  {
    return false;
  }
  // time_type
  output->time_type = input->time_type;
  return true;
}

deva_gaode_routing_msgs__msg__RestrictionDetail *
deva_gaode_routing_msgs__msg__RestrictionDetail__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RestrictionDetail * msg = (deva_gaode_routing_msgs__msg__RestrictionDetail *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RestrictionDetail), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RestrictionDetail));
  bool success = deva_gaode_routing_msgs__msg__RestrictionDetail__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RestrictionDetail__destroy(deva_gaode_routing_msgs__msg__RestrictionDetail * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RestrictionDetail__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__init(deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RestrictionDetail * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RestrictionDetail *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RestrictionDetail), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RestrictionDetail__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RestrictionDetail__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__fini(deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RestrictionDetail__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * array = (deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__destroy(deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * lhs, const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RestrictionDetail__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * input,
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RestrictionDetail);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RestrictionDetail * data =
      (deva_gaode_routing_msgs__msg__RestrictionDetail *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RestrictionDetail__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RestrictionDetail__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RestrictionDetail__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
