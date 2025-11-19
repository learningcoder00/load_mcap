// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `region`
#include "deva_perception_msgs/msg/detail/traffic_region__functions.h"
// Member `tsquadranglevcs`
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"
// Member `tsquadrangleimg`
#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"

bool
deva_perception_msgs__msg__SFFusionTSNOA__init(deva_perception_msgs__msg__SFFusionTSNOA * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // dstlgttoeve
  // dstlattoeve
  // height
  // direction
  // electcsgn
  // lanelocn
  // locn
  // rlvc
  // notrlvres
  // qly
  // typ
  // val
  // is_ramp
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__init(&msg->region)) {
    deva_perception_msgs__msg__SFFusionTSNOA__fini(msg);
    return false;
  }
  // reserved
  // spplinfoval
  // spplinfotype
  // tsquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__init(&msg->tsquadranglevcs)) {
    deva_perception_msgs__msg__SFFusionTSNOA__fini(msg);
    return false;
  }
  // tsquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__init(&msg->tsquadrangleimg)) {
    deva_perception_msgs__msg__SFFusionTSNOA__fini(msg);
    return false;
  }
  // utmx
  // utmy
  // utmz
  // pole
  return true;
}

void
deva_perception_msgs__msg__SFFusionTSNOA__fini(deva_perception_msgs__msg__SFFusionTSNOA * msg)
{
  if (!msg) {
    return;
  }
  // id
  // dstlgttoeve
  // dstlattoeve
  // height
  // direction
  // electcsgn
  // lanelocn
  // locn
  // rlvc
  // notrlvres
  // qly
  // typ
  // val
  // is_ramp
  // region
  deva_perception_msgs__msg__TrafficRegion__fini(&msg->region);
  // reserved
  // spplinfoval
  // spplinfotype
  // tsquadranglevcs
  deva_perception_msgs__msg__QuadrangleVcs__fini(&msg->tsquadranglevcs);
  // tsquadrangleimg
  deva_perception_msgs__msg__QuadrangleImg__fini(&msg->tsquadrangleimg);
  // utmx
  // utmy
  // utmz
  // pole
}

