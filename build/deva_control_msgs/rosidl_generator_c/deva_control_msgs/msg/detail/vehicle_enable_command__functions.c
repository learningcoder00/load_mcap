// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/VehicleEnableCommand.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_enable_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `protocol_version`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_control_msgs__msg__VehicleEnableCommand__init(deva_control_msgs__msg__VehicleEnableCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_control_msgs__msg__VehicleEnableCommand__fini(msg);
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__init(&msg->protocol_version)) {
    deva_control_msgs__msg__VehicleEnableCommand__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->protocol_version, "2.10");
    if (!success) {
      goto abort_init_0;
    }
  }
  // enable_bywire
  return true;
abort_init_0:
  return false;
}

void
deva_control_msgs__msg__VehicleEnableCommand__fini(deva_control_msgs__msg__VehicleEnableCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // protocol_version
  rosidl_runtime_c__String__fini(&msg->protocol_version);
  // enable_bywire
}

bool
deva_control_msgs__msg__VehicleEnableCommand__are_equal(const deva_control_msgs__msg__VehicleEnableCommand * lhs, const deva_control_msgs__msg__VehicleEnableCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->protocol_version), &(rhs->protocol_version)))
  {
    return false;
  }
  // enable_bywire
  if (lhs->enable_bywire != rhs->enable_bywire) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleEnableCommand__copy(
  const deva_control_msgs__msg__VehicleEnableCommand * input,
  deva_control_msgs__msg__VehicleEnableCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // protocol_version
  if (!rosidl_runtime_c__String__copy(
      &(input->protocol_version), &(output->protocol_version)))
  {
    return false;
  }
  // enable_bywire
  output->enable_bywire = input->enable_bywire;
  return true;
}

deva_control_msgs__msg__VehicleEnableCommand *
deva_control_msgs__msg__VehicleEnableCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleEnableCommand * msg = (deva_control_msgs__msg__VehicleEnableCommand *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleEnableCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__VehicleEnableCommand));
  bool success = deva_control_msgs__msg__VehicleEnableCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__VehicleEnableCommand__destroy(deva_control_msgs__msg__VehicleEnableCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__VehicleEnableCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__VehicleEnableCommand__Sequence__init(deva_control_msgs__msg__VehicleEnableCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleEnableCommand * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__VehicleEnableCommand *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__VehicleEnableCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__VehicleEnableCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__VehicleEnableCommand__fini(&data[i - 1]);
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
deva_control_msgs__msg__VehicleEnableCommand__Sequence__fini(deva_control_msgs__msg__VehicleEnableCommand__Sequence * array)
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
      deva_control_msgs__msg__VehicleEnableCommand__fini(&array->data[i]);
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

deva_control_msgs__msg__VehicleEnableCommand__Sequence *
deva_control_msgs__msg__VehicleEnableCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleEnableCommand__Sequence * array = (deva_control_msgs__msg__VehicleEnableCommand__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleEnableCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__VehicleEnableCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__VehicleEnableCommand__Sequence__destroy(deva_control_msgs__msg__VehicleEnableCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__VehicleEnableCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__VehicleEnableCommand__Sequence__are_equal(const deva_control_msgs__msg__VehicleEnableCommand__Sequence * lhs, const deva_control_msgs__msg__VehicleEnableCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__VehicleEnableCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleEnableCommand__Sequence__copy(
  const deva_control_msgs__msg__VehicleEnableCommand__Sequence * input,
  deva_control_msgs__msg__VehicleEnableCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__VehicleEnableCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__VehicleEnableCommand * data =
      (deva_control_msgs__msg__VehicleEnableCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__VehicleEnableCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__VehicleEnableCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__VehicleEnableCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
