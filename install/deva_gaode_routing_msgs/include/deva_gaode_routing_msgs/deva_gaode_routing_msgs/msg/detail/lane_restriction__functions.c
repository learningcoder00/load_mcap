// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `limit_vehicle_type`
// Member `special_time_type`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `restrict_time_period`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__LaneRestriction__init(deva_gaode_routing_msgs__msg__LaneRestriction * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__LaneRestriction__fini(msg);
    return false;
  }
  // limit_vehicle_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->limit_vehicle_type, 0)) {
    deva_gaode_routing_msgs__msg__LaneRestriction__fini(msg);
    return false;
  }
  // special_time_type
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->special_time_type, 0)) {
    deva_gaode_routing_msgs__msg__LaneRestriction__fini(msg);
    return false;
  }
  // restrict_time_period
  if (!rosidl_runtime_c__String__init(&msg->restrict_time_period)) {
    deva_gaode_routing_msgs__msg__LaneRestriction__fini(msg);
    return false;
  }
  // lane_direction
  // lane_retriction_type
  // lane_range_start
  // lane_range_end
  return true;
}

void
deva_gaode_routing_msgs__msg__LaneRestriction__fini(deva_gaode_routing_msgs__msg__LaneRestriction * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // limit_vehicle_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->limit_vehicle_type);
  // special_time_type
  rosidl_runtime_c__uint8__Sequence__fini(&msg->special_time_type);
  // restrict_time_period
  rosidl_runtime_c__String__fini(&msg->restrict_time_period);
  // lane_direction
  // lane_retriction_type
  // lane_range_start
  // lane_range_end
}

bool
deva_gaode_routing_msgs__msg__LaneRestriction__are_equal(const deva_gaode_routing_msgs__msg__LaneRestriction * lhs, const deva_gaode_routing_msgs__msg__LaneRestriction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // limit_vehicle_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->limit_vehicle_type), &(rhs->limit_vehicle_type)))
  {
    return false;
  }
  // special_time_type
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->special_time_type), &(rhs->special_time_type)))
  {
    return false;
  }
  // restrict_time_period
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->restrict_time_period), &(rhs->restrict_time_period)))
  {
    return false;
  }
  // lane_direction
  if (lhs->lane_direction != rhs->lane_direction) {
    return false;
  }
  // lane_retriction_type
  if (lhs->lane_retriction_type != rhs->lane_retriction_type) {
    return false;
  }
  // lane_range_start
  if (lhs->lane_range_start != rhs->lane_range_start) {
    return false;
  }
  // lane_range_end
  if (lhs->lane_range_end != rhs->lane_range_end) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneRestriction__copy(
  const deva_gaode_routing_msgs__msg__LaneRestriction * input,
  deva_gaode_routing_msgs__msg__LaneRestriction * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // limit_vehicle_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->limit_vehicle_type), &(output->limit_vehicle_type)))
  {
    return false;
  }
  // special_time_type
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->special_time_type), &(output->special_time_type)))
  {
    return false;
  }
  // restrict_time_period
  if (!rosidl_runtime_c__String__copy(
      &(input->restrict_time_period), &(output->restrict_time_period)))
  {
    return false;
  }
  // lane_direction
  output->lane_direction = input->lane_direction;
  // lane_retriction_type
  output->lane_retriction_type = input->lane_retriction_type;
  // lane_range_start
  output->lane_range_start = input->lane_range_start;
  // lane_range_end
  output->lane_range_end = input->lane_range_end;
  return true;
}

deva_gaode_routing_msgs__msg__LaneRestriction *
deva_gaode_routing_msgs__msg__LaneRestriction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneRestriction * msg = (deva_gaode_routing_msgs__msg__LaneRestriction *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneRestriction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LaneRestriction));
  bool success = deva_gaode_routing_msgs__msg__LaneRestriction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LaneRestriction__destroy(deva_gaode_routing_msgs__msg__LaneRestriction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LaneRestriction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__init(deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneRestriction * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LaneRestriction *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LaneRestriction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LaneRestriction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LaneRestriction__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__fini(deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LaneRestriction__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * array = (deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneRestriction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__destroy(deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * lhs, const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneRestriction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * input,
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LaneRestriction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LaneRestriction * data =
      (deva_gaode_routing_msgs__msg__LaneRestriction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LaneRestriction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LaneRestriction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneRestriction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
