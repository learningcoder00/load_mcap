// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `show`
// Member `projective`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `poi_id`
// Member `name`
// Member `brand_name`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_navi_msgs__msg__ChargeStationInfoProto__init(deva_navi_msgs__msg__ChargeStationInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // segment_idx
  // direction
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->show)) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->projective)) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
    return false;
  }
  // poi_id
  if (!rosidl_runtime_c__String__init(&msg->poi_id)) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
    return false;
  }
  // brand_name
  if (!rosidl_runtime_c__String__init(&msg->brand_name)) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
    return false;
  }
  // max_power
  // charge_percent
  // charge_time
  // remaining_capacity
  return true;
}

void
deva_navi_msgs__msg__ChargeStationInfoProto__fini(deva_navi_msgs__msg__ChargeStationInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // segment_idx
  // direction
  // show
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->show);
  // projective
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->projective);
  // poi_id
  rosidl_runtime_c__String__fini(&msg->poi_id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // brand_name
  rosidl_runtime_c__String__fini(&msg->brand_name);
  // max_power
  // charge_percent
  // charge_time
  // remaining_capacity
}

bool
deva_navi_msgs__msg__ChargeStationInfoProto__are_equal(const deva_navi_msgs__msg__ChargeStationInfoProto * lhs, const deva_navi_msgs__msg__ChargeStationInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // segment_idx
  if (lhs->segment_idx != rhs->segment_idx) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->show), &(rhs->show)))
  {
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->projective), &(rhs->projective)))
  {
    return false;
  }
  // poi_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->poi_id), &(rhs->poi_id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // brand_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->brand_name), &(rhs->brand_name)))
  {
    return false;
  }
  // max_power
  if (lhs->max_power != rhs->max_power) {
    return false;
  }
  // charge_percent
  if (lhs->charge_percent != rhs->charge_percent) {
    return false;
  }
  // charge_time
  if (lhs->charge_time != rhs->charge_time) {
    return false;
  }
  // remaining_capacity
  if (lhs->remaining_capacity != rhs->remaining_capacity) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__ChargeStationInfoProto__copy(
  const deva_navi_msgs__msg__ChargeStationInfoProto * input,
  deva_navi_msgs__msg__ChargeStationInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // segment_idx
  output->segment_idx = input->segment_idx;
  // direction
  output->direction = input->direction;
  // show
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->show), &(output->show)))
  {
    return false;
  }
  // projective
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->projective), &(output->projective)))
  {
    return false;
  }
  // poi_id
  if (!rosidl_runtime_c__String__copy(
      &(input->poi_id), &(output->poi_id)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // brand_name
  if (!rosidl_runtime_c__String__copy(
      &(input->brand_name), &(output->brand_name)))
  {
    return false;
  }
  // max_power
  output->max_power = input->max_power;
  // charge_percent
  output->charge_percent = input->charge_percent;
  // charge_time
  output->charge_time = input->charge_time;
  // remaining_capacity
  output->remaining_capacity = input->remaining_capacity;
  return true;
}

deva_navi_msgs__msg__ChargeStationInfoProto *
deva_navi_msgs__msg__ChargeStationInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargeStationInfoProto * msg = (deva_navi_msgs__msg__ChargeStationInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__ChargeStationInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__ChargeStationInfoProto));
  bool success = deva_navi_msgs__msg__ChargeStationInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__ChargeStationInfoProto__destroy(deva_navi_msgs__msg__ChargeStationInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__ChargeStationInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargeStationInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__ChargeStationInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__ChargeStationInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__ChargeStationInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__ChargeStationInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__ChargeStationInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array = (deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__destroy(deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * lhs, const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__ChargeStationInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * input,
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__ChargeStationInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__ChargeStationInfoProto * data =
      (deva_navi_msgs__msg__ChargeStationInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__ChargeStationInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__ChargeStationInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__ChargeStationInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
