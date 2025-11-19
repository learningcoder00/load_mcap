// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.hpp"
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

void LinkInfoProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::LinkInfoProto(_init);
}

void LinkInfoProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::LinkInfoProto *>(message_memory);
  typed_message->~LinkInfoProto();
}

size_t size_function__LinkInfoProto__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinkInfoProto__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void * get_function__LinkInfoProto__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinkInfoProto__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_const_function__LinkInfoProto__points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  value = item;
}

void assign_function__LinkInfoProto__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::Coord3DDoubleProto *>(
    get_function__LinkInfoProto__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::Coord3DDoubleProto *>(untyped_value);
  item = value;
}

void resize_function__LinkInfoProto__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::Coord3DDoubleProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinkInfoProto__gantry_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::GantryInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinkInfoProto__gantry_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::GantryInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__LinkInfoProto__gantry_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::GantryInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinkInfoProto__gantry_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::GantryInfoProto *>(
    get_const_function__LinkInfoProto__gantry_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::GantryInfoProto *>(untyped_value);
  value = item;
}

void assign_function__LinkInfoProto__gantry_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::GantryInfoProto *>(
    get_function__LinkInfoProto__gantry_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::GantryInfoProto *>(untyped_value);
  item = value;
}

void resize_function__LinkInfoProto__gantry_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::GantryInfoProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinkInfoProto__cameras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::NaviCameraProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinkInfoProto__cameras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::NaviCameraProto> *>(untyped_member);
  return &member[index];
}

void * get_function__LinkInfoProto__cameras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::NaviCameraProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinkInfoProto__cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::NaviCameraProto *>(
    get_const_function__LinkInfoProto__cameras(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::NaviCameraProto *>(untyped_value);
  value = item;
}

void assign_function__LinkInfoProto__cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::NaviCameraProto *>(
    get_function__LinkInfoProto__cameras(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::NaviCameraProto *>(untyped_value);
  item = value;
}

void resize_function__LinkInfoProto__cameras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::NaviCameraProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinkInfoProto__road_facilities(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::RoadFacilityProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinkInfoProto__road_facilities(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::RoadFacilityProto> *>(untyped_member);
  return &member[index];
}

void * get_function__LinkInfoProto__road_facilities(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::RoadFacilityProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinkInfoProto__road_facilities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::RoadFacilityProto *>(
    get_const_function__LinkInfoProto__road_facilities(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::RoadFacilityProto *>(untyped_value);
  value = item;
}

void assign_function__LinkInfoProto__road_facilities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::RoadFacilityProto *>(
    get_function__LinkInfoProto__road_facilities(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::RoadFacilityProto *>(untyped_value);
  item = value;
}

void resize_function__LinkInfoProto__road_facilities(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::RoadFacilityProto> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LinkInfoProto__turn_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::TurnInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LinkInfoProto__turn_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::TurnInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__LinkInfoProto__turn_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::TurnInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__LinkInfoProto__turn_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::TurnInfoProto *>(
    get_const_function__LinkInfoProto__turn_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::TurnInfoProto *>(untyped_value);
  value = item;
}

void assign_function__LinkInfoProto__turn_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::TurnInfoProto *>(
    get_function__LinkInfoProto__turn_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::TurnInfoProto *>(untyped_value);
  item = value;
}

void resize_function__LinkInfoProto__turn_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::TurnInfoProto> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LinkInfoProto_message_member_array[38] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::Coord3DDoubleProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinkInfoProto__points,  // size() function pointer
    get_const_function__LinkInfoProto__points,  // get_const(index) function pointer
    get_function__LinkInfoProto__points,  // get(index) function pointer
    fetch_function__LinkInfoProto__points,  // fetch(index, &value) function pointer
    assign_function__LinkInfoProto__points,  // assign(index, value) function pointer
    resize_function__LinkInfoProto__points  // resize(index) function pointer
  },
  {
    "gantry_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::GantryInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, gantry_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinkInfoProto__gantry_infos,  // size() function pointer
    get_const_function__LinkInfoProto__gantry_infos,  // get_const(index) function pointer
    get_function__LinkInfoProto__gantry_infos,  // get(index) function pointer
    fetch_function__LinkInfoProto__gantry_infos,  // fetch(index, &value) function pointer
    assign_function__LinkInfoProto__gantry_infos,  // assign(index, value) function pointer
    resize_function__LinkInfoProto__gantry_infos  // resize(index) function pointer
  },
  {
    "cameras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::NaviCameraProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, cameras),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinkInfoProto__cameras,  // size() function pointer
    get_const_function__LinkInfoProto__cameras,  // get_const(index) function pointer
    get_function__LinkInfoProto__cameras,  // get(index) function pointer
    fetch_function__LinkInfoProto__cameras,  // fetch(index, &value) function pointer
    assign_function__LinkInfoProto__cameras,  // assign(index, value) function pointer
    resize_function__LinkInfoProto__cameras  // resize(index) function pointer
  },
  {
    "is_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "related_path_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, related_path_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "related_segment_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, related_segment_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, link_index),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, length),  // bytes offset in struct
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
    offsetof(deva_navi_msgs::msg::LinkInfoProto, travel_time),  // bytes offset in struct
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
    offsetof(deva_navi_msgs::msg::LinkInfoProto, static_travel_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, road_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_facilities",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::RoadFacilityProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, road_facilities),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinkInfoProto__road_facilities,  // size() function pointer
    get_const_function__LinkInfoProto__road_facilities,  // get_const(index) function pointer
    get_function__LinkInfoProto__road_facilities,  // get(index) function pointer
    fetch_function__LinkInfoProto__road_facilities,  // fetch(index, &value) function pointer
    assign_function__LinkInfoProto__road_facilities,  // assign(index, value) function pointer
    resize_function__LinkInfoProto__road_facilities  // resize(index) function pointer
  },
  {
    "topo_id_64",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, topo_id_64),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "urid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, urid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, link_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "main_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, main_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "assistant_action",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, assistant_action),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adcode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, adcode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, link_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "formway",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, formway),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_class",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, road_class),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, road_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ownership",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, ownership),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_toll",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_toll),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_over_head",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_over_head),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_parallel_road",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, has_parallel_road),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_multi_out",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, has_multi_out),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_traffic_light",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, has_traffic_light),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_mix_fork",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, has_mix_fork),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_at_service",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_at_service),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_restricting",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_restricting),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "limit_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, limit_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "turn_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::TurnInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, turn_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__LinkInfoProto__turn_infos,  // size() function pointer
    get_const_function__LinkInfoProto__turn_infos,  // get_const(index) function pointer
    get_function__LinkInfoProto__turn_infos,  // get(index) function pointer
    fetch_function__LinkInfoProto__turn_infos,  // fetch(index, &value) function pointer
    assign_function__LinkInfoProto__turn_infos,  // assign(index, value) function pointer
    resize_function__LinkInfoProto__turn_infos  // resize(index) function pointer
  },
  {
    "service_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, service_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inner_road",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, inner_road),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_parking_road",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, is_parking_road),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::LinkInfoProto, traffic_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LinkInfoProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "LinkInfoProto",  // message name
  38,  // number of fields
  sizeof(deva_navi_msgs::msg::LinkInfoProto),
  LinkInfoProto_message_member_array,  // message members
  LinkInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  LinkInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LinkInfoProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LinkInfoProto_message_members,
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
get_message_type_support_handle<deva_navi_msgs::msg::LinkInfoProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::LinkInfoProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, LinkInfoProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::LinkInfoProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
