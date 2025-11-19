// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachCalibrationResponse.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_calibration_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `calibration_response`
// Member `calibration_reason`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_function_msgs__msg__MachCalibrationResponse__init(deva_function_msgs__msg__MachCalibrationResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachCalibrationResponse__fini(msg);
    return false;
  }
  // calibration_response
  if (!rosidl_runtime_c__String__init(&msg->calibration_response)) {
    deva_function_msgs__msg__MachCalibrationResponse__fini(msg);
    return false;
  }
  // calibration_reason
  if (!rosidl_runtime_c__String__init(&msg->calibration_reason)) {
    deva_function_msgs__msg__MachCalibrationResponse__fini(msg);
    return false;
  }
  // calibration_type
  // sensor_type
  // length
  // res_content
  return true;
}

void
deva_function_msgs__msg__MachCalibrationResponse__fini(deva_function_msgs__msg__MachCalibrationResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // calibration_response
  rosidl_runtime_c__String__fini(&msg->calibration_response);
  // calibration_reason
  rosidl_runtime_c__String__fini(&msg->calibration_reason);
  // calibration_type
  // sensor_type
  // length
  // res_content
}

bool
deva_function_msgs__msg__MachCalibrationResponse__are_equal(const deva_function_msgs__msg__MachCalibrationResponse * lhs, const deva_function_msgs__msg__MachCalibrationResponse * rhs)
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
  // calibration_response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->calibration_response), &(rhs->calibration_response)))
  {
    return false;
  }
  // calibration_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->calibration_reason), &(rhs->calibration_reason)))
  {
    return false;
  }
  // calibration_type
  if (lhs->calibration_type != rhs->calibration_type) {
    return false;
  }
  // sensor_type
  if (lhs->sensor_type != rhs->sensor_type) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // res_content
  for (size_t i = 0; i < 256; ++i) {
    if (lhs->res_content[i] != rhs->res_content[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachCalibrationResponse__copy(
  const deva_function_msgs__msg__MachCalibrationResponse * input,
  deva_function_msgs__msg__MachCalibrationResponse * output)
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
  // calibration_response
  if (!rosidl_runtime_c__String__copy(
      &(input->calibration_response), &(output->calibration_response)))
  {
    return false;
  }
  // calibration_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->calibration_reason), &(output->calibration_reason)))
  {
    return false;
  }
  // calibration_type
  output->calibration_type = input->calibration_type;
  // sensor_type
  output->sensor_type = input->sensor_type;
  // length
  output->length = input->length;
  // res_content
  for (size_t i = 0; i < 256; ++i) {
    output->res_content[i] = input->res_content[i];
  }
  return true;
}

deva_function_msgs__msg__MachCalibrationResponse *
deva_function_msgs__msg__MachCalibrationResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResponse * msg = (deva_function_msgs__msg__MachCalibrationResponse *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCalibrationResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachCalibrationResponse));
  bool success = deva_function_msgs__msg__MachCalibrationResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachCalibrationResponse__destroy(deva_function_msgs__msg__MachCalibrationResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachCalibrationResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachCalibrationResponse__Sequence__init(deva_function_msgs__msg__MachCalibrationResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResponse * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachCalibrationResponse *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachCalibrationResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachCalibrationResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachCalibrationResponse__fini(&data[i - 1]);
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
deva_function_msgs__msg__MachCalibrationResponse__Sequence__fini(deva_function_msgs__msg__MachCalibrationResponse__Sequence * array)
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
      deva_function_msgs__msg__MachCalibrationResponse__fini(&array->data[i]);
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

deva_function_msgs__msg__MachCalibrationResponse__Sequence *
deva_function_msgs__msg__MachCalibrationResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResponse__Sequence * array = (deva_function_msgs__msg__MachCalibrationResponse__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCalibrationResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachCalibrationResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachCalibrationResponse__Sequence__destroy(deva_function_msgs__msg__MachCalibrationResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachCalibrationResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachCalibrationResponse__Sequence__are_equal(const deva_function_msgs__msg__MachCalibrationResponse__Sequence * lhs, const deva_function_msgs__msg__MachCalibrationResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachCalibrationResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachCalibrationResponse__Sequence__copy(
  const deva_function_msgs__msg__MachCalibrationResponse__Sequence * input,
  deva_function_msgs__msg__MachCalibrationResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachCalibrationResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachCalibrationResponse * data =
      (deva_function_msgs__msg__MachCalibrationResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachCalibrationResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachCalibrationResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachCalibrationResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
