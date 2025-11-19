// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_planning_msgs:msg/VehicleSignal.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/vehicle_signal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
deva_planning_msgs__msg__VehicleSignal__init(deva_planning_msgs__msg__VehicleSignal * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_planning_msgs__msg__VehicleSignal__fini(msg);
    return false;
  }
  // high_beam
  // low_beam
  // horn
  // emergency_light
  // turn_light
  return true;
}

void
deva_planning_msgs__msg__VehicleSignal__fini(deva_planning_msgs__msg__VehicleSignal * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // high_beam
  // low_beam
  // horn
  // emergency_light
  // turn_light
}

bool
deva_planning_msgs__msg__VehicleSignal__are_equal(const deva_planning_msgs__msg__VehicleSignal * lhs, const deva_planning_msgs__msg__VehicleSignal * rhs)
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
  // high_beam
  if (lhs->high_beam != rhs->high_beam) {
    return false;
  }
  // low_beam
  if (lhs->low_beam != rhs->low_beam) {
    return false;
  }
  // horn
  if (lhs->horn != rhs->horn) {
    return false;
  }
  // emergency_light
  if (lhs->emergency_light != rhs->emergency_light) {
    return false;
  }
  // turn_light
  if (lhs->turn_light != rhs->turn_light) {
    return false;
  }
  return true;
}

bool
deva_planning_msgs__msg__VehicleSignal__copy(
  const deva_planning_msgs__msg__VehicleSignal * input,
  deva_planning_msgs__msg__VehicleSignal * output)
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
  // high_beam
  output->high_beam = input->high_beam;
  // low_beam
  output->low_beam = input->low_beam;
  // horn
  output->horn = input->horn;
  // emergency_light
  output->emergency_light = input->emergency_light;
  // turn_light
  output->turn_light = input->turn_light;
  return true;
}

deva_planning_msgs__msg__VehicleSignal *
deva_planning_msgs__msg__VehicleSignal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__VehicleSignal * msg = (deva_planning_msgs__msg__VehicleSignal *)allocator.allocate(sizeof(deva_planning_msgs__msg__VehicleSignal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_planning_msgs__msg__VehicleSignal));
  bool success = deva_planning_msgs__msg__VehicleSignal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_planning_msgs__msg__VehicleSignal__destroy(deva_planning_msgs__msg__VehicleSignal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_planning_msgs__msg__VehicleSignal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_planning_msgs__msg__VehicleSignal__Sequence__init(deva_planning_msgs__msg__VehicleSignal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__VehicleSignal * data = NULL;

  if (size) {
    data = (deva_planning_msgs__msg__VehicleSignal *)allocator.zero_allocate(size, sizeof(deva_planning_msgs__msg__VehicleSignal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_planning_msgs__msg__VehicleSignal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_planning_msgs__msg__VehicleSignal__fini(&data[i - 1]);
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
deva_planning_msgs__msg__VehicleSignal__Sequence__fini(deva_planning_msgs__msg__VehicleSignal__Sequence * array)
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
      deva_planning_msgs__msg__VehicleSignal__fini(&array->data[i]);
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

deva_planning_msgs__msg__VehicleSignal__Sequence *
deva_planning_msgs__msg__VehicleSignal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_planning_msgs__msg__VehicleSignal__Sequence * array = (deva_planning_msgs__msg__VehicleSignal__Sequence *)allocator.allocate(sizeof(deva_planning_msgs__msg__VehicleSignal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_planning_msgs__msg__VehicleSignal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_planning_msgs__msg__VehicleSignal__Sequence__destroy(deva_planning_msgs__msg__VehicleSignal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_planning_msgs__msg__VehicleSignal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_planning_msgs__msg__VehicleSignal__Sequence__are_equal(const deva_planning_msgs__msg__VehicleSignal__Sequence * lhs, const deva_planning_msgs__msg__VehicleSignal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_planning_msgs__msg__VehicleSignal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_planning_msgs__msg__VehicleSignal__Sequence__copy(
  const deva_planning_msgs__msg__VehicleSignal__Sequence * input,
  deva_planning_msgs__msg__VehicleSignal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_planning_msgs__msg__VehicleSignal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_planning_msgs__msg__VehicleSignal * data =
      (deva_planning_msgs__msg__VehicleSignal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_planning_msgs__msg__VehicleSignal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_planning_msgs__msg__VehicleSignal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_planning_msgs__msg__VehicleSignal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
