// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFLaneEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFLaneEstimn__init(deva_aeb_msgs__msg__SFLaneEstimn * msg)
{
  if (!msg) {
    return false;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // dstlgttoend
  return true;
}

void
deva_aeb_msgs__msg__SFLaneEstimn__fini(deva_aeb_msgs__msg__SFLaneEstimn * msg)
{
  if (!msg) {
    return;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // dstlgttoend
}

bool
deva_aeb_msgs__msg__SFLaneEstimn__are_equal(const deva_aeb_msgs__msg__SFLaneEstimn * lhs, const deva_aeb_msgs__msg__SFLaneEstimn * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // constcoeff
  if (lhs->constcoeff != rhs->constcoeff) {
    return false;
  }
  // firstordercoeff
  if (lhs->firstordercoeff != rhs->firstordercoeff) {
    return false;
  }
  // secondordercoeff
  if (lhs->secondordercoeff != rhs->secondordercoeff) {
    return false;
  }
  // thirdordercoeff
  if (lhs->thirdordercoeff != rhs->thirdordercoeff) {
    return false;
  }
  // startpointposx
  if (lhs->startpointposx != rhs->startpointposx) {
    return false;
  }
  // startpointposy
  if (lhs->startpointposy != rhs->startpointposy) {
    return false;
  }
  // endpointposx
  if (lhs->endpointposx != rhs->endpointposx) {
    return false;
  }
  // endpointposy
  if (lhs->endpointposy != rhs->endpointposy) {
    return false;
  }
  // dstlgttoend
  if (lhs->dstlgttoend != rhs->dstlgttoend) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFLaneEstimn__copy(
  const deva_aeb_msgs__msg__SFLaneEstimn * input,
  deva_aeb_msgs__msg__SFLaneEstimn * output)
{
  if (!input || !output) {
    return false;
  }
  // constcoeff
  output->constcoeff = input->constcoeff;
  // firstordercoeff
  output->firstordercoeff = input->firstordercoeff;
  // secondordercoeff
  output->secondordercoeff = input->secondordercoeff;
  // thirdordercoeff
  output->thirdordercoeff = input->thirdordercoeff;
  // startpointposx
  output->startpointposx = input->startpointposx;
  // startpointposy
  output->startpointposy = input->startpointposy;
  // endpointposx
  output->endpointposx = input->endpointposx;
  // endpointposy
  output->endpointposy = input->endpointposy;
  // dstlgttoend
  output->dstlgttoend = input->dstlgttoend;
  return true;
}

deva_aeb_msgs__msg__SFLaneEstimn *
deva_aeb_msgs__msg__SFLaneEstimn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFLaneEstimn * msg = (deva_aeb_msgs__msg__SFLaneEstimn *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFLaneEstimn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFLaneEstimn));
  bool success = deva_aeb_msgs__msg__SFLaneEstimn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFLaneEstimn__destroy(deva_aeb_msgs__msg__SFLaneEstimn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFLaneEstimn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__init(deva_aeb_msgs__msg__SFLaneEstimn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFLaneEstimn * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFLaneEstimn *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFLaneEstimn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFLaneEstimn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFLaneEstimn__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__fini(deva_aeb_msgs__msg__SFLaneEstimn__Sequence * array)
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
      deva_aeb_msgs__msg__SFLaneEstimn__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFLaneEstimn__Sequence *
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFLaneEstimn__Sequence * array = (deva_aeb_msgs__msg__SFLaneEstimn__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFLaneEstimn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFLaneEstimn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__destroy(deva_aeb_msgs__msg__SFLaneEstimn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFLaneEstimn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__are_equal(const deva_aeb_msgs__msg__SFLaneEstimn__Sequence * lhs, const deva_aeb_msgs__msg__SFLaneEstimn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFLaneEstimn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFLaneEstimn__Sequence__copy(
  const deva_aeb_msgs__msg__SFLaneEstimn__Sequence * input,
  deva_aeb_msgs__msg__SFLaneEstimn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFLaneEstimn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFLaneEstimn * data =
      (deva_aeb_msgs__msg__SFLaneEstimn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFLaneEstimn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFLaneEstimn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFLaneEstimn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
