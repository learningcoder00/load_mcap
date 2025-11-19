// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.h"


// Include directives for member types
// Member `all_3d_traffic_lights`
#include "deva_navi_msgs/msg/coord3_d_double_proto.h"
// Member `all_3d_traffic_lights`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__rosidl_typesupport_introspection_c.h"
// Member `segment_infos`
#include "deva_navi_msgs/msg/segment_info_proto.h"
// Member `segment_infos`
#include "deva_navi_msgs/msg/detail/segment_info_proto__rosidl_typesupport_introspection_c.h"
// Member `line_icon_points`
#include "deva_navi_msgs/msg/line_icon_point_proto.h"
// Member `line_icon_points`
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__rosidl_typesupport_introspection_c.h"
// Member `city_adcode_list`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `via_point_info`
#include "deva_navi_msgs/msg/via_point_info_proto.h"
// Member `via_point_info`
#include "deva_navi_msgs/msg/detail/via_point_info_proto__rosidl_typesupport_introspection_c.h"
// Member `charge_station_info`
#include "deva_navi_msgs/msg/charge_station_info_proto.h"
// Member `charge_station_info`
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__rosidl_typesupport_introspection_c.h"
// Member `odd_seg_infos`
#include "deva_navi_msgs/msg/odd_seg_info_proto.h"
// Member `odd_seg_infos`
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__rosidl_typesupport_introspection_c.h"
// Member `plan_channel_id`
// Member `offline_req_custom_identity_id`
// Member `navi_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `group_segments`
#include "deva_navi_msgs/msg/group_segment_proto.h"
// Member `group_segments`
#include "deva_navi_msgs/msg/detail/group_segment_proto__rosidl_typesupport_introspection_c.h"
// Member `restriction_info`
#include "deva_navi_msgs/msg/restriction_info_proto.h"
// Member `restriction_info`
#include "deva_navi_msgs/msg/detail/restriction_info_proto__rosidl_typesupport_introspection_c.h"
// Member `end_poi`
#include "deva_navi_msgs/msg/poi_info_proto.h"
// Member `end_poi`
#include "deva_navi_msgs/msg/detail/poi_info_proto__rosidl_typesupport_introspection_c.h"
// Member `tip`
#include "deva_navi_msgs/msg/tip_info_proto.h"
// Member `tip`
#include "deva_navi_msgs/msg/detail/tip_info_proto__rosidl_typesupport_introspection_c.h"
// Member `elec_path_info`
#include "deva_navi_msgs/msg/elec_path_info_proto.h"
// Member `elec_path_info`
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__rosidl_typesupport_introspection_c.h"
// Member `path_description_info`
#include "deva_navi_msgs/msg/path_description_info_proto.h"
// Member `path_description_info`
#include "deva_navi_msgs/msg/detail/path_description_info_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__AmapPathInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__AmapPathInfoProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__all_3d_traffic_lights(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__all_3d_traffic_lights(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (const deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__all_3d_traffic_lights(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__all_3d_traffic_lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((const deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__all_3d_traffic_lights(untyped_member, index));
  deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__all_3d_traffic_lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__Coord3DDoubleProto * item =
    ((deva_navi_msgs__msg__Coord3DDoubleProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__all_3d_traffic_lights(untyped_member, index));
  const deva_navi_msgs__msg__Coord3DDoubleProto * value =
    (const deva_navi_msgs__msg__Coord3DDoubleProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__all_3d_traffic_lights(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence * member =
    (deva_navi_msgs__msg__Coord3DDoubleProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__fini(member);
  return deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__segment_infos(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__SegmentInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__SegmentInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__segment_infos(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__SegmentInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__SegmentInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__segment_infos(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__SegmentInfoProto__Sequence * member =
    (deva_navi_msgs__msg__SegmentInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__segment_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__SegmentInfoProto * item =
    ((const deva_navi_msgs__msg__SegmentInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__segment_infos(untyped_member, index));
  deva_navi_msgs__msg__SegmentInfoProto * value =
    (deva_navi_msgs__msg__SegmentInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__segment_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__SegmentInfoProto * item =
    ((deva_navi_msgs__msg__SegmentInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__segment_infos(untyped_member, index));
  const deva_navi_msgs__msg__SegmentInfoProto * value =
    (const deva_navi_msgs__msg__SegmentInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__segment_infos(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__SegmentInfoProto__Sequence * member =
    (deva_navi_msgs__msg__SegmentInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__SegmentInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__line_icon_points(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__LineIconPointProto__Sequence * member =
    (const deva_navi_msgs__msg__LineIconPointProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__line_icon_points(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__LineIconPointProto__Sequence * member =
    (const deva_navi_msgs__msg__LineIconPointProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__line_icon_points(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__LineIconPointProto__Sequence * member =
    (deva_navi_msgs__msg__LineIconPointProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__line_icon_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__LineIconPointProto * item =
    ((const deva_navi_msgs__msg__LineIconPointProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__line_icon_points(untyped_member, index));
  deva_navi_msgs__msg__LineIconPointProto * value =
    (deva_navi_msgs__msg__LineIconPointProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__line_icon_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__LineIconPointProto * item =
    ((deva_navi_msgs__msg__LineIconPointProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__line_icon_points(untyped_member, index));
  const deva_navi_msgs__msg__LineIconPointProto * value =
    (const deva_navi_msgs__msg__LineIconPointProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__line_icon_points(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__LineIconPointProto__Sequence * member =
    (deva_navi_msgs__msg__LineIconPointProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__LineIconPointProto__Sequence__fini(member);
  return deva_navi_msgs__msg__LineIconPointProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__city_adcode_list(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__city_adcode_list(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__city_adcode_list(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__city_adcode_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__city_adcode_list(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__city_adcode_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__city_adcode_list(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__city_adcode_list(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__via_point_info(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__via_point_info(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__via_point_info(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__via_point_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__ViaPointInfoProto * item =
    ((const deva_navi_msgs__msg__ViaPointInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__via_point_info(untyped_member, index));
  deva_navi_msgs__msg__ViaPointInfoProto * value =
    (deva_navi_msgs__msg__ViaPointInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__via_point_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__ViaPointInfoProto * item =
    ((deva_navi_msgs__msg__ViaPointInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__via_point_info(untyped_member, index));
  const deva_navi_msgs__msg__ViaPointInfoProto * value =
    (const deva_navi_msgs__msg__ViaPointInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__via_point_info(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__charge_station_info(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__charge_station_info(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__charge_station_info(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__charge_station_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__ChargeStationInfoProto * item =
    ((const deva_navi_msgs__msg__ChargeStationInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__charge_station_info(untyped_member, index));
  deva_navi_msgs__msg__ChargeStationInfoProto * value =
    (deva_navi_msgs__msg__ChargeStationInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__charge_station_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__ChargeStationInfoProto * item =
    ((deva_navi_msgs__msg__ChargeStationInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__charge_station_info(untyped_member, index));
  const deva_navi_msgs__msg__ChargeStationInfoProto * value =
    (const deva_navi_msgs__msg__ChargeStationInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__charge_station_info(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ChargeStationInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__odd_seg_infos(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__OddSegInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__OddSegInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__odd_seg_infos(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__OddSegInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__OddSegInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__odd_seg_infos(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__OddSegInfoProto__Sequence * member =
    (deva_navi_msgs__msg__OddSegInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__odd_seg_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__OddSegInfoProto * item =
    ((const deva_navi_msgs__msg__OddSegInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__odd_seg_infos(untyped_member, index));
  deva_navi_msgs__msg__OddSegInfoProto * value =
    (deva_navi_msgs__msg__OddSegInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__odd_seg_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__OddSegInfoProto * item =
    ((deva_navi_msgs__msg__OddSegInfoProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__odd_seg_infos(untyped_member, index));
  const deva_navi_msgs__msg__OddSegInfoProto * value =
    (const deva_navi_msgs__msg__OddSegInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__odd_seg_infos(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__OddSegInfoProto__Sequence * member =
    (deva_navi_msgs__msg__OddSegInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__OddSegInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__OddSegInfoProto__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__group_segments(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__GroupSegmentProto__Sequence * member =
    (const deva_navi_msgs__msg__GroupSegmentProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__group_segments(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__GroupSegmentProto__Sequence * member =
    (const deva_navi_msgs__msg__GroupSegmentProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__group_segments(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__GroupSegmentProto__Sequence * member =
    (deva_navi_msgs__msg__GroupSegmentProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__group_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__GroupSegmentProto * item =
    ((const deva_navi_msgs__msg__GroupSegmentProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__group_segments(untyped_member, index));
  deva_navi_msgs__msg__GroupSegmentProto * value =
    (deva_navi_msgs__msg__GroupSegmentProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__group_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__GroupSegmentProto * item =
    ((deva_navi_msgs__msg__GroupSegmentProto *)
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__group_segments(untyped_member, index));
  const deva_navi_msgs__msg__GroupSegmentProto * value =
    (const deva_navi_msgs__msg__GroupSegmentProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__group_segments(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__GroupSegmentProto__Sequence * member =
    (deva_navi_msgs__msg__GroupSegmentProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__GroupSegmentProto__Sequence__fini(member);
  return deva_navi_msgs__msg__GroupSegmentProto__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[33] = {
  {
    "all_3d_traffic_lights",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, all_3d_traffic_lights),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__all_3d_traffic_lights,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__all_3d_traffic_lights,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__all_3d_traffic_lights,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__all_3d_traffic_lights,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__all_3d_traffic_lights,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__all_3d_traffic_lights  // resize(index) function pointer
  },
  {
    "segment_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, segment_infos),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__segment_infos,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__segment_infos,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__segment_infos,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__segment_infos,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__segment_infos,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__segment_infos  // resize(index) function pointer
  },
  {
    "line_icon_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, line_icon_points),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__line_icon_points,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__line_icon_points,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__line_icon_points,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__line_icon_points,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__line_icon_points,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__line_icon_points  // resize(index) function pointer
  },
  {
    "city_adcode_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, city_adcode_list),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__city_adcode_list,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__city_adcode_list,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__city_adcode_list,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__city_adcode_list,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__city_adcode_list,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__city_adcode_list  // resize(index) function pointer
  },
  {
    "via_point_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, via_point_info),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__via_point_info,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__via_point_info,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__via_point_info,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__via_point_info,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__via_point_info,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__via_point_info  // resize(index) function pointer
  },
  {
    "charge_station_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, charge_station_info),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__charge_station_info,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__charge_station_info,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__charge_station_info,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__charge_station_info,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__charge_station_info,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__charge_station_info  // resize(index) function pointer
  },
  {
    "odd_seg_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, odd_seg_infos),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__odd_seg_infos,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__odd_seg_infos,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__odd_seg_infos,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__odd_seg_infos,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__odd_seg_infos,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__odd_seg_infos  // resize(index) function pointer
  },
  {
    "plan_channel_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, plan_channel_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offline_req_custom_identity_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, offline_req_custom_identity_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, is_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, path_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strategy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, strategy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "travel_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, travel_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "static_travel_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, static_travel_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "toll_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, toll_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navi_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, navi_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_online",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, is_online),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group_segments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, group_segments),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__size_function__AmapPathInfoProto__group_segments,  // size() function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__AmapPathInfoProto__group_segments,  // get_const(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__get_function__AmapPathInfoProto__group_segments,  // get(index) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__AmapPathInfoProto__group_segments,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__assign_function__AmapPathInfoProto__group_segments,  // assign(index, value) function pointer
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__resize_function__AmapPathInfoProto__group_segments  // resize(index) function pointer
  },
  {
    "restriction_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, restriction_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_poi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, end_poi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, tip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, end_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_holiday_free",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, is_holiday_free),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_truck_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, is_truck_path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, data_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal_plan_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, normal_plan_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, route_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elec_path_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, elec_path_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_description_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, path_description_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remain_toll_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, remain_toll_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "main_route_remain_toll_cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapPathInfoProto, main_route_remain_toll_cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "AmapPathInfoProto",  // message name
  33,  // number of fields
  sizeof(deva_navi_msgs__msg__AmapPathInfoProto),
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, AmapPathInfoProto)() {
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, SegmentInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, LineIconPointProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ViaPointInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ChargeStationInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, OddSegInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, GroupSegmentProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, RestrictionInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, POIInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, TipInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[29].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ElecPathInfoProto)();
  deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_member_array[30].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, PathDescriptionInfoProto)();
  if (!deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__AmapPathInfoProto__rosidl_typesupport_introspection_c__AmapPathInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
