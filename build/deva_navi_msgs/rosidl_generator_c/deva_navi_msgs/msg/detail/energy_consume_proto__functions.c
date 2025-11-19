// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/energy_consume_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `energy_end_point`
#include "deva_navi_msgs/msg/detail/energy_end_point_proto__functions.h"
// Member `vehiclechargeleft`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_navi_msgs__msg__EnergyConsumeProto__init(deva_navi_msgs__msg__EnergyConsumeProto * msg)
{
  if (!msg) {
    return false;
  }
  // energy_end_flag
  // energy_end_point
  if (!deva_navi_msgs__msg__EnergyEndPointProto__init(&msg->energy_end_point)) {
    deva_navi_msgs__msg__EnergyConsumeProto__fini(msg);
    return false;
  }
  // vehiclechargeleft
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->vehiclechargeleft, 0)) {
    deva_navi_msgs__msg__EnergyConsumeProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__EnergyConsumeProto__fini(deva_navi_msgs__msg__EnergyConsumeProto * msg)
{
  if (!msg) {
    return;
  }
  // energy_end_flag
  // energy_end_point
  deva_navi_msgs__msg__EnergyEndPointProto__fini(&msg->energy_end_point);
  // vehiclechargeleft
  rosidl_runtime_c__int32__Sequence__fini(&msg->vehiclechargeleft);
}

bool
deva_navi_msgs__msg__EnergyConsumeProto__are_equal(const deva_navi_msgs__msg__EnergyConsumeProto * lhs, const deva_navi_msgs__msg__EnergyConsumeProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // energy_end_flag
  if (lhs->energy_end_flag != rhs->energy_end_flag) {
    return false;
  }
  // energy_end_point
  if (!deva_navi_msgs__msg__EnergyEndPointProto__are_equal(
      &(lhs->energy_end_point), &(rhs->energy_end_point)))
  {
    return false;
  }
  // vehiclechargeleft
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->vehiclechargeleft), &(rhs->vehiclechargeleft)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__EnergyConsumeProto__copy(
  const deva_navi_msgs__msg__EnergyConsumeProto * input,
  deva_navi_msgs__msg__EnergyConsumeProto * output)
{
  if (!input || !output) {
    return false;
  }
  // energy_end_flag
  output->energy_end_flag = input->energy_end_flag;
  // energy_end_point
  if (!deva_navi_msgs__msg__EnergyEndPointProto__copy(
      &(input->energy_end_point), &(output->energy_end_point)))
  {
    return false;
  }
  // vehiclechargeleft
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->vehiclechargeleft), &(output->vehiclechargeleft)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__EnergyConsumeProto *
deva_navi_msgs__msg__EnergyConsumeProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__EnergyConsumeProto * msg = (deva_navi_msgs__msg__EnergyConsumeProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__EnergyConsumeProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__EnergyConsumeProto));
  bool success = deva_navi_msgs__msg__EnergyConsumeProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__EnergyConsumeProto__destroy(deva_navi_msgs__msg__EnergyConsumeProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__EnergyConsumeProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__init(deva_navi_msgs__msg__EnergyConsumeProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__EnergyConsumeProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__EnergyConsumeProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__EnergyConsumeProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__EnergyConsumeProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__EnergyConsumeProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__fini(deva_navi_msgs__msg__EnergyConsumeProto__Sequence * array)
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
      deva_navi_msgs__msg__EnergyConsumeProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__EnergyConsumeProto__Sequence *
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__EnergyConsumeProto__Sequence * array = (deva_navi_msgs__msg__EnergyConsumeProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__EnergyConsumeProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__EnergyConsumeProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__destroy(deva_navi_msgs__msg__EnergyConsumeProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__EnergyConsumeProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__are_equal(const deva_navi_msgs__msg__EnergyConsumeProto__Sequence * lhs, const deva_navi_msgs__msg__EnergyConsumeProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__EnergyConsumeProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__EnergyConsumeProto__Sequence__copy(
  const deva_navi_msgs__msg__EnergyConsumeProto__Sequence * input,
  deva_navi_msgs__msg__EnergyConsumeProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__EnergyConsumeProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__EnergyConsumeProto * data =
      (deva_navi_msgs__msg__EnergyConsumeProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__EnergyConsumeProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__EnergyConsumeProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__EnergyConsumeProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
