// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LaneCond.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `date`
#include "rosidl_runtime_c/string_functions.h"
// Member `vehicles`
// Member `special_times`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__LaneCond__init(deva_gaode_routing_msgs__msg__LaneCond * msg)
{
  if (!msg) {
    return false;
  }
  // laneinfo_cond
  // link_direction
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    deva_gaode_routing_msgs__msg__LaneCond__fini(msg);
    return false;
  }
  // vehicles
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->vehicles, 0)) {
    deva_gaode_routing_msgs__msg__LaneCond__fini(msg);
    return false;
  }
  // special_times
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->special_times, 0)) {
    deva_gaode_routing_msgs__msg__LaneCond__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__LaneCond__fini(deva_gaode_routing_msgs__msg__LaneCond * msg)
{
  if (!msg) {
    return;
  }
  // laneinfo_cond
  // link_direction
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // vehicles
  rosidl_runtime_c__uint8__Sequence__fini(&msg->vehicles);
  // special_times
  rosidl_runtime_c__uint8__Sequence__fini(&msg->special_times);
}

bool
deva_gaode_routing_msgs__msg__LaneCond__are_equal(const deva_gaode_routing_msgs__msg__LaneCond * lhs, const deva_gaode_routing_msgs__msg__LaneCond * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // laneinfo_cond
  if (lhs->laneinfo_cond != rhs->laneinfo_cond) {
    return false;
  }
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // vehicles
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->vehicles), &(rhs->vehicles)))
  {
    return false;
  }
  // special_times
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->special_times), &(rhs->special_times)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneCond__copy(
  const deva_gaode_routing_msgs__msg__LaneCond * input,
  deva_gaode_routing_msgs__msg__LaneCond * output)
{
  if (!input || !output) {
    return false;
  }
  // laneinfo_cond
  output->laneinfo_cond = input->laneinfo_cond;
  // link_direction
  output->link_direction = input->link_direction;
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // vehicles
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->vehicles), &(output->vehicles)))
  {
    return false;
  }
  // special_times
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->special_times), &(output->special_times)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__LaneCond *
deva_gaode_routing_msgs__msg__LaneCond__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneCond * msg = (deva_gaode_routing_msgs__msg__LaneCond *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneCond), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LaneCond));
  bool success = deva_gaode_routing_msgs__msg__LaneCond__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LaneCond__destroy(deva_gaode_routing_msgs__msg__LaneCond * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LaneCond__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LaneCond__Sequence__init(deva_gaode_routing_msgs__msg__LaneCond__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneCond * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LaneCond *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LaneCond), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LaneCond__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LaneCond__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LaneCond__Sequence__fini(deva_gaode_routing_msgs__msg__LaneCond__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LaneCond__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LaneCond__Sequence *
deva_gaode_routing_msgs__msg__LaneCond__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneCond__Sequence * array = (deva_gaode_routing_msgs__msg__LaneCond__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneCond__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LaneCond__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LaneCond__Sequence__destroy(deva_gaode_routing_msgs__msg__LaneCond__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LaneCond__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LaneCond__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LaneCond__Sequence * lhs, const deva_gaode_routing_msgs__msg__LaneCond__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneCond__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneCond__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LaneCond__Sequence * input,
  deva_gaode_routing_msgs__msg__LaneCond__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LaneCond);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LaneCond * data =
      (deva_gaode_routing_msgs__msg__LaneCond *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LaneCond__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LaneCond__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneCond__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
