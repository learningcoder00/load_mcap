// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link_infos`
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"
// Member `points`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `toll_road_name`
// Member `guideboard_name`
// Member `exit_name`
// Member `crossing_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `maneuver_icons`
#include "deva_navi_msgs/msg/detail/icon_road_proto__functions.h"

bool
deva_navi_msgs__msg__SegmentInfoProto__init(deva_navi_msgs__msg__SegmentInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // link_infos
  if (!deva_navi_msgs__msg__LinkInfoProto__Sequence__init(&msg->link_infos, 0)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&msg->points, 0)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // is_valid
  // related_path_id
  // segment_index
  // main_action
  // assistant_action
  // slope
  // length
  // toll_cost
  // toll_dist
  // travel_time
  // traffic_light_num
  // is_end_of_road
  // toll_road_name
  if (!rosidl_runtime_c__String__init(&msg->toll_road_name)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // guideboard_name
  if (!rosidl_runtime_c__String__init(&msg->guideboard_name)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // exit_name
  if (!rosidl_runtime_c__String__init(&msg->exit_name)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // crossing_name
  if (!rosidl_runtime_c__String__init(&msg->crossing_name)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // maneuver_icons
  if (!deva_navi_msgs__msg__IconRoadProto__Sequence__init(&msg->maneuver_icons, 0)) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
    return false;
  }
  // uturn_and_arrivedest
  return true;
}

void
deva_navi_msgs__msg__SegmentInfoProto__fini(deva_navi_msgs__msg__SegmentInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // link_infos
  deva_navi_msgs__msg__LinkInfoProto__Sequence__fini(&msg->link_infos);
  // points
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(&msg->points);
  // is_valid
  // related_path_id
  // segment_index
  // main_action
  // assistant_action
  // slope
  // length
  // toll_cost
  // toll_dist
  // travel_time
  // traffic_light_num
  // is_end_of_road
  // toll_road_name
  rosidl_runtime_c__String__fini(&msg->toll_road_name);
  // guideboard_name
  rosidl_runtime_c__String__fini(&msg->guideboard_name);
  // exit_name
  rosidl_runtime_c__String__fini(&msg->exit_name);
  // crossing_name
  rosidl_runtime_c__String__fini(&msg->crossing_name);
  // maneuver_icons
  deva_navi_msgs__msg__IconRoadProto__Sequence__fini(&msg->maneuver_icons);
  // uturn_and_arrivedest
}

bool
deva_navi_msgs__msg__SegmentInfoProto__are_equal(const deva_navi_msgs__msg__SegmentInfoProto * lhs, const deva_navi_msgs__msg__SegmentInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link_infos
  if (!deva_navi_msgs__msg__LinkInfoProto__Sequence__are_equal(
      &(lhs->link_infos), &(rhs->link_infos)))
  {
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // related_path_id
  if (lhs->related_path_id != rhs->related_path_id) {
    return false;
  }
  // segment_index
  if (lhs->segment_index != rhs->segment_index) {
    return false;
  }
  // main_action
  if (lhs->main_action != rhs->main_action) {
    return false;
  }
  // assistant_action
  if (lhs->assistant_action != rhs->assistant_action) {
    return false;
  }
  // slope
  if (lhs->slope != rhs->slope) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // toll_cost
  if (lhs->toll_cost != rhs->toll_cost) {
    return false;
  }
  // toll_dist
  if (lhs->toll_dist != rhs->toll_dist) {
    return false;
  }
  // travel_time
  if (lhs->travel_time != rhs->travel_time) {
    return false;
  }
  // traffic_light_num
  if (lhs->traffic_light_num != rhs->traffic_light_num) {
    return false;
  }
  // is_end_of_road
  if (lhs->is_end_of_road != rhs->is_end_of_road) {
    return false;
  }
  // toll_road_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->toll_road_name), &(rhs->toll_road_name)))
  {
    return false;
  }
  // guideboard_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->guideboard_name), &(rhs->guideboard_name)))
  {
    return false;
  }
  // exit_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->exit_name), &(rhs->exit_name)))
  {
    return false;
  }
  // crossing_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->crossing_name), &(rhs->crossing_name)))
  {
    return false;
  }
  // maneuver_icons
  if (!deva_navi_msgs__msg__IconRoadProto__Sequence__are_equal(
      &(lhs->maneuver_icons), &(rhs->maneuver_icons)))
  {
    return false;
  }
  // uturn_and_arrivedest
  if (lhs->uturn_and_arrivedest != rhs->uturn_and_arrivedest) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__SegmentInfoProto__copy(
  const deva_navi_msgs__msg__SegmentInfoProto * input,
  deva_navi_msgs__msg__SegmentInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // link_infos
  if (!deva_navi_msgs__msg__LinkInfoProto__Sequence__copy(
      &(input->link_infos), &(output->link_infos)))
  {
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // related_path_id
  output->related_path_id = input->related_path_id;
  // segment_index
  output->segment_index = input->segment_index;
  // main_action
  output->main_action = input->main_action;
  // assistant_action
  output->assistant_action = input->assistant_action;
  // slope
  output->slope = input->slope;
  // length
  output->length = input->length;
  // toll_cost
  output->toll_cost = input->toll_cost;
  // toll_dist
  output->toll_dist = input->toll_dist;
  // travel_time
  output->travel_time = input->travel_time;
  // traffic_light_num
  output->traffic_light_num = input->traffic_light_num;
  // is_end_of_road
  output->is_end_of_road = input->is_end_of_road;
  // toll_road_name
  if (!rosidl_runtime_c__String__copy(
      &(input->toll_road_name), &(output->toll_road_name)))
  {
    return false;
  }
  // guideboard_name
  if (!rosidl_runtime_c__String__copy(
      &(input->guideboard_name), &(output->guideboard_name)))
  {
    return false;
  }
  // exit_name
  if (!rosidl_runtime_c__String__copy(
      &(input->exit_name), &(output->exit_name)))
  {
    return false;
  }
  // crossing_name
  if (!rosidl_runtime_c__String__copy(
      &(input->crossing_name), &(output->crossing_name)))
  {
    return false;
  }
  // maneuver_icons
  if (!deva_navi_msgs__msg__IconRoadProto__Sequence__copy(
      &(input->maneuver_icons), &(output->maneuver_icons)))
  {
    return false;
  }
  // uturn_and_arrivedest
  output->uturn_and_arrivedest = input->uturn_and_arrivedest;
  return true;
}

deva_navi_msgs__msg__SegmentInfoProto *
deva_navi_msgs__msg__SegmentInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__SegmentInfoProto * msg = (deva_navi_msgs__msg__SegmentInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__SegmentInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__SegmentInfoProto));
  bool success = deva_navi_msgs__msg__SegmentInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__SegmentInfoProto__destroy(deva_navi_msgs__msg__SegmentInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__SegmentInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(deva_navi_msgs__msg__SegmentInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__SegmentInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__SegmentInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__SegmentInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__SegmentInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__SegmentInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__SegmentInfoProto__Sequence__fini(deva_navi_msgs__msg__SegmentInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__SegmentInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__SegmentInfoProto__Sequence *
deva_navi_msgs__msg__SegmentInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__SegmentInfoProto__Sequence * array = (deva_navi_msgs__msg__SegmentInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__SegmentInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__SegmentInfoProto__Sequence__destroy(deva_navi_msgs__msg__SegmentInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__SegmentInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__SegmentInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__SegmentInfoProto__Sequence * lhs, const deva_navi_msgs__msg__SegmentInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__SegmentInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__SegmentInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__SegmentInfoProto__Sequence * input,
  deva_navi_msgs__msg__SegmentInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__SegmentInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__SegmentInfoProto * data =
      (deva_navi_msgs__msg__SegmentInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__SegmentInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__SegmentInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__SegmentInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
