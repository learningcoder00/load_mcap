// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
deva_gaode_routing_msgs__msg__EhpSegment__init(deva_gaode_routing_msgs__msg__EhpSegment * msg)
{
  if (!msg) {
    return false;
  }
  // seg_offset
  // seg_msg_type
  // seg_path_idx
  // seg_cyc_cnt
  // seg_update
  // seg_retr
  // seg_build_up_area
  // seg_bridge
  // seg_tunnel
  // seg_func_road_class
  // seg_rel_probb
  // seg_form_of_way
  // seg_cmplx_insct
  // seg_part_of_calc_route
  // seg_eff_spd_lmt_type
  // seg_eff_spd_lmt
  // seg_num_of_lane_drv_dir
  // seg_num_of_lane_opp_dir
  // seg_divide_road
  // seg_relative_offset
  return true;
}

void
deva_gaode_routing_msgs__msg__EhpSegment__fini(deva_gaode_routing_msgs__msg__EhpSegment * msg)
{
  if (!msg) {
    return;
  }
  // seg_offset
  // seg_msg_type
  // seg_path_idx
  // seg_cyc_cnt
  // seg_update
  // seg_retr
  // seg_build_up_area
  // seg_bridge
  // seg_tunnel
  // seg_func_road_class
  // seg_rel_probb
  // seg_form_of_way
  // seg_cmplx_insct
  // seg_part_of_calc_route
  // seg_eff_spd_lmt_type
  // seg_eff_spd_lmt
  // seg_num_of_lane_drv_dir
  // seg_num_of_lane_opp_dir
  // seg_divide_road
  // seg_relative_offset
}

