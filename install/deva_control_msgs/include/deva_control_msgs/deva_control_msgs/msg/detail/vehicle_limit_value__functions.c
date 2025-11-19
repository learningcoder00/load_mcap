// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/VehicleLimitValue.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_limit_value__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value_type`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_control_msgs__msg__VehicleLimitValue__init(deva_control_msgs__msg__VehicleLimitValue * msg)
{
  if (!msg) {
    return false;
  }
  // value_type
  if (!rosidl_runtime_c__String__init(&msg->value_type)) {
    deva_control_msgs__msg__VehicleLimitValue__fini(msg);
    return false;
  }
  // value
  return true;
}

void
deva_control_msgs__msg__VehicleLimitValue__fini(deva_control_msgs__msg__VehicleLimitValue * msg)
{
  if (!msg) {
    return;
  }
  // value_type
  rosidl_runtime_c__String__fini(&msg->value_type);
  // value
}

bool
deva_control_msgs__msg__VehicleLimitValue__are_equal(const deva_control_msgs__msg__VehicleLimitValue * lhs, const deva_control_msgs__msg__VehicleLimitValue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->value_type), &(rhs->value_type)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleLimitValue__copy(
  const deva_control_msgs__msg__VehicleLimitValue * input,
  deva_control_msgs__msg__VehicleLimitValue * output)
{
  if (!input || !output) {
    return false;
  }
  // value_type
  if (!rosidl_runtime_c__String__copy(
      &(input->value_type), &(output->value_type)))
  {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

deva_control_msgs__msg__VehicleLimitValue *
deva_control_msgs__msg__VehicleLimitValue__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleLimitValue * msg = (deva_control_msgs__msg__VehicleLimitValue *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleLimitValue), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__VehicleLimitValue));
  bool success = deva_control_msgs__msg__VehicleLimitValue__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__VehicleLimitValue__destroy(deva_control_msgs__msg__VehicleLimitValue * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__VehicleLimitValue__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__VehicleLimitValue__Sequence__init(deva_control_msgs__msg__VehicleLimitValue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleLimitValue * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__VehicleLimitValue *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__VehicleLimitValue), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__VehicleLimitValue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__VehicleLimitValue__fini(&data[i - 1]);
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
deva_control_msgs__msg__VehicleLimitValue__Sequence__fini(deva_control_msgs__msg__VehicleLimitValue__Sequence * array)
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
      deva_control_msgs__msg__VehicleLimitValue__fini(&array->data[i]);
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

deva_control_msgs__msg__VehicleLimitValue__Sequence *
deva_control_msgs__msg__VehicleLimitValue__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleLimitValue__Sequence * array = (deva_control_msgs__msg__VehicleLimitValue__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleLimitValue__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__VehicleLimitValue__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__VehicleLimitValue__Sequence__destroy(deva_control_msgs__msg__VehicleLimitValue__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__VehicleLimitValue__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__VehicleLimitValue__Sequence__are_equal(const deva_control_msgs__msg__VehicleLimitValue__Sequence * lhs, const deva_control_msgs__msg__VehicleLimitValue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__VehicleLimitValue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleLimitValue__Sequence__copy(
  const deva_control_msgs__msg__VehicleLimitValue__Sequence * input,
  deva_control_msgs__msg__VehicleLimitValue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__VehicleLimitValue);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__VehicleLimitValue * data =
      (deva_control_msgs__msg__VehicleLimitValue *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__VehicleLimitValue__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__VehicleLimitValue__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__VehicleLimitValue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
