// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFusionTS.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFFusionTS__init(deva_aeb_msgs__msg__SFFusionTS * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // dstlgttoeve
  // dstlattoeve
  // height
  // electcsgn
  // lanelocn
  // locn
  // rlvc
  // notrlvres
  // qly
  // typ
  // val
  // reserved
  // spplinfoval
  // spplinfotype
  return true;
}

void
deva_aeb_msgs__msg__SFFusionTS__fini(deva_aeb_msgs__msg__SFFusionTS * msg)
{
  if (!msg) {
    return;
  }
  // id
  // dstlgttoeve
  // dstlattoeve
  // height
  // electcsgn
  // lanelocn
  // locn
  // rlvc
  // notrlvres
  // qly
  // typ
  // val
  // reserved
  // spplinfoval
  // spplinfotype
}

bool
deva_aeb_msgs__msg__SFFusionTS__are_equal(const deva_aeb_msgs__msg__SFFusionTS * lhs, const deva_aeb_msgs__msg__SFFusionTS * rhs)
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
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionTS__copy(
  const deva_aeb_msgs__msg__SFFusionTS * input,
  deva_aeb_msgs__msg__SFFusionTS * output)
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
  // reserved
  output->reserved = input->reserved;
  // spplinfoval
  output->spplinfoval = input->spplinfoval;
  // spplinfotype
  output->spplinfotype = input->spplinfotype;
  return true;
}

deva_aeb_msgs__msg__SFFusionTS *
deva_aeb_msgs__msg__SFFusionTS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTS * msg = (deva_aeb_msgs__msg__SFFusionTS *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionTS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFusionTS));
  bool success = deva_aeb_msgs__msg__SFFusionTS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFusionTS__destroy(deva_aeb_msgs__msg__SFFusionTS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFusionTS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFusionTS__Sequence__init(deva_aeb_msgs__msg__SFFusionTS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTS * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFusionTS *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFusionTS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFusionTS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFusionTS__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFusionTS__Sequence__fini(deva_aeb_msgs__msg__SFFusionTS__Sequence * array)
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
      deva_aeb_msgs__msg__SFFusionTS__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFusionTS__Sequence *
deva_aeb_msgs__msg__SFFusionTS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTS__Sequence * array = (deva_aeb_msgs__msg__SFFusionTS__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionTS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFusionTS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFusionTS__Sequence__destroy(deva_aeb_msgs__msg__SFFusionTS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFusionTS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFusionTS__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionTS__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionTS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionTS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionTS__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionTS__Sequence * input,
  deva_aeb_msgs__msg__SFFusionTS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFusionTS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFusionTS * data =
      (deva_aeb_msgs__msg__SFFusionTS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFusionTS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFusionTS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionTS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
