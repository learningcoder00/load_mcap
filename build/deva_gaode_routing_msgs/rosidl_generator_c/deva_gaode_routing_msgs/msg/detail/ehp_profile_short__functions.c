// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpProfileShort__init(deva_gaode_routing_msgs__msg__EhpProfileShort * msg)
{
  if (!msg) {
    return false;
  }
  // prof_short_offset
  // prof_short_msg_type
  // prof_short_path_idx
  // prof_short_cyc_cnt
  // prof_short_update
  // prof_short_retr
  // prof_short_ctrl_point
  // prof_short_prof_type
  // prof_short_dist1
  // prof_short_accur_class
  // prof_short_value0
  // prof_short_value1
  // prof_short_relative_offset
  // prof_short_curve_road
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpProfileShort__fini(deva_gaode_routing_msgs__msg__EhpProfileShort * msg)
{
  if (!msg) {
    return;
  }
  // prof_short_offset
  // prof_short_msg_type
  // prof_short_path_idx
  // prof_short_cyc_cnt
  // prof_short_update
  // prof_short_retr
  // prof_short_ctrl_point
  // prof_short_prof_type
  // prof_short_dist1
  // prof_short_accur_class
  // prof_short_value0
  // prof_short_value1
  // prof_short_relative_offset
  // prof_short_curve_road
}

bool
deva_gaode_routing_msgs__msg__EhpProfileShort__are_equal(const deva_gaode_routing_msgs__msg__EhpProfileShort * lhs, const deva_gaode_routing_msgs__msg__EhpProfileShort * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // prof_short_offset
  if (lhs->prof_short_offset != rhs->prof_short_offset) {
    return false;
  }
  // prof_short_msg_type
  if (lhs->prof_short_msg_type != rhs->prof_short_msg_type) {
    return false;
  }
  // prof_short_path_idx
  if (lhs->prof_short_path_idx != rhs->prof_short_path_idx) {
    return false;
  }
  // prof_short_cyc_cnt
  if (lhs->prof_short_cyc_cnt != rhs->prof_short_cyc_cnt) {
    return false;
  }
  // prof_short_update
  if (lhs->prof_short_update != rhs->prof_short_update) {
    return false;
  }
  // prof_short_retr
  if (lhs->prof_short_retr != rhs->prof_short_retr) {
    return false;
  }
  // prof_short_ctrl_point
  if (lhs->prof_short_ctrl_point != rhs->prof_short_ctrl_point) {
    return false;
  }
  // prof_short_prof_type
  if (lhs->prof_short_prof_type != rhs->prof_short_prof_type) {
    return false;
  }
  // prof_short_dist1
  if (lhs->prof_short_dist1 != rhs->prof_short_dist1) {
    return false;
  }
  // prof_short_accur_class
  if (lhs->prof_short_accur_class != rhs->prof_short_accur_class) {
    return false;
  }
  // prof_short_value0
  if (lhs->prof_short_value0 != rhs->prof_short_value0) {
    return false;
  }
  // prof_short_value1
  if (lhs->prof_short_value1 != rhs->prof_short_value1) {
    return false;
  }
  // prof_short_relative_offset
  if (lhs->prof_short_relative_offset != rhs->prof_short_relative_offset) {
    return false;
  }
  // prof_short_curve_road
  if (lhs->prof_short_curve_road != rhs->prof_short_curve_road) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpProfileShort__copy(
  const deva_gaode_routing_msgs__msg__EhpProfileShort * input,
  deva_gaode_routing_msgs__msg__EhpProfileShort * output)
{
  if (!input || !output) {
    return false;
  }
  // prof_short_offset
  output->prof_short_offset = input->prof_short_offset;
  // prof_short_msg_type
  output->prof_short_msg_type = input->prof_short_msg_type;
  // prof_short_path_idx
  output->prof_short_path_idx = input->prof_short_path_idx;
  // prof_short_cyc_cnt
  output->prof_short_cyc_cnt = input->prof_short_cyc_cnt;
  // prof_short_update
  output->prof_short_update = input->prof_short_update;
  // prof_short_retr
  output->prof_short_retr = input->prof_short_retr;
  // prof_short_ctrl_point
  output->prof_short_ctrl_point = input->prof_short_ctrl_point;
  // prof_short_prof_type
  output->prof_short_prof_type = input->prof_short_prof_type;
  // prof_short_dist1
  output->prof_short_dist1 = input->prof_short_dist1;
  // prof_short_accur_class
  output->prof_short_accur_class = input->prof_short_accur_class;
  // prof_short_value0
  output->prof_short_value0 = input->prof_short_value0;
  // prof_short_value1
  output->prof_short_value1 = input->prof_short_value1;
  // prof_short_relative_offset
  output->prof_short_relative_offset = input->prof_short_relative_offset;
  // prof_short_curve_road
  output->prof_short_curve_road = input->prof_short_curve_road;
  return true;
}

deva_gaode_routing_msgs__msg__EhpProfileShort *
deva_gaode_routing_msgs__msg__EhpProfileShort__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileShort * msg = (deva_gaode_routing_msgs__msg__EhpProfileShort *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpProfileShort), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpProfileShort));
  bool success = deva_gaode_routing_msgs__msg__EhpProfileShort__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpProfileShort__destroy(deva_gaode_routing_msgs__msg__EhpProfileShort * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpProfileShort__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileShort * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpProfileShort *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpProfileShort), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpProfileShort__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpProfileShort__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__fini(deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpProfileShort__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * array = (deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpProfileShort__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpProfileShort);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpProfileShort * data =
      (deva_gaode_routing_msgs__msg__EhpProfileShort *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpProfileShort__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpProfileShort__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpProfileShort__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
