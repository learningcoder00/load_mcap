// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/poi_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `real_pos`
// Member `navi_pos`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `poi_id`
// Member `name`
// Member `floor_name`
// Member `parent_name`
// Member `parent_simple_name`
// Member `angel`
// Member `parent_id`
// Member `parent_rel`
// Member `type_code`
// Member `extend_info_flag`
// Member `src_app`
#include "rosidl_runtime_c/string_functions.h"
// Member `points`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `charge_info`
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__functions.h"

bool
deva_navi_msgs__msg__POIInfoProto__init(deva_navi_msgs__msg__POIInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // real_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->real_pos)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // navi_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__init(&msg->navi_pos)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // sigshelter
  // type
  // road_id
  // poi_id
  if (!rosidl_runtime_c__String__init(&msg->poi_id)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // floor_name
  if (!rosidl_runtime_c__String__init(&msg->floor_name)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // parent_name
  if (!rosidl_runtime_c__String__init(&msg->parent_name)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // parent_simple_name
  if (!rosidl_runtime_c__String__init(&msg->parent_simple_name)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // angel
  if (!rosidl_runtime_c__String__init(&msg->angel)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // points
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->points, 0)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // parent_id
  if (!rosidl_runtime_c__String__init(&msg->parent_id)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // parent_rel
  if (!rosidl_runtime_c__String__init(&msg->parent_rel)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // type_code
  if (!rosidl_runtime_c__String__init(&msg->type_code)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // from_jump
  // overhead
  // point_cnt
  // check_point_link_id
  // overhead_back_alt_diff
  // floor
  // extend_info_flag
  if (!rosidl_runtime_c__String__init(&msg->extend_info_flag)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // src_app
  if (!rosidl_runtime_c__String__init(&msg->src_app)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  // charge_info
  if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__init(&msg->charge_info)) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
    return false;
  }
  return true;
}

void
deva_navi_msgs__msg__POIInfoProto__fini(deva_navi_msgs__msg__POIInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // real_pos
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->real_pos);
  // navi_pos
  deva_navi_msgs__msg__Coord3DDoubleProto__fini(&msg->navi_pos);
  // sigshelter
  // type
  // road_id
  // poi_id
  rosidl_runtime_c__String__fini(&msg->poi_id);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // floor_name
  rosidl_runtime_c__String__fini(&msg->floor_name);
  // parent_name
  rosidl_runtime_c__String__fini(&msg->parent_name);
  // parent_simple_name
  rosidl_runtime_c__String__fini(&msg->parent_simple_name);
  // angel
  rosidl_runtime_c__String__fini(&msg->angel);
  // points
  rosidl_runtime_c__int32__Sequence__fini(&msg->points);
  // parent_id
  rosidl_runtime_c__String__fini(&msg->parent_id);
  // parent_rel
  rosidl_runtime_c__String__fini(&msg->parent_rel);
  // type_code
  rosidl_runtime_c__String__fini(&msg->type_code);
  // from_jump
  // overhead
  // point_cnt
  // check_point_link_id
  // overhead_back_alt_diff
  // floor
  // extend_info_flag
  rosidl_runtime_c__String__fini(&msg->extend_info_flag);
  // src_app
  rosidl_runtime_c__String__fini(&msg->src_app);
  // charge_info
  deva_navi_msgs__msg__ChargingArgumentsInfoProto__fini(&msg->charge_info);
}

bool
deva_navi_msgs__msg__POIInfoProto__are_equal(const deva_navi_msgs__msg__POIInfoProto * lhs, const deva_navi_msgs__msg__POIInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // real_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->real_pos), &(rhs->real_pos)))
  {
    return false;
  }
  // navi_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__are_equal(
      &(lhs->navi_pos), &(rhs->navi_pos)))
  {
    return false;
  }
  // sigshelter
  if (lhs->sigshelter != rhs->sigshelter) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // road_id
  if (lhs->road_id != rhs->road_id) {
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
  // floor_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->floor_name), &(rhs->floor_name)))
  {
    return false;
  }
  // parent_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_name), &(rhs->parent_name)))
  {
    return false;
  }
  // parent_simple_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_simple_name), &(rhs->parent_simple_name)))
  {
    return false;
  }
  // angel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->angel), &(rhs->angel)))
  {
    return false;
  }
  // points
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // parent_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_id), &(rhs->parent_id)))
  {
    return false;
  }
  // parent_rel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->parent_rel), &(rhs->parent_rel)))
  {
    return false;
  }
  // type_code
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_code), &(rhs->type_code)))
  {
    return false;
  }
  // from_jump
  if (lhs->from_jump != rhs->from_jump) {
    return false;
  }
  // overhead
  if (lhs->overhead != rhs->overhead) {
    return false;
  }
  // point_cnt
  if (lhs->point_cnt != rhs->point_cnt) {
    return false;
  }
  // check_point_link_id
  if (lhs->check_point_link_id != rhs->check_point_link_id) {
    return false;
  }
  // overhead_back_alt_diff
  if (lhs->overhead_back_alt_diff != rhs->overhead_back_alt_diff) {
    return false;
  }
  // floor
  if (lhs->floor != rhs->floor) {
    return false;
  }
  // extend_info_flag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->extend_info_flag), &(rhs->extend_info_flag)))
  {
    return false;
  }
  // src_app
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->src_app), &(rhs->src_app)))
  {
    return false;
  }
  // charge_info
  if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__are_equal(
      &(lhs->charge_info), &(rhs->charge_info)))
  {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__POIInfoProto__copy(
  const deva_navi_msgs__msg__POIInfoProto * input,
  deva_navi_msgs__msg__POIInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // real_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->real_pos), &(output->real_pos)))
  {
    return false;
  }
  // navi_pos
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__copy(
      &(input->navi_pos), &(output->navi_pos)))
  {
    return false;
  }
  // sigshelter
  output->sigshelter = input->sigshelter;
  // type
  output->type = input->type;
  // road_id
  output->road_id = input->road_id;
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
  // floor_name
  if (!rosidl_runtime_c__String__copy(
      &(input->floor_name), &(output->floor_name)))
  {
    return false;
  }
  // parent_name
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_name), &(output->parent_name)))
  {
    return false;
  }
  // parent_simple_name
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_simple_name), &(output->parent_simple_name)))
  {
    return false;
  }
  // angel
  if (!rosidl_runtime_c__String__copy(
      &(input->angel), &(output->angel)))
  {
    return false;
  }
  // points
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // parent_id
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_id), &(output->parent_id)))
  {
    return false;
  }
  // parent_rel
  if (!rosidl_runtime_c__String__copy(
      &(input->parent_rel), &(output->parent_rel)))
  {
    return false;
  }
  // type_code
  if (!rosidl_runtime_c__String__copy(
      &(input->type_code), &(output->type_code)))
  {
    return false;
  }
  // from_jump
  output->from_jump = input->from_jump;
  // overhead
  output->overhead = input->overhead;
  // point_cnt
  output->point_cnt = input->point_cnt;
  // check_point_link_id
  output->check_point_link_id = input->check_point_link_id;
  // overhead_back_alt_diff
  output->overhead_back_alt_diff = input->overhead_back_alt_diff;
  // floor
  output->floor = input->floor;
  // extend_info_flag
  if (!rosidl_runtime_c__String__copy(
      &(input->extend_info_flag), &(output->extend_info_flag)))
  {
    return false;
  }
  // src_app
  if (!rosidl_runtime_c__String__copy(
      &(input->src_app), &(output->src_app)))
  {
    return false;
  }
  // charge_info
  if (!deva_navi_msgs__msg__ChargingArgumentsInfoProto__copy(
      &(input->charge_info), &(output->charge_info)))
  {
    return false;
  }
  return true;
}

