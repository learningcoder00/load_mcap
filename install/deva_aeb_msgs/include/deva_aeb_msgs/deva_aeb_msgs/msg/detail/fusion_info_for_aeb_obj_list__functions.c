// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBObjList.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_obj_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `fusionobjlist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__functions.h"
// Member `vehself`
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"

bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__init(deva_aeb_msgs__msg__FusionInfoForAEBObjList * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(msg);
    return false;
  }
  // fusionobjlist
  if (!deva_aeb_msgs__msg__SFFusionObjList__init(&msg->fusionobjlist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(msg);
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__init(&msg->vehself)) {
    deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(deva_aeb_msgs__msg__FusionInfoForAEBObjList * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // fusionobjlist
  deva_aeb_msgs__msg__SFFusionObjList__fini(&msg->fusionobjlist);
  // vehself
  deva_aeb_msgs__msg__SFVehSelf__fini(&msg->vehself);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBObjList * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBObjList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // fusionobjlist
  if (!deva_aeb_msgs__msg__SFFusionObjList__are_equal(
      &(lhs->fusionobjlist), &(rhs->fusionobjlist)))
  {
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__are_equal(
      &(lhs->vehself), &(rhs->vehself)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBObjList * input,
  deva_aeb_msgs__msg__FusionInfoForAEBObjList * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // fusionobjlist
  if (!deva_aeb_msgs__msg__SFFusionObjList__copy(
      &(input->fusionobjlist), &(output->fusionobjlist)))
  {
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__copy(
      &(input->vehself), &(output->vehself)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__FusionInfoForAEBObjList *
deva_aeb_msgs__msg__FusionInfoForAEBObjList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBObjList * msg = (deva_aeb_msgs__msg__FusionInfoForAEBObjList *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBObjList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBObjList));
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBObjList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBObjList__destroy(deva_aeb_msgs__msg__FusionInfoForAEBObjList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__init(deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBObjList * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__FusionInfoForAEBObjList *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBObjList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__FusionInfoForAEBObjList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__fini(deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * array)
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
      deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(&array->data[i]);
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

deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence *
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * array = (deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__destroy(deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBObjList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * input,
  deva_aeb_msgs__msg__FusionInfoForAEBObjList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__FusionInfoForAEBObjList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__FusionInfoForAEBObjList * data =
      (deva_aeb_msgs__msg__FusionInfoForAEBObjList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__FusionInfoForAEBObjList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__FusionInfoForAEBObjList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBObjList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
