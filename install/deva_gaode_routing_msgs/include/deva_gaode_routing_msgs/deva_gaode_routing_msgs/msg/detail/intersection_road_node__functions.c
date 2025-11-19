// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoadNode.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `enter_intersection_road_ids`
// Member `out_intersection_roads_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
// Member `position`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__init(deva_gaode_routing_msgs__msg__IntersectionRoadNode * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__init(&msg->id)) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(msg);
    return false;
  }
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->position)) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(msg);
    return false;
  }
  // enter_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->enter_intersection_road_ids, 0)) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(msg);
    return false;
  }
  // out_intersection_roads_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&msg->out_intersection_roads_ids, 0)) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(deva_gaode_routing_msgs__msg__IntersectionRoadNode * msg)
{
  if (!msg) {
    return;
  }
  // id
  deva_gaode_routing_msgs__msg__FeatureIDType__fini(&msg->id);
  // position
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->position);
  // enter_intersection_road_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->enter_intersection_road_ids);
  // out_intersection_roads_ids
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(&msg->out_intersection_roads_ids);
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__are_equal(const deva_gaode_routing_msgs__msg__IntersectionRoadNode * lhs, const deva_gaode_routing_msgs__msg__IntersectionRoadNode * rhs)
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
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // enter_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->enter_intersection_road_ids), &(rhs->enter_intersection_road_ids)))
  {
    return false;
  }
  // out_intersection_roads_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__are_equal(
      &(lhs->out_intersection_roads_ids), &(rhs->out_intersection_roads_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__copy(
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode * input,
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * output)
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
  // position
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // enter_intersection_road_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->enter_intersection_road_ids), &(output->enter_intersection_road_ids)))
  {
    return false;
  }
  // out_intersection_roads_ids
  if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__copy(
      &(input->out_intersection_roads_ids), &(output->out_intersection_roads_ids)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__IntersectionRoadNode *
deva_gaode_routing_msgs__msg__IntersectionRoadNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * msg = (deva_gaode_routing_msgs__msg__IntersectionRoadNode *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__IntersectionRoadNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__IntersectionRoadNode));
  bool success = deva_gaode_routing_msgs__msg__IntersectionRoadNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoadNode__destroy(deva_gaode_routing_msgs__msg__IntersectionRoadNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoadNode * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__IntersectionRoadNode *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__IntersectionRoadNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__IntersectionRoadNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__fini(deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * array)
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
      deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * array = (deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__destroy(deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__are_equal(const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * lhs, const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__copy(
  const deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * input,
  deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__IntersectionRoadNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__IntersectionRoadNode * data =
      (deva_gaode_routing_msgs__msg__IntersectionRoadNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__IntersectionRoadNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