deva_navi_msgs__msg__POIInfoProto *
deva_navi_msgs__msg__POIInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__POIInfoProto * msg = (deva_navi_msgs__msg__POIInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__POIInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__POIInfoProto));
  bool success = deva_navi_msgs__msg__POIInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__POIInfoProto__destroy(deva_navi_msgs__msg__POIInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__POIInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__POIInfoProto__Sequence__init(deva_navi_msgs__msg__POIInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__POIInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__POIInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__POIInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__POIInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__POIInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__POIInfoProto__Sequence__fini(deva_navi_msgs__msg__POIInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__POIInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__POIInfoProto__Sequence *
deva_navi_msgs__msg__POIInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__POIInfoProto__Sequence * array = (deva_navi_msgs__msg__POIInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__POIInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__POIInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__POIInfoProto__Sequence__destroy(deva_navi_msgs__msg__POIInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__POIInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__POIInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__POIInfoProto__Sequence * lhs, const deva_navi_msgs__msg__POIInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__POIInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__POIInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__POIInfoProto__Sequence * input,
  deva_navi_msgs__msg__POIInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__POIInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__POIInfoProto * data =
      (deva_navi_msgs__msg__POIInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__POIInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__POIInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__POIInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
