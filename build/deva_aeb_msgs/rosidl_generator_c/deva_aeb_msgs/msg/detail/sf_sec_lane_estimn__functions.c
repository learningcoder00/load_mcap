// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFSecLaneEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_sec_lane_estimn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFSecLaneEstimn__init(deva_aeb_msgs__msg__SFSecLaneEstimn * msg)
{
  if (!msg) {
    return false;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // width
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // extendendpointposx
  // extendendpointposy
  // parseconfi
  // rmse
  // obstacleflag
  // trackstatus
  return true;
}

void
deva_aeb_msgs__msg__SFSecLaneEstimn__fini(deva_aeb_msgs__msg__SFSecLaneEstimn * msg)
{
  if (!msg) {
    return;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // width
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // extendendpointposx
  // extendendpointposy
  // parseconfi
  // rmse
  // obstacleflag
  // trackstatus
}

bool
deva_aeb_msgs__msg__SFSecLaneEstimn__are_equal(const deva_aeb_msgs__msg__SFSecLaneEstimn * lhs, const deva_aeb_msgs__msg__SFSecLaneEstimn * rhs)
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
  // width
  if (lhs->width != rhs->width) {
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
  // extendendpointposx
  if (lhs->extendendpointposx != rhs->extendendpointposx) {
    return false;
  }
  // extendendpointposy
  if (lhs->extendendpointposy != rhs->extendendpointposy) {
    return false;
  }
  // parseconfi
  if (lhs->parseconfi != rhs->parseconfi) {
    return false;
  }
  // rmse
  if (lhs->rmse != rhs->rmse) {
    return false;
  }
  // obstacleflag
  if (lhs->obstacleflag != rhs->obstacleflag) {
    return false;
  }
  // trackstatus
  if (lhs->trackstatus != rhs->trackstatus) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFSecLaneEstimn__copy(
  const deva_aeb_msgs__msg__SFSecLaneEstimn * input,
  deva_aeb_msgs__msg__SFSecLaneEstimn * output)
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
  // width
  output->width = input->width;
  // startpointposx
  output->startpointposx = input->startpointposx;
  // startpointposy
  output->startpointposy = input->startpointposy;
  // endpointposx
  output->endpointposx = input->endpointposx;
  // endpointposy
  output->endpointposy = input->endpointposy;
  // extendendpointposx
  output->extendendpointposx = input->extendendpointposx;
  // extendendpointposy
  output->extendendpointposy = input->extendendpointposy;
  // parseconfi
  output->parseconfi = input->parseconfi;
  // rmse
  output->rmse = input->rmse;
  // obstacleflag
  output->obstacleflag = input->obstacleflag;
  // trackstatus
  output->trackstatus = input->trackstatus;
  return true;
}

deva_aeb_msgs__msg__SFSecLaneEstimn *
deva_aeb_msgs__msg__SFSecLaneEstimn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFSecLaneEstimn * msg = (deva_aeb_msgs__msg__SFSecLaneEstimn *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFSecLaneEstimn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFSecLaneEstimn));
  bool success = deva_aeb_msgs__msg__SFSecLaneEstimn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFSecLaneEstimn__destroy(deva_aeb_msgs__msg__SFSecLaneEstimn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFSecLaneEstimn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__init(deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFSecLaneEstimn * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFSecLaneEstimn *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFSecLaneEstimn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFSecLaneEstimn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFSecLaneEstimn__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__fini(deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * array)
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
      deva_aeb_msgs__msg__SFSecLaneEstimn__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence *
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * array = (deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__destroy(deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__are_equal(const deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * lhs, const deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFSecLaneEstimn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence__copy(
  const deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * input,
  deva_aeb_msgs__msg__SFSecLaneEstimn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFSecLaneEstimn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFSecLaneEstimn * data =
      (deva_aeb_msgs__msg__SFSecLaneEstimn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFSecLaneEstimn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFSecLaneEstimn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFSecLaneEstimn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
