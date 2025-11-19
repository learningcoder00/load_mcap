// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `road_kinds`
// Member `vehicle_types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
deva_gaode_routing_msgs__msg__LinkAttribute__init(deva_gaode_routing_msgs__msg__LinkAttribute * msg)
{
  if (!msg) {
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__init(&msg->link_id)) {
    deva_gaode_routing_msgs__msg__LinkAttribute__fini(msg);
    return false;
  }
  // length
  // link_direction
  // lane_num_sum
  // lane_num_s2e
  // lane_num_e2s
  // speed_limit_s2e
  // speed_limit_e2s
  // road_class
  // toll_type
  // road_kinds
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->road_kinds, 0)) {
    deva_gaode_routing_msgs__msg__LinkAttribute__fini(msg);
    return false;
  }
  // coverage_status
  // function_class
  // construction_type
  // condition_type
  // speed_class
  // admin_code
  // vehicle_types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->vehicle_types, 0)) {
    deva_gaode_routing_msgs__msg__LinkAttribute__fini(msg);
    return false;
  }
  // compacity
  // is_special
  // is_in_city
  // is_cross_tile
  return true;
}

void
deva_gaode_routing_msgs__msg__LinkAttribute__fini(deva_gaode_routing_msgs__msg__LinkAttribute * msg)
{
  if (!msg) {
    return;
  }
  // link_id
  deva_gaode_routing_msgs__msg__LinkIDType__fini(&msg->link_id);
  // length
  // link_direction
  // lane_num_sum
  // lane_num_s2e
  // lane_num_e2s
  // speed_limit_s2e
  // speed_limit_e2s
  // road_class
  // toll_type
  // road_kinds
  rosidl_runtime_c__uint8__Sequence__fini(&msg->road_kinds);
  // coverage_status
  // function_class
  // construction_type
  // condition_type
  // speed_class
  // admin_code
  // vehicle_types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->vehicle_types);
  // compacity
  // is_special
  // is_in_city
  // is_cross_tile
}

bool
deva_gaode_routing_msgs__msg__LinkAttribute__are_equal(const deva_gaode_routing_msgs__msg__LinkAttribute * lhs, const deva_gaode_routing_msgs__msg__LinkAttribute * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__are_equal(
      &(lhs->link_id), &(rhs->link_id)))
  {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
    return false;
  }
  // lane_num_sum
  if (lhs->lane_num_sum != rhs->lane_num_sum) {
    return false;
  }
  // lane_num_s2e
  if (lhs->lane_num_s2e != rhs->lane_num_s2e) {
    return false;
  }
  // lane_num_e2s
  if (lhs->lane_num_e2s != rhs->lane_num_e2s) {
    return false;
  }
  // speed_limit_s2e
  if (lhs->speed_limit_s2e != rhs->speed_limit_s2e) {
    return false;
  }
  // speed_limit_e2s
  if (lhs->speed_limit_e2s != rhs->speed_limit_e2s) {
    return false;
  }
  // road_class
  if (lhs->road_class != rhs->road_class) {
    return false;
  }
  // toll_type
  if (lhs->toll_type != rhs->toll_type) {
    return false;
  }
  // road_kinds
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->road_kinds), &(rhs->road_kinds)))
  {
    return false;
  }
  // coverage_status
  if (lhs->coverage_status != rhs->coverage_status) {
    return false;
  }
  // function_class
  if (lhs->function_class != rhs->function_class) {
    return false;
  }
  // construction_type
  if (lhs->construction_type != rhs->construction_type) {
    return false;
  }
  // condition_type
  if (lhs->condition_type != rhs->condition_type) {
    return false;
  }
  // speed_class
  if (lhs->speed_class != rhs->speed_class) {
    return false;
  }
  // admin_code
  if (lhs->admin_code != rhs->admin_code) {
    return false;
  }
  // vehicle_types
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->vehicle_types), &(rhs->vehicle_types)))
  {
    return false;
  }
  // compacity
  if (lhs->compacity != rhs->compacity) {
    return false;
  }
  // is_special
  if (lhs->is_special != rhs->is_special) {
    return false;
  }
  // is_in_city
  if (lhs->is_in_city != rhs->is_in_city) {
    return false;
  }
  // is_cross_tile
  if (lhs->is_cross_tile != rhs->is_cross_tile) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LinkAttribute__copy(
  const deva_gaode_routing_msgs__msg__LinkAttribute * input,
  deva_gaode_routing_msgs__msg__LinkAttribute * output)
{
  if (!input || !output) {
    return false;
  }
  // link_id
  if (!deva_gaode_routing_msgs__msg__LinkIDType__copy(
      &(input->link_id), &(output->link_id)))
  {
    return false;
  }
  // length
  output->length = input->length;
  // link_direction
  output->link_direction = input->link_direction;
  // lane_num_sum
  output->lane_num_sum = input->lane_num_sum;
  // lane_num_s2e
  output->lane_num_s2e = input->lane_num_s2e;
  // lane_num_e2s
  output->lane_num_e2s = input->lane_num_e2s;
  // speed_limit_s2e
  output->speed_limit_s2e = input->speed_limit_s2e;
  // speed_limit_e2s
  output->speed_limit_e2s = input->speed_limit_e2s;
  // road_class
  output->road_class = input->road_class;
  // toll_type
  output->toll_type = input->toll_type;
  // road_kinds
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->road_kinds), &(output->road_kinds)))
  {
    return false;
  }
  // coverage_status
  output->coverage_status = input->coverage_status;
  // function_class
  output->function_class = input->function_class;
  // construction_type
  output->construction_type = input->construction_type;
  // condition_type
  output->condition_type = input->condition_type;
  // speed_class
  output->speed_class = input->speed_class;
  // admin_code
  output->admin_code = input->admin_code;
  // vehicle_types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->vehicle_types), &(output->vehicle_types)))
  {
    return false;
  }
  // compacity
  output->compacity = input->compacity;
  // is_special
  output->is_special = input->is_special;
  // is_in_city
  output->is_in_city = input->is_in_city;
  // is_cross_tile
  output->is_cross_tile = input->is_cross_tile;
  return true;
}

deva_gaode_routing_msgs__msg__LinkAttribute *
deva_gaode_routing_msgs__msg__LinkAttribute__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LinkAttribute * msg = (deva_gaode_routing_msgs__msg__LinkAttribute *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LinkAttribute), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LinkAttribute));
  bool success = deva_gaode_routing_msgs__msg__LinkAttribute__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LinkAttribute__destroy(deva_gaode_routing_msgs__msg__LinkAttribute * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LinkAttribute__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__init(deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LinkAttribute * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LinkAttribute *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LinkAttribute), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LinkAttribute__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LinkAttribute__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__fini(deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LinkAttribute__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LinkAttribute__Sequence *
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * array = (deva_gaode_routing_msgs__msg__LinkAttribute__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LinkAttribute__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__destroy(deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * lhs, const deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LinkAttribute__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LinkAttribute__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * input,
  deva_gaode_routing_msgs__msg__LinkAttribute__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LinkAttribute);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LinkAttribute * data =
      (deva_gaode_routing_msgs__msg__LinkAttribute *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LinkAttribute__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LinkAttribute__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LinkAttribute__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
