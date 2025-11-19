// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `m_link_consume`
// Member `m_link_distance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `m_via_info`
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"
// Member `m_energy_consume`
#include "deva_navi_msgs/msg/detail/energy_consume_proto__functions.h"

bool
deva_navi_msgs__msg__ElecPathInfoProto__init(deva_navi_msgs__msg__ElecPathInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // m_is_elec_route
  // m_link_consume_size_word
  // m_traffic_info
  // m_energy_unit
  // m_path_flag
  // m_energy_sum
  // m_link_num
  // m_link_consume
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->m_link_consume, 0)) {
    deva_navi_msgs__msg__ElecPathInfoProto__fini(msg);
    return false;
  }
  // m_link_distance
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->m_link_distance, 0)) {
    deva_navi_msgs__msg__ElecPathInfoProto__fini(msg);
    return false;
  }
  // m_via_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&msg->m_via_info, 0)) {
    deva_navi_msgs__msg__ElecPathInfoProto__fini(msg);
    return false;
  }
  // m_energy_consume
  if (!deva_navi_msgs__msg__EnergyConsumeProto__init(&msg->m_energy_consume)) {
    deva_navi_msgs__msg__ElecPathInfoProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__ElecPathInfoProto__fini(deva_navi_msgs__msg__ElecPathInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // m_is_elec_route
  // m_link_consume_size_word
  // m_traffic_info
  // m_energy_unit
  // m_path_flag
  // m_energy_sum
  // m_link_num
  // m_link_consume
  rosidl_runtime_c__int32__Sequence__fini(&msg->m_link_consume);
  // m_link_distance
  rosidl_runtime_c__int64__Sequence__fini(&msg->m_link_distance);
  // m_via_info
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(&msg->m_via_info);
  // m_energy_consume
  deva_navi_msgs__msg__EnergyConsumeProto__fini(&msg->m_energy_consume);
}

bool
deva_navi_msgs__msg__ElecPathInfoProto__are_equal(const deva_navi_msgs__msg__ElecPathInfoProto * lhs, const deva_navi_msgs__msg__ElecPathInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // m_is_elec_route
  if (lhs->m_is_elec_route != rhs->m_is_elec_route) {
    return false;
  }
  // m_link_consume_size_word
  if (lhs->m_link_consume_size_word != rhs->m_link_consume_size_word) {
    return false;
  }
  // m_traffic_info
  if (lhs->m_traffic_info != rhs->m_traffic_info) {
    return false;
  }
  // m_energy_unit
  if (lhs->m_energy_unit != rhs->m_energy_unit) {
    return false;
  }
  // m_path_flag
  if (lhs->m_path_flag != rhs->m_path_flag) {
    return false;
  }
  // m_energy_sum
  if (lhs->m_energy_sum != rhs->m_energy_sum) {
    return false;
  }
  // m_link_num
  if (lhs->m_link_num != rhs->m_link_num) {
    return false;
  }
  // m_link_consume
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->m_link_consume), &(rhs->m_link_consume)))
  {
    return false;
  }
  // m_link_distance
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->m_link_distance), &(rhs->m_link_distance)))
  {
    return false;
  }
  // m_via_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__are_equal(
      &(lhs->m_via_info), &(rhs->m_via_info)))
  {
    return false;
  }
  // m_energy_consume
  if (!deva_navi_msgs__msg__EnergyConsumeProto__are_equal(
      &(lhs->m_energy_consume), &(rhs->m_energy_consume)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__ElecPathInfoProto__copy(
  const deva_navi_msgs__msg__ElecPathInfoProto * input,
  deva_navi_msgs__msg__ElecPathInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // m_is_elec_route
  output->m_is_elec_route = input->m_is_elec_route;
  // m_link_consume_size_word
  output->m_link_consume_size_word = input->m_link_consume_size_word;
  // m_traffic_info
  output->m_traffic_info = input->m_traffic_info;
  // m_energy_unit
  output->m_energy_unit = input->m_energy_unit;
  // m_path_flag
  output->m_path_flag = input->m_path_flag;
  // m_energy_sum
  output->m_energy_sum = input->m_energy_sum;
  // m_link_num
  output->m_link_num = input->m_link_num;
  // m_link_consume
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->m_link_consume), &(output->m_link_consume)))
  {
    return false;
  }
  // m_link_distance
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->m_link_distance), &(output->m_link_distance)))
  {
    return false;
  }
  // m_via_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__copy(
      &(input->m_via_info), &(output->m_via_info)))
  {
    return false;
  }
  // m_energy_consume
  if (!deva_navi_msgs__msg__EnergyConsumeProto__copy(
      &(input->m_energy_consume), &(output->m_energy_consume)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__ElecPathInfoProto *
deva_navi_msgs__msg__ElecPathInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ElecPathInfoProto * msg = (deva_navi_msgs__msg__ElecPathInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__ElecPathInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__ElecPathInfoProto));
  bool success = deva_navi_msgs__msg__ElecPathInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__ElecPathInfoProto__destroy(deva_navi_msgs__msg__ElecPathInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__ElecPathInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__init(deva_navi_msgs__msg__ElecPathInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ElecPathInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__ElecPathInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__ElecPathInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__ElecPathInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__ElecPathInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__fini(deva_navi_msgs__msg__ElecPathInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__ElecPathInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__ElecPathInfoProto__Sequence *
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ElecPathInfoProto__Sequence * array = (deva_navi_msgs__msg__ElecPathInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__ElecPathInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__ElecPathInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__destroy(deva_navi_msgs__msg__ElecPathInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__ElecPathInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ElecPathInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ElecPathInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__ElecPathInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__ElecPathInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ElecPathInfoProto__Sequence * input,
  deva_navi_msgs__msg__ElecPathInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__ElecPathInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__ElecPathInfoProto * data =
      (deva_navi_msgs__msg__ElecPathInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__ElecPathInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__ElecPathInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__ElecPathInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
