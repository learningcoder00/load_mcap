// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/SFObjInfo.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/sf_obj_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_aeb_msgs__msg__SFObjInfo__init(deva_aeb_msgs__msg__SFObjInfo * msg)
{
  if (!msg) {
    return false;
  }
  // length
  // width
  // hei
  // dstlatfrommidoflaneself
  // typ
  // sidenear
  // indcrturn
  // indcrbrkli
  // indcrhzrdli
  // mtnpat
  // mtnpathist
  // fusnsrcraw
  // clisnsideradarctrlwarnqly
  // clisnsideradarctrlbrkqly
  // reserved
  return true;
}

void
deva_aeb_msgs__msg__SFObjInfo__fini(deva_aeb_msgs__msg__SFObjInfo * msg)
{
  if (!msg) {
    return;
  }
  // length
  // width
  // hei
  // dstlatfrommidoflaneself
  // typ
  // sidenear
  // indcrturn
  // indcrbrkli
  // indcrhzrdli
  // mtnpat
  // mtnpathist
  // fusnsrcraw
  // clisnsideradarctrlwarnqly
  // clisnsideradarctrlbrkqly
  // reserved
}

bool
deva_aeb_msgs__msg__SFObjInfo__are_equal(const deva_aeb_msgs__msg__SFObjInfo * lhs, const deva_aeb_msgs__msg__SFObjInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // hei
  if (lhs->hei != rhs->hei) {
    return false;
  }
  // dstlatfrommidoflaneself
  if (lhs->dstlatfrommidoflaneself != rhs->dstlatfrommidoflaneself) {
    return false;
  }
  // typ
  if (lhs->typ != rhs->typ) {
    return false;
  }
  // sidenear
  if (lhs->sidenear != rhs->sidenear) {
    return false;
  }
  // indcrturn
  if (lhs->indcrturn != rhs->indcrturn) {
    return false;
  }
  // indcrbrkli
  if (lhs->indcrbrkli != rhs->indcrbrkli) {
    return false;
  }
  // indcrhzrdli
  if (lhs->indcrhzrdli != rhs->indcrhzrdli) {
    return false;
  }
  // mtnpat
  if (lhs->mtnpat != rhs->mtnpat) {
    return false;
  }
  // mtnpathist
  if (lhs->mtnpathist != rhs->mtnpathist) {
    return false;
  }
  // fusnsrcraw
  if (lhs->fusnsrcraw != rhs->fusnsrcraw) {
    return false;
  }
  // clisnsideradarctrlwarnqly
  if (lhs->clisnsideradarctrlwarnqly != rhs->clisnsideradarctrlwarnqly) {
    return false;
  }
  // clisnsideradarctrlbrkqly
  if (lhs->clisnsideradarctrlbrkqly != rhs->clisnsideradarctrlbrkqly) {
    return false;
  }
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->reserved[i] != rhs->reserved[i]) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFObjInfo__copy(
  const deva_aeb_msgs__msg__SFObjInfo * input,
  deva_aeb_msgs__msg__SFObjInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // hei
  output->hei = input->hei;
  // dstlatfrommidoflaneself
  output->dstlatfrommidoflaneself = input->dstlatfrommidoflaneself;
  // typ
  output->typ = input->typ;
  // sidenear
  output->sidenear = input->sidenear;
  // indcrturn
  output->indcrturn = input->indcrturn;
  // indcrbrkli
  output->indcrbrkli = input->indcrbrkli;
  // indcrhzrdli
  output->indcrhzrdli = input->indcrhzrdli;
  // mtnpat
  output->mtnpat = input->mtnpat;
  // mtnpathist
  output->mtnpathist = input->mtnpathist;
  // fusnsrcraw
  output->fusnsrcraw = input->fusnsrcraw;
  // clisnsideradarctrlwarnqly
  output->clisnsideradarctrlwarnqly = input->clisnsideradarctrlwarnqly;
  // clisnsideradarctrlbrkqly
  output->clisnsideradarctrlbrkqly = input->clisnsideradarctrlbrkqly;
  // reserved
  for (size_t i = 0; i < 2; ++i) {
    output->reserved[i] = input->reserved[i];
  }
  return true;
}

deva_aeb_msgs__msg__SFObjInfo *
deva_aeb_msgs__msg__SFObjInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjInfo * msg = (deva_aeb_msgs__msg__SFObjInfo *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__SFObjInfo));
  bool success = deva_aeb_msgs__msg__SFObjInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__SFObjInfo__destroy(deva_aeb_msgs__msg__SFObjInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__SFObjInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__SFObjInfo__Sequence__init(deva_aeb_msgs__msg__SFObjInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjInfo * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__SFObjInfo *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__SFObjInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__SFObjInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__SFObjInfo__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__SFObjInfo__Sequence__fini(deva_aeb_msgs__msg__SFObjInfo__Sequence * array)
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
      deva_aeb_msgs__msg__SFObjInfo__fini(&array->data[i]);
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

deva_aeb_msgs__msg__SFObjInfo__Sequence *
deva_aeb_msgs__msg__SFObjInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__SFObjInfo__Sequence * array = (deva_aeb_msgs__msg__SFObjInfo__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__SFObjInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__SFObjInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__SFObjInfo__Sequence__destroy(deva_aeb_msgs__msg__SFObjInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__SFObjInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__SFObjInfo__Sequence__are_equal(const deva_aeb_msgs__msg__SFObjInfo__Sequence * lhs, const deva_aeb_msgs__msg__SFObjInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__SFObjInfo__Sequence__copy(
  const deva_aeb_msgs__msg__SFObjInfo__Sequence * input,
  deva_aeb_msgs__msg__SFObjInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__SFObjInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__SFObjInfo * data =
      (deva_aeb_msgs__msg__SFObjInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__SFObjInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__SFObjInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__SFObjInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
