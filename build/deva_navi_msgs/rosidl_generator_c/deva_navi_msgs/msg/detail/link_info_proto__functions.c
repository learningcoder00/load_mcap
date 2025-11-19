// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `gantry_infos`
#include "deva_navi_msgs/msg/detail/gantry_info_proto__functions.h"
// Member `cameras`
#include "deva_navi_msgs/msg/detail/navi_camera_proto__functions.h"
// Member `road_name`
// Member `service_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `road_facilities`
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"
// Member `turn_infos`
#include "deva_navi_msgs/msg/detail/turn_info_proto__functions.h"

bool
deva_navi_msgs__msg__LinkInfoProto__init(deva_navi_msgs__msg__LinkInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&msg->points, 0)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // gantry_infos
  if (!deva_navi_msgs__msg__GantryInfoProto__Sequence__init(&msg->gantry_infos, 0)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // cameras
  if (!deva_navi_msgs__msg__NaviCameraProto__Sequence__init(&msg->cameras, 0)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // is_valid
  // related_path_id
  // related_segment_index
  // link_index
  // length
  // travel_time
  // static_travel_time
  // road_name
  if (!rosidl_runtime_c__String__init(&msg->road_name)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // road_facilities
  if (!deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(&msg->road_facilities, 0)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // topo_id_64
  // urid
  // link_direction
  // main_action
  // assistant_action
  // adcode
  // link_type
  // formway
  // road_class
  // road_direction
  // ownership
  // is_toll
  // is_over_head
  // has_parallel_road
  // has_multi_out
  // has_traffic_light
  // has_mix_fork
  // is_at_service
  // is_restricting
  // limit_flag
  // speed
  // turn_infos
  if (!deva_navi_msgs__msg__TurnInfoProto__Sequence__init(&msg->turn_infos, 0)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
    return false;
  }
  // inner_road
  // is_parking_road
  // traffic_status
  return true;
}

void
deva_navi_msgs__msg__LinkInfoProto__fini(deva_navi_msgs__msg__LinkInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // points
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(&msg->points);
  // gantry_infos
  deva_navi_msgs__msg__GantryInfoProto__Sequence__fini(&msg->gantry_infos);
  // cameras
  deva_navi_msgs__msg__NaviCameraProto__Sequence__fini(&msg->cameras);
  // is_valid
  // related_path_id
  // related_segment_index
  // link_index
  // length
  // travel_time
  // static_travel_time
  // road_name
  rosidl_runtime_c__String__fini(&msg->road_name);
  // road_facilities
  deva_navi_msgs__msg__RoadFacilityProto__Sequence__fini(&msg->road_facilities);
  // topo_id_64
  // urid
  // link_direction
  // main_action
  // assistant_action
  // adcode
  // link_type
  // formway
  // road_class
  // road_direction
  // ownership
  // is_toll
  // is_over_head
  // has_parallel_road
  // has_multi_out
  // has_traffic_light
  // has_mix_fork
  // is_at_service
  // is_restricting
  // limit_flag
  // speed
  // turn_infos
  deva_navi_msgs__msg__TurnInfoProto__Sequence__fini(&msg->turn_infos);
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // inner_road
  // is_parking_road
  // traffic_status
}

bool
deva_navi_msgs__msg__LinkInfoProto__are_equal(const deva_navi_msgs__msg__LinkInfoProto * lhs, const deva_navi_msgs__msg__LinkInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // gantry_infos
  if (!deva_navi_msgs__msg__GantryInfoProto__Sequence__are_equal(
      &(lhs->gantry_infos), &(rhs->gantry_infos)))
  {
    return false;
  }
  // cameras
  if (!deva_navi_msgs__msg__NaviCameraProto__Sequence__are_equal(
      &(lhs->cameras), &(rhs->cameras)))
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
  // related_segment_index
  if (lhs->related_segment_index != rhs->related_segment_index) {
    return false;
  }
  // link_index
  if (lhs->link_index != rhs->link_index) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // travel_time
  if (lhs->travel_time != rhs->travel_time) {
    return false;
  }
  // static_travel_time
  if (lhs->static_travel_time != rhs->static_travel_time) {
    return false;
  }
  // road_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->road_name), &(rhs->road_name)))
  {
    return false;
  }
  // road_facilities
  if (!deva_navi_msgs__msg__RoadFacilityProto__Sequence__are_equal(
      &(lhs->road_facilities), &(rhs->road_facilities)))
  {
    return false;
  }
  // topo_id_64
  if (lhs->topo_id_64 != rhs->topo_id_64) {
    return false;
  }
  // urid
  if (lhs->urid != rhs->urid) {
    return false;
  }
  // link_direction
  if (lhs->link_direction != rhs->link_direction) {
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
  // adcode
  if (lhs->adcode != rhs->adcode) {
    return false;
  }
  // link_type
  if (lhs->link_type != rhs->link_type) {
    return false;
  }
  // formway
  if (lhs->formway != rhs->formway) {
    return false;
  }
  // road_class
  if (lhs->road_class != rhs->road_class) {
    return false;
  }
  // road_direction
  if (lhs->road_direction != rhs->road_direction) {
    return false;
  }
  // ownership
  if (lhs->ownership != rhs->ownership) {
    return false;
  }
  // is_toll
  if (lhs->is_toll != rhs->is_toll) {
    return false;
  }
  // is_over_head
  if (lhs->is_over_head != rhs->is_over_head) {
    return false;
  }
  // has_parallel_road
  if (lhs->has_parallel_road != rhs->has_parallel_road) {
    return false;
  }
  // has_multi_out
  if (lhs->has_multi_out != rhs->has_multi_out) {
    return false;
  }
  // has_traffic_light
  if (lhs->has_traffic_light != rhs->has_traffic_light) {
    return false;
  }
  // has_mix_fork
  if (lhs->has_mix_fork != rhs->has_mix_fork) {
    return false;
  }
  // is_at_service
  if (lhs->is_at_service != rhs->is_at_service) {
    return false;
  }
  // is_restricting
  if (lhs->is_restricting != rhs->is_restricting) {
    return false;
  }
  // limit_flag
  if (lhs->limit_flag != rhs->limit_flag) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // turn_infos
  if (!deva_navi_msgs__msg__TurnInfoProto__Sequence__are_equal(
      &(lhs->turn_infos), &(rhs->turn_infos)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // inner_road
  if (lhs->inner_road != rhs->inner_road) {
    return false;
  }
  // is_parking_road
  if (lhs->is_parking_road != rhs->is_parking_road) {
    return false;
  }
  // traffic_status
  if (lhs->traffic_status != rhs->traffic_status) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__LinkInfoProto__copy(
  const deva_navi_msgs__msg__LinkInfoProto * input,
  deva_navi_msgs__msg__LinkInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // gantry_infos
  if (!deva_navi_msgs__msg__GantryInfoProto__Sequence__copy(
      &(input->gantry_infos), &(output->gantry_infos)))
  {
    return false;
  }
  // cameras
  if (!deva_navi_msgs__msg__NaviCameraProto__Sequence__copy(
      &(input->cameras), &(output->cameras)))
  {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // related_path_id
  output->related_path_id = input->related_path_id;
  // related_segment_index
  output->related_segment_index = input->related_segment_index;
  // link_index
  output->link_index = input->link_index;
  // length
  output->length = input->length;
  // travel_time
  output->travel_time = input->travel_time;
  // static_travel_time
  output->static_travel_time = input->static_travel_time;
  // road_name
  if (!rosidl_runtime_c__String__copy(
      &(input->road_name), &(output->road_name)))
  {
    return false;
  }
  // road_facilities
  if (!deva_navi_msgs__msg__RoadFacilityProto__Sequence__copy(
      &(input->road_facilities), &(output->road_facilities)))
  {
    return false;
  }
  // topo_id_64
  output->topo_id_64 = input->topo_id_64;
  // urid
  output->urid = input->urid;
  // link_direction
  output->link_direction = input->link_direction;
  // main_action
  output->main_action = input->main_action;
  // assistant_action
  output->assistant_action = input->assistant_action;
  // adcode
  output->adcode = input->adcode;
  // link_type
  output->link_type = input->link_type;
  // formway
  output->formway = input->formway;
  // road_class
  output->road_class = input->road_class;
  // road_direction
  output->road_direction = input->road_direction;
  // ownership
  output->ownership = input->ownership;
  // is_toll
  output->is_toll = input->is_toll;
  // is_over_head
  output->is_over_head = input->is_over_head;
  // has_parallel_road
  output->has_parallel_road = input->has_parallel_road;
  // has_multi_out
  output->has_multi_out = input->has_multi_out;
  // has_traffic_light
  output->has_traffic_light = input->has_traffic_light;
  // has_mix_fork
  output->has_mix_fork = input->has_mix_fork;
  // is_at_service
  output->is_at_service = input->is_at_service;
  // is_restricting
  output->is_restricting = input->is_restricting;
  // limit_flag
  output->limit_flag = input->limit_flag;
  // speed
  output->speed = input->speed;
  // turn_infos
  if (!deva_navi_msgs__msg__TurnInfoProto__Sequence__copy(
      &(input->turn_infos), &(output->turn_infos)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // inner_road
  output->inner_road = input->inner_road;
  // is_parking_road
  output->is_parking_road = input->is_parking_road;
  // traffic_status
  output->traffic_status = input->traffic_status;
  return true;
}

deva_navi_msgs__msg__LinkInfoProto *
deva_navi_msgs__msg__LinkInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__LinkInfoProto * msg = (deva_navi_msgs__msg__LinkInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__LinkInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__LinkInfoProto));
  bool success = deva_navi_msgs__msg__LinkInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__LinkInfoProto__destroy(deva_navi_msgs__msg__LinkInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__LinkInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__LinkInfoProto__Sequence__init(deva_navi_msgs__msg__LinkInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__LinkInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__LinkInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__LinkInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__LinkInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__LinkInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__LinkInfoProto__Sequence__fini(deva_navi_msgs__msg__LinkInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__LinkInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__LinkInfoProto__Sequence *
deva_navi_msgs__msg__LinkInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__LinkInfoProto__Sequence * array = (deva_navi_msgs__msg__LinkInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__LinkInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__LinkInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__LinkInfoProto__Sequence__destroy(deva_navi_msgs__msg__LinkInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__LinkInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__LinkInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__LinkInfoProto__Sequence * lhs, const deva_navi_msgs__msg__LinkInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__LinkInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__LinkInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__LinkInfoProto__Sequence * input,
  deva_navi_msgs__msg__LinkInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__LinkInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__LinkInfoProto * data =
      (deva_navi_msgs__msg__LinkInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__LinkInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__LinkInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__LinkInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
