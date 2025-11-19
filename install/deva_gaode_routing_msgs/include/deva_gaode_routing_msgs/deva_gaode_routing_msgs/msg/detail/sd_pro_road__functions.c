// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `forms`
// Member `next_ids`
// Member `pre_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `geo`
#include "deva_gaode_routing_msgs/msg/detail/center_point__functions.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__functions.h"
// Member `lane_connect`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__functions.h"
// Member `trfc_signs`
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__functions.h"
// Member `road_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `restriction`
#include "deva_gaode_routing_msgs/msg/detail/restriction__functions.h"
// Member `cross_point`
#include "deva_gaode_routing_msgs/msg/detail/cross_point__functions.h"

bool
deva_gaode_routing_msgs__msg__SdProRoad__init(deva_gaode_routing_msgs__msg__SdProRoad * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // road_kind
  // direction
  // forms
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->forms, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // lane_count
  // length
  // speed_limit_min
  // speed_limit_max
  // start_angle
  // end_angle
  // geo
  if (!deva_gaode_routing_msgs__msg__CenterPoint__Sequence__init(&msg->geo, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__SdProLane__Sequence__init(&msg->lanes, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // next_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->next_ids, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->pre_ids, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // product_type
  // lane_connect
  if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__init(&msg->lane_connect, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // trfc_signs
  if (!deva_gaode_routing_msgs__msg__TrfcSign__Sequence__init(&msg->trfc_signs, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // s_node_id
  // e_node_id
  // joint_type
  // road_name
  if (!rosidl_runtime_c__String__init(&msg->road_name)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // restriction
  if (!deva_gaode_routing_msgs__msg__Restriction__Sequence__init(&msg->restriction, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  // cross_point
  if (!deva_gaode_routing_msgs__msg__CrossPoint__Sequence__init(&msg->cross_point, 0)) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__SdProRoad__fini(deva_gaode_routing_msgs__msg__SdProRoad * msg)
{
  if (!msg) {
    return;
  }
  // id
  // road_kind
  // direction
  // forms
  rosidl_runtime_c__uint32__Sequence__fini(&msg->forms);
  // lane_count
  // length
  // speed_limit_min
  // speed_limit_max
  // start_angle
  // end_angle
  // geo
  deva_gaode_routing_msgs__msg__CenterPoint__Sequence__fini(&msg->geo);
  // lanes
  deva_gaode_routing_msgs__msg__SdProLane__Sequence__fini(&msg->lanes);
  // next_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->next_ids);
  // pre_ids
  rosidl_runtime_c__uint64__Sequence__fini(&msg->pre_ids);
  // product_type
  // lane_connect
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__fini(&msg->lane_connect);
  // trfc_signs
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence__fini(&msg->trfc_signs);
  // s_node_id
  // e_node_id
  // joint_type
  // road_name
  rosidl_runtime_c__String__fini(&msg->road_name);
  // restriction
  deva_gaode_routing_msgs__msg__Restriction__Sequence__fini(&msg->restriction);
  // cross_point
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence__fini(&msg->cross_point);
}

bool
deva_gaode_routing_msgs__msg__SdProRoad__are_equal(const deva_gaode_routing_msgs__msg__SdProRoad * lhs, const deva_gaode_routing_msgs__msg__SdProRoad * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // road_kind
  if (lhs->road_kind != rhs->road_kind) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // forms
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->forms), &(rhs->forms)))
  {
    return false;
  }
  // lane_count
  if (lhs->lane_count != rhs->lane_count) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // speed_limit_min
  if (lhs->speed_limit_min != rhs->speed_limit_min) {
    return false;
  }
  // speed_limit_max
  if (lhs->speed_limit_max != rhs->speed_limit_max) {
    return false;
  }
  // start_angle
  if (lhs->start_angle != rhs->start_angle) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
    return false;
  }
  // geo
  if (!deva_gaode_routing_msgs__msg__CenterPoint__Sequence__are_equal(
      &(lhs->geo), &(rhs->geo)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__SdProLane__Sequence__are_equal(
      &(lhs->lanes), &(rhs->lanes)))
  {
    return false;
  }
  // next_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->next_ids), &(rhs->next_ids)))
  {
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->pre_ids), &(rhs->pre_ids)))
  {
    return false;
  }
  // product_type
  if (lhs->product_type != rhs->product_type) {
    return false;
  }
  // lane_connect
  if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__are_equal(
      &(lhs->lane_connect), &(rhs->lane_connect)))
  {
    return false;
  }
  // trfc_signs
  if (!deva_gaode_routing_msgs__msg__TrfcSign__Sequence__are_equal(
      &(lhs->trfc_signs), &(rhs->trfc_signs)))
  {
    return false;
  }
  // s_node_id
  if (lhs->s_node_id != rhs->s_node_id) {
    return false;
  }
  // e_node_id
  if (lhs->e_node_id != rhs->e_node_id) {
    return false;
  }
  // joint_type
  if (lhs->joint_type != rhs->joint_type) {
    return false;
  }
  // road_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->road_name), &(rhs->road_name)))
  {
    return false;
  }
  // restriction
  if (!deva_gaode_routing_msgs__msg__Restriction__Sequence__are_equal(
      &(lhs->restriction), &(rhs->restriction)))
  {
    return false;
  }
  // cross_point
  if (!deva_gaode_routing_msgs__msg__CrossPoint__Sequence__are_equal(
      &(lhs->cross_point), &(rhs->cross_point)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProRoad__copy(
  const deva_gaode_routing_msgs__msg__SdProRoad * input,
  deva_gaode_routing_msgs__msg__SdProRoad * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // road_kind
  output->road_kind = input->road_kind;
  // direction
  output->direction = input->direction;
  // forms
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->forms), &(output->forms)))
  {
    return false;
  }
  // lane_count
  output->lane_count = input->lane_count;
  // length
  output->length = input->length;
  // speed_limit_min
  output->speed_limit_min = input->speed_limit_min;
  // speed_limit_max
  output->speed_limit_max = input->speed_limit_max;
  // start_angle
  output->start_angle = input->start_angle;
  // end_angle
  output->end_angle = input->end_angle;
  // geo
  if (!deva_gaode_routing_msgs__msg__CenterPoint__Sequence__copy(
      &(input->geo), &(output->geo)))
  {
    return false;
  }
  // lanes
  if (!deva_gaode_routing_msgs__msg__SdProLane__Sequence__copy(
      &(input->lanes), &(output->lanes)))
  {
    return false;
  }
  // next_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->next_ids), &(output->next_ids)))
  {
    return false;
  }
  // pre_ids
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->pre_ids), &(output->pre_ids)))
  {
    return false;
  }
  // product_type
  output->product_type = input->product_type;
  // lane_connect
  if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__copy(
      &(input->lane_connect), &(output->lane_connect)))
  {
    return false;
  }
  // trfc_signs
  if (!deva_gaode_routing_msgs__msg__TrfcSign__Sequence__copy(
      &(input->trfc_signs), &(output->trfc_signs)))
  {
    return false;
  }
  // s_node_id
  output->s_node_id = input->s_node_id;
  // e_node_id
  output->e_node_id = input->e_node_id;
  // joint_type
  output->joint_type = input->joint_type;
  // road_name
  if (!rosidl_runtime_c__String__copy(
      &(input->road_name), &(output->road_name)))
  {
    return false;
  }
  // restriction
  if (!deva_gaode_routing_msgs__msg__Restriction__Sequence__copy(
      &(input->restriction), &(output->restriction)))
  {
    return false;
  }
  // cross_point
  if (!deva_gaode_routing_msgs__msg__CrossPoint__Sequence__copy(
      &(input->cross_point), &(output->cross_point)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__SdProRoad *
deva_gaode_routing_msgs__msg__SdProRoad__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProRoad * msg = (deva_gaode_routing_msgs__msg__SdProRoad *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProRoad), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__SdProRoad));
  bool success = deva_gaode_routing_msgs__msg__SdProRoad__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__SdProRoad__destroy(deva_gaode_routing_msgs__msg__SdProRoad * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__SdProRoad__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__init(deva_gaode_routing_msgs__msg__SdProRoad__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProRoad * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__SdProRoad *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__SdProRoad), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__SdProRoad__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__SdProRoad__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__fini(deva_gaode_routing_msgs__msg__SdProRoad__Sequence * array)
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
      deva_gaode_routing_msgs__msg__SdProRoad__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__SdProRoad__Sequence *
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__SdProRoad__Sequence * array = (deva_gaode_routing_msgs__msg__SdProRoad__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__SdProRoad__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__SdProRoad__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__destroy(deva_gaode_routing_msgs__msg__SdProRoad__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__SdProRoad__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__are_equal(const deva_gaode_routing_msgs__msg__SdProRoad__Sequence * lhs, const deva_gaode_routing_msgs__msg__SdProRoad__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProRoad__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__SdProRoad__Sequence__copy(
  const deva_gaode_routing_msgs__msg__SdProRoad__Sequence * input,
  deva_gaode_routing_msgs__msg__SdProRoad__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__SdProRoad);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__SdProRoad * data =
      (deva_gaode_routing_msgs__msg__SdProRoad *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__SdProRoad__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__SdProRoad__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__SdProRoad__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
