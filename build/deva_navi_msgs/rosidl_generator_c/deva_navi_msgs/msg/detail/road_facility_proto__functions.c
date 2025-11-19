// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed_limit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_range`
#include "deva_navi_msgs/msg/detail/group_time_range_proto__functions.h"

bool
deva_navi_msgs__msg__RoadFacilityProto__init(deva_navi_msgs__msg__RoadFacilityProto * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // lon
  // lat
  // speed_limit
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->speed_limit, 0)) {
    deva_navi_msgs__msg__RoadFacilityProto__fini(msg);
    return false;
  }
  // dist_to_end
  // valid_lane
  // lane_num
  // time_range
  if (!deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__init(&msg->time_range, 0)) {
    deva_navi_msgs__msg__RoadFacilityProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__RoadFacilityProto__fini(deva_navi_msgs__msg__RoadFacilityProto * msg)
{
  if (!msg) {
    return;
  }
  // type
  // lon
  // lat
  // speed_limit
  rosidl_runtime_c__int32__Sequence__fini(&msg->speed_limit);
  // dist_to_end
  // valid_lane
  // lane_num
  // time_range
  deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__fini(&msg->time_range);
}

bool
deva_navi_msgs__msg__RoadFacilityProto__are_equal(const deva_navi_msgs__msg__RoadFacilityProto * lhs, const deva_navi_msgs__msg__RoadFacilityProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // speed_limit
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->speed_limit), &(rhs->speed_limit)))
  {
    return false;
  }
  // dist_to_end
  if (lhs->dist_to_end != rhs->dist_to_end) {
    return false;
  }
  // valid_lane
  if (lhs->valid_lane != rhs->valid_lane) {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  // time_range
  if (!deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__are_equal(
      &(lhs->time_range), &(rhs->time_range)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__RoadFacilityProto__copy(
  const deva_navi_msgs__msg__RoadFacilityProto * input,
  deva_navi_msgs__msg__RoadFacilityProto * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // lon
  output->lon = input->lon;
  // lat
  output->lat = input->lat;
  // speed_limit
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->speed_limit), &(output->speed_limit)))
  {
    return false;
  }
  // dist_to_end
  output->dist_to_end = input->dist_to_end;
  // valid_lane
  output->valid_lane = input->valid_lane;
  // lane_num
  output->lane_num = input->lane_num;
  // time_range
  if (!deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__copy(
      &(input->time_range), &(output->time_range)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__RoadFacilityProto *
deva_navi_msgs__msg__RoadFacilityProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RoadFacilityProto * msg = (deva_navi_msgs__msg__RoadFacilityProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__RoadFacilityProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__RoadFacilityProto));
  bool success = deva_navi_msgs__msg__RoadFacilityProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__RoadFacilityProto__destroy(deva_navi_msgs__msg__RoadFacilityProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__RoadFacilityProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(deva_navi_msgs__msg__RoadFacilityProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RoadFacilityProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__RoadFacilityProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__RoadFacilityProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__RoadFacilityProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__RoadFacilityProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__RoadFacilityProto__Sequence__fini(deva_navi_msgs__msg__RoadFacilityProto__Sequence * array)
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
      deva_navi_msgs__msg__RoadFacilityProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__RoadFacilityProto__Sequence *
deva_navi_msgs__msg__RoadFacilityProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__RoadFacilityProto__Sequence * array = (deva_navi_msgs__msg__RoadFacilityProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__RoadFacilityProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__RoadFacilityProto__Sequence__destroy(deva_navi_msgs__msg__RoadFacilityProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__RoadFacilityProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__RoadFacilityProto__Sequence__are_equal(const deva_navi_msgs__msg__RoadFacilityProto__Sequence * lhs, const deva_navi_msgs__msg__RoadFacilityProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__RoadFacilityProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__RoadFacilityProto__Sequence__copy(
  const deva_navi_msgs__msg__RoadFacilityProto__Sequence * input,
  deva_navi_msgs__msg__RoadFacilityProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__RoadFacilityProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__RoadFacilityProto * data =
      (deva_navi_msgs__msg__RoadFacilityProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__RoadFacilityProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__RoadFacilityProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__RoadFacilityProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
