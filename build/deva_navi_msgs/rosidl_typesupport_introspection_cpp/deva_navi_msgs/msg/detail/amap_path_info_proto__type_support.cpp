// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_navi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AmapPathInfoProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::AmapPathInfoProto(_init);
}

void AmapPathInfoProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::AmapPathInfoProto *>(message_memory);
  typed_message->~AmapPathInfoProto();
}

size_t size_function__AmapPathInfoProto__all_3d_traffic_lights(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__all_3d_traffic_lights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__all_3d_traffic_lights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__all_3d_traffic_lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_const_function__AmapPathInfoProto__all_3d_traffic_lights(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__all_3d_traffic_lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_function__AmapPathInfoProto__all_3d_traffic_lights(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__all_3d_traffic_lights(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__segment_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::SegmentInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__segment_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::SegmentInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__segment_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::SegmentInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__segment_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::SegmentInfoProto *>(
    get_const_function__AmapPathInfoProto__segment_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::SegmentInfoProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__segment_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::SegmentInfoProto *>(
    get_function__AmapPathInfoProto__segment_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::SegmentInfoProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__segment_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::SegmentInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__line_icon_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::LineIconPointProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__line_icon_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::LineIconPointProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__line_icon_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::LineIconPointProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__line_icon_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::LineIconPointProto *>(
    get_const_function__AmapPathInfoProto__line_icon_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::LineIconPointProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__line_icon_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::LineIconPointProto *>(
    get_function__AmapPathInfoProto__line_icon_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::LineIconPointProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__line_icon_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::LineIconPointProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__city_adcode_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__city_adcode_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__city_adcode_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__city_adcode_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__AmapPathInfoProto__city_adcode_list(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__city_adcode_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__AmapPathInfoProto__city_adcode_list(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__city_adcode_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__via_point_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__via_point_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__via_point_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__via_point_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::ViaPointInfoProto *>(
    get_const_function__AmapPathInfoProto__via_point_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::ViaPointInfoProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__via_point_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::ViaPointInfoProto *>(
    get_function__AmapPathInfoProto__via_point_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::ViaPointInfoProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__via_point_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__charge_station_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::ChargeStationInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__charge_station_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::ChargeStationInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__charge_station_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::ChargeStationInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__charge_station_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::ChargeStationInfoProto *>(
    get_const_function__AmapPathInfoProto__charge_station_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::ChargeStationInfoProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__charge_station_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::ChargeStationInfoProto *>(
    get_function__AmapPathInfoProto__charge_station_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::ChargeStationInfoProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__charge_station_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::ChargeStationInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__odd_seg_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::OddSegInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__odd_seg_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::OddSegInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__odd_seg_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::OddSegInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__odd_seg_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::OddSegInfoProto *>(
    get_const_function__AmapPathInfoProto__odd_seg_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::OddSegInfoProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__odd_seg_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::OddSegInfoProto *>(
    get_function__AmapPathInfoProto__odd_seg_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::OddSegInfoProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__odd_seg_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::OddSegInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AmapPathInfoProto__group_segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::GroupSegmentProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AmapPathInfoProto__group_segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::GroupSegmentProto> *>(untyped_member);
  return &member[index];
}

void * get_function__AmapPathInfoProto__group_segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::GroupSegmentProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__AmapPathInfoProto__group_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::GroupSegmentProto *>(
    get_const_function__AmapPathInfoProto__group_segments(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::GroupSegmentProto *>(untyped_value);
  value = item;
}

void assign_function__AmapPathInfoProto__group_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::GroupSegmentProto *>(
    get_function__AmapPathInfoProto__group_segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::GroupSegmentProto *>(untyped_value);
  item = value;
}

void resize_function__AmapPathInfoProto__group_segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::GroupSegmentProto> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AmapPathInfoProto_message_member_array[33] = {
  {
    "all_3d_traffic_lights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::Coord3DDoubleProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, all_3d_traffic_lights),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__all_3d_traffic_lights,  // size() function pointer
    get_const_function__AmapPathInfoProto__all_3d_traffic_lights,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__all_3d_traffic_lights,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__all_3d_traffic_lights,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__all_3d_traffic_lights,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__all_3d_traffic_lights  // resize(index) function pointer
  },
  {
    "segment_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::SegmentInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, segment_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__segment_infos,  // size() function pointer
    get_const_function__AmapPathInfoProto__segment_infos,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__segment_infos,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__segment_infos,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__segment_infos,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__segment_infos  // resize(index) function pointer
  },
  {
    "line_icon_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::LineIconPointProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, line_icon_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__line_icon_points,  // size() function pointer
    get_const_function__AmapPathInfoProto__line_icon_points,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__line_icon_points,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__line_icon_points,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__line_icon_points,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__line_icon_points  // resize(index) function pointer
  },
  {
    "city_adcode_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, city_adcode_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__city_adcode_list,  // size() function pointer
    get_const_function__AmapPathInfoProto__city_adcode_list,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__city_adcode_list,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__city_adcode_list,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__city_adcode_list,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__city_adcode_list  // resize(index) function pointer
  },
  {
    "via_point_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::ViaPointInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, via_point_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__via_point_info,  // size() function pointer
    get_const_function__AmapPathInfoProto__via_point_info,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__via_point_info,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__via_point_info,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__via_point_info,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__via_point_info  // resize(index) function pointer
  },
  {
    "charge_station_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::ChargeStationInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, charge_station_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__charge_station_info,  // size() function pointer
    get_const_function__AmapPathInfoProto__charge_station_info,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__charge_station_info,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__charge_station_info,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__charge_station_info,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__charge_station_info  // resize(index) function pointer
  },
  {
    "odd_seg_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::OddSegInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, odd_seg_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__odd_seg_infos,  // size() function pointer
    get_const_function__AmapPathInfoProto__odd_seg_infos,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__odd_seg_infos,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__odd_seg_infos,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__odd_seg_infos,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__odd_seg_infos  // resize(index) function pointer
  },
  {
    "plan_channel_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, plan_channel_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "offline_req_custom_identity_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, offline_req_custom_identity_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, path_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "strategy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, strategy),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "travel_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, travel_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "static_travel_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, static_travel_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "toll_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, toll_cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "navi_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, navi_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_online",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, is_online),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "group_segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::GroupSegmentProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, group_segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__AmapPathInfoProto__group_segments,  // size() function pointer
    get_const_function__AmapPathInfoProto__group_segments,  // get_const(index) function pointer
    get_function__AmapPathInfoProto__group_segments,  // get(index) function pointer
    fetch_function__AmapPathInfoProto__group_segments,  // fetch(index, &value) function pointer
    assign_function__AmapPathInfoProto__group_segments,  // assign(index, value) function pointer
    resize_function__AmapPathInfoProto__group_segments  // resize(index) function pointer
  },
  {
    "restriction_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::RestrictionInfoProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, restriction_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_poi",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::POIInfoProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, end_poi),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::TipInfoProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, tip),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, end_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_holiday_free",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, is_holiday_free),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_truck_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, is_truck_path),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, data_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal_plan_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, normal_plan_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, route_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "elec_path_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::ElecPathInfoProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, elec_path_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "path_description_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::PathDescriptionInfoProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, path_description_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "remain_toll_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, remain_toll_cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "main_route_remain_toll_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::AmapPathInfoProto, main_route_remain_toll_cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AmapPathInfoProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "AmapPathInfoProto",  // message name
  33,  // number of fields
  sizeof(deva_navi_msgs::msg::AmapPathInfoProto),
  AmapPathInfoProto_message_member_array,  // message members
  AmapPathInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  AmapPathInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AmapPathInfoProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AmapPathInfoProto_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_navi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::AmapPathInfoProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::AmapPathInfoProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, AmapPathInfoProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::AmapPathInfoProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
