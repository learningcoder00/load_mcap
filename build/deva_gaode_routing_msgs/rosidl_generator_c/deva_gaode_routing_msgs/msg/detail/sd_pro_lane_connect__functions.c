// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pass_road_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `connect_restriction`
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__functions.h"

bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__init(deva_gaode_routing_msgs__msg__SdProLaneConnect * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // out_road
  // pass_road_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->pass_road_ids, 0)) {
    deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(msg);
    return false;
  }
  // arrow_info
  // lane_info
  // bus_lane
  // lane_num
  // lane_left
  // lane_right
  // node_id
  // limit_lane
  // connect_restriction
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__init(&msg->connect_restriction, 0)) {
    deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(deva_gaode_routing_msgs__msg__SdProLaneConnect * msg)
{
  if (!msg) {
    return;
  }
  // id
  // out_road
  // pass_road_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->pass_road_ids);
  // arrow_info
  // lane_info
  // bus_lane
  // lane_num
  // lane_left
  // lane_right
  // node_id
  // limit_lane
  // connect_restriction
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__fini(&msg->connect_restriction);
}

bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__are_equal(const deva_gaode_routing_msgs__msg__SdProLaneConnect * lhs, const deva_gaode_routing_msgs__msg__SdProLaneConnect * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // out_road
  if (lhs->out_road != rhs->out_road) {
    return false;
  }
  // pass_road_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->pass_road_ids), &(rhs->pass_road_ids)))
  {
    return false;
  }
  // arrow_info
  if (lhs->arrow_info != rhs->arrow_info) {
    return false;
  }
  // lane_info
  if (lhs->lane_info != rhs->lane_info) {
    return false;
  }
  // bus_lane
  if (lhs->bus_lane != rhs->bus_lane) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // lane_left
  if (lhs->lane_left != rhs->lane_left) {
    return false;
  }
  // lane_right
  if (lhs->lane_right != rhs->lane_right) {
    return false;
  }
  // node_id
  if (lhs->node_id != rhs->node_id) {
    return false;
  }
  // limit_lane
  if (lhs->limit_lane != rhs->limit_lane) {
    return false;
  }
  // connect_restriction
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__are_equal(
      &(lhs->connect_restriction), &(rhs->connect_restriction)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__copy(
  const deva_gaode_routing_msgs__msg__SdProLaneConnect * input,
  deva_gaode_routing_msgs__msg__SdProLaneConnect * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // out_road
  output->out_road = input->out_road;
  // pass_road_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->pass_road_ids), &(output->pass_road_ids)))
  {
    return false;
  }
  // arrow_info
  output->arrow_info = input->arrow_info;
  // lane_info
  output->lane_info = input->lane_info;
  // bus_lane
  output->bus_lane = input->bus_lane;
  // lane_num
  output->lane_num = input->lane_num;
  // lane_left
  output->lane_left = input->lane_left;
  // lane_right
  output->lane_right = input->lane_right;
  // node_id
  output->node_id = input->node_id;
  // limit_lane
  output->limit_lane = input->limit_lane;
  // connect_restriction
  if (!deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__copy(
      &(input->connect_restriction), &(output->connect_restriction)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SdProLaneConnect *
deva_gaode_routing_msgs__msg__SdProLaneConnect__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLaneConnect * msg = (deva_gaode_routing_msgs__msg__SdProLaneConnect *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect));
  bool success = deva_gaode_routing_msgs__msg__SdProLaneConnect__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SdProLaneConnect__destroy(deva_gaode_routing_msgs__msg__SdProLaneConnect * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__init(deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLaneConnect * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SdProLaneConnect *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SdProLaneConnect__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__fini(deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * array = (deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SdProLaneConnect * data =
      (deva_gaode_routing_msgs__msg__SdProLaneConnect *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
