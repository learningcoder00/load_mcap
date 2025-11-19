// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice
#include "deva_map_msgs/msg/detail/avp_local_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"
// Member `ref_line`
// Member `expand_lane_center_border`
#include "deva_map_msgs/msg/detail/path_point__functions.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/detail/avp_boundary__functions.h"
// Member `avp_sub_map`
#include "deva_map_msgs/msg/detail/avp_sub_map__functions.h"

bool
deva_map_msgs__msg__AvpLocalMap__init(deva_map_msgs__msg__AvpLocalMap * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
    return false;
  }
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__init(&msg->ref_line, 0)) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__init(&msg->drivable_boundary, 0)) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
    return false;
  }
  // expand_lane_center_border
  if (!deva_map_msgs__msg__PathPoint__Sequence__init(&msg->expand_lane_center_border, 0)) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
    return false;
  }
  // avp_sub_map
  if (!deva_map_msgs__msg__AvpSubMap__init(&msg->avp_sub_map)) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
    return false;
  }
  return true;
}

void
deva_map_msgs__msg__AvpLocalMap__fini(deva_map_msgs__msg__AvpLocalMap * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // ref_line
  deva_map_msgs__msg__PathPoint__Sequence__fini(&msg->ref_line);
  // drivable_boundary
  deva_map_msgs__msg__AvpBoundary__Sequence__fini(&msg->drivable_boundary);
  // expand_lane_center_border
  deva_map_msgs__msg__PathPoint__Sequence__fini(&msg->expand_lane_center_border);
  // avp_sub_map
  deva_map_msgs__msg__AvpSubMap__fini(&msg->avp_sub_map);
}

bool
deva_map_msgs__msg__AvpLocalMap__are_equal(const deva_map_msgs__msg__AvpLocalMap * lhs, const deva_map_msgs__msg__AvpLocalMap * rhs)
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
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__are_equal(
      &(lhs->ref_line), &(rhs->ref_line)))
  {
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__are_equal(
      &(lhs->drivable_boundary), &(rhs->drivable_boundary)))
  {
    return false;
  }
  // expand_lane_center_border
  if (!deva_map_msgs__msg__PathPoint__Sequence__are_equal(
      &(lhs->expand_lane_center_border), &(rhs->expand_lane_center_border)))
  {
    return false;
  }
  // avp_sub_map
  if (!deva_map_msgs__msg__AvpSubMap__are_equal(
      &(lhs->avp_sub_map), &(rhs->avp_sub_map)))
  {
    return false;
  }
  return true;
}

bool
deva_map_msgs__msg__AvpLocalMap__copy(
  const deva_map_msgs__msg__AvpLocalMap * input,
  deva_map_msgs__msg__AvpLocalMap * output)
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
  // ref_line
  if (!deva_map_msgs__msg__PathPoint__Sequence__copy(
      &(input->ref_line), &(output->ref_line)))
  {
    return false;
  }
  // drivable_boundary
  if (!deva_map_msgs__msg__AvpBoundary__Sequence__copy(
      &(input->drivable_boundary), &(output->drivable_boundary)))
  {
    return false;
  }
  // expand_lane_center_border
  if (!deva_map_msgs__msg__PathPoint__Sequence__copy(
      &(input->expand_lane_center_border), &(output->expand_lane_center_border)))
  {
    return false;
  }
  // avp_sub_map
  if (!deva_map_msgs__msg__AvpSubMap__copy(
      &(input->avp_sub_map), &(output->avp_sub_map)))
  {
    return false;
  }
  return true;
}

deva_map_msgs__msg__AvpLocalMap *
deva_map_msgs__msg__AvpLocalMap__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpLocalMap * msg = (deva_map_msgs__msg__AvpLocalMap *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpLocalMap), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_map_msgs__msg__AvpLocalMap));
  bool success = deva_map_msgs__msg__AvpLocalMap__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_map_msgs__msg__AvpLocalMap__destroy(deva_map_msgs__msg__AvpLocalMap * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_map_msgs__msg__AvpLocalMap__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_map_msgs__msg__AvpLocalMap__Sequence__init(deva_map_msgs__msg__AvpLocalMap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpLocalMap * data = NULL;

  if (size) {
    data = (deva_map_msgs__msg__AvpLocalMap *)allocator.zero_allocate(size, sizeof(deva_map_msgs__msg__AvpLocalMap), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_map_msgs__msg__AvpLocalMap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_map_msgs__msg__AvpLocalMap__fini(&data[i - 1]);
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
deva_map_msgs__msg__AvpLocalMap__Sequence__fini(deva_map_msgs__msg__AvpLocalMap__Sequence * array)
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
      deva_map_msgs__msg__AvpLocalMap__fini(&array->data[i]);
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

deva_map_msgs__msg__AvpLocalMap__Sequence *
deva_map_msgs__msg__AvpLocalMap__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_map_msgs__msg__AvpLocalMap__Sequence * array = (deva_map_msgs__msg__AvpLocalMap__Sequence *)allocator.allocate(sizeof(deva_map_msgs__msg__AvpLocalMap__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_map_msgs__msg__AvpLocalMap__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_map_msgs__msg__AvpLocalMap__Sequence__destroy(deva_map_msgs__msg__AvpLocalMap__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_map_msgs__msg__AvpLocalMap__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_map_msgs__msg__AvpLocalMap__Sequence__are_equal(const deva_map_msgs__msg__AvpLocalMap__Sequence * lhs, const deva_map_msgs__msg__AvpLocalMap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_map_msgs__msg__AvpLocalMap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_map_msgs__msg__AvpLocalMap__Sequence__copy(
  const deva_map_msgs__msg__AvpLocalMap__Sequence * input,
  deva_map_msgs__msg__AvpLocalMap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_map_msgs__msg__AvpLocalMap);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_map_msgs__msg__AvpLocalMap * data =
      (deva_map_msgs__msg__AvpLocalMap *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_map_msgs__msg__AvpLocalMap__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_map_msgs__msg__AvpLocalMap__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_map_msgs__msg__AvpLocalMap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
