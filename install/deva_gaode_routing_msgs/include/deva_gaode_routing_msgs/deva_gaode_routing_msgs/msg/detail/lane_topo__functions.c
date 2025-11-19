// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `out_link_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// Member `lane_conds`
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__functions.h"
// Member `date`
#include "rosidl_runtime_c/string_functions.h"

bool
deva_gaode_routing_msgs__msg__LaneTopo__init(deva_gaode_routing_msgs__msg__LaneTopo * msg)
{
  if (!msg) {
    return false;
  }
  // lane_arrow
  // lane_flag
  // bus_flag
  // out_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&msg->out_link_ids, 0)) {
    deva_gaode_routing_msgs__msg__LaneTopo__fini(msg);
    return false;
  }
  // lane_conds
  if (!deva_gaode_routing_msgs__msg__LaneCond__Sequence__init(&msg->lane_conds, 0)) {
    deva_gaode_routing_msgs__msg__LaneTopo__fini(msg);
    return false;
  }
  // laneinfo_cond
  // direction
  // date
  if (!rosidl_runtime_c__String__init(&msg->date)) {
    deva_gaode_routing_msgs__msg__LaneTopo__fini(msg);
    return false;
  }
  // vehicles
  // special_times
  return true;
}

void
deva_gaode_routing_msgs__msg__LaneTopo__fini(deva_gaode_routing_msgs__msg__LaneTopo * msg)
{
  if (!msg) {
    return;
  }
  // lane_arrow
  // lane_flag
  // bus_flag
  // out_link_ids
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(&msg->out_link_ids);
  // lane_conds
  deva_gaode_routing_msgs__msg__LaneCond__Sequence__fini(&msg->lane_conds);
  // laneinfo_cond
  // direction
  // date
  rosidl_runtime_c__String__fini(&msg->date);
  // vehicles
  // special_times
}

bool
deva_gaode_routing_msgs__msg__LaneTopo__are_equal(const deva_gaode_routing_msgs__msg__LaneTopo * lhs, const deva_gaode_routing_msgs__msg__LaneTopo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lane_arrow
  if (lhs->lane_arrow != rhs->lane_arrow) {
    return false;
  }
  // lane_flag
  if (lhs->lane_flag != rhs->lane_flag) {
    return false;
  }
  // bus_flag
  if (lhs->bus_flag != rhs->bus_flag) {
    return false;
  }
  // out_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__are_equal(
      &(lhs->out_link_ids), &(rhs->out_link_ids)))
  {
    return false;
  }
  // lane_conds
  if (!deva_gaode_routing_msgs__msg__LaneCond__Sequence__are_equal(
      &(lhs->lane_conds), &(rhs->lane_conds)))
  {
    return false;
  }
  // laneinfo_cond
  if (lhs->laneinfo_cond != rhs->laneinfo_cond) {
    return false;
  }
  // direction
  if (lhs->direction != rhs->direction) {
    return false;
  }
  // date
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->date), &(rhs->date)))
  {
    return false;
  }
  // vehicles
  if (lhs->vehicles != rhs->vehicles) {
    return false;
  }
  // special_times
  if (lhs->special_times != rhs->special_times) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneTopo__copy(
  const deva_gaode_routing_msgs__msg__LaneTopo * input,
  deva_gaode_routing_msgs__msg__LaneTopo * output)
{
  if (!input || !output) {
    return false;
  }
  // lane_arrow
  output->lane_arrow = input->lane_arrow;
  // lane_flag
  output->lane_flag = input->lane_flag;
  // bus_flag
  output->bus_flag = input->bus_flag;
  // out_link_ids
  if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__copy(
      &(input->out_link_ids), &(output->out_link_ids)))
  {
    return false;
  }
  // lane_conds
  if (!deva_gaode_routing_msgs__msg__LaneCond__Sequence__copy(
      &(input->lane_conds), &(output->lane_conds)))
  {
    return false;
  }
  // laneinfo_cond
  output->laneinfo_cond = input->laneinfo_cond;
  // direction
  output->direction = input->direction;
  // date
  if (!rosidl_runtime_c__String__copy(
      &(input->date), &(output->date)))
  {
    return false;
  }
  // vehicles
  output->vehicles = input->vehicles;
  // special_times
  output->special_times = input->special_times;
  return true;
}

deva_gaode_routing_msgs__msg__LaneTopo *
deva_gaode_routing_msgs__msg__LaneTopo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTopo * msg = (deva_gaode_routing_msgs__msg__LaneTopo *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneTopo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__LaneTopo));
  bool success = deva_gaode_routing_msgs__msg__LaneTopo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__LaneTopo__destroy(deva_gaode_routing_msgs__msg__LaneTopo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__LaneTopo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__init(deva_gaode_routing_msgs__msg__LaneTopo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTopo * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__LaneTopo *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__LaneTopo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__LaneTopo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__LaneTopo__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__fini(deva_gaode_routing_msgs__msg__LaneTopo__Sequence * array)
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
      deva_gaode_routing_msgs__msg__LaneTopo__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__LaneTopo__Sequence *
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence * array = (deva_gaode_routing_msgs__msg__LaneTopo__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__LaneTopo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__LaneTopo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__destroy(deva_gaode_routing_msgs__msg__LaneTopo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__LaneTopo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__are_equal(const deva_gaode_routing_msgs__msg__LaneTopo__Sequence * lhs, const deva_gaode_routing_msgs__msg__LaneTopo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneTopo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__LaneTopo__Sequence__copy(
  const deva_gaode_routing_msgs__msg__LaneTopo__Sequence * input,
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__LaneTopo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__LaneTopo * data =
      (deva_gaode_routing_msgs__msg__LaneTopo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__LaneTopo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__LaneTopo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__LaneTopo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
