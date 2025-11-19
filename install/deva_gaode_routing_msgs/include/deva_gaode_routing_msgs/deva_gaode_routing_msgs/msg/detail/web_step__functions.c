// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebStep.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_step__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roads`
#include "deva_gaode_routing_msgs/msg/detail/web_road__functions.h"

bool
deva_gaode_routing_msgs__msg__WebStep__init(deva_gaode_routing_msgs__msg__WebStep * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // roads
  if (!deva_gaode_routing_msgs__msg__WebRoad__Sequence__init(&msg->roads, 0)) {
    deva_gaode_routing_msgs__msg__WebStep__fini(msg);
    return false;
  }
  // traffic_light_count
  // distance
  // time
  // forward_direction
  // forward_type
  // main_action
  // assistant_action
  return true;
}

void
deva_gaode_routing_msgs__msg__WebStep__fini(deva_gaode_routing_msgs__msg__WebStep * msg)
{
  if (!msg) {
    return;
  }
  // id
  // roads
  deva_gaode_routing_msgs__msg__WebRoad__Sequence__fini(&msg->roads);
  // traffic_light_count
  // distance
  // time
  // forward_direction
  // forward_type
  // main_action
  // assistant_action
}

bool
deva_gaode_routing_msgs__msg__WebStep__are_equal(const deva_gaode_routing_msgs__msg__WebStep * lhs, const deva_gaode_routing_msgs__msg__WebStep * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // roads
  if (!deva_gaode_routing_msgs__msg__WebRoad__Sequence__are_equal(
      &(lhs->roads), &(rhs->roads)))
  {
    return false;
  }
  // traffic_light_count
  if (lhs->traffic_light_count != rhs->traffic_light_count) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // forward_direction
  if (lhs->forward_direction != rhs->forward_direction) {
    return false;
  }
  // forward_type
  if (lhs->forward_type != rhs->forward_type) {
    return false;
  }
  // main_action
  if (lhs->main_action != rhs->main_action) {
    return false;
  }
  // assistant_action
  if (lhs->assistant_action != rhs->assistant_action) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebStep__copy(
  const deva_gaode_routing_msgs__msg__WebStep * input,
  deva_gaode_routing_msgs__msg__WebStep * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // roads
  if (!deva_gaode_routing_msgs__msg__WebRoad__Sequence__copy(
      &(input->roads), &(output->roads)))
  {
    return false;
  }
  // traffic_light_count
  output->traffic_light_count = input->traffic_light_count;
  // distance
  output->distance = input->distance;
  // time
  output->time = input->time;
  // forward_direction
  output->forward_direction = input->forward_direction;
  // forward_type
  output->forward_type = input->forward_type;
  // main_action
  output->main_action = input->main_action;
  // assistant_action
  output->assistant_action = input->assistant_action;
  return true;
}

deva_gaode_routing_msgs__msg__WebStep *
deva_gaode_routing_msgs__msg__WebStep__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebStep * msg = (deva_gaode_routing_msgs__msg__WebStep *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebStep), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebStep));
  bool success = deva_gaode_routing_msgs__msg__WebStep__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebStep__destroy(deva_gaode_routing_msgs__msg__WebStep * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebStep__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebStep__Sequence__init(deva_gaode_routing_msgs__msg__WebStep__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebStep * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebStep *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebStep), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebStep__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebStep__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebStep__Sequence__fini(deva_gaode_routing_msgs__msg__WebStep__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebStep__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebStep__Sequence *
deva_gaode_routing_msgs__msg__WebStep__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebStep__Sequence * array = (deva_gaode_routing_msgs__msg__WebStep__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebStep__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebStep__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebStep__Sequence__destroy(deva_gaode_routing_msgs__msg__WebStep__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebStep__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebStep__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebStep__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebStep__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebStep__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebStep__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebStep__Sequence * input,
  deva_gaode_routing_msgs__msg__WebStep__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebStep);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebStep * data =
      (deva_gaode_routing_msgs__msg__WebStep *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebStep__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebStep__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebStep__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
