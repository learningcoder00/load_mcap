// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFRoadEdgeEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_edge_estimn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__init(deva_aeb_msgs__msg__SFRoadEdgeEstimn * msg)
{
  if (!msg) {
    return false;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // dstlgttoend
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // extendendpointposx
  // extendendpointposy
  // overrideflag
  // type
  // parseconfi
  // tracestatus
  return true;
}

void
deva_aeb_msgs__msg__SFRoadEdgeEstimn__fini(deva_aeb_msgs__msg__SFRoadEdgeEstimn * msg)
{
  if (!msg) {
    return;
  }
  // constcoeff
  // firstordercoeff
  // secondordercoeff
  // thirdordercoeff
  // dstlgttoend
  // startpointposx
  // startpointposy
  // endpointposx
  // endpointposy
  // extendendpointposx
  // extendendpointposy
  // overrideflag
  // type
  // parseconfi
  // tracestatus
}

bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__are_equal(const deva_aeb_msgs__msg__SFRoadEdgeEstimn * lhs, const deva_aeb_msgs__msg__SFRoadEdgeEstimn * rhs)
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
  // dstlgttoend
  if (lhs->dstlgttoend != rhs->dstlgttoend) {
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
  // overrideflag
  if (lhs->overrideflag != rhs->overrideflag) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // parseconfi
  if (lhs->parseconfi != rhs->parseconfi) {
    return false;
  }
  // tracestatus
  if (lhs->tracestatus != rhs->tracestatus) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__copy(
  const deva_aeb_msgs__msg__SFRoadEdgeEstimn * input,
  deva_aeb_msgs__msg__SFRoadEdgeEstimn * output)
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
  // dstlgttoend
  output->dstlgttoend = input->dstlgttoend;
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
  // overrideflag
  output->overrideflag = input->overrideflag;
  // type
  output->type = input->type;
  // parseconfi
  output->parseconfi = input->parseconfi;
  // tracestatus
  output->tracestatus = input->tracestatus;
  return true;
}

deva_aeb_msgs__msg__SFRoadEdgeEstimn *
deva_aeb_msgs__msg__SFRoadEdgeEstimn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadEdgeEstimn * msg = (deva_aeb_msgs__msg__SFRoadEdgeEstimn *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadEdgeEstimn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFRoadEdgeEstimn));
  bool success = deva_aeb_msgs__msg__SFRoadEdgeEstimn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFRoadEdgeEstimn__destroy(deva_aeb_msgs__msg__SFRoadEdgeEstimn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFRoadEdgeEstimn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__init(deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadEdgeEstimn * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFRoadEdgeEstimn *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFRoadEdgeEstimn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFRoadEdgeEstimn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFRoadEdgeEstimn__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__fini(deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * array)
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
      deva_aeb_msgs__msg__SFRoadEdgeEstimn__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence *
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * array = (deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__destroy(deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__are_equal(const deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * lhs, const deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadEdgeEstimn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence__copy(
  const deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * input,
  deva_aeb_msgs__msg__SFRoadEdgeEstimn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFRoadEdgeEstimn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFRoadEdgeEstimn * data =
      (deva_aeb_msgs__msg__SFRoadEdgeEstimn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFRoadEdgeEstimn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFRoadEdgeEstimn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadEdgeEstimn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
