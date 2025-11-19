// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// Member `light_info`
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__functions.h"

bool
deva_gaode_routing_msgs__msg__WebTrafficLight__init(deva_gaode_routing_msgs__msg__WebTrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // road_id
  // road_index
  // setp_index
  // path_id
  // position
  if (!deva_gaode_routing_msgs__msg__WebPoint__init(&msg->position)) {
    deva_gaode_routing_msgs__msg__WebTrafficLight__fini(msg);
    return false;
  }
  // status
  // light_info
  if (!deva_gaode_routing_msgs__msg__WebLightInfo__init(&msg->light_info)) {
    deva_gaode_routing_msgs__msg__WebTrafficLight__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__WebTrafficLight__fini(deva_gaode_routing_msgs__msg__WebTrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // road_id
  // road_index
  // setp_index
  // path_id
  // position
  deva_gaode_routing_msgs__msg__WebPoint__fini(&msg->position);
  // status
  // light_info
  deva_gaode_routing_msgs__msg__WebLightInfo__fini(&msg->light_info);
}

bool
deva_gaode_routing_msgs__msg__WebTrafficLight__are_equal(const deva_gaode_routing_msgs__msg__WebTrafficLight * lhs, const deva_gaode_routing_msgs__msg__WebTrafficLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // road_id
  if (lhs->road_id != rhs->road_id) {
    return false;
  }
  // road_index
  if (lhs->road_index != rhs->road_index) {
    return false;
  }
  // setp_index
  if (lhs->setp_index != rhs->setp_index) {
    return false;
  }
  // path_id
  if (lhs->path_id != rhs->path_id) {
    return false;
  }
  // position
  if (!deva_gaode_routing_msgs__msg__WebPoint__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // light_info
  if (!deva_gaode_routing_msgs__msg__WebLightInfo__are_equal(
      &(lhs->light_info), &(rhs->light_info)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebTrafficLight__copy(
  const deva_gaode_routing_msgs__msg__WebTrafficLight * input,
  deva_gaode_routing_msgs__msg__WebTrafficLight * output)
{
  if (!input || !output) {
    return false;
  }
  // road_id
  output->road_id = input->road_id;
  // road_index
  output->road_index = input->road_index;
  // setp_index
  output->setp_index = input->setp_index;
  // path_id
  output->path_id = input->path_id;
  // position
  if (!deva_gaode_routing_msgs__msg__WebPoint__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // status
  output->status = input->status;
  // light_info
  if (!deva_gaode_routing_msgs__msg__WebLightInfo__copy(
      &(input->light_info), &(output->light_info)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__WebTrafficLight *
deva_gaode_routing_msgs__msg__WebTrafficLight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebTrafficLight * msg = (deva_gaode_routing_msgs__msg__WebTrafficLight *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebTrafficLight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebTrafficLight));
  bool success = deva_gaode_routing_msgs__msg__WebTrafficLight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebTrafficLight__destroy(deva_gaode_routing_msgs__msg__WebTrafficLight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebTrafficLight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__init(deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebTrafficLight * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebTrafficLight *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebTrafficLight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebTrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebTrafficLight__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__fini(deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebTrafficLight__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence *
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * array = (deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__destroy(deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebTrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * input,
  deva_gaode_routing_msgs__msg__WebTrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebTrafficLight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebTrafficLight * data =
      (deva_gaode_routing_msgs__msg__WebTrafficLight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebTrafficLight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebTrafficLight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebTrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
