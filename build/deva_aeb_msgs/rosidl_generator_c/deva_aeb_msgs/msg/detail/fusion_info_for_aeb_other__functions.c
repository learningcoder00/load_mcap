// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `roadppty`
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__functions.h"
// Member `vehself`
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"
// Member `fusiontslist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__functions.h"
// Member `fusiontfllist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__functions.h"
// Member `fusionroadsignlist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__functions.h"
// Member `fusiondiaglist`
#include "deva_aeb_msgs/msg/detail/sf_diag_list__functions.h"

bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__init(deva_aeb_msgs__msg__FusionInfoForAEBOther * msg)
{
  if (!msg) {
    return false;
  }
  // roadppty
  if (!deva_aeb_msgs__msg__SFRoadPpty__init(&msg->roadppty)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__init(&msg->vehself)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  // fusiontslist
  if (!deva_aeb_msgs__msg__SFFusionTSList__init(&msg->fusiontslist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  // fusiontfllist
  if (!deva_aeb_msgs__msg__SFFusionTFLList__init(&msg->fusiontfllist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  // fusionroadsignlist
  if (!deva_aeb_msgs__msg__SFFusionRoadSignList__init(&msg->fusionroadsignlist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  // fusiondiaglist
  if (!deva_aeb_msgs__msg__SFDiagList__init(&msg->fusiondiaglist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(deva_aeb_msgs__msg__FusionInfoForAEBOther * msg)
{
  if (!msg) {
    return;
  }
  // roadppty
  deva_aeb_msgs__msg__SFRoadPpty__fini(&msg->roadppty);
  // vehself
  deva_aeb_msgs__msg__SFVehSelf__fini(&msg->vehself);
  // fusiontslist
  deva_aeb_msgs__msg__SFFusionTSList__fini(&msg->fusiontslist);
  // fusiontfllist
  deva_aeb_msgs__msg__SFFusionTFLList__fini(&msg->fusiontfllist);
  // fusionroadsignlist
  deva_aeb_msgs__msg__SFFusionRoadSignList__fini(&msg->fusionroadsignlist);
  // fusiondiaglist
  deva_aeb_msgs__msg__SFDiagList__fini(&msg->fusiondiaglist);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBOther * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBOther * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roadppty
  if (!deva_aeb_msgs__msg__SFRoadPpty__are_equal(
      &(lhs->roadppty), &(rhs->roadppty)))
  {
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__are_equal(
      &(lhs->vehself), &(rhs->vehself)))
  {
    return false;
  }
  // fusiontslist
  if (!deva_aeb_msgs__msg__SFFusionTSList__are_equal(
      &(lhs->fusiontslist), &(rhs->fusiontslist)))
  {
    return false;
  }
  // fusiontfllist
  if (!deva_aeb_msgs__msg__SFFusionTFLList__are_equal(
      &(lhs->fusiontfllist), &(rhs->fusiontfllist)))
  {
    return false;
  }
  // fusionroadsignlist
  if (!deva_aeb_msgs__msg__SFFusionRoadSignList__are_equal(
      &(lhs->fusionroadsignlist), &(rhs->fusionroadsignlist)))
  {
    return false;
  }
  // fusiondiaglist
  if (!deva_aeb_msgs__msg__SFDiagList__are_equal(
      &(lhs->fusiondiaglist), &(rhs->fusiondiaglist)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBOther * input,
  deva_aeb_msgs__msg__FusionInfoForAEBOther * output)
{
  if (!input || !output) {
    return false;
  }
  // roadppty
  if (!deva_aeb_msgs__msg__SFRoadPpty__copy(
      &(input->roadppty), &(output->roadppty)))
  {
    return false;
  }
  // vehself
  if (!deva_aeb_msgs__msg__SFVehSelf__copy(
      &(input->vehself), &(output->vehself)))
  {
    return false;
  }
  // fusiontslist
  if (!deva_aeb_msgs__msg__SFFusionTSList__copy(
      &(input->fusiontslist), &(output->fusiontslist)))
  {
    return false;
  }
  // fusiontfllist
  if (!deva_aeb_msgs__msg__SFFusionTFLList__copy(
      &(input->fusiontfllist), &(output->fusiontfllist)))
  {
    return false;
  }
  // fusionroadsignlist
  if (!deva_aeb_msgs__msg__SFFusionRoadSignList__copy(
      &(input->fusionroadsignlist), &(output->fusionroadsignlist)))
  {
    return false;
  }
  // fusiondiaglist
  if (!deva_aeb_msgs__msg__SFDiagList__copy(
      &(input->fusiondiaglist), &(output->fusiondiaglist)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__FusionInfoForAEBOther *
deva_aeb_msgs__msg__FusionInfoForAEBOther__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBOther * msg = (deva_aeb_msgs__msg__FusionInfoForAEBOther *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther));
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBOther__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBOther__destroy(deva_aeb_msgs__msg__FusionInfoForAEBOther * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__init(deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBOther * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__FusionInfoForAEBOther *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__FusionInfoForAEBOther__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__fini(deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * array)
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
      deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(&array->data[i]);
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

deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence *
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * array = (deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__destroy(deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBOther__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * input,
  deva_aeb_msgs__msg__FusionInfoForAEBOther__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__FusionInfoForAEBOther * data =
      (deva_aeb_msgs__msg__FusionInfoForAEBOther *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__FusionInfoForAEBOther__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBOther__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
