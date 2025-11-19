// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachCalibrationResult.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_calibration_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__MachCalibrationResult__init(deva_function_msgs__msg__MachCalibrationResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachCalibrationResult__fini(msg);
    return false;
  }
  // calibration_type
  // senor_type
  // length
  // res_content
  return true;
}

void
deva_function_msgs__msg__MachCalibrationResult__fini(deva_function_msgs__msg__MachCalibrationResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // calibration_type
  // senor_type
  // length
  // res_content
}

bool
deva_function_msgs__msg__MachCalibrationResult__are_equal(const deva_function_msgs__msg__MachCalibrationResult * lhs, const deva_function_msgs__msg__MachCalibrationResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // calibration_type
  if (lhs->calibration_type != rhs->calibration_type) {
    return false;
  }
  // senor_type
  if (lhs->senor_type != rhs->senor_type) {
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
deva_function_msgs__msg__MachCalibrationResult__copy(
  const deva_function_msgs__msg__MachCalibrationResult * input,
  deva_function_msgs__msg__MachCalibrationResult * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // calibration_type
  output->calibration_type = input->calibration_type;
  // senor_type
  output->senor_type = input->senor_type;
  // length
  output->length = input->length;
  // res_content
  for (size_t i = 0; i < 256; ++i) {
    output->res_content[i] = input->res_content[i];
  }
  return true;
}

deva_function_msgs__msg__MachCalibrationResult *
deva_function_msgs__msg__MachCalibrationResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResult * msg = (deva_function_msgs__msg__MachCalibrationResult *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCalibrationResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachCalibrationResult));
  bool success = deva_function_msgs__msg__MachCalibrationResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachCalibrationResult__destroy(deva_function_msgs__msg__MachCalibrationResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachCalibrationResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachCalibrationResult__Sequence__init(deva_function_msgs__msg__MachCalibrationResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResult * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachCalibrationResult *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachCalibrationResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachCalibrationResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachCalibrationResult__fini(&data[i - 1]);
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
deva_function_msgs__msg__MachCalibrationResult__Sequence__fini(deva_function_msgs__msg__MachCalibrationResult__Sequence * array)
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
      deva_function_msgs__msg__MachCalibrationResult__fini(&array->data[i]);
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

deva_function_msgs__msg__MachCalibrationResult__Sequence *
deva_function_msgs__msg__MachCalibrationResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachCalibrationResult__Sequence * array = (deva_function_msgs__msg__MachCalibrationResult__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachCalibrationResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachCalibrationResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachCalibrationResult__Sequence__destroy(deva_function_msgs__msg__MachCalibrationResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachCalibrationResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachCalibrationResult__Sequence__are_equal(const deva_function_msgs__msg__MachCalibrationResult__Sequence * lhs, const deva_function_msgs__msg__MachCalibrationResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachCalibrationResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachCalibrationResult__Sequence__copy(
  const deva_function_msgs__msg__MachCalibrationResult__Sequence * input,
  deva_function_msgs__msg__MachCalibrationResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachCalibrationResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachCalibrationResult * data =
      (deva_function_msgs__msg__MachCalibrationResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachCalibrationResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachCalibrationResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachCalibrationResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
