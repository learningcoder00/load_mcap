// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/radar_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_perception_msgs__msg__RadarStatus__init(deva_perception_msgs__msg__RadarStatus * msg)
{
  if (!msg) {
    return false;
  }
  // num_detection
  // num_object
  // status_enable
  // status_faulty
  // status_latency
  // status_safety_fault
  // timestamp_h
  // timestamp_l
  // vdy_velocity
  // vdy_yawrate
  // vdy_timestamp
  return true;
}

void
deva_perception_msgs__msg__RadarStatus__fini(deva_perception_msgs__msg__RadarStatus * msg)
{
  if (!msg) {
    return;
  }
  // num_detection
  // num_object
  // status_enable
  // status_faulty
  // status_latency
  // status_safety_fault
  // timestamp_h
  // timestamp_l
  // vdy_velocity
  // vdy_yawrate
  // vdy_timestamp
}

bool
deva_perception_msgs__msg__RadarStatus__are_equal(const deva_perception_msgs__msg__RadarStatus * lhs, const deva_perception_msgs__msg__RadarStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_detection
  if (lhs->num_detection != rhs->num_detection) {
    return false;
  }
  // num_object
  if (lhs->num_object != rhs->num_object) {
    return false;
  }
  // status_enable
  if (lhs->status_enable != rhs->status_enable) {
    return false;
  }
  // status_faulty
  if (lhs->status_faulty != rhs->status_faulty) {
    return false;
  }
  // status_latency
  if (lhs->status_latency != rhs->status_latency) {
    return false;
  }
  // status_safety_fault
  if (lhs->status_safety_fault != rhs->status_safety_fault) {
    return false;
  }
  // timestamp_h
  if (lhs->timestamp_h != rhs->timestamp_h) {
    return false;
  }
  // timestamp_l
  if (lhs->timestamp_l != rhs->timestamp_l) {
    return false;
  }
  // vdy_velocity
  if (lhs->vdy_velocity != rhs->vdy_velocity) {
    return false;
  }
  // vdy_yawrate
  if (lhs->vdy_yawrate != rhs->vdy_yawrate) {
    return false;
  }
  // vdy_timestamp
  if (lhs->vdy_timestamp != rhs->vdy_timestamp) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarStatus__copy(
  const deva_perception_msgs__msg__RadarStatus * input,
  deva_perception_msgs__msg__RadarStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // num_detection
  output->num_detection = input->num_detection;
  // num_object
  output->num_object = input->num_object;
  // status_enable
  output->status_enable = input->status_enable;
  // status_faulty
  output->status_faulty = input->status_faulty;
  // status_latency
  output->status_latency = input->status_latency;
  // status_safety_fault
  output->status_safety_fault = input->status_safety_fault;
  // timestamp_h
  output->timestamp_h = input->timestamp_h;
  // timestamp_l
  output->timestamp_l = input->timestamp_l;
  // vdy_velocity
  output->vdy_velocity = input->vdy_velocity;
  // vdy_yawrate
  output->vdy_yawrate = input->vdy_yawrate;
  // vdy_timestamp
  output->vdy_timestamp = input->vdy_timestamp;
  return true;
}

deva_perception_msgs__msg__RadarStatus *
deva_perception_msgs__msg__RadarStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarStatus * msg = (deva_perception_msgs__msg__RadarStatus *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__RadarStatus));
  bool success = deva_perception_msgs__msg__RadarStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__RadarStatus__destroy(deva_perception_msgs__msg__RadarStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__RadarStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__RadarStatus__Sequence__init(deva_perception_msgs__msg__RadarStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarStatus * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__RadarStatus *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__RadarStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__RadarStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__RadarStatus__fini(&data[i - 1]);
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
deva_perception_msgs__msg__RadarStatus__Sequence__fini(deva_perception_msgs__msg__RadarStatus__Sequence * array)
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
      deva_perception_msgs__msg__RadarStatus__fini(&array->data[i]);
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

deva_perception_msgs__msg__RadarStatus__Sequence *
deva_perception_msgs__msg__RadarStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__RadarStatus__Sequence * array = (deva_perception_msgs__msg__RadarStatus__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__RadarStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__RadarStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__RadarStatus__Sequence__destroy(deva_perception_msgs__msg__RadarStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__RadarStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__RadarStatus__Sequence__are_equal(const deva_perception_msgs__msg__RadarStatus__Sequence * lhs, const deva_perception_msgs__msg__RadarStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__RadarStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__RadarStatus__Sequence__copy(
  const deva_perception_msgs__msg__RadarStatus__Sequence * input,
  deva_perception_msgs__msg__RadarStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__RadarStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__RadarStatus * data =
      (deva_perception_msgs__msg__RadarStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__RadarStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__RadarStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__RadarStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
