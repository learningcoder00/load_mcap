// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `arrow`
// Member `flag`
// Member `rg_add_lane_property`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `active_time`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__init(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * msg)
{
  if (!msg) {
    return false;
  }
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->arrow, 0)) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(msg);
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->flag, 0)) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(msg);
    return false;
  }
  // rg_add_lane_property
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->rg_add_lane_property, 0)) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(msg);
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__init(&msg->active_time)) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * msg)
{
  if (!msg) {
    return;
  }
  // arrow
  rosidl_runtime_c__uint32__Sequence__fini(&msg->arrow);
  // flag
  rosidl_runtime_c__uint32__Sequence__fini(&msg->flag);
  // rg_add_lane_property
  rosidl_runtime_c__uint32__Sequence__fini(&msg->rg_add_lane_property);
  // active_time
  rosidl_runtime_c__String__fini(&msg->active_time);
}

bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__are_equal(const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * lhs, const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->arrow), &(rhs->arrow)))
  {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->flag), &(rhs->flag)))
  {
    return false;
  }
  // rg_add_lane_property
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->rg_add_lane_property), &(rhs->rg_add_lane_property)))
  {
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->active_time), &(rhs->active_time)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__copy(
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * input,
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // arrow
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->arrow), &(output->arrow)))
  {
    return false;
  }
  // flag
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->flag), &(output->flag)))
  {
    return false;
  }
  // rg_add_lane_property
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->rg_add_lane_property), &(output->rg_add_lane_property)))
  {
    return false;
  }
  // active_time
  if (!rosidl_runtime_c__String__copy(
      &(input->active_time), &(output->active_time)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * msg = (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo));
  bool success = deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__destroy(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__init(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__fini(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * array = (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * data =
      (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
