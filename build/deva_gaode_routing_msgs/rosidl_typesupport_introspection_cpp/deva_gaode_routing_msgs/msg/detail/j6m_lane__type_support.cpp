// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void J6mLane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::J6mLane(_init);
}

void J6mLane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::J6mLane *>(message_memory);
  typed_message->~J6mLane();
}

size_t size_function__J6mLane__left_lane_marking_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__left_lane_marking_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__left_lane_marking_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__left_lane_marking_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__J6mLane__left_lane_marking_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__left_lane_marking_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__J6mLane__left_lane_marking_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__left_lane_marking_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mLane__right_lane_marking_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__right_lane_marking_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__right_lane_marking_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__right_lane_marking_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__J6mLane__right_lane_marking_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__right_lane_marking_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__J6mLane__right_lane_marking_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__right_lane_marking_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mLane__lane_successor_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__lane_successor_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__lane_successor_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__lane_successor_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__J6mLane__lane_successor_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__lane_successor_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__J6mLane__lane_successor_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__lane_successor_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mLane__lane_predecessor_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__lane_predecessor_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__lane_predecessor_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__lane_predecessor_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__J6mLane__lane_predecessor_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__lane_predecessor_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__J6mLane__lane_predecessor_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__lane_predecessor_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mLane__lane_referenced_roadobject_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__lane_referenced_roadobject_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__lane_referenced_roadobject_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__lane_referenced_roadobject_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__J6mLane__lane_referenced_roadobject_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__lane_referenced_roadobject_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__J6mLane__lane_referenced_roadobject_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__lane_referenced_roadobject_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__J6mLane__lane_coordinates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__J6mLane__lane_coordinates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void * get_function__J6mLane__lane_coordinates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void fetch_function__J6mLane__lane_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(
    get_const_function__J6mLane__lane_coordinates(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  value = item;
}

void assign_function__J6mLane__lane_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(
    get_function__J6mLane__lane_coordinates(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  item = value;
}

void resize_function__J6mLane__lane_coordinates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember J6mLane_message_member_array[21] = {
  {
    "lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_seq_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_seq_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_speed_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_speed_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_max_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_max_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_min_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_min_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_lane_marking_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, left_lane_marking_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__left_lane_marking_ids,  // size() function pointer
    get_const_function__J6mLane__left_lane_marking_ids,  // get_const(index) function pointer
    get_function__J6mLane__left_lane_marking_ids,  // get(index) function pointer
    fetch_function__J6mLane__left_lane_marking_ids,  // fetch(index, &value) function pointer
    assign_function__J6mLane__left_lane_marking_ids,  // assign(index, value) function pointer
    resize_function__J6mLane__left_lane_marking_ids  // resize(index) function pointer
  },
  {
    "right_lane_marking_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, right_lane_marking_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__right_lane_marking_ids,  // size() function pointer
    get_const_function__J6mLane__right_lane_marking_ids,  // get_const(index) function pointer
    get_function__J6mLane__right_lane_marking_ids,  // get(index) function pointer
    fetch_function__J6mLane__right_lane_marking_ids,  // fetch(index, &value) function pointer
    assign_function__J6mLane__right_lane_marking_ids,  // assign(index, value) function pointer
    resize_function__J6mLane__right_lane_marking_ids  // resize(index) function pointer
  },
  {
    "lane_adas",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_adas),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_turn_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_turn_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_travel_direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_travel_direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_empir_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_empir_speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_empir_traj_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_empir_traj_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_host_link_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_host_link_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_host_link_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_host_link_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_successor_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_successor_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__lane_successor_lane_ids,  // size() function pointer
    get_const_function__J6mLane__lane_successor_lane_ids,  // get_const(index) function pointer
    get_function__J6mLane__lane_successor_lane_ids,  // get(index) function pointer
    fetch_function__J6mLane__lane_successor_lane_ids,  // fetch(index, &value) function pointer
    assign_function__J6mLane__lane_successor_lane_ids,  // assign(index, value) function pointer
    resize_function__J6mLane__lane_successor_lane_ids  // resize(index) function pointer
  },
  {
    "lane_predecessor_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_predecessor_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__lane_predecessor_lane_ids,  // size() function pointer
    get_const_function__J6mLane__lane_predecessor_lane_ids,  // get_const(index) function pointer
    get_function__J6mLane__lane_predecessor_lane_ids,  // get(index) function pointer
    fetch_function__J6mLane__lane_predecessor_lane_ids,  // fetch(index, &value) function pointer
    assign_function__J6mLane__lane_predecessor_lane_ids,  // assign(index, value) function pointer
    resize_function__J6mLane__lane_predecessor_lane_ids  // resize(index) function pointer
  },
  {
    "lane_referenced_roadobject_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_referenced_roadobject_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__lane_referenced_roadobject_ids,  // size() function pointer
    get_const_function__J6mLane__lane_referenced_roadobject_ids,  // get_const(index) function pointer
    get_function__J6mLane__lane_referenced_roadobject_ids,  // get(index) function pointer
    fetch_function__J6mLane__lane_referenced_roadobject_ids,  // fetch(index, &value) function pointer
    assign_function__J6mLane__lane_referenced_roadobject_ids,  // assign(index, value) function pointer
    resize_function__J6mLane__lane_referenced_roadobject_ids  // resize(index) function pointer
  },
  {
    "lane_coordinates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Coordinate>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::J6mLane, lane_coordinates),  // bytes offset in struct
    nullptr,  // default value
    size_function__J6mLane__lane_coordinates,  // size() function pointer
    get_const_function__J6mLane__lane_coordinates,  // get_const(index) function pointer
    get_function__J6mLane__lane_coordinates,  // get(index) function pointer
    fetch_function__J6mLane__lane_coordinates,  // fetch(index, &value) function pointer
    assign_function__J6mLane__lane_coordinates,  // assign(index, value) function pointer
    resize_function__J6mLane__lane_coordinates  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers J6mLane_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "J6mLane",  // message name
  21,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::J6mLane),
  J6mLane_message_member_array,  // message members
  J6mLane_init_function,  // function to initialize message memory (memory has to be allocated)
  J6mLane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t J6mLane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &J6mLane_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_gaode_routing_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mLane>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::J6mLane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, J6mLane)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::J6mLane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
