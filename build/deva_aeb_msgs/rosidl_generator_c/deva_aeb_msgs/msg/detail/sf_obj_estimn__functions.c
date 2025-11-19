// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFObjEstimn__init(deva_aeb_msgs__msg__SFObjEstimn * msg)
{
  if (!msg) {
    return false;
  }
  // posnlgt
  // posnlat
  // spd
  // vlgt
  // vlat
  // a
  // algt
  // alat
  // agdir
  // crvt
  return true;
}

void
deva_aeb_msgs__msg__SFObjEstimn__fini(deva_aeb_msgs__msg__SFObjEstimn * msg)
{
  if (!msg) {
    return;
  }
  // posnlgt
  // posnlat
  // spd
  // vlgt
  // vlat
  // a
  // algt
  // alat
  // agdir
  // crvt
}

bool
deva_aeb_msgs__msg__SFObjEstimn__are_equal(const deva_aeb_msgs__msg__SFObjEstimn * lhs, const deva_aeb_msgs__msg__SFObjEstimn * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posnlgt
  if (lhs->posnlgt != rhs->posnlgt) {
    return false;
  }
  // posnlat
  if (lhs->posnlat != rhs->posnlat) {
    return false;
  }
  // spd
  if (lhs->spd != rhs->spd) {
    return false;
  }
  // vlgt
  if (lhs->vlgt != rhs->vlgt) {
    return false;
  }
  // vlat
  if (lhs->vlat != rhs->vlat) {
    return false;
  }
  // a
  if (lhs->a != rhs->a) {
    return false;
  }
  // algt
  if (lhs->algt != rhs->algt) {
    return false;
  }
  // alat
  if (lhs->alat != rhs->alat) {
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
  return true;
}

bool
deva_aeb_msgs__msg__SFObjEstimn__copy(
  const deva_aeb_msgs__msg__SFObjEstimn * input,
  deva_aeb_msgs__msg__SFObjEstimn * output)
{
  if (!input || !output) {
    return false;
  }
  // posnlgt
  output->posnlgt = input->posnlgt;
  // posnlat
  output->posnlat = input->posnlat;
  // spd
  output->spd = input->spd;
  // vlgt
  output->vlgt = input->vlgt;
  // vlat
  output->vlat = input->vlat;
  // a
  output->a = input->a;
  // algt
  output->algt = input->algt;
  // alat
  output->alat = input->alat;
  // agdir
  output->agdir = input->agdir;
  // crvt
  output->crvt = input->crvt;
  return true;
}

deva_aeb_msgs__msg__SFObjEstimn *
deva_aeb_msgs__msg__SFObjEstimn__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjEstimn * msg = (deva_aeb_msgs__msg__SFObjEstimn *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjEstimn), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFObjEstimn));
  bool success = deva_aeb_msgs__msg__SFObjEstimn__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFObjEstimn__destroy(deva_aeb_msgs__msg__SFObjEstimn * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFObjEstimn__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFObjEstimn__Sequence__init(deva_aeb_msgs__msg__SFObjEstimn__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjEstimn * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFObjEstimn *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFObjEstimn), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFObjEstimn__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFObjEstimn__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFObjEstimn__Sequence__fini(deva_aeb_msgs__msg__SFObjEstimn__Sequence * array)
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
      deva_aeb_msgs__msg__SFObjEstimn__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFObjEstimn__Sequence *
deva_aeb_msgs__msg__SFObjEstimn__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjEstimn__Sequence * array = (deva_aeb_msgs__msg__SFObjEstimn__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjEstimn__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFObjEstimn__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFObjEstimn__Sequence__destroy(deva_aeb_msgs__msg__SFObjEstimn__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFObjEstimn__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFObjEstimn__Sequence__are_equal(const deva_aeb_msgs__msg__SFObjEstimn__Sequence * lhs, const deva_aeb_msgs__msg__SFObjEstimn__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjEstimn__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFObjEstimn__Sequence__copy(
  const deva_aeb_msgs__msg__SFObjEstimn__Sequence * input,
  deva_aeb_msgs__msg__SFObjEstimn__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFObjEstimn);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFObjEstimn * data =
      (deva_aeb_msgs__msg__SFObjEstimn *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFObjEstimn__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFObjEstimn__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjEstimn__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
