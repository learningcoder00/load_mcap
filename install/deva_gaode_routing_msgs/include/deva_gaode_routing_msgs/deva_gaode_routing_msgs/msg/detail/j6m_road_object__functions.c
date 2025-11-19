// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `road_object_id`
// Member `referenced_lane_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `road_object_center_point`
// Member `coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// Member `road_attributes`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__J6mRoadObject__init(deva_gaode_routing_msgs__msg__J6mRoadObject * msg)
{
  if (!msg) {
    return false;
  }
  // road_object_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->road_object_id)) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
    return false;
  }
  // road_object_type
  // road_object_subtype
  // road_object_center_point
  if (!deva_gaode_routing_msgs__msg__Coordinate__init(&msg->road_object_center_point)) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
    return false;
  }
  // road_object_heading
  // road_attributes
  if (!rosidl_runtime_c__String__init(&msg->road_attributes)) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
    return false;
  }
  // confidence
  // offset
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->coordinates, 0)) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
    return false;
  }
  // referenced_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->referenced_lane_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mRoadObject__fini(deva_gaode_routing_msgs__msg__J6mRoadObject * msg)
{
  if (!msg) {
    return;
  }
  // road_object_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->road_object_id);
  // road_object_type
  // road_object_subtype
  // road_object_center_point
  deva_gaode_routing_msgs__msg__Coordinate__fini(&msg->road_object_center_point);
  // road_object_heading
  // road_attributes
  rosidl_runtime_c__String__fini(&msg->road_attributes);
  // confidence
  // offset
  // coordinates
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->coordinates);
  // referenced_lane_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->referenced_lane_ids);
}

bool
deva_gaode_routing_msgs__msg__J6mRoadObject__are_equal(const deva_gaode_routing_msgs__msg__J6mRoadObject * lhs, const deva_gaode_routing_msgs__msg__J6mRoadObject * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // road_object_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->road_object_id), &(rhs->road_object_id)))
  {
    return false;
  }
  // road_object_type
  if (lhs->road_object_type != rhs->road_object_type) {
    return false;
  }
  // road_object_subtype
  if (lhs->road_object_subtype != rhs->road_object_subtype) {
    return false;
  }
  // road_object_center_point
  if (!deva_gaode_routing_msgs__msg__Coordinate__are_equal(
      &(lhs->road_object_center_point), &(rhs->road_object_center_point)))
  {
    return false;
  }
  // road_object_heading
  if (lhs->road_object_heading != rhs->road_object_heading) {
    return false;
  }
  // road_attributes
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->road_attributes), &(rhs->road_attributes)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  // offset
  if (lhs->offset != rhs->offset) {
    return false;
  }
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->coordinates), &(rhs->coordinates)))
  {
    return false;
  }
  // referenced_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->referenced_lane_ids), &(rhs->referenced_lane_ids)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mRoadObject__copy(
  const deva_gaode_routing_msgs__msg__J6mRoadObject * input,
  deva_gaode_routing_msgs__msg__J6mRoadObject * output)
{
  if (!input || !output) {
    return false;
  }
  // road_object_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->road_object_id), &(output->road_object_id)))
  {
    return false;
  }
  // road_object_type
  output->road_object_type = input->road_object_type;
  // road_object_subtype
  output->road_object_subtype = input->road_object_subtype;
  // road_object_center_point
  if (!deva_gaode_routing_msgs__msg__Coordinate__copy(
      &(input->road_object_center_point), &(output->road_object_center_point)))
  {
    return false;
  }
  // road_object_heading
  output->road_object_heading = input->road_object_heading;
  // road_attributes
  if (!rosidl_runtime_c__String__copy(
      &(input->road_attributes), &(output->road_attributes)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  // offset
  output->offset = input->offset;
  // coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->coordinates), &(output->coordinates)))
  {
    return false;
  }
  // referenced_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->referenced_lane_ids), &(output->referenced_lane_ids)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mRoadObject *
deva_gaode_routing_msgs__msg__J6mRoadObject__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mRoadObject * msg = (deva_gaode_routing_msgs__msg__J6mRoadObject *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mRoadObject), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mRoadObject));
  bool success = deva_gaode_routing_msgs__msg__J6mRoadObject__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mRoadObject__destroy(deva_gaode_routing_msgs__msg__J6mRoadObject * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__init(deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mRoadObject * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mRoadObject *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mRoadObject), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mRoadObject__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mRoadObject__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__fini(deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mRoadObject__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * array = (deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mRoadObject__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mRoadObject__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mRoadObject);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mRoadObject * data =
      (deva_gaode_routing_msgs__msg__J6mRoadObject *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mRoadObject__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mRoadObject__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mRoadObject__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
