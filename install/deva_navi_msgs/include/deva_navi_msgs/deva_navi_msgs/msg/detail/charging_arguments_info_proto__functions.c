// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__init(deva_navi_msgs__msg__ChargingArgumentsInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // min_arrival_percent
  // power
  // voltage
  // amperage
  return true;
}

void
deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(deva_navi_msgs__msg__ChargingArgumentsInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // type
  // min_arrival_percent
  // power
  // voltage
  // amperage
}

bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__are_equal(const deva_navi_msgs__msg__ChargingArgumentsInfoProto * lhs, const deva_navi_msgs__msg__ChargingArgumentsInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // min_arrival_percent
  if (lhs->min_arrival_percent != rhs->min_arrival_percent) {
    return false;
  }
  // power
  if (lhs->power != rhs->power) {
    return false;
  }
  // voltage
  if (lhs->voltage != rhs->voltage) {
    return false;
  }
  // amperage
  if (lhs->amperage != rhs->amperage) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__copy(
  const deva_navi_msgs__msg__ChargingArgumentsInfoProto * input,
  deva_navi_msgs__msg__ChargingArgumentsInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // min_arrival_percent
  output->min_arrival_percent = input->min_arrival_percent;
  // power
  output->power = input->power;
  // voltage
  output->voltage = input->voltage;
  // amperage
  output->amperage = input->amperage;
  return true;
}

deva_navi_msgs__msg__ChargingArgumentsInfoProto *
deva_navi_msgs__msg__ChargingArgumentsInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargingArgumentsInfoProto * msg = (deva_navi_msgs__msg__ChargingArgumentsInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__ChargingArgumentsInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__ChargingArgumentsInfoProto));
  bool success = deva_navi_msgs__msg__ChargingArgumentsInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__ChargingArgumentsInfoProto__destroy(deva_navi_msgs__msg__ChargingArgumentsInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__init(deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargingArgumentsInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__ChargingArgumentsInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__ChargingArgumentsInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__ChargingArgumentsInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__fini(deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence *
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * array = (deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__destroy(deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * input,
  deva_navi_msgs__msg__ChargingArgumentsInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__ChargingArgumentsInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__ChargingArgumentsInfoProto * data =
      (deva_navi_msgs__msg__ChargingArgumentsInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
