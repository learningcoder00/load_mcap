// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/CalibrationCtrl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/calibration_ctrl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__CalibrationCtrl__init(deva_function_msgs__msg__CalibrationCtrl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__CalibrationCtrl__fini(msg);
    return false;
  }
  // calibration_action
  // calibration_type
  return true;
}

void
deva_function_msgs__msg__CalibrationCtrl__fini(deva_function_msgs__msg__CalibrationCtrl * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // calibration_action
  // calibration_type
}

bool
deva_function_msgs__msg__CalibrationCtrl__are_equal(const deva_function_msgs__msg__CalibrationCtrl * lhs, const deva_function_msgs__msg__CalibrationCtrl * rhs)
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
  // calibration_action
  if (lhs->calibration_action != rhs->calibration_action) {
    return false;
  }
  // calibration_type
  if (lhs->calibration_type != rhs->calibration_type) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__CalibrationCtrl__copy(
  const deva_function_msgs__msg__CalibrationCtrl * input,
  deva_function_msgs__msg__CalibrationCtrl * output)
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
  // calibration_action
  output->calibration_action = input->calibration_action;
  // calibration_type
  output->calibration_type = input->calibration_type;
  return true;
}

deva_function_msgs__msg__CalibrationCtrl *
deva_function_msgs__msg__CalibrationCtrl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__CalibrationCtrl * msg = (deva_function_msgs__msg__CalibrationCtrl *)allocator.allocate(sizeof(deva_function_msgs__msg__CalibrationCtrl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__CalibrationCtrl));
  bool success = deva_function_msgs__msg__CalibrationCtrl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__CalibrationCtrl__destroy(deva_function_msgs__msg__CalibrationCtrl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__CalibrationCtrl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__CalibrationCtrl__Sequence__init(deva_function_msgs__msg__CalibrationCtrl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__CalibrationCtrl * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__CalibrationCtrl *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__CalibrationCtrl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__CalibrationCtrl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__CalibrationCtrl__fini(&data[i - 1]);
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
deva_function_msgs__msg__CalibrationCtrl__Sequence__fini(deva_function_msgs__msg__CalibrationCtrl__Sequence * array)
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
      deva_function_msgs__msg__CalibrationCtrl__fini(&array->data[i]);
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

deva_function_msgs__msg__CalibrationCtrl__Sequence *
deva_function_msgs__msg__CalibrationCtrl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__CalibrationCtrl__Sequence * array = (deva_function_msgs__msg__CalibrationCtrl__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__CalibrationCtrl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__CalibrationCtrl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__CalibrationCtrl__Sequence__destroy(deva_function_msgs__msg__CalibrationCtrl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__CalibrationCtrl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__CalibrationCtrl__Sequence__are_equal(const deva_function_msgs__msg__CalibrationCtrl__Sequence * lhs, const deva_function_msgs__msg__CalibrationCtrl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__CalibrationCtrl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__CalibrationCtrl__Sequence__copy(
  const deva_function_msgs__msg__CalibrationCtrl__Sequence * input,
  deva_function_msgs__msg__CalibrationCtrl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__CalibrationCtrl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__CalibrationCtrl * data =
      (deva_function_msgs__msg__CalibrationCtrl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__CalibrationCtrl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__CalibrationCtrl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__CalibrationCtrl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
