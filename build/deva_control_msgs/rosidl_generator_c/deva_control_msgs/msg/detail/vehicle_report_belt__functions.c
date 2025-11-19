// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/vehicle_report_belt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_control_msgs__msg__VehicleReportBelt__init(deva_control_msgs__msg__VehicleReportBelt * msg)
{
  if (!msg) {
    return false;
  }
  // drv_belt
  // pass_belt
  // rl_belt
  // rm_belt
  // rr_belt
  return true;
}

void
deva_control_msgs__msg__VehicleReportBelt__fini(deva_control_msgs__msg__VehicleReportBelt * msg)
{
  if (!msg) {
    return;
  }
  // drv_belt
  // pass_belt
  // rl_belt
  // rm_belt
  // rr_belt
}

bool
deva_control_msgs__msg__VehicleReportBelt__are_equal(const deva_control_msgs__msg__VehicleReportBelt * lhs, const deva_control_msgs__msg__VehicleReportBelt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // drv_belt
  if (lhs->drv_belt != rhs->drv_belt) {
    return false;
  }
  // pass_belt
  if (lhs->pass_belt != rhs->pass_belt) {
    return false;
  }
  // rl_belt
  if (lhs->rl_belt != rhs->rl_belt) {
    return false;
  }
  // rm_belt
  if (lhs->rm_belt != rhs->rm_belt) {
    return false;
  }
  // rr_belt
  if (lhs->rr_belt != rhs->rr_belt) {
    return false;
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleReportBelt__copy(
  const deva_control_msgs__msg__VehicleReportBelt * input,
  deva_control_msgs__msg__VehicleReportBelt * output)
{
  if (!input || !output) {
    return false;
  }
  // drv_belt
  output->drv_belt = input->drv_belt;
  // pass_belt
  output->pass_belt = input->pass_belt;
  // rl_belt
  output->rl_belt = input->rl_belt;
  // rm_belt
  output->rm_belt = input->rm_belt;
  // rr_belt
  output->rr_belt = input->rr_belt;
  return true;
}

deva_control_msgs__msg__VehicleReportBelt *
deva_control_msgs__msg__VehicleReportBelt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportBelt * msg = (deva_control_msgs__msg__VehicleReportBelt *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleReportBelt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_control_msgs__msg__VehicleReportBelt));
  bool success = deva_control_msgs__msg__VehicleReportBelt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_control_msgs__msg__VehicleReportBelt__destroy(deva_control_msgs__msg__VehicleReportBelt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_control_msgs__msg__VehicleReportBelt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_control_msgs__msg__VehicleReportBelt__Sequence__init(deva_control_msgs__msg__VehicleReportBelt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportBelt * data = NULL;

  if (size) {
    data = (deva_control_msgs__msg__VehicleReportBelt *)allocator.zero_allocate(size, sizeof(deva_control_msgs__msg__VehicleReportBelt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_control_msgs__msg__VehicleReportBelt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_control_msgs__msg__VehicleReportBelt__fini(&data[i - 1]);
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
deva_control_msgs__msg__VehicleReportBelt__Sequence__fini(deva_control_msgs__msg__VehicleReportBelt__Sequence * array)
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
      deva_control_msgs__msg__VehicleReportBelt__fini(&array->data[i]);
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

deva_control_msgs__msg__VehicleReportBelt__Sequence *
deva_control_msgs__msg__VehicleReportBelt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_control_msgs__msg__VehicleReportBelt__Sequence * array = (deva_control_msgs__msg__VehicleReportBelt__Sequence *)allocator.allocate(sizeof(deva_control_msgs__msg__VehicleReportBelt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_control_msgs__msg__VehicleReportBelt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_control_msgs__msg__VehicleReportBelt__Sequence__destroy(deva_control_msgs__msg__VehicleReportBelt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_control_msgs__msg__VehicleReportBelt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_control_msgs__msg__VehicleReportBelt__Sequence__are_equal(const deva_control_msgs__msg__VehicleReportBelt__Sequence * lhs, const deva_control_msgs__msg__VehicleReportBelt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_control_msgs__msg__VehicleReportBelt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_control_msgs__msg__VehicleReportBelt__Sequence__copy(
  const deva_control_msgs__msg__VehicleReportBelt__Sequence * input,
  deva_control_msgs__msg__VehicleReportBelt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_control_msgs__msg__VehicleReportBelt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_control_msgs__msg__VehicleReportBelt * data =
      (deva_control_msgs__msg__VehicleReportBelt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_control_msgs__msg__VehicleReportBelt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_control_msgs__msg__VehicleReportBelt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_control_msgs__msg__VehicleReportBelt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
