// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice
#include "deva_perception_msgs/msg/detail/lane_arrayv2__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `lane_array`
#include "deva_perception_msgs/msg/detail/lanev2__functions.h"
// Member `crosswalk_array`
#include "deva_perception_msgs/msg/detail/crosswalk__functions.h"
// Member `steering_arrow_array`
#include "deva_perception_msgs/msg/detail/steering_arrow__functions.h"
// Member `noparking_zone_array`
#include "deva_perception_msgs/msg/detail/noparking_zone__functions.h"
// Member `partition_zone_array`
#include "deva_perception_msgs/msg/detail/partition_zone__functions.h"
// Member `center_line_array`
#include "deva_perception_msgs/msg/detail/percept_center_line__functions.h"
// Member `entrance_array`
#include "deva_perception_msgs/msg/detail/entrance__functions.h"

bool
deva_perception_msgs__msg__LaneArrayv2__init(deva_perception_msgs__msg__LaneArrayv2 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // vehicle_left_lane_id
  // vehicle_right_lane_id
  // lane_array
  if (!deva_perception_msgs__msg__Lanev2__Sequence__init(&msg->lane_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // crosswalk_array
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__init(&msg->crosswalk_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // steering_arrow_array
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__init(&msg->steering_arrow_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // noparking_zone_array
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__init(&msg->noparking_zone_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // partition_zone_array
  if (!deva_perception_msgs__msg__PartitionZone__Sequence__init(&msg->partition_zone_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // center_line_array
  if (!deva_perception_msgs__msg__PerceptCenterLine__Sequence__init(&msg->center_line_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  // entrance_array
  if (!deva_perception_msgs__msg__Entrance__Sequence__init(&msg->entrance_array, 0)) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
    return false;
  }
  return true;
}

void
deva_perception_msgs__msg__LaneArrayv2__fini(deva_perception_msgs__msg__LaneArrayv2 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // vehicle_left_lane_id
  // vehicle_right_lane_id
  // lane_array
  deva_perception_msgs__msg__Lanev2__Sequence__fini(&msg->lane_array);
  // crosswalk_array
  deva_perception_msgs__msg__Crosswalk__Sequence__fini(&msg->crosswalk_array);
  // steering_arrow_array
  deva_perception_msgs__msg__SteeringArrow__Sequence__fini(&msg->steering_arrow_array);
  // noparking_zone_array
  deva_perception_msgs__msg__NoparkingZone__Sequence__fini(&msg->noparking_zone_array);
  // partition_zone_array
  deva_perception_msgs__msg__PartitionZone__Sequence__fini(&msg->partition_zone_array);
  // center_line_array
  deva_perception_msgs__msg__PerceptCenterLine__Sequence__fini(&msg->center_line_array);
  // entrance_array
  deva_perception_msgs__msg__Entrance__Sequence__fini(&msg->entrance_array);
}

bool
deva_perception_msgs__msg__LaneArrayv2__are_equal(const deva_perception_msgs__msg__LaneArrayv2 * lhs, const deva_perception_msgs__msg__LaneArrayv2 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // vehicle_left_lane_id
  if (lhs->vehicle_left_lane_id != rhs->vehicle_left_lane_id) {
    return false;
  }
  // vehicle_right_lane_id
  if (lhs->vehicle_right_lane_id != rhs->vehicle_right_lane_id) {
    return false;
  }
  // lane_array
  if (!deva_perception_msgs__msg__Lanev2__Sequence__are_equal(
      &(lhs->lane_array), &(rhs->lane_array)))
  {
    return false;
  }
  // crosswalk_array
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__are_equal(
      &(lhs->crosswalk_array), &(rhs->crosswalk_array)))
  {
    return false;
  }
  // steering_arrow_array
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__are_equal(
      &(lhs->steering_arrow_array), &(rhs->steering_arrow_array)))
  {
    return false;
  }
  // noparking_zone_array
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__are_equal(
      &(lhs->noparking_zone_array), &(rhs->noparking_zone_array)))
  {
    return false;
  }
  // partition_zone_array
  if (!deva_perception_msgs__msg__PartitionZone__Sequence__are_equal(
      &(lhs->partition_zone_array), &(rhs->partition_zone_array)))
  {
    return false;
  }
  // center_line_array
  if (!deva_perception_msgs__msg__PerceptCenterLine__Sequence__are_equal(
      &(lhs->center_line_array), &(rhs->center_line_array)))
  {
    return false;
  }
  // entrance_array
  if (!deva_perception_msgs__msg__Entrance__Sequence__are_equal(
      &(lhs->entrance_array), &(rhs->entrance_array)))
  {
    return false;
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneArrayv2__copy(
  const deva_perception_msgs__msg__LaneArrayv2 * input,
  deva_perception_msgs__msg__LaneArrayv2 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // vehicle_left_lane_id
  output->vehicle_left_lane_id = input->vehicle_left_lane_id;
  // vehicle_right_lane_id
  output->vehicle_right_lane_id = input->vehicle_right_lane_id;
  // lane_array
  if (!deva_perception_msgs__msg__Lanev2__Sequence__copy(
      &(input->lane_array), &(output->lane_array)))
  {
    return false;
  }
  // crosswalk_array
  if (!deva_perception_msgs__msg__Crosswalk__Sequence__copy(
      &(input->crosswalk_array), &(output->crosswalk_array)))
  {
    return false;
  }
  // steering_arrow_array
  if (!deva_perception_msgs__msg__SteeringArrow__Sequence__copy(
      &(input->steering_arrow_array), &(output->steering_arrow_array)))
  {
    return false;
  }
  // noparking_zone_array
  if (!deva_perception_msgs__msg__NoparkingZone__Sequence__copy(
      &(input->noparking_zone_array), &(output->noparking_zone_array)))
  {
    return false;
  }
  // partition_zone_array
  if (!deva_perception_msgs__msg__PartitionZone__Sequence__copy(
      &(input->partition_zone_array), &(output->partition_zone_array)))
  {
    return false;
  }
  // center_line_array
  if (!deva_perception_msgs__msg__PerceptCenterLine__Sequence__copy(
      &(input->center_line_array), &(output->center_line_array)))
  {
    return false;
  }
  // entrance_array
  if (!deva_perception_msgs__msg__Entrance__Sequence__copy(
      &(input->entrance_array), &(output->entrance_array)))
  {
    return false;
  }
  return true;
}

deva_perception_msgs__msg__LaneArrayv2 *
deva_perception_msgs__msg__LaneArrayv2__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArrayv2 * msg = (deva_perception_msgs__msg__LaneArrayv2 *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneArrayv2), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_perception_msgs__msg__LaneArrayv2));
  bool success = deva_perception_msgs__msg__LaneArrayv2__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_perception_msgs__msg__LaneArrayv2__destroy(deva_perception_msgs__msg__LaneArrayv2 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_perception_msgs__msg__LaneArrayv2__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_perception_msgs__msg__LaneArrayv2__Sequence__init(deva_perception_msgs__msg__LaneArrayv2__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArrayv2 * data = NULL;

  if (size) {
    data = (deva_perception_msgs__msg__LaneArrayv2 *)allocator.zero_allocate(size, sizeof(deva_perception_msgs__msg__LaneArrayv2), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_perception_msgs__msg__LaneArrayv2__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_perception_msgs__msg__LaneArrayv2__fini(&data[i - 1]);
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
deva_perception_msgs__msg__LaneArrayv2__Sequence__fini(deva_perception_msgs__msg__LaneArrayv2__Sequence * array)
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
      deva_perception_msgs__msg__LaneArrayv2__fini(&array->data[i]);
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

deva_perception_msgs__msg__LaneArrayv2__Sequence *
deva_perception_msgs__msg__LaneArrayv2__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_perception_msgs__msg__LaneArrayv2__Sequence * array = (deva_perception_msgs__msg__LaneArrayv2__Sequence *)allocator.allocate(sizeof(deva_perception_msgs__msg__LaneArrayv2__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_perception_msgs__msg__LaneArrayv2__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_perception_msgs__msg__LaneArrayv2__Sequence__destroy(deva_perception_msgs__msg__LaneArrayv2__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_perception_msgs__msg__LaneArrayv2__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_perception_msgs__msg__LaneArrayv2__Sequence__are_equal(const deva_perception_msgs__msg__LaneArrayv2__Sequence * lhs, const deva_perception_msgs__msg__LaneArrayv2__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_perception_msgs__msg__LaneArrayv2__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_perception_msgs__msg__LaneArrayv2__Sequence__copy(
  const deva_perception_msgs__msg__LaneArrayv2__Sequence * input,
  deva_perception_msgs__msg__LaneArrayv2__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_perception_msgs__msg__LaneArrayv2);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_perception_msgs__msg__LaneArrayv2 * data =
      (deva_perception_msgs__msg__LaneArrayv2 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_perception_msgs__msg__LaneArrayv2__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_perception_msgs__msg__LaneArrayv2__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_perception_msgs__msg__LaneArrayv2__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
