// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"
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

void LANE_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::LANE(_init);
}

void LANE_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::LANE *>(message_memory);
  typed_message->~LANE();
}

size_t size_function__LANE__feature_point_id_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__feature_point_id_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__feature_point_id_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__feature_point_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__LANE__feature_point_id_s(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__LANE__feature_point_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__LANE__feature_point_id_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__LANE__feature_point_id_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__lane_type(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__lane_type(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__lane_type(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__lane_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__lane_type(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__lane_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__lane_type(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__lane_type(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__left_border_types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__left_border_types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__left_border_types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__left_border_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__left_border_types(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__left_border_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__left_border_types(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__left_border_types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__right_border_types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__right_border_types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__right_border_types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__right_border_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__right_border_types(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__right_border_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__right_border_types(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__right_border_types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__left_border_colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__left_border_colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__left_border_colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__left_border_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__left_border_colors(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__left_border_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__left_border_colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__left_border_colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__right_border_colors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__right_border_colors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__right_border_colors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__right_border_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__right_border_colors(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__right_border_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__right_border_colors(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__right_border_colors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__previous_id_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__previous_id_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__previous_id_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__previous_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__LANE__previous_id_s(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__LANE__previous_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__LANE__previous_id_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__LANE__previous_id_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__next_id_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__next_id_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__next_id_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__next_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__LANE__next_id_s(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__LANE__next_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__LANE__next_id_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__LANE__next_id_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__arrows(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__arrows(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__arrows(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LANE__arrows(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LANE__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LANE__arrows(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LANE__arrows(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LANE__lane_restricts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LaneRestriction> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LANE__lane_restricts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LaneRestriction> *>(untyped_member);
  return &member[index];
}

void * get_function__LANE__lane_restricts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LaneRestriction> *>(untyped_member);
  return &member[index];
}

void fetch_function__LANE__lane_restricts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LaneRestriction *>(
    get_const_function__LANE__lane_restricts(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LaneRestriction *>(untyped_value);
  value = item;
}

void assign_function__LANE__lane_restricts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LaneRestriction *>(
    get_function__LANE__lane_restricts(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LaneRestriction *>(untyped_value);
  item = value;
}

void resize_function__LANE__lane_restricts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LaneRestriction> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LANE_message_member_array[19] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_group_id_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LaneGroupIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_group_id_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feature_point_id_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, feature_point_id_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__feature_point_id_s,  // size() function pointer
    get_const_function__LANE__feature_point_id_s,  // get_const(index) function pointer
    get_function__LANE__feature_point_id_s,  // get(index) function pointer
    fetch_function__LANE__feature_point_id_s,  // fetch(index, &value) function pointer
    assign_function__LANE__feature_point_id_s,  // assign(index, value) function pointer
    resize_function__LANE__feature_point_id_s  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, direction),  // bytes offset in struct
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
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_type),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__lane_type,  // size() function pointer
    get_const_function__LANE__lane_type,  // get_const(index) function pointer
    get_function__LANE__lane_type,  // get(index) function pointer
    fetch_function__LANE__lane_type,  // fetch(index, &value) function pointer
    assign_function__LANE__lane_type,  // assign(index, value) function pointer
    resize_function__LANE__lane_type  // resize(index) function pointer
  },
  {
    "left_border_types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, left_border_types),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__left_border_types,  // size() function pointer
    get_const_function__LANE__left_border_types,  // get_const(index) function pointer
    get_function__LANE__left_border_types,  // get(index) function pointer
    fetch_function__LANE__left_border_types,  // fetch(index, &value) function pointer
    assign_function__LANE__left_border_types,  // assign(index, value) function pointer
    resize_function__LANE__left_border_types  // resize(index) function pointer
  },
  {
    "right_border_types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, right_border_types),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__right_border_types,  // size() function pointer
    get_const_function__LANE__right_border_types,  // get_const(index) function pointer
    get_function__LANE__right_border_types,  // get(index) function pointer
    fetch_function__LANE__right_border_types,  // fetch(index, &value) function pointer
    assign_function__LANE__right_border_types,  // assign(index, value) function pointer
    resize_function__LANE__right_border_types  // resize(index) function pointer
  },
  {
    "left_border_colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, left_border_colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__left_border_colors,  // size() function pointer
    get_const_function__LANE__left_border_colors,  // get_const(index) function pointer
    get_function__LANE__left_border_colors,  // get(index) function pointer
    fetch_function__LANE__left_border_colors,  // fetch(index, &value) function pointer
    assign_function__LANE__left_border_colors,  // assign(index, value) function pointer
    resize_function__LANE__left_border_colors  // resize(index) function pointer
  },
  {
    "right_border_colors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, right_border_colors),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__right_border_colors,  // size() function pointer
    get_const_function__LANE__right_border_colors,  // get_const(index) function pointer
    get_function__LANE__right_border_colors,  // get(index) function pointer
    fetch_function__LANE__right_border_colors,  // fetch(index, &value) function pointer
    assign_function__LANE__right_border_colors,  // assign(index, value) function pointer
    resize_function__LANE__right_border_colors  // resize(index) function pointer
  },
  {
    "change_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, change_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_start_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_start_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_end_width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_end_width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, seq_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "previous_id_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, previous_id_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__previous_id_s,  // size() function pointer
    get_const_function__LANE__previous_id_s,  // get_const(index) function pointer
    get_function__LANE__previous_id_s,  // get(index) function pointer
    fetch_function__LANE__previous_id_s,  // fetch(index, &value) function pointer
    assign_function__LANE__previous_id_s,  // assign(index, value) function pointer
    resize_function__LANE__previous_id_s  // resize(index) function pointer
  },
  {
    "next_id_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, next_id_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__next_id_s,  // size() function pointer
    get_const_function__LANE__next_id_s,  // get_const(index) function pointer
    get_function__LANE__next_id_s,  // get(index) function pointer
    fetch_function__LANE__next_id_s,  // fetch(index, &value) function pointer
    assign_function__LANE__next_id_s,  // assign(index, value) function pointer
    resize_function__LANE__next_id_s  // resize(index) function pointer
  },
  {
    "lsl_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lsl_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arrows",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, arrows),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__arrows,  // size() function pointer
    get_const_function__LANE__arrows,  // get_const(index) function pointer
    get_function__LANE__arrows,  // get(index) function pointer
    fetch_function__LANE__arrows,  // fetch(index, &value) function pointer
    assign_function__LANE__arrows,  // assign(index, value) function pointer
    resize_function__LANE__arrows  // resize(index) function pointer
  },
  {
    "lane_restricts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LaneRestriction>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::LANE, lane_restricts),  // bytes offset in struct
    nullptr,  // default value
    size_function__LANE__lane_restricts,  // size() function pointer
    get_const_function__LANE__lane_restricts,  // get_const(index) function pointer
    get_function__LANE__lane_restricts,  // get(index) function pointer
    fetch_function__LANE__lane_restricts,  // fetch(index, &value) function pointer
    assign_function__LANE__lane_restricts,  // assign(index, value) function pointer
    resize_function__LANE__lane_restricts  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LANE_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "LANE",  // message name
  19,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::LANE),
  LANE_message_member_array,  // message members
  LANE_init_function,  // function to initialize message memory (memory has to be allocated)
  LANE_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LANE_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LANE_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::LANE>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::LANE_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, LANE)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::LANE_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