bool
deva_perception_msgs__msg__SFFusionTSNOA__are_equal(const deva_perception_msgs__msg__SFFusionTSNOA * lhs, const deva_perception_msgs__msg__SFFusionTSNOA * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // dstlgttoeve
  if (lhs->dstlgttoeve != rhs->dstlgttoeve) {
    return false;
  }
  // dstlattoeve
  if (lhs->dstlattoeve != rhs->dstlattoeve) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // electcsgn
  if (lhs->electcsgn != rhs->electcsgn) {
    return false;
  }
  // lanelocn
  if (lhs->lanelocn != rhs->lanelocn) {
    return false;
  }
  // locn
  if (lhs->locn != rhs->locn) {
    return false;
  }
  // rlvc
  if (lhs->rlvc != rhs->rlvc) {
    return false;
  }
  // notrlvres
  if (lhs->notrlvres != rhs->notrlvres) {
    return false;
  }
  // qly
  if (lhs->qly != rhs->qly) {
    return false;
  }
  // typ
  if (lhs->typ != rhs->typ) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  // is_ramp
  if (lhs->is_ramp != rhs->is_ramp) {
    return false;
  }
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__are_equal(
      &(lhs->region), &(rhs->region)))
  {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // spplinfoval
  if (lhs->spplinfoval != rhs->spplinfoval) {
    return false;
  }
  // spplinfotype
  if (lhs->spplinfotype != rhs->spplinfotype) {
    return false;
  }
  // tsquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__are_equal(
      &(lhs->tsquadranglevcs), &(rhs->tsquadranglevcs)))
  {
    return false;
  }
  // tsquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__are_equal(
      &(lhs->tsquadrangleimg), &(rhs->tsquadrangleimg)))
  {
    return false;
  }
  // utmx
  if (lhs->utmx != rhs->utmx) {
    return false;
  }
  // utmy
  if (lhs->utmy != rhs->utmy) {
    return false;
  }
  // utmz
  if (lhs->utmz != rhs->utmz) {
    return false;
  }
  // pole
  if (lhs->pole != rhs->pole) {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTSNOA__copy(
  const deva_perception_msgs__msg__SFFusionTSNOA * input,
  deva_perception_msgs__msg__SFFusionTSNOA * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // dstlgttoeve
  output->dstlgttoeve = input->dstlgttoeve;
  // dstlattoeve
  output->dstlattoeve = input->dstlattoeve;
  // height
  output->height = input->height;
  // direction
  output->direction = input->direction;
  // electcsgn
  output->electcsgn = input->electcsgn;
  // lanelocn
  output->lanelocn = input->lanelocn;
  // locn
  output->locn = input->locn;
  // rlvc
  output->rlvc = input->rlvc;
  // notrlvres
  output->notrlvres = input->notrlvres;
  // qly
  output->qly = input->qly;
  // typ
  output->typ = input->typ;
  // val
  output->val = input->val;
  // is_ramp
  output->is_ramp = input->is_ramp;
  // region
  if (!deva_perception_msgs__msg__TrafficRegion__copy(
      &(input->region), &(output->region)))
  {
    return false;
  }
  // reserved
  output->reserved = input->reserved;
  // spplinfoval
  output->spplinfoval = input->spplinfoval;
  // spplinfotype
  output->spplinfotype = input->spplinfotype;
  // tsquadranglevcs
  if (!deva_perception_msgs__msg__QuadrangleVcs__copy(
      &(input->tsquadranglevcs), &(output->tsquadranglevcs)))
  {
    return false;
  }
  // tsquadrangleimg
  if (!deva_perception_msgs__msg__QuadrangleImg__copy(
      &(input->tsquadrangleimg), &(output->tsquadrangleimg)))
  {
    return false;
  }
  // utmx
  output->utmx = input->utmx;
  // utmy
  output->utmy = input->utmy;
  // utmz
  output->utmz = input->utmz;
  // pole
  output->pole = input->pole;
  return true;
}

deva_perception_msgs__msg__SFFusionTSNOA *
deva_perception_msgs__msg__SFFusionTSNOA__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSNOA * msg = (deva_perception_msgs__msg__SFFusionTSNOA *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTSNOA), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__SFFusionTSNOA));
  bool success = deva_perception_msgs__msg__SFFusionTSNOA__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__SFFusionTSNOA__destroy(deva_perception_msgs__msg__SFFusionTSNOA * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__SFFusionTSNOA__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__init(deva_perception_msgs__msg__SFFusionTSNOA__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSNOA * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__SFFusionTSNOA *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__SFFusionTSNOA), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__SFFusionTSNOA__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__SFFusionTSNOA__fini(&data[i - 1]);
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
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__fini(deva_perception_msgs__msg__SFFusionTSNOA__Sequence * array)
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
      deva_perception_msgs__msg__SFFusionTSNOA__fini(&array->data[i]);
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

deva_perception_msgs__msg__SFFusionTSNOA__Sequence *
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence * array = (deva_perception_msgs__msg__SFFusionTSNOA__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__SFFusionTSNOA__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__SFFusionTSNOA__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__destroy(deva_perception_msgs__msg__SFFusionTSNOA__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__SFFusionTSNOA__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__are_equal(const deva_perception_msgs__msg__SFFusionTSNOA__Sequence * lhs, const deva_perception_msgs__msg__SFFusionTSNOA__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSNOA__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__SFFusionTSNOA__Sequence__copy(
  const deva_perception_msgs__msg__SFFusionTSNOA__Sequence * input,
  deva_perception_msgs__msg__SFFusionTSNOA__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__SFFusionTSNOA);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__SFFusionTSNOA * data =
      (deva_perception_msgs__msg__SFFusionTSNOA *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__SFFusionTSNOA__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__SFFusionTSNOA__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__SFFusionTSNOA__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
