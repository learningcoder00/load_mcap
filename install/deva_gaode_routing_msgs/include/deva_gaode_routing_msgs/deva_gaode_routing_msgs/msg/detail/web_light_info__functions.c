// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `light_states`
#include "deva_gaode_routing_msgs/msg/detail/web_light_state__functions.h"
// Member `desc`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__WebLightInfo__init(deva_gaode_routing_msgs__msg__WebLightInfo * msg)
{
  if (!msg) {
    return false;
  }
  // dir
  // wait_num
  // light_states
  if (!deva_gaode_routing_msgs__msg__WebLightState__Sequence__init(&msg->light_states, 0)) {
    deva_gaode_routing_msgs__msg__WebLightInfo__fini(msg);
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__init(&msg->desc)) {
    deva_gaode_routing_msgs__msg__WebLightInfo__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__WebLightInfo__fini(deva_gaode_routing_msgs__msg__WebLightInfo * msg)
{
  if (!msg) {
    return;
  }
  // dir
  // wait_num
  // light_states
  deva_gaode_routing_msgs__msg__WebLightState__Sequence__fini(&msg->light_states);
  // desc
  rosidl_runtime_c__String__fini(&msg->desc);
}

bool
deva_gaode_routing_msgs__msg__WebLightInfo__are_equal(const deva_gaode_routing_msgs__msg__WebLightInfo * lhs, const deva_gaode_routing_msgs__msg__WebLightInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dir
  if (lhs->dir != rhs->dir) {
    return false;
  }
  // wait_num
  if (lhs->wait_num != rhs->wait_num) {
    return false;
  }
  // light_states
  if (!deva_gaode_routing_msgs__msg__WebLightState__Sequence__are_equal(
      &(lhs->light_states), &(rhs->light_states)))
  {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->desc), &(rhs->desc)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebLightInfo__copy(
  const deva_gaode_routing_msgs__msg__WebLightInfo * input,
  deva_gaode_routing_msgs__msg__WebLightInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // dir
  output->dir = input->dir;
  // wait_num
  output->wait_num = input->wait_num;
  // light_states
  if (!deva_gaode_routing_msgs__msg__WebLightState__Sequence__copy(
      &(input->light_states), &(output->light_states)))
  {
    return false;
  }
  // desc
  if (!rosidl_runtime_c__String__copy(
      &(input->desc), &(output->desc)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__WebLightInfo *
deva_gaode_routing_msgs__msg__WebLightInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLightInfo * msg = (deva_gaode_routing_msgs__msg__WebLightInfo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebLightInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebLightInfo));
  bool success = deva_gaode_routing_msgs__msg__WebLightInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebLightInfo__destroy(deva_gaode_routing_msgs__msg__WebLightInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebLightInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__init(deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLightInfo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebLightInfo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebLightInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebLightInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebLightInfo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__fini(deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebLightInfo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebLightInfo__Sequence *
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * array = (deva_gaode_routing_msgs__msg__WebLightInfo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebLightInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__destroy(deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebLightInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebLightInfo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * input,
  deva_gaode_routing_msgs__msg__WebLightInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebLightInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebLightInfo * data =
      (deva_gaode_routing_msgs__msg__WebLightInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebLightInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebLightInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebLightInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
