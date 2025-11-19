// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_vision_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFVisionInfo__init(deva_aeb_msgs__msg__SFVisionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // cornerx
  // cornery
  // distinlane
  // objcutinflag
  // objcutinlanetype
  // reserved
  // visionposx
  // visionposy
  // laneassignment
  // iscipv
  // mtncatergory
  // mtnstatus
  // distconvergence
  // coverdproperty
  // unstable
  return true;
}

void
deva_aeb_msgs__msg__SFVisionInfo__fini(deva_aeb_msgs__msg__SFVisionInfo * msg)
{
  if (!msg) {
    return;
  }
  // cornerx
  // cornery
  // distinlane
  // objcutinflag
  // objcutinlanetype
  // reserved
  // visionposx
  // visionposy
  // laneassignment
  // iscipv
  // mtncatergory
  // mtnstatus
  // distconvergence
  // coverdproperty
  // unstable
}

bool
deva_aeb_msgs__msg__SFVisionInfo__are_equal(const deva_aeb_msgs__msg__SFVisionInfo * lhs, const deva_aeb_msgs__msg__SFVisionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cornerx
  if (lhs->cornerx != rhs->cornerx) {
    return false;
  }
  // cornery
  if (lhs->cornery != rhs->cornery) {
    return false;
  }
  // distinlane
  if (lhs->distinlane != rhs->distinlane) {
    return false;
  }
  // objcutinflag
  if (lhs->objcutinflag != rhs->objcutinflag) {
    return false;
  }
  // objcutinlanetype
  if (lhs->objcutinlanetype != rhs->objcutinlanetype) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  // visionposx
  if (lhs->visionposx != rhs->visionposx) {
    return false;
  }
  // visionposy
  if (lhs->visionposy != rhs->visionposy) {
    return false;
  }
  // laneassignment
  if (lhs->laneassignment != rhs->laneassignment) {
    return false;
  }
  // iscipv
  if (lhs->iscipv != rhs->iscipv) {
    return false;
  }
  // mtncatergory
  if (lhs->mtncatergory != rhs->mtncatergory) {
    return false;
  }
  // mtnstatus
  if (lhs->mtnstatus != rhs->mtnstatus) {
    return false;
  }
  // distconvergence
  if (lhs->distconvergence != rhs->distconvergence) {
    return false;
  }
  // coverdproperty
  if (lhs->coverdproperty != rhs->coverdproperty) {
    return false;
  }
  // unstable
  if (lhs->unstable != rhs->unstable) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFVisionInfo__copy(
  const deva_aeb_msgs__msg__SFVisionInfo * input,
  deva_aeb_msgs__msg__SFVisionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // cornerx
  output->cornerx = input->cornerx;
  // cornery
  output->cornery = input->cornery;
  // distinlane
  output->distinlane = input->distinlane;
  // objcutinflag
  output->objcutinflag = input->objcutinflag;
  // objcutinlanetype
  output->objcutinlanetype = input->objcutinlanetype;
  // reserved
  for (size_t i = 0; i < 3; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // visionposx
  output->visionposx = input->visionposx;
  // visionposy
  output->visionposy = input->visionposy;
  // laneassignment
  output->laneassignment = input->laneassignment;
  // iscipv
  output->iscipv = input->iscipv;
  // mtncatergory
  output->mtncatergory = input->mtncatergory;
  // mtnstatus
  output->mtnstatus = input->mtnstatus;
  // distconvergence
  output->distconvergence = input->distconvergence;
  // coverdproperty
  output->coverdproperty = input->coverdproperty;
  // unstable
  output->unstable = input->unstable;
  return true;
}

deva_aeb_msgs__msg__SFVisionInfo *
deva_aeb_msgs__msg__SFVisionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVisionInfo * msg = (deva_aeb_msgs__msg__SFVisionInfo *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFVisionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFVisionInfo));
  bool success = deva_aeb_msgs__msg__SFVisionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFVisionInfo__destroy(deva_aeb_msgs__msg__SFVisionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFVisionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFVisionInfo__Sequence__init(deva_aeb_msgs__msg__SFVisionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVisionInfo * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFVisionInfo *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFVisionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFVisionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFVisionInfo__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFVisionInfo__Sequence__fini(deva_aeb_msgs__msg__SFVisionInfo__Sequence * array)
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
      deva_aeb_msgs__msg__SFVisionInfo__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFVisionInfo__Sequence *
deva_aeb_msgs__msg__SFVisionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFVisionInfo__Sequence * array = (deva_aeb_msgs__msg__SFVisionInfo__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFVisionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFVisionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFVisionInfo__Sequence__destroy(deva_aeb_msgs__msg__SFVisionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFVisionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFVisionInfo__Sequence__are_equal(const deva_aeb_msgs__msg__SFVisionInfo__Sequence * lhs, const deva_aeb_msgs__msg__SFVisionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFVisionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFVisionInfo__Sequence__copy(
  const deva_aeb_msgs__msg__SFVisionInfo__Sequence * input,
  deva_aeb_msgs__msg__SFVisionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFVisionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFVisionInfo * data =
      (deva_aeb_msgs__msg__SFVisionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFVisionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFVisionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFVisionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
