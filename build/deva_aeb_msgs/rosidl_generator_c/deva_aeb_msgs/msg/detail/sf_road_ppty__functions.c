// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFRoadPpty__init(deva_aeb_msgs__msg__SFRoadPpty * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  // framenum
  // lanewidth
  // offslat
  // agdir
  // crvt
  // crvtrate
  // crvtratevalidsize
  // seglen
  // seglenvalidsize
  // strtd
  // vld
  // reserved
  // titohiqly
  // titohiqlyvalidsize
  // objidtitohiqly
  // objidtitohiqlyvalidsize
  // distancewithlowconfidence
  // distancewithhiahconfidence
  return true;
}

void
deva_aeb_msgs__msg__SFRoadPpty__fini(deva_aeb_msgs__msg__SFRoadPpty * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  // framenum
  // lanewidth
  // offslat
  // agdir
  // crvt
  // crvtrate
  // crvtratevalidsize
  // seglen
  // seglenvalidsize
  // strtd
  // vld
  // reserved
  // titohiqly
  // titohiqlyvalidsize
  // objidtitohiqly
  // objidtitohiqlyvalidsize
  // distancewithlowconfidence
  // distancewithhiahconfidence
}

bool
deva_aeb_msgs__msg__SFRoadPpty__are_equal(const deva_aeb_msgs__msg__SFRoadPpty * lhs, const deva_aeb_msgs__msg__SFRoadPpty * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  // framenum
  if (lhs->framenum != rhs->framenum) {
    return false;
  }
  // lanewidth
  if (lhs->lanewidth != rhs->lanewidth) {
    return false;
  }
  // offslat
  if (lhs->offslat != rhs->offslat) {
    return false;
  }
  // agdir
  if (lhs->agdir != rhs->agdir) {
    return false;
  }
  // crvt
  if (lhs->crvt != rhs->crvt) {
    return false;
  }
  // crvtrate
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->crvtrate[i] != rhs->crvtrate[i]) {
      return false;
    }
  }
  // crvtratevalidsize
  if (lhs->crvtratevalidsize != rhs->crvtratevalidsize) {
    return false;
  }
  // seglen
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->seglen[i] != rhs->seglen[i]) {
      return false;
    }
  }
  // seglenvalidsize
  if (lhs->seglenvalidsize != rhs->seglenvalidsize) {
    return false;
  }
  // strtd
  if (lhs->strtd != rhs->strtd) {
    return false;
  }
  // vld
  if (lhs->vld != rhs->vld) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  // titohiqly
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->titohiqly[i] != rhs->titohiqly[i]) {
      return false;
    }
  }
  // titohiqlyvalidsize
  if (lhs->titohiqlyvalidsize != rhs->titohiqlyvalidsize) {
    return false;
  }
  // objidtitohiqly
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->objidtitohiqly[i] != rhs->objidtitohiqly[i]) {
      return false;
    }
  }
  // objidtitohiqlyvalidsize
  if (lhs->objidtitohiqlyvalidsize != rhs->objidtitohiqlyvalidsize) {
    return false;
  }
  // distancewithlowconfidence
  if (lhs->distancewithlowconfidence != rhs->distancewithlowconfidence) {
    return false;
  }
  // distancewithhiahconfidence
  if (lhs->distancewithhiahconfidence != rhs->distancewithhiahconfidence) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadPpty__copy(
  const deva_aeb_msgs__msg__SFRoadPpty * input,
  deva_aeb_msgs__msg__SFRoadPpty * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  output->timestamp = input->timestamp;
  // framenum
  output->framenum = input->framenum;
  // lanewidth
  output->lanewidth = input->lanewidth;
  // offslat
  output->offslat = input->offslat;
  // agdir
  output->agdir = input->agdir;
  // crvt
  output->crvt = input->crvt;
  // crvtrate
  for (size_t i = 0; i < 3; ++i) {
    output->crvtrate[i] = input->crvtrate[i];
  }
  // crvtratevalidsize
  output->crvtratevalidsize = input->crvtratevalidsize;
  // seglen
  for (size_t i = 0; i < 3; ++i) {
    output->seglen[i] = input->seglen[i];
  }
  // seglenvalidsize
  output->seglenvalidsize = input->seglenvalidsize;
  // strtd
  output->strtd = input->strtd;
  // vld
  output->vld = input->vld;
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  // titohiqly
  for (size_t i = 0; i < 32; ++i) {
    output->titohiqly[i] = input->titohiqly[i];
  }
  // titohiqlyvalidsize
  output->titohiqlyvalidsize = input->titohiqlyvalidsize;
  // objidtitohiqly
  for (size_t i = 0; i < 32; ++i) {
    output->objidtitohiqly[i] = input->objidtitohiqly[i];
  }
  // objidtitohiqlyvalidsize
  output->objidtitohiqlyvalidsize = input->objidtitohiqlyvalidsize;
  // distancewithlowconfidence
  output->distancewithlowconfidence = input->distancewithlowconfidence;
  // distancewithhiahconfidence
  output->distancewithhiahconfidence = input->distancewithhiahconfidence;
  return true;
}

deva_aeb_msgs__msg__SFRoadPpty *
deva_aeb_msgs__msg__SFRoadPpty__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadPpty * msg = (deva_aeb_msgs__msg__SFRoadPpty *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadPpty), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFRoadPpty));
  bool success = deva_aeb_msgs__msg__SFRoadPpty__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFRoadPpty__destroy(deva_aeb_msgs__msg__SFRoadPpty * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFRoadPpty__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFRoadPpty__Sequence__init(deva_aeb_msgs__msg__SFRoadPpty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadPpty * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFRoadPpty *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFRoadPpty), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFRoadPpty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFRoadPpty__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFRoadPpty__Sequence__fini(deva_aeb_msgs__msg__SFRoadPpty__Sequence * array)
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
      deva_aeb_msgs__msg__SFRoadPpty__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFRoadPpty__Sequence *
deva_aeb_msgs__msg__SFRoadPpty__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFRoadPpty__Sequence * array = (deva_aeb_msgs__msg__SFRoadPpty__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFRoadPpty__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFRoadPpty__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFRoadPpty__Sequence__destroy(deva_aeb_msgs__msg__SFRoadPpty__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFRoadPpty__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFRoadPpty__Sequence__are_equal(const deva_aeb_msgs__msg__SFRoadPpty__Sequence * lhs, const deva_aeb_msgs__msg__SFRoadPpty__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadPpty__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFRoadPpty__Sequence__copy(
  const deva_aeb_msgs__msg__SFRoadPpty__Sequence * input,
  deva_aeb_msgs__msg__SFRoadPpty__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFRoadPpty);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFRoadPpty * data =
      (deva_aeb_msgs__msg__SFRoadPpty *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFRoadPpty__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFRoadPpty__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFRoadPpty__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
