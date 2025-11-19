// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/ParkingStatus.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/parking_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_control_msgs__msg__ParkingStatus__init(deva_control_msgs__msg__ParkingStatus * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
deva_control_msgs__msg__ParkingStatus__fini(deva_control_msgs__msg__ParkingStatus * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
deva_control_msgs__msg__ParkingStatus__are_equal(const deva_control_msgs__msg__ParkingStatus * lhs, const deva_control_msgs__msg__ParkingStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__ParkingStatus__copy(
  const deva_control_msgs__msg__ParkingStatus * input,
  deva_control_msgs__msg__ParkingStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

deva_control_msgs__msg__ParkingStatus *
deva_control_msgs__msg__ParkingStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ParkingStatus * msg = (deva_control_msgs__msg__ParkingStatus *)allocator.allocate(sizeof(deva_control_msgs__msg__ParkingStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__ParkingStatus));
  bool success = deva_control_msgs__msg__ParkingStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__ParkingStatus__destroy(deva_control_msgs__msg__ParkingStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__ParkingStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__ParkingStatus__Sequence__init(deva_control_msgs__msg__ParkingStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ParkingStatus * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__ParkingStatus *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__ParkingStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__ParkingStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__ParkingStatus__fini(&data[i - 1]);
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
deva_control_msgs__msg__ParkingStatus__Sequence__fini(deva_control_msgs__msg__ParkingStatus__Sequence * array)
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
      deva_control_msgs__msg__ParkingStatus__fini(&array->data[i]);
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

deva_control_msgs__msg__ParkingStatus__Sequence *
deva_control_msgs__msg__ParkingStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__ParkingStatus__Sequence * array = (deva_control_msgs__msg__ParkingStatus__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__ParkingStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__ParkingStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__ParkingStatus__Sequence__destroy(deva_control_msgs__msg__ParkingStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__ParkingStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__ParkingStatus__Sequence__are_equal(const deva_control_msgs__msg__ParkingStatus__Sequence * lhs, const deva_control_msgs__msg__ParkingStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__ParkingStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__ParkingStatus__Sequence__copy(
  const deva_control_msgs__msg__ParkingStatus__Sequence * input,
  deva_control_msgs__msg__ParkingStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__ParkingStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__ParkingStatus * data =
      (deva_control_msgs__msg__ParkingStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__ParkingStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__ParkingStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__ParkingStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
