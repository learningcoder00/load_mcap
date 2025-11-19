// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpPosition__init(deva_gaode_routing_msgs__msg__EhpPosition * msg)
{
  if (!msg) {
    return false;
  }
  // posn_offset
  // posn_msg_type
  // posn_path_idx
  // posn_cyc_cnt
  // posn_age
  // posn_pos_probb
  // posn_idx
  // posn_spd
  // posn_cur_lane
  // posn_pos_confdc
  // posn_rehead
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpPosition__fini(deva_gaode_routing_msgs__msg__EhpPosition * msg)
{
  if (!msg) {
    return;
  }
  // posn_offset
  // posn_msg_type
  // posn_path_idx
  // posn_cyc_cnt
  // posn_age
  // posn_pos_probb
  // posn_idx
  // posn_spd
  // posn_cur_lane
  // posn_pos_confdc
  // posn_rehead
}

bool
deva_gaode_routing_msgs__msg__EhpPosition__are_equal(const deva_gaode_routing_msgs__msg__EhpPosition * lhs, const deva_gaode_routing_msgs__msg__EhpPosition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // posn_offset
  if (lhs->posn_offset != rhs->posn_offset) {
    return false;
  }
  // posn_msg_type
  if (lhs->posn_msg_type != rhs->posn_msg_type) {
    return false;
  }
  // posn_path_idx
  if (lhs->posn_path_idx != rhs->posn_path_idx) {
    return false;
  }
  // posn_cyc_cnt
  if (lhs->posn_cyc_cnt != rhs->posn_cyc_cnt) {
    return false;
  }
  // posn_age
  if (lhs->posn_age != rhs->posn_age) {
    return false;
  }
  // posn_pos_probb
  if (lhs->posn_pos_probb != rhs->posn_pos_probb) {
    return false;
  }
  // posn_idx
  if (lhs->posn_idx != rhs->posn_idx) {
    return false;
  }
  // posn_spd
  if (lhs->posn_spd != rhs->posn_spd) {
    return false;
  }
  // posn_cur_lane
  if (lhs->posn_cur_lane != rhs->posn_cur_lane) {
    return false;
  }
  // posn_pos_confdc
  if (lhs->posn_pos_confdc != rhs->posn_pos_confdc) {
    return false;
  }
  // posn_rehead
  if (lhs->posn_rehead != rhs->posn_rehead) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpPosition__copy(
  const deva_gaode_routing_msgs__msg__EhpPosition * input,
  deva_gaode_routing_msgs__msg__EhpPosition * output)
{
  if (!input || !output) {
    return false;
  }
  // posn_offset
  output->posn_offset = input->posn_offset;
  // posn_msg_type
  output->posn_msg_type = input->posn_msg_type;
  // posn_path_idx
  output->posn_path_idx = input->posn_path_idx;
  // posn_cyc_cnt
  output->posn_cyc_cnt = input->posn_cyc_cnt;
  // posn_age
  output->posn_age = input->posn_age;
  // posn_pos_probb
  output->posn_pos_probb = input->posn_pos_probb;
  // posn_idx
  output->posn_idx = input->posn_idx;
  // posn_spd
  output->posn_spd = input->posn_spd;
  // posn_cur_lane
  output->posn_cur_lane = input->posn_cur_lane;
  // posn_pos_confdc
  output->posn_pos_confdc = input->posn_pos_confdc;
  // posn_rehead
  output->posn_rehead = input->posn_rehead;
  return true;
}

deva_gaode_routing_msgs__msg__EhpPosition *
deva_gaode_routing_msgs__msg__EhpPosition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpPosition * msg = (deva_gaode_routing_msgs__msg__EhpPosition *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpPosition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpPosition));
  bool success = deva_gaode_routing_msgs__msg__EhpPosition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpPosition__destroy(deva_gaode_routing_msgs__msg__EhpPosition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpPosition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__init(deva_gaode_routing_msgs__msg__EhpPosition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpPosition * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpPosition *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpPosition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpPosition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpPosition__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__fini(deva_gaode_routing_msgs__msg__EhpPosition__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpPosition__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpPosition__Sequence *
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpPosition__Sequence * array = (deva_gaode_routing_msgs__msg__EhpPosition__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpPosition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpPosition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpPosition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpPosition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpPosition__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpPosition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpPosition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpPosition__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpPosition__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpPosition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpPosition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpPosition * data =
      (deva_gaode_routing_msgs__msg__EhpPosition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpPosition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpPosition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpPosition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
