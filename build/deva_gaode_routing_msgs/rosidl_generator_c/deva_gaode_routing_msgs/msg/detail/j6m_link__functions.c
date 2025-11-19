// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `successor_linkid_s`
// Member `predecessor_linkid_s`
// Member `referenced_lane_id_s`
// Member `referenced_intersection_id_s`
// Member `referenced_lanemarking_id_s`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mLink__init(deva_gaode_routing_msgs__msg__J6mLink * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // road_type
  // length
  // confidence
  // travel_direction
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->coordinates, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // successor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->successor_linkid_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // predecessor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->predecessor_linkid_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // referenced_lane_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->referenced_lane_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // referenced_intersection_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->referenced_intersection_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  // referenced_lanemarking_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->referenced_lanemarking_id_s, 0)) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mLink__fini(deva_gaode_routing_msgs__msg__J6mLink * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->id);
  // road_type
  // length
  // confidence
  // travel_direction
  // coordinates
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->coordinates);
  // successor_linkid_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->successor_linkid_s);
  // predecessor_linkid_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->predecessor_linkid_s);
  // referenced_lane_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->referenced_lane_id_s);
  // referenced_intersection_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->referenced_intersection_id_s);
  // referenced_lanemarking_id_s
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->referenced_lanemarking_id_s);
}

bool
deva_gaode_routing_msgs__msg__J6mLink__are_equal(const deva_gaode_routing_msgs__msg__J6mLink * lhs, const deva_gaode_routing_msgs__msg__J6mLink * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // road_type
  if (lhs->road_type != rhs->road_type) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // travel_direction
  if (lhs->travel_direction != rhs->travel_direction) {
    return false;
  }
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->coordinates), &(rhs->coordinates)))
  {
    return false;
  }
  // successor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->successor_linkid_s), &(rhs->successor_linkid_s)))
  {
    return false;
  }
  // predecessor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->predecessor_linkid_s), &(rhs->predecessor_linkid_s)))
  {
    return false;
  }
  // referenced_lane_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->referenced_lane_id_s), &(rhs->referenced_lane_id_s)))
  {
    return false;
  }
  // referenced_intersection_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->referenced_intersection_id_s), &(rhs->referenced_intersection_id_s)))
  {
    return false;
  }
  // referenced_lanemarking_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->referenced_lanemarking_id_s), &(rhs->referenced_lanemarking_id_s)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLink__copy(
  const deva_gaode_routing_msgs__msg__J6mLink * input,
  deva_gaode_routing_msgs__msg__J6mLink * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // road_type
  output->road_type = input->road_type;
  // length
  output->length = input->length;
  // confidence
  output->confidence = input->confidence;
  // travel_direction
  output->travel_direction = input->travel_direction;
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->coordinates), &(output->coordinates)))
  {
    return false;
  }
  // successor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->successor_linkid_s), &(output->successor_linkid_s)))
  {
    return false;
  }
  // predecessor_linkid_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->predecessor_linkid_s), &(output->predecessor_linkid_s)))
  {
    return false;
  }
  // referenced_lane_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->referenced_lane_id_s), &(output->referenced_lane_id_s)))
  {
    return false;
  }
  // referenced_intersection_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->referenced_intersection_id_s), &(output->referenced_intersection_id_s)))
  {
    return false;
  }
  // referenced_lanemarking_id_s
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->referenced_lanemarking_id_s), &(output->referenced_lanemarking_id_s)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mLink *
deva_gaode_routing_msgs__msg__J6mLink__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLink * msg = (deva_gaode_routing_msgs__msg__J6mLink *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLink), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mLink));
  bool success = deva_gaode_routing_msgs__msg__J6mLink__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mLink__destroy(deva_gaode_routing_msgs__msg__J6mLink * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mLink__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLink * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mLink *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mLink), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mLink__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mLink__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mLink__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mLink__Sequence *
deva_gaode_routing_msgs__msg__J6mLink__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLink__Sequence * array = (deva_gaode_routing_msgs__msg__J6mLink__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLink__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mLink__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mLink__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mLink__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mLink__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mLink__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mLink__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLink__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLink__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mLink__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mLink__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mLink);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mLink * data =
      (deva_gaode_routing_msgs__msg__J6mLink *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mLink__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mLink__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLink__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
