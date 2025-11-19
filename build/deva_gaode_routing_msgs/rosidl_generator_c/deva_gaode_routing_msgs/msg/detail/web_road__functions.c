// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/web_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `coord_list`
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// Member `intersection_msg`
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__functions.h"

bool
deva_gaode_routing_msgs__msg__WebRoad__init(deva_gaode_routing_msgs__msg__WebRoad * msg)
{
  if (!msg) {
    return false;
  }
  // has_traffic_light
  // distance
  // time
  // road_type
  // road_class
  // specific_type
  // road_direction
  // link_direction
  // coord_list
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&msg->coord_list, 0)) {
    deva_gaode_routing_msgs__msg__WebRoad__fini(msg);
    return false;
  }
  // traffic_status
  // intersection_msg
  if (!deva_gaode_routing_msgs__msg__WebIntersection__Sequence__init(&msg->intersection_msg, 0)) {
    deva_gaode_routing_msgs__msg__WebRoad__fini(msg);
    return false;
  }
  // lane_num
  return true;
}

void
deva_gaode_routing_msgs__msg__WebRoad__fini(deva_gaode_routing_msgs__msg__WebRoad * msg)
{
  if (!msg) {
    return;
  }
  // has_traffic_light
  // distance
  // time
  // road_type
  // road_class
  // specific_type
  // road_direction
  // link_direction
  // coord_list
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(&msg->coord_list);
  // traffic_status
  // intersection_msg
  deva_gaode_routing_msgs__msg__WebIntersection__Sequence__fini(&msg->intersection_msg);
  // lane_num
}

bool
deva_gaode_routing_msgs__msg__WebRoad__are_equal(const deva_gaode_routing_msgs__msg__WebRoad * lhs, const deva_gaode_routing_msgs__msg__WebRoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_traffic_light
  if (lhs->has_traffic_light != rhs->has_traffic_light) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // road_type
  if (lhs->road_type != rhs->road_type) {
    return false;
  }
  // road_class
  if (lhs->road_class != rhs->road_class) {
    return false;
  }
  // specific_type
  if (lhs->specific_type != rhs->specific_type) {
    return false;
  }
  // road_direction
  if (lhs->road_direction != rhs->road_direction) {
    return false;
  }
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
    return false;
  }
  // coord_list
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__are_equal(
      &(lhs->coord_list), &(rhs->coord_list)))
  {
    return false;
  }
  // traffic_status
  if (lhs->traffic_status != rhs->traffic_status) {
    return false;
  }
  // intersection_msg
  if (!deva_gaode_routing_msgs__msg__WebIntersection__Sequence__are_equal(
      &(lhs->intersection_msg), &(rhs->intersection_msg)))
  {
    return false;
  }
  // lane_num
  if (lhs->lane_num != rhs->lane_num) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebRoad__copy(
  const deva_gaode_routing_msgs__msg__WebRoad * input,
  deva_gaode_routing_msgs__msg__WebRoad * output)
{
  if (!input || !output) {
    return false;
  }
  // has_traffic_light
  output->has_traffic_light = input->has_traffic_light;
  // distance
  output->distance = input->distance;
  // time
  output->time = input->time;
  // road_type
  output->road_type = input->road_type;
  // road_class
  output->road_class = input->road_class;
  // specific_type
  output->specific_type = input->specific_type;
  // road_direction
  output->road_direction = input->road_direction;
  // link_direction
  output->link_direction = input->link_direction;
  // coord_list
  if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__copy(
      &(input->coord_list), &(output->coord_list)))
  {
    return false;
  }
  // traffic_status
  output->traffic_status = input->traffic_status;
  // intersection_msg
  if (!deva_gaode_routing_msgs__msg__WebIntersection__Sequence__copy(
      &(input->intersection_msg), &(output->intersection_msg)))
  {
    return false;
  }
  // lane_num
  output->lane_num = input->lane_num;
  return true;
}

deva_gaode_routing_msgs__msg__WebRoad *
deva_gaode_routing_msgs__msg__WebRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebRoad * msg = (deva_gaode_routing_msgs__msg__WebRoad *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__WebRoad));
  bool success = deva_gaode_routing_msgs__msg__WebRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__WebRoad__destroy(deva_gaode_routing_msgs__msg__WebRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__WebRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__WebRoad__Sequence__init(deva_gaode_routing_msgs__msg__WebRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebRoad * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__WebRoad *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__WebRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__WebRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__WebRoad__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__WebRoad__Sequence__fini(deva_gaode_routing_msgs__msg__WebRoad__Sequence * array)
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
      deva_gaode_routing_msgs__msg__WebRoad__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__WebRoad__Sequence *
deva_gaode_routing_msgs__msg__WebRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__WebRoad__Sequence * array = (deva_gaode_routing_msgs__msg__WebRoad__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__WebRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__WebRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__WebRoad__Sequence__destroy(deva_gaode_routing_msgs__msg__WebRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__WebRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__WebRoad__Sequence__are_equal(const deva_gaode_routing_msgs__msg__WebRoad__Sequence * lhs, const deva_gaode_routing_msgs__msg__WebRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__WebRoad__Sequence__copy(
  const deva_gaode_routing_msgs__msg__WebRoad__Sequence * input,
  deva_gaode_routing_msgs__msg__WebRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__WebRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__WebRoad * data =
      (deva_gaode_routing_msgs__msg__WebRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__WebRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__WebRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__WebRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
