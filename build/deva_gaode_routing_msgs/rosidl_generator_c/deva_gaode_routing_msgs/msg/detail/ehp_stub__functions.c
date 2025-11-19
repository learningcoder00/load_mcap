// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpStub__init(deva_gaode_routing_msgs__msg__EhpStub * msg)
{
  if (!msg) {
    return false;
  }
  // stub_offset
  // stub_msg_type
  // stub_path_idx
  // stub_cyc_cnt
  // stub_update
  // stub_retr
  // stub_stub_path_idx
  // stub_func_road_class
  // stub_rel_probb
  // stub_form_of_way
  // stub_cmplx_insct
  // stub_part_of_calc_route
  // stub_turn_angl
  // stub_num_of_lane_drv_dir
  // stub_num_of_lane_opp_dir
  // stub_rt_of_way
  // stub_last_stub
  // stub_relative_offset
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpStub__fini(deva_gaode_routing_msgs__msg__EhpStub * msg)
{
  if (!msg) {
    return;
  }
  // stub_offset
  // stub_msg_type
  // stub_path_idx
  // stub_cyc_cnt
  // stub_update
  // stub_retr
  // stub_stub_path_idx
  // stub_func_road_class
  // stub_rel_probb
  // stub_form_of_way
  // stub_cmplx_insct
  // stub_part_of_calc_route
  // stub_turn_angl
  // stub_num_of_lane_drv_dir
  // stub_num_of_lane_opp_dir
  // stub_rt_of_way
  // stub_last_stub
  // stub_relative_offset
}

bool
deva_gaode_routing_msgs__msg__EhpStub__are_equal(const deva_gaode_routing_msgs__msg__EhpStub * lhs, const deva_gaode_routing_msgs__msg__EhpStub * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stub_offset
  if (lhs->stub_offset != rhs->stub_offset) {
    return false;
  }
  // stub_msg_type
  if (lhs->stub_msg_type != rhs->stub_msg_type) {
    return false;
  }
  // stub_path_idx
  if (lhs->stub_path_idx != rhs->stub_path_idx) {
    return false;
  }
  // stub_cyc_cnt
  if (lhs->stub_cyc_cnt != rhs->stub_cyc_cnt) {
    return false;
  }
  // stub_update
  if (lhs->stub_update != rhs->stub_update) {
    return false;
  }
  // stub_retr
  if (lhs->stub_retr != rhs->stub_retr) {
    return false;
  }
  // stub_stub_path_idx
  if (lhs->stub_stub_path_idx != rhs->stub_stub_path_idx) {
    return false;
  }
  // stub_func_road_class
  if (lhs->stub_func_road_class != rhs->stub_func_road_class) {
    return false;
  }
  // stub_rel_probb
  if (lhs->stub_rel_probb != rhs->stub_rel_probb) {
    return false;
  }
  // stub_form_of_way
  if (lhs->stub_form_of_way != rhs->stub_form_of_way) {
    return false;
  }
  // stub_cmplx_insct
  if (lhs->stub_cmplx_insct != rhs->stub_cmplx_insct) {
    return false;
  }
  // stub_part_of_calc_route
  if (lhs->stub_part_of_calc_route != rhs->stub_part_of_calc_route) {
    return false;
  }
  // stub_turn_angl
  if (lhs->stub_turn_angl != rhs->stub_turn_angl) {
    return false;
  }
  // stub_num_of_lane_drv_dir
  if (lhs->stub_num_of_lane_drv_dir != rhs->stub_num_of_lane_drv_dir) {
    return false;
  }
  // stub_num_of_lane_opp_dir
  if (lhs->stub_num_of_lane_opp_dir != rhs->stub_num_of_lane_opp_dir) {
    return false;
  }
  // stub_rt_of_way
  if (lhs->stub_rt_of_way != rhs->stub_rt_of_way) {
    return false;
  }
  // stub_last_stub
  if (lhs->stub_last_stub != rhs->stub_last_stub) {
    return false;
  }
  // stub_relative_offset
  if (lhs->stub_relative_offset != rhs->stub_relative_offset) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpStub__copy(
  const deva_gaode_routing_msgs__msg__EhpStub * input,
  deva_gaode_routing_msgs__msg__EhpStub * output)
{
  if (!input || !output) {
    return false;
  }
  // stub_offset
  output->stub_offset = input->stub_offset;
  // stub_msg_type
  output->stub_msg_type = input->stub_msg_type;
  // stub_path_idx
  output->stub_path_idx = input->stub_path_idx;
  // stub_cyc_cnt
  output->stub_cyc_cnt = input->stub_cyc_cnt;
  // stub_update
  output->stub_update = input->stub_update;
  // stub_retr
  output->stub_retr = input->stub_retr;
  // stub_stub_path_idx
  output->stub_stub_path_idx = input->stub_stub_path_idx;
  // stub_func_road_class
  output->stub_func_road_class = input->stub_func_road_class;
  // stub_rel_probb
  output->stub_rel_probb = input->stub_rel_probb;
  // stub_form_of_way
  output->stub_form_of_way = input->stub_form_of_way;
  // stub_cmplx_insct
  output->stub_cmplx_insct = input->stub_cmplx_insct;
  // stub_part_of_calc_route
  output->stub_part_of_calc_route = input->stub_part_of_calc_route;
  // stub_turn_angl
  output->stub_turn_angl = input->stub_turn_angl;
  // stub_num_of_lane_drv_dir
  output->stub_num_of_lane_drv_dir = input->stub_num_of_lane_drv_dir;
  // stub_num_of_lane_opp_dir
  output->stub_num_of_lane_opp_dir = input->stub_num_of_lane_opp_dir;
  // stub_rt_of_way
  output->stub_rt_of_way = input->stub_rt_of_way;
  // stub_last_stub
  output->stub_last_stub = input->stub_last_stub;
  // stub_relative_offset
  output->stub_relative_offset = input->stub_relative_offset;
  return true;
}

deva_gaode_routing_msgs__msg__EhpStub *
deva_gaode_routing_msgs__msg__EhpStub__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpStub * msg = (deva_gaode_routing_msgs__msg__EhpStub *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpStub), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpStub));
  bool success = deva_gaode_routing_msgs__msg__EhpStub__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpStub__destroy(deva_gaode_routing_msgs__msg__EhpStub * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpStub__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(deva_gaode_routing_msgs__msg__EhpStub__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpStub * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpStub *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpStub), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpStub__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpStub__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpStub__Sequence__fini(deva_gaode_routing_msgs__msg__EhpStub__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpStub__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpStub__Sequence *
deva_gaode_routing_msgs__msg__EhpStub__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpStub__Sequence * array = (deva_gaode_routing_msgs__msg__EhpStub__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpStub__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpStub__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpStub__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpStub__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpStub__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpStub__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpStub__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpStub__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpStub__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpStub__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpStub__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpStub);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpStub * data =
      (deva_gaode_routing_msgs__msg__EhpStub *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpStub__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpStub__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpStub__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
