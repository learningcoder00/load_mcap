// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lane_id`
// Member `left_lane_marking_ids`
// Member `right_lane_marking_ids`
// Member `lane_successor_lane_ids`
// Member `lane_predecessor_lane_ids`
// Member `lane_referenced_roadobject_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `lane_speed_limit`
// Member `lane_adas`
#include "rosidl_runtime_c/string_functions.h"
// Member `lane_coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"

bool
deva_gaode_routing_msgs__msg__J6mLane__init(deva_gaode_routing_msgs__msg__J6mLane * msg)
{
  if (!msg) {
    return false;
  }
  // lane_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->lane_id)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_seq_num
  // lane_type
  // lane_speed_limit
  if (!rosidl_runtime_c__String__init(&msg->lane_speed_limit)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_max_width
  // lane_min_width
  // left_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->left_lane_marking_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // right_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->right_lane_marking_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_adas
  if (!rosidl_runtime_c__String__init(&msg->lane_adas)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_length
  // lane_turn_direction
  // lane_confidence
  // lane_travel_direction
  // lane_empir_speed
  // lane_empir_traj_count
  // lane_host_link_id
  // lane_host_link_type
  // lane_successor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->lane_successor_lane_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_predecessor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->lane_predecessor_lane_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_referenced_roadobject_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->lane_referenced_roadobject_ids, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  // lane_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&msg->lane_coordinates, 0)) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
    return false;
  }
  return true;
}

void
deva_gaode_routing_msgs__msg__J6mLane__fini(deva_gaode_routing_msgs__msg__J6mLane * msg)
{
  if (!msg) {
    return;
  }
  // lane_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->lane_id);
  // lane_seq_num
  // lane_type
  // lane_speed_limit
  rosidl_runtime_c__String__fini(&msg->lane_speed_limit);
  // lane_max_width
  // lane_min_width
  // left_lane_marking_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->left_lane_marking_ids);
  // right_lane_marking_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->right_lane_marking_ids);
  // lane_adas
  rosidl_runtime_c__String__fini(&msg->lane_adas);
  // lane_length
  // lane_turn_direction
  // lane_confidence
  // lane_travel_direction
  // lane_empir_speed
  // lane_empir_traj_count
  // lane_host_link_id
  // lane_host_link_type
  // lane_successor_lane_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->lane_successor_lane_ids);
  // lane_predecessor_lane_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->lane_predecessor_lane_ids);
  // lane_referenced_roadobject_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->lane_referenced_roadobject_ids);
  // lane_coordinates
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(&msg->lane_coordinates);
}

bool
deva_gaode_routing_msgs__msg__J6mLane__are_equal(const deva_gaode_routing_msgs__msg__J6mLane * lhs, const deva_gaode_routing_msgs__msg__J6mLane * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->lane_id), &(rhs->lane_id)))
  {
    return false;
  }
  // lane_seq_num
  if (lhs->lane_seq_num != rhs->lane_seq_num) {
    return false;
  }
  // lane_type
  if (lhs->lane_type != rhs->lane_type) {
    return false;
  }
  // lane_speed_limit
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_speed_limit), &(rhs->lane_speed_limit)))
  {
    return false;
  }
  // lane_max_width
  if (lhs->lane_max_width != rhs->lane_max_width) {
    return false;
  }
  // lane_min_width
  if (lhs->lane_min_width != rhs->lane_min_width) {
    return false;
  }
  // left_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->left_lane_marking_ids), &(rhs->left_lane_marking_ids)))
  {
    return false;
  }
  // right_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->right_lane_marking_ids), &(rhs->right_lane_marking_ids)))
  {
    return false;
  }
  // lane_adas
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lane_adas), &(rhs->lane_adas)))
  {
    return false;
  }
  // lane_length
  if (lhs->lane_length != rhs->lane_length) {
    return false;
  }
  // lane_turn_direction
  if (lhs->lane_turn_direction != rhs->lane_turn_direction) {
    return false;
  }
  // lane_confidence
  if (lhs->lane_confidence != rhs->lane_confidence) {
    return false;
  }
  // lane_travel_direction
  if (lhs->lane_travel_direction != rhs->lane_travel_direction) {
    return false;
  }
  // lane_empir_speed
  if (lhs->lane_empir_speed != rhs->lane_empir_speed) {
    return false;
  }
  // lane_empir_traj_count
  if (lhs->lane_empir_traj_count != rhs->lane_empir_traj_count) {
    return false;
  }
  // lane_host_link_id
  if (lhs->lane_host_link_id != rhs->lane_host_link_id) {
    return false;
  }
  // lane_host_link_type
  if (lhs->lane_host_link_type != rhs->lane_host_link_type) {
    return false;
  }
  // lane_successor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->lane_successor_lane_ids), &(rhs->lane_successor_lane_ids)))
  {
    return false;
  }
  // lane_predecessor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->lane_predecessor_lane_ids), &(rhs->lane_predecessor_lane_ids)))
  {
    return false;
  }
  // lane_referenced_roadobject_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->lane_referenced_roadobject_ids), &(rhs->lane_referenced_roadobject_ids)))
  {
    return false;
  }
  // lane_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__are_equal(
      &(lhs->lane_coordinates), &(rhs->lane_coordinates)))
  {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLane__copy(
  const deva_gaode_routing_msgs__msg__J6mLane * input,
  deva_gaode_routing_msgs__msg__J6mLane * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->lane_id), &(output->lane_id)))
  {
    return false;
  }
  // lane_seq_num
  output->lane_seq_num = input->lane_seq_num;
  // lane_type
  output->lane_type = input->lane_type;
  // lane_speed_limit
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_speed_limit), &(output->lane_speed_limit)))
  {
    return false;
  }
  // lane_max_width
  output->lane_max_width = input->lane_max_width;
  // lane_min_width
  output->lane_min_width = input->lane_min_width;
  // left_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->left_lane_marking_ids), &(output->left_lane_marking_ids)))
  {
    return false;
  }
  // right_lane_marking_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->right_lane_marking_ids), &(output->right_lane_marking_ids)))
  {
    return false;
  }
  // lane_adas
  if (!rosidl_runtime_c__String__copy(
      &(input->lane_adas), &(output->lane_adas)))
  {
    return false;
  }
  // lane_length
  output->lane_length = input->lane_length;
  // lane_turn_direction
  output->lane_turn_direction = input->lane_turn_direction;
  // lane_confidence
  output->lane_confidence = input->lane_confidence;
  // lane_travel_direction
  output->lane_travel_direction = input->lane_travel_direction;
  // lane_empir_speed
  output->lane_empir_speed = input->lane_empir_speed;
  // lane_empir_traj_count
  output->lane_empir_traj_count = input->lane_empir_traj_count;
  // lane_host_link_id
  output->lane_host_link_id = input->lane_host_link_id;
  // lane_host_link_type
  output->lane_host_link_type = input->lane_host_link_type;
  // lane_successor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->lane_successor_lane_ids), &(output->lane_successor_lane_ids)))
  {
    return false;
  }
  // lane_predecessor_lane_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->lane_predecessor_lane_ids), &(output->lane_predecessor_lane_ids)))
  {
    return false;
  }
  // lane_referenced_roadobject_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->lane_referenced_roadobject_ids), &(output->lane_referenced_roadobject_ids)))
  {
    return false;
  }
  // lane_coordinates
  if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__copy(
      &(input->lane_coordinates), &(output->lane_coordinates)))
  {
    return false;
  }
  return true;
}

