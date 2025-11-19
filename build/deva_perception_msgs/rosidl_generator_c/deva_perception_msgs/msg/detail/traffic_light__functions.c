// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/traffic_light__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `perception_obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"
// Member `bind_id`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_perception_msgs__msg__TrafficLight__init(deva_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__init(&msg->perception_obstacle)) {
    deva_perception_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  // color_type
  // shape_type
  // blink
  // remaining_time
  // bind_id
  if (!rosidl_runtime_c__String__init(&msg->bind_id)) {
    deva_perception_msgs__msg__TrafficLight__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__TrafficLight__fini(deva_perception_msgs__msg__TrafficLight * msg)
{
  if (!msg) {
    return;
  }
  // perception_obstacle
  deva_perception_msgs__msg__ObstacleCommon__fini(&msg->perception_obstacle);
  // color_type
  // shape_type
  // blink
  // remaining_time
  // bind_id
  rosidl_runtime_c__String__fini(&msg->bind_id);
}

bool
deva_perception_msgs__msg__TrafficLight__are_equal(const deva_perception_msgs__msg__TrafficLight * lhs, const deva_perception_msgs__msg__TrafficLight * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__are_equal(
      &(lhs->perception_obstacle), &(rhs->perception_obstacle)))
  {
    return false;
  }
  // color_type
  if (lhs->color_type != rhs->color_type) {
    return false;
  }
  // shape_type
  if (lhs->shape_type != rhs->shape_type) {
    return false;
  }
  // blink
  if (lhs->blink != rhs->blink) {
    return false;
  }
  // remaining_time
  if (lhs->remaining_time != rhs->remaining_time) {
    return false;
  }
  // bind_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bind_id), &(rhs->bind_id)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficLight__copy(
  const deva_perception_msgs__msg__TrafficLight * input,
  deva_perception_msgs__msg__TrafficLight * output)
{
  if (!input || !output) {
    return false;
  }
  // perception_obstacle
  if (!deva_perception_msgs__msg__ObstacleCommon__copy(
      &(input->perception_obstacle), &(output->perception_obstacle)))
  {
    return false;
  }
  // color_type
  output->color_type = input->color_type;
  // shape_type
  output->shape_type = input->shape_type;
  // blink
  output->blink = input->blink;
  // remaining_time
  output->remaining_time = input->remaining_time;
  // bind_id
  if (!rosidl_runtime_c__String__copy(
      &(input->bind_id), &(output->bind_id)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__TrafficLight *
deva_perception_msgs__msg__TrafficLight__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficLight * msg = (deva_perception_msgs__msg__TrafficLight *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficLight), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__TrafficLight));
  bool success = deva_perception_msgs__msg__TrafficLight__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__TrafficLight__destroy(deva_perception_msgs__msg__TrafficLight * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__TrafficLight__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__TrafficLight__Sequence__init(deva_perception_msgs__msg__TrafficLight__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficLight * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__TrafficLight *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__TrafficLight), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__TrafficLight__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__TrafficLight__fini(&data[i - 1]);
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
deva_perception_msgs__msg__TrafficLight__Sequence__fini(deva_perception_msgs__msg__TrafficLight__Sequence * array)
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
      deva_perception_msgs__msg__TrafficLight__fini(&array->data[i]);
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

deva_perception_msgs__msg__TrafficLight__Sequence *
deva_perception_msgs__msg__TrafficLight__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__TrafficLight__Sequence * array = (deva_perception_msgs__msg__TrafficLight__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__TrafficLight__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__TrafficLight__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__TrafficLight__Sequence__destroy(deva_perception_msgs__msg__TrafficLight__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__TrafficLight__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__TrafficLight__Sequence__are_equal(const deva_perception_msgs__msg__TrafficLight__Sequence * lhs, const deva_perception_msgs__msg__TrafficLight__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficLight__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__TrafficLight__Sequence__copy(
  const deva_perception_msgs__msg__TrafficLight__Sequence * input,
  deva_perception_msgs__msg__TrafficLight__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__TrafficLight);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__TrafficLight * data =
      (deva_perception_msgs__msg__TrafficLight *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__TrafficLight__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__TrafficLight__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__TrafficLight__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
