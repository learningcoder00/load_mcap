// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `all_3d_traffic_lights`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
// Member `segment_infos`
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"
// Member `line_icon_points`
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__functions.h"
// Member `city_adcode_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `via_point_info`
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"
// Member `charge_station_info`
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"
// Member `odd_seg_infos`
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__functions.h"
// Member `plan_channel_id`
// Member `offline_req_custom_identity_id`
// Member `navi_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_segments`
#include "deva_navi_msgs/msg/detail/group_segment_proto__functions.h"
// Member `restriction_info`
#include "deva_navi_msgs/msg/detail/restriction_info_proto__functions.h"
// Member `end_poi`
#include "deva_navi_msgs/msg/detail/poi_info_proto__functions.h"
// Member `tip`
#include "deva_navi_msgs/msg/detail/tip_info_proto__functions.h"
// Member `elec_path_info`
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"
// Member `path_description_info`
#include "deva_navi_msgs/msg/detail/path_description_info_proto__functions.h"

bool
deva_navi_msgs__msg__AmapPathInfoProto__init(deva_navi_msgs__msg__AmapPathInfoProto * msg)
{
  if (!msg) {
    return false;
  }
  // all_3d_traffic_lights
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&msg->all_3d_traffic_lights, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // segment_infos
  if (!deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(&msg->segment_infos, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // line_icon_points
  if (!deva_navi_msgs__msg__LineIconPointProto__Sequence__init(&msg->line_icon_points, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // city_adcode_list
  if (!rosidl_runtime_c__int64__Sequence__init(&msg->city_adcode_list, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // via_point_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&msg->via_point_info, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // charge_station_info
  if (!deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(&msg->charge_station_info, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // odd_seg_infos
  if (!deva_navi_msgs__msg__OddSegInfoProto__Sequence__init(&msg->odd_seg_infos, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // plan_channel_id
  if (!rosidl_runtime_c__String__init(&msg->plan_channel_id)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // offline_req_custom_identity_id
  if (!rosidl_runtime_c__String__init(&msg->offline_req_custom_identity_id)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // is_valid
  // path_id
  // type
  // length
  // strategy
  // travel_time
  // static_travel_time
  // toll_cost
  // navi_id
  if (!rosidl_runtime_c__String__init(&msg->navi_id)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // is_online
  // group_segments
  if (!deva_navi_msgs__msg__GroupSegmentProto__Sequence__init(&msg->group_segments, 0)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // restriction_info
  if (!deva_navi_msgs__msg__RestrictionInfoProto__init(&msg->restriction_info)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // end_poi
  if (!deva_navi_msgs__msg__POIInfoProto__init(&msg->end_poi)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // tip
  if (!deva_navi_msgs__msg__TipInfoProto__init(&msg->tip)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // end_direction
  // is_holiday_free
  // is_truck_path
  // data_version
  // normal_plan_time
  // route_type
  // elec_path_info
  if (!deva_navi_msgs__msg__ElecPathInfoProto__init(&msg->elec_path_info)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // path_description_info
  if (!deva_navi_msgs__msg__PathDescriptionInfoProto__init(&msg->path_description_info)) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
    return false;
  }
  // remain_toll_cost
  // main_route_remain_toll_cost
  return true;
}

void
deva_navi_msgs__msg__AmapPathInfoProto__fini(deva_navi_msgs__msg__AmapPathInfoProto * msg)
{
  if (!msg) {
    return;
  }
  // all_3d_traffic_lights
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(&msg->all_3d_traffic_lights);
  // segment_infos
  deva_navi_msgs__msg__SegmentInfoProto__Sequence__fini(&msg->segment_infos);
  // line_icon_points
  deva_navi_msgs__msg__LineIconPointProto__Sequence__fini(&msg->line_icon_points);
  // city_adcode_list
  rosidl_runtime_c__int64__Sequence__fini(&msg->city_adcode_list);
  // via_point_info
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(&msg->via_point_info);
  // charge_station_info
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(&msg->charge_station_info);
  // odd_seg_infos
  deva_navi_msgs__msg__OddSegInfoProto__Sequence__fini(&msg->odd_seg_infos);
  // plan_channel_id
  rosidl_runtime_c__String__fini(&msg->plan_channel_id);
  // offline_req_custom_identity_id
  rosidl_runtime_c__String__fini(&msg->offline_req_custom_identity_id);
  // is_valid
  // path_id
  // type
  // length
  // strategy
  // travel_time
  // static_travel_time
  // toll_cost
  // navi_id
  rosidl_runtime_c__String__fini(&msg->navi_id);
  // is_online
  // group_segments
  deva_navi_msgs__msg__GroupSegmentProto__Sequence__fini(&msg->group_segments);
  // restriction_info
  deva_navi_msgs__msg__RestrictionInfoProto__fini(&msg->restriction_info);
  // end_poi
  deva_navi_msgs__msg__POIInfoProto__fini(&msg->end_poi);
  // tip
  deva_navi_msgs__msg__TipInfoProto__fini(&msg->tip);
  // end_direction
  // is_holiday_free
  // is_truck_path
  // data_version
  // normal_plan_time
  // route_type
  // elec_path_info
  deva_navi_msgs__msg__ElecPathInfoProto__fini(&msg->elec_path_info);
  // path_description_info
  deva_navi_msgs__msg__PathDescriptionInfoProto__fini(&msg->path_description_info);
  // remain_toll_cost
  // main_route_remain_toll_cost
}

bool
deva_navi_msgs__msg__AmapPathInfoProto__are_equal(const deva_navi_msgs__msg__AmapPathInfoProto * lhs, const deva_navi_msgs__msg__AmapPathInfoProto * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_3d_traffic_lights
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__are_equal(
      &(lhs->all_3d_traffic_lights), &(rhs->all_3d_traffic_lights)))
  {
    return false;
  }
  // segment_infos
  if (!deva_navi_msgs__msg__SegmentInfoProto__Sequence__are_equal(
      &(lhs->segment_infos), &(rhs->segment_infos)))
  {
    return false;
  }
  // line_icon_points
  if (!deva_navi_msgs__msg__LineIconPointProto__Sequence__are_equal(
      &(lhs->line_icon_points), &(rhs->line_icon_points)))
  {
    return false;
  }
  // city_adcode_list
  if (!rosidl_runtime_c__int64__Sequence__are_equal(
      &(lhs->city_adcode_list), &(rhs->city_adcode_list)))
  {
    return false;
  }
  // via_point_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__are_equal(
      &(lhs->via_point_info), &(rhs->via_point_info)))
  {
    return false;
  }
  // charge_station_info
  if (!deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__are_equal(
      &(lhs->charge_station_info), &(rhs->charge_station_info)))
  {
    return false;
  }
  // odd_seg_infos
  if (!deva_navi_msgs__msg__OddSegInfoProto__Sequence__are_equal(
      &(lhs->odd_seg_infos), &(rhs->odd_seg_infos)))
  {
    return false;
  }
  // plan_channel_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plan_channel_id), &(rhs->plan_channel_id)))
  {
    return false;
  }
  // offline_req_custom_identity_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->offline_req_custom_identity_id), &(rhs->offline_req_custom_identity_id)))
  {
    return false;
  }
  // is_valid
  if (lhs->is_valid != rhs->is_valid) {
    return false;
  }
  // path_id
  if (lhs->path_id != rhs->path_id) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // strategy
  if (lhs->strategy != rhs->strategy) {
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
  // toll_cost
  if (lhs->toll_cost != rhs->toll_cost) {
    return false;
  }
  // navi_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->navi_id), &(rhs->navi_id)))
  {
    return false;
  }
  // is_online
  if (lhs->is_online != rhs->is_online) {
    return false;
  }
  // group_segments
  if (!deva_navi_msgs__msg__GroupSegmentProto__Sequence__are_equal(
      &(lhs->group_segments), &(rhs->group_segments)))
  {
    return false;
  }
  // restriction_info
  if (!deva_navi_msgs__msg__RestrictionInfoProto__are_equal(
      &(lhs->restriction_info), &(rhs->restriction_info)))
  {
    return false;
  }
  // end_poi
  if (!deva_navi_msgs__msg__POIInfoProto__are_equal(
      &(lhs->end_poi), &(rhs->end_poi)))
  {
    return false;
  }
  // tip
  if (!deva_navi_msgs__msg__TipInfoProto__are_equal(
      &(lhs->tip), &(rhs->tip)))
  {
    return false;
  }
  // end_direction
  if (lhs->end_direction != rhs->end_direction) {
    return false;
  }
  // is_holiday_free
  if (lhs->is_holiday_free != rhs->is_holiday_free) {
    return false;
  }
  // is_truck_path
  if (lhs->is_truck_path != rhs->is_truck_path) {
    return false;
  }
  // data_version
  if (lhs->data_version != rhs->data_version) {
    return false;
  }
  // normal_plan_time
  if (lhs->normal_plan_time != rhs->normal_plan_time) {
    return false;
  }
  // route_type
  if (lhs->route_type != rhs->route_type) {
    return false;
  }
  // elec_path_info
  if (!deva_navi_msgs__msg__ElecPathInfoProto__are_equal(
      &(lhs->elec_path_info), &(rhs->elec_path_info)))
  {
    return false;
  }
  // path_description_info
  if (!deva_navi_msgs__msg__PathDescriptionInfoProto__are_equal(
      &(lhs->path_description_info), &(rhs->path_description_info)))
  {
    return false;
  }
  // remain_toll_cost
  if (lhs->remain_toll_cost != rhs->remain_toll_cost) {
    return false;
  }
  // main_route_remain_toll_cost
  if (lhs->main_route_remain_toll_cost != rhs->main_route_remain_toll_cost) {
    return false;
  }
  return true;
}

bool
deva_navi_msgs__msg__AmapPathInfoProto__copy(
  const deva_navi_msgs__msg__AmapPathInfoProto * input,
  deva_navi_msgs__msg__AmapPathInfoProto * output)
{
  if (!input || !output) {
    return false;
  }
  // all_3d_traffic_lights
  if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__copy(
      &(input->all_3d_traffic_lights), &(output->all_3d_traffic_lights)))
  {
    return false;
  }
  // segment_infos
  if (!deva_navi_msgs__msg__SegmentInfoProto__Sequence__copy(
      &(input->segment_infos), &(output->segment_infos)))
  {
    return false;
  }
  // line_icon_points
  if (!deva_navi_msgs__msg__LineIconPointProto__Sequence__copy(
      &(input->line_icon_points), &(output->line_icon_points)))
  {
    return false;
  }
  // city_adcode_list
  if (!rosidl_runtime_c__int64__Sequence__copy(
      &(input->city_adcode_list), &(output->city_adcode_list)))
  {
    return false;
  }
  // via_point_info
  if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__copy(
      &(input->via_point_info), &(output->via_point_info)))
  {
    return false;
  }
  // charge_station_info
  if (!deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__copy(
      &(input->charge_station_info), &(output->charge_station_info)))
  {
    return false;
  }
  // odd_seg_infos
  if (!deva_navi_msgs__msg__OddSegInfoProto__Sequence__copy(
      &(input->odd_seg_infos), &(output->odd_seg_infos)))
  {
    return false;
  }
  // plan_channel_id
  if (!rosidl_runtime_c__String__copy(
      &(input->plan_channel_id), &(output->plan_channel_id)))
  {
    return false;
  }
  // offline_req_custom_identity_id
  if (!rosidl_runtime_c__String__copy(
      &(input->offline_req_custom_identity_id), &(output->offline_req_custom_identity_id)))
  {
    return false;
  }
  // is_valid
  output->is_valid = input->is_valid;
  // path_id
  output->path_id = input->path_id;
  // type
  output->type = input->type;
  // length
  output->length = input->length;
  // strategy
  output->strategy = input->strategy;
  // travel_time
  output->travel_time = input->travel_time;
  // static_travel_time
  output->static_travel_time = input->static_travel_time;
  // toll_cost
  output->toll_cost = input->toll_cost;
  // navi_id
  if (!rosidl_runtime_c__String__copy(
      &(input->navi_id), &(output->navi_id)))
  {
    return false;
  }
  // is_online
  output->is_online = input->is_online;
  // group_segments
  if (!deva_navi_msgs__msg__GroupSegmentProto__Sequence__copy(
      &(input->group_segments), &(output->group_segments)))
  {
    return false;
  }
  // restriction_info
  if (!deva_navi_msgs__msg__RestrictionInfoProto__copy(
      &(input->restriction_info), &(output->restriction_info)))
  {
    return false;
  }
  // end_poi
  if (!deva_navi_msgs__msg__POIInfoProto__copy(
      &(input->end_poi), &(output->end_poi)))
  {
    return false;
  }
  // tip
  if (!deva_navi_msgs__msg__TipInfoProto__copy(
      &(input->tip), &(output->tip)))
  {
    return false;
  }
  // end_direction
  output->end_direction = input->end_direction;
  // is_holiday_free
  output->is_holiday_free = input->is_holiday_free;
  // is_truck_path
  output->is_truck_path = input->is_truck_path;
  // data_version
  output->data_version = input->data_version;
  // normal_plan_time
  output->normal_plan_time = input->normal_plan_time;
  // route_type
  output->route_type = input->route_type;
  // elec_path_info
  if (!deva_navi_msgs__msg__ElecPathInfoProto__copy(
      &(input->elec_path_info), &(output->elec_path_info)))
  {
    return false;
  }
  // path_description_info
  if (!deva_navi_msgs__msg__PathDescriptionInfoProto__copy(
      &(input->path_description_info), &(output->path_description_info)))
  {
    return false;
  }
  // remain_toll_cost
  output->remain_toll_cost = input->remain_toll_cost;
  // main_route_remain_toll_cost
  output->main_route_remain_toll_cost = input->main_route_remain_toll_cost;
  return true;
}

deva_navi_msgs__msg__AmapPathInfoProto *
deva_navi_msgs__msg__AmapPathInfoProto__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapPathInfoProto * msg = (deva_navi_msgs__msg__AmapPathInfoProto *)allocator.allocate(sizeof(deva_navi_msgs__msg__AmapPathInfoProto), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_navi_msgs__msg__AmapPathInfoProto));
  bool success = deva_navi_msgs__msg__AmapPathInfoProto__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_navi_msgs__msg__AmapPathInfoProto__destroy(deva_navi_msgs__msg__AmapPathInfoProto * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_navi_msgs__msg__AmapPathInfoProto__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__init(deva_navi_msgs__msg__AmapPathInfoProto__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapPathInfoProto * data = NULL;

  if (size) {
    data = (deva_navi_msgs__msg__AmapPathInfoProto *)allocator.zero_allocate(size, sizeof(deva_navi_msgs__msg__AmapPathInfoProto), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_navi_msgs__msg__AmapPathInfoProto__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_navi_msgs__msg__AmapPathInfoProto__fini(&data[i - 1]);
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
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__fini(deva_navi_msgs__msg__AmapPathInfoProto__Sequence * array)
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
      deva_navi_msgs__msg__AmapPathInfoProto__fini(&array->data[i]);
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

deva_navi_msgs__msg__AmapPathInfoProto__Sequence *
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_navi_msgs__msg__AmapPathInfoProto__Sequence * array = (deva_navi_msgs__msg__AmapPathInfoProto__Sequence *)allocator.allocate(sizeof(deva_navi_msgs__msg__AmapPathInfoProto__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_navi_msgs__msg__AmapPathInfoProto__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__destroy(deva_navi_msgs__msg__AmapPathInfoProto__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_navi_msgs__msg__AmapPathInfoProto__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__are_equal(const deva_navi_msgs__msg__AmapPathInfoProto__Sequence * lhs, const deva_navi_msgs__msg__AmapPathInfoProto__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_navi_msgs__msg__AmapPathInfoProto__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_navi_msgs__msg__AmapPathInfoProto__Sequence__copy(
  const deva_navi_msgs__msg__AmapPathInfoProto__Sequence * input,
  deva_navi_msgs__msg__AmapPathInfoProto__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_navi_msgs__msg__AmapPathInfoProto);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_navi_msgs__msg__AmapPathInfoProto * data =
      (deva_navi_msgs__msg__AmapPathInfoProto *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_navi_msgs__msg__AmapPathInfoProto__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_navi_msgs__msg__AmapPathInfoProto__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_navi_msgs__msg__AmapPathInfoProto__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