deva_gaode_routing_msgs__msg__J6mLane *
deva_gaode_routing_msgs__msg__J6mLane__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLane * msg = (deva_gaode_routing_msgs__msg__J6mLane *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLane), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__J6mLane));
  bool success = deva_gaode_routing_msgs__msg__J6mLane__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__J6mLane__destroy(deva_gaode_routing_msgs__msg__J6mLane * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__J6mLane__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__J6mLane__Sequence__init(deva_gaode_routing_msgs__msg__J6mLane__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLane * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__J6mLane *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__J6mLane), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__J6mLane__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__J6mLane__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__J6mLane__Sequence__fini(deva_gaode_routing_msgs__msg__J6mLane__Sequence * array)
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
      deva_gaode_routing_msgs__msg__J6mLane__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__J6mLane__Sequence *
deva_gaode_routing_msgs__msg__J6mLane__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__J6mLane__Sequence * array = (deva_gaode_routing_msgs__msg__J6mLane__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__J6mLane__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__J6mLane__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__J6mLane__Sequence__destroy(deva_gaode_routing_msgs__msg__J6mLane__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__J6mLane__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__J6mLane__Sequence__are_equal(const deva_gaode_routing_msgs__msg__J6mLane__Sequence * lhs, const deva_gaode_routing_msgs__msg__J6mLane__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLane__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__J6mLane__Sequence__copy(
  const deva_gaode_routing_msgs__msg__J6mLane__Sequence * input,
  deva_gaode_routing_msgs__msg__J6mLane__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__J6mLane);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__J6mLane * data =
      (deva_gaode_routing_msgs__msg__J6mLane *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__J6mLane__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__J6mLane__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__J6mLane__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