bool
deva_gaode_routing_msgs__msg__EhpSegment__are_equal(const deva_gaode_routing_msgs__msg__EhpSegment * lhs, const deva_gaode_routing_msgs__msg__EhpSegment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // seg_offset
  if (lhs->seg_offset != rhs->seg_offset) {
    return false;
  }
  // seg_msg_type
  if (lhs->seg_msg_type != rhs->seg_msg_type) {
    return false;
  }
  // seg_path_idx
  if (lhs->seg_path_idx != rhs->seg_path_idx) {
    return false;
  }
  // seg_cyc_cnt
  if (lhs->seg_cyc_cnt != rhs->seg_cyc_cnt) {
    return false;
  }
  // seg_update
  if (lhs->seg_update != rhs->seg_update) {
    return false;
  }
  // seg_retr
  if (lhs->seg_retr != rhs->seg_retr) {
    return false;
  }
  // seg_build_up_area
  if (lhs->seg_build_up_area != rhs->seg_build_up_area) {
    return false;
  }
  // seg_bridge
  if (lhs->seg_bridge != rhs->seg_bridge) {
    return false;
  }
  // seg_tunnel
  if (lhs->seg_tunnel != rhs->seg_tunnel) {
    return false;
  }
  // seg_func_road_class
  if (lhs->seg_func_road_class != rhs->seg_func_road_class) {
    return false;
  }
  // seg_rel_probb
  if (lhs->seg_rel_probb != rhs->seg_rel_probb) {
    return false;
  }
  // seg_form_of_way
  if (lhs->seg_form_of_way != rhs->seg_form_of_way) {
    return false;
  }
  // seg_cmplx_insct
  if (lhs->seg_cmplx_insct != rhs->seg_cmplx_insct) {
    return false;
  }
  // seg_part_of_calc_route
  if (lhs->seg_part_of_calc_route != rhs->seg_part_of_calc_route) {
    return false;
  }
  // seg_eff_spd_lmt_type
  if (lhs->seg_eff_spd_lmt_type != rhs->seg_eff_spd_lmt_type) {
    return false;
  }
  // seg_eff_spd_lmt
  if (lhs->seg_eff_spd_lmt != rhs->seg_eff_spd_lmt) {
    return false;
  }
  // seg_num_of_lane_drv_dir
  if (lhs->seg_num_of_lane_drv_dir != rhs->seg_num_of_lane_drv_dir) {
    return false;
  }
  // seg_num_of_lane_opp_dir
  if (lhs->seg_num_of_lane_opp_dir != rhs->seg_num_of_lane_opp_dir) {
    return false;
  }
  // seg_divide_road
  if (lhs->seg_divide_road != rhs->seg_divide_road) {
    return false;
  }
  // seg_relative_offset
  if (lhs->seg_relative_offset != rhs->seg_relative_offset) {
    return false;
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpSegment__copy(
  const deva_gaode_routing_msgs__msg__EhpSegment * input,
  deva_gaode_routing_msgs__msg__EhpSegment * output)
{
  if (!input || !output) {
    return false;
  }
  // seg_offset
  output->seg_offset = input->seg_offset;
  // seg_msg_type
  output->seg_msg_type = input->seg_msg_type;
  // seg_path_idx
  output->seg_path_idx = input->seg_path_idx;
  // seg_cyc_cnt
  output->seg_cyc_cnt = input->seg_cyc_cnt;
  // seg_update
  output->seg_update = input->seg_update;
  // seg_retr
  output->seg_retr = input->seg_retr;
  // seg_build_up_area
  output->seg_build_up_area = input->seg_build_up_area;
  // seg_bridge
  output->seg_bridge = input->seg_bridge;
  // seg_tunnel
  output->seg_tunnel = input->seg_tunnel;
  // seg_func_road_class
  output->seg_func_road_class = input->seg_func_road_class;
  // seg_rel_probb
  output->seg_rel_probb = input->seg_rel_probb;
  // seg_form_of_way
  output->seg_form_of_way = input->seg_form_of_way;
  // seg_cmplx_insct
  output->seg_cmplx_insct = input->seg_cmplx_insct;
  // seg_part_of_calc_route
  output->seg_part_of_calc_route = input->seg_part_of_calc_route;
  // seg_eff_spd_lmt_type
  output->seg_eff_spd_lmt_type = input->seg_eff_spd_lmt_type;
  // seg_eff_spd_lmt
  output->seg_eff_spd_lmt = input->seg_eff_spd_lmt;
  // seg_num_of_lane_drv_dir
  output->seg_num_of_lane_drv_dir = input->seg_num_of_lane_drv_dir;
  // seg_num_of_lane_opp_dir
  output->seg_num_of_lane_opp_dir = input->seg_num_of_lane_opp_dir;
  // seg_divide_road
  output->seg_divide_road = input->seg_divide_road;
  // seg_relative_offset
  output->seg_relative_offset = input->seg_relative_offset;
  return true;
}

deva_gaode_routing_msgs__msg__EhpSegment *
deva_gaode_routing_msgs__msg__EhpSegment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpSegment * msg = (deva_gaode_routing_msgs__msg__EhpSegment *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpSegment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_gaode_routing_msgs__msg__EhpSegment));
  bool success = deva_gaode_routing_msgs__msg__EhpSegment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_gaode_routing_msgs__msg__EhpSegment__destroy(deva_gaode_routing_msgs__msg__EhpSegment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_gaode_routing_msgs__msg__EhpSegment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(deva_gaode_routing_msgs__msg__EhpSegment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpSegment * data = NULL;

  if (size) {
    data = (deva_gaode_routing_msgs__msg__EhpSegment *)allocator.zero_allocate(size, sizeof(deva_gaode_routing_msgs__msg__EhpSegment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_gaode_routing_msgs__msg__EhpSegment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_gaode_routing_msgs__msg__EhpSegment__fini(&data[i - 1]);
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
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__fini(deva_gaode_routing_msgs__msg__EhpSegment__Sequence * array)
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
      deva_gaode_routing_msgs__msg__EhpSegment__fini(&array->data[i]);
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

deva_gaode_routing_msgs__msg__EhpSegment__Sequence *
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence * array = (deva_gaode_routing_msgs__msg__EhpSegment__Sequence *)allocator.allocate(sizeof(deva_gaode_routing_msgs__msg__EhpSegment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__destroy(deva_gaode_routing_msgs__msg__EhpSegment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_gaode_routing_msgs__msg__EhpSegment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__are_equal(const deva_gaode_routing_msgs__msg__EhpSegment__Sequence * lhs, const deva_gaode_routing_msgs__msg__EhpSegment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpSegment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_gaode_routing_msgs__msg__EhpSegment__Sequence__copy(
  const deva_gaode_routing_msgs__msg__EhpSegment__Sequence * input,
  deva_gaode_routing_msgs__msg__EhpSegment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_gaode_routing_msgs__msg__EhpSegment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_gaode_routing_msgs__msg__EhpSegment * data =
      (deva_gaode_routing_msgs__msg__EhpSegment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_gaode_routing_msgs__msg__EhpSegment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_gaode_routing_msgs__msg__EhpSegment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_gaode_routing_msgs__msg__EhpSegment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
