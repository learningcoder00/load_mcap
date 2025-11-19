// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFFusionTFL.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFFusionTFL__init(deva_aeb_msgs__msg__SFFusionTFL * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // lifetime
  // height
  // relevancy
  // type
  // color
  // number
  // confi
  // flashstatus
  // background
  // reserved
  // poslgt
  // poslat
  return true;
}

void
deva_aeb_msgs__msg__SFFusionTFL__fini(deva_aeb_msgs__msg__SFFusionTFL * msg)
{
  if (!msg) {
    return;
  }
  // id
  // lifetime
  // height
  // relevancy
  // type
  // color
  // number
  // confi
  // flashstatus
  // background
  // reserved
  // poslgt
  // poslat
}

bool
deva_aeb_msgs__msg__SFFusionTFL__are_equal(const deva_aeb_msgs__msg__SFFusionTFL * lhs, const deva_aeb_msgs__msg__SFFusionTFL * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lifetime
  if (lhs->lifetime != rhs->lifetime) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // relevancy
  if (lhs->relevancy != rhs->relevancy) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  // confi
  if (lhs->confi != rhs->confi) {
    return false;
  }
  // flashstatus
  if (lhs->flashstatus != rhs->flashstatus) {
    return false;
  }
  // background
  if (lhs->background != rhs->background) {
    return false;
  }
  // reserved
  if (lhs->reserved != rhs->reserved) {
    return false;
  }
  // poslgt
  if (lhs->poslgt != rhs->poslgt) {
    return false;
  }
  // poslat
  if (lhs->poslat != rhs->poslat) {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionTFL__copy(
  const deva_aeb_msgs__msg__SFFusionTFL * input,
  deva_aeb_msgs__msg__SFFusionTFL * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // lifetime
  output->lifetime = input->lifetime;
  // height
  output->height = input->height;
  // relevancy
  output->relevancy = input->relevancy;
  // type
  output->type = input->type;
  // color
  output->color = input->color;
  // number
  output->number = input->number;
  // confi
  output->confi = input->confi;
  // flashstatus
  output->flashstatus = input->flashstatus;
  // background
  output->background = input->background;
  // reserved
  output->reserved = input->reserved;
  // poslgt
  output->poslgt = input->poslgt;
  // poslat
  output->poslat = input->poslat;
  return true;
}

deva_aeb_msgs__msg__SFFusionTFL *
deva_aeb_msgs__msg__SFFusionTFL__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTFL * msg = (deva_aeb_msgs__msg__SFFusionTFL *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionTFL), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFFusionTFL));
  bool success = deva_aeb_msgs__msg__SFFusionTFL__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFFusionTFL__destroy(deva_aeb_msgs__msg__SFFusionTFL * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFFusionTFL__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFFusionTFL__Sequence__init(deva_aeb_msgs__msg__SFFusionTFL__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTFL * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFFusionTFL *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFFusionTFL), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFFusionTFL__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFFusionTFL__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFFusionTFL__Sequence__fini(deva_aeb_msgs__msg__SFFusionTFL__Sequence * array)
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
      deva_aeb_msgs__msg__SFFusionTFL__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFFusionTFL__Sequence *
deva_aeb_msgs__msg__SFFusionTFL__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFFusionTFL__Sequence * array = (deva_aeb_msgs__msg__SFFusionTFL__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFFusionTFL__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFFusionTFL__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFFusionTFL__Sequence__destroy(deva_aeb_msgs__msg__SFFusionTFL__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFFusionTFL__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFFusionTFL__Sequence__are_equal(const deva_aeb_msgs__msg__SFFusionTFL__Sequence * lhs, const deva_aeb_msgs__msg__SFFusionTFL__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionTFL__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFFusionTFL__Sequence__copy(
  const deva_aeb_msgs__msg__SFFusionTFL__Sequence * input,
  deva_aeb_msgs__msg__SFFusionTFL__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFFusionTFL);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFFusionTFL * data =
      (deva_aeb_msgs__msg__SFFusionTFL *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFFusionTFL__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFFusionTFL__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFFusionTFL__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
