// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `next_lanes`
// Member `pre_lanes`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__functions.h"

bool
deva_gaode_routing_msgs__msg__SdProLane__init(deva_gaode_routing_msgs__msg__SdProLane * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // lane_arrow_type
  // category_location
  // category_vehicle
  // category_special
  // lane_num
  // length
  // direction
  // next_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(&msg->next_lanes, 0)) {
    deva_gaode_routing_msgs__msg__SdProLane__fini(msg);
    return false;
  }
  // pre_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(&msg->pre_lanes, 0)) {
    deva_gaode_routing_msgs__msg__SdProLane__fini(msg);
    return false;
  }
  // transition
  return true;
}

void
deva_gaode_routing_msgs__msg__SdProLane__fini(deva_gaode_routing_msgs__msg__SdProLane * msg)
{
  if (!msg) {
    return;
  }
  // id
  // lane_arrow_type
  // category_location
  // category_vehicle
  // category_special
  // lane_num
  // length
  // direction
  // next_lanes
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__fini(&msg->next_lanes);
  // pre_lanes
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__fini(&msg->pre_lanes);
  // transition
}

bool
deva_gaode_routing_msgs__msg__SdProLane__are_equal(const deva_gaode_routing_msgs__msg__SdProLane * lhs, const deva_gaode_routing_msgs__msg__SdProLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // lane_arrow_type
  if (lhs->lane_arrow_type != rhs->lane_arrow_type) {
    return false;
  }
  // category_location
  if (lhs->category_location != rhs->category_location) {
    return false;
  }
  // category_vehicle
  if (lhs->category_vehicle != rhs->category_vehicle) {
    return false;
  }
  // category_special
  if (lhs->category_special != rhs->category_special) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // next_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__are_equal(
      &(lhs->next_lanes), &(rhs->next_lanes)))
  {
    return false;
  }
  // pre_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__are_equal(
      &(lhs->pre_lanes), &(rhs->pre_lanes)))
  {
    return false;
  }
  // transition
  if (lhs->transition != rhs->transition) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProLane__copy(
  const deva_gaode_routing_msgs__msg__SdProLane * input,
  deva_gaode_routing_msgs__msg__SdProLane * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // lane_arrow_type
  output->lane_arrow_type = input->lane_arrow_type;
  // category_location
  output->category_location = input->category_location;
  // category_vehicle
  output->category_vehicle = input->category_vehicle;
  // category_special
  output->category_special = input->category_special;
  // lane_num
  output->lane_num = input->lane_num;
  // length
  output->length = input->length;
  // direction
  output->direction = input->direction;
  // next_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__copy(
      &(input->next_lanes), &(output->next_lanes)))
  {
    return false;
  }
  // pre_lanes
  if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__copy(
      &(input->pre_lanes), &(output->pre_lanes)))
  {
    return false;
  }
  // transition
  output->transition = input->transition;
  return true;
}

deva_gaode_routing_msgs__msg__SdProLane *
deva_gaode_routing_msgs__msg__SdProLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLane * msg = (deva_gaode_routing_msgs__msg__SdProLane *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SdProLane));
  bool success = deva_gaode_routing_msgs__msg__SdProLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SdProLane__destroy(deva_gaode_routing_msgs__msg__SdProLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SdProLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SdProLane__Sequence__init(deva_gaode_routing_msgs__msg__SdProLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLane * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SdProLane *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SdProLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SdProLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SdProLane__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SdProLane__Sequence__fini(deva_gaode_routing_msgs__msg__SdProLane__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SdProLane__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SdProLane__Sequence *
deva_gaode_routing_msgs__msg__SdProLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLane__Sequence * array = (deva_gaode_routing_msgs__msg__SdProLane__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SdProLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SdProLane__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SdProLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SdProLane__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProLane__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProLane__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProLane__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SdProLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SdProLane * data =
      (deva_gaode_routing_msgs__msg__SdProLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SdProLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SdProLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
