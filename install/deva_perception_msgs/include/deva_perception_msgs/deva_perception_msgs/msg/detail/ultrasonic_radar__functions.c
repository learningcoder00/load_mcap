// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `radar_name`
// Member `radar_type`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_perception_msgs__msg__UltrasonicRadar__init(deva_perception_msgs__msg__UltrasonicRadar * msg)
{
  if (!msg) {
    return false;
  }
  // radar_identify_id
  // radar_name
  if (!rosidl_runtime_c__String__init(&msg->radar_name)) {
    deva_perception_msgs__msg__UltrasonicRadar__fini(msg);
    return false;
  }
  // radar_type
  if (!rosidl_runtime_c__String__init(&msg->radar_type)) {
    deva_perception_msgs__msg__UltrasonicRadar__fini(msg);
    return false;
  }
  // radar_state
  // radar_tx_status
  // radar_rx_status
  // range
  // max_radar_distance
  // radar_distance
  // radar_distance_vaild
  return true;
}

void
deva_perception_msgs__msg__UltrasonicRadar__fini(deva_perception_msgs__msg__UltrasonicRadar * msg)
{
  if (!msg) {
    return;
  }
  // radar_identify_id
  // radar_name
  rosidl_runtime_c__String__fini(&msg->radar_name);
  // radar_type
  rosidl_runtime_c__String__fini(&msg->radar_type);
  // radar_state
  // radar_tx_status
  // radar_rx_status
  // range
  // max_radar_distance
  // radar_distance
  // radar_distance_vaild
}

bool
deva_perception_msgs__msg__UltrasonicRadar__are_equal(const deva_perception_msgs__msg__UltrasonicRadar * lhs, const deva_perception_msgs__msg__UltrasonicRadar * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // radar_identify_id
  if (lhs->radar_identify_id != rhs->radar_identify_id) {
    return false;
  }
  // radar_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->radar_name), &(rhs->radar_name)))
  {
    return false;
  }
  // radar_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->radar_type), &(rhs->radar_type)))
  {
    return false;
  }
  // radar_state
  if (lhs->radar_state != rhs->radar_state) {
    return false;
  }
  // radar_tx_status
  if (lhs->radar_tx_status != rhs->radar_tx_status) {
    return false;
  }
  // radar_rx_status
  if (lhs->radar_rx_status != rhs->radar_rx_status) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  // max_radar_distance
  if (lhs->max_radar_distance != rhs->max_radar_distance) {
    return false;
  }
  // radar_distance
  if (lhs->radar_distance != rhs->radar_distance) {
    return false;
  }
  // radar_distance_vaild
  if (lhs->radar_distance_vaild != rhs->radar_distance_vaild) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__UltrasonicRadar__copy(
  const deva_perception_msgs__msg__UltrasonicRadar * input,
  deva_perception_msgs__msg__UltrasonicRadar * output)
{
  if (!input || !output) {
    return false;
  }
  // radar_identify_id
  output->radar_identify_id = input->radar_identify_id;
  // radar_name
  if (!rosidl_runtime_c__String__copy(
      &(input->radar_name), &(output->radar_name)))
  {
    return false;
  }
  // radar_type
  if (!rosidl_runtime_c__String__copy(
      &(input->radar_type), &(output->radar_type)))
  {
    return false;
  }
  // radar_state
  output->radar_state = input->radar_state;
  // radar_tx_status
  output->radar_tx_status = input->radar_tx_status;
  // radar_rx_status
  output->radar_rx_status = input->radar_rx_status;
  // range
  output->range = input->range;
  // max_radar_distance
  output->max_radar_distance = input->max_radar_distance;
  // radar_distance
  output->radar_distance = input->radar_distance;
  // radar_distance_vaild
  output->radar_distance_vaild = input->radar_distance_vaild;
  return true;
}

deva_perception_msgs__msg__UltrasonicRadar *
deva_perception_msgs__msg__UltrasonicRadar__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__UltrasonicRadar * msg = (deva_perception_msgs__msg__UltrasonicRadar *)allocator.allocate(sizeof(deva_perception_msgs__msg__UltrasonicRadar), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__UltrasonicRadar));
  bool success = deva_perception_msgs__msg__UltrasonicRadar__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__UltrasonicRadar__destroy(deva_perception_msgs__msg__UltrasonicRadar * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__UltrasonicRadar__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__UltrasonicRadar__Sequence__init(deva_perception_msgs__msg__UltrasonicRadar__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__UltrasonicRadar * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__UltrasonicRadar *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__UltrasonicRadar), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__UltrasonicRadar__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__UltrasonicRadar__fini(&data[i - 1]);
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
deva_perception_msgs__msg__UltrasonicRadar__Sequence__fini(deva_perception_msgs__msg__UltrasonicRadar__Sequence * array)
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
      deva_perception_msgs__msg__UltrasonicRadar__fini(&array->data[i]);
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

deva_perception_msgs__msg__UltrasonicRadar__Sequence *
deva_perception_msgs__msg__UltrasonicRadar__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__UltrasonicRadar__Sequence * array = (deva_perception_msgs__msg__UltrasonicRadar__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__UltrasonicRadar__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__UltrasonicRadar__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__UltrasonicRadar__Sequence__destroy(deva_perception_msgs__msg__UltrasonicRadar__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__UltrasonicRadar__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__UltrasonicRadar__Sequence__are_equal(const deva_perception_msgs__msg__UltrasonicRadar__Sequence * lhs, const deva_perception_msgs__msg__UltrasonicRadar__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__UltrasonicRadar__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__UltrasonicRadar__Sequence__copy(
  const deva_perception_msgs__msg__UltrasonicRadar__Sequence * input,
  deva_perception_msgs__msg__UltrasonicRadar__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__UltrasonicRadar);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__UltrasonicRadar * data =
      (deva_perception_msgs__msg__UltrasonicRadar *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__UltrasonicRadar__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__UltrasonicRadar__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__UltrasonicRadar__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
