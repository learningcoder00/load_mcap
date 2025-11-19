// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBLaneAndEdge.idl
// generated code does not contain a copyright notice
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_lane_and_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `fusionlanemkrlist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__functions.h"
// Member `fusionroadedge`
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__functions.h"

bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__init(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(msg);
    return false;
  }
  // fusionlanemkrlist
  if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__init(&msg->fusionlanemkrlist)) {
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(msg);
    return false;
  }
  // fusionroadedge
  if (!deva_aeb_msgs__msg__SFFusionRoadEdge__init(&msg->fusionroadedge)) {
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(msg);
    return false;
  }
  return true;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // fusionlanemkrlist
  deva_aeb_msgs__msg__SFFusionLaneMkrList__fini(&msg->fusionlanemkrlist);
  // fusionroadedge
  deva_aeb_msgs__msg__SFFusionRoadEdge__fini(&msg->fusionroadedge);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * rhs)
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
  // fusionlanemkrlist
  if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__are_equal(
      &(lhs->fusionlanemkrlist), &(rhs->fusionlanemkrlist)))
  {
    return false;
  }
  // fusionroadedge
  if (!deva_aeb_msgs__msg__SFFusionRoadEdge__are_equal(
      &(lhs->fusionroadedge), &(rhs->fusionroadedge)))
  {
    return false;
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * input,
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * output)
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
  // fusionlanemkrlist
  if (!deva_aeb_msgs__msg__SFFusionLaneMkrList__copy(
      &(input->fusionlanemkrlist), &(output->fusionlanemkrlist)))
  {
    return false;
  }
  // fusionroadedge
  if (!deva_aeb_msgs__msg__SFFusionRoadEdge__copy(
      &(input->fusionroadedge), &(output->fusionroadedge)))
  {
    return false;
  }
  return true;
}

deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge *
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * msg = (deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge));
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__destroy(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__init(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * data = NULL;

  if (size) {
    data = (deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge *)allocator.zero_allocate(size, sizeof(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(&data[i - 1]);
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
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__fini(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * array)
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
      deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(&array->data[i]);
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

deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence *
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * array = (deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence *)allocator.allocate(sizeof(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__destroy(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__are_equal(const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * lhs, const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence__copy(
  const deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * input,
  deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge * data =
      (deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_aeb_msgs__msg__FusionInfoForAEBLaneAndEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
