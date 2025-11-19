// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/link__struct.hpp"
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

void Link_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::Link(_init);
}

void Link_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::Link *>(message_memory);
  typed_message->~Link();
}

size_t size_function__Link__coordinate(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__coordinate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__coordinate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__coordinate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(
    get_const_function__Link__coordinate(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  value = item;
}

void assign_function__Link__coordinate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Coordinate *>(
    get_function__Link__coordinate(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Coordinate *>(untyped_value);
  item = value;
}

void resize_function__Link__coordinate(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Coordinate> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__guidance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__guidance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__guidance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__guidance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Guidance *>(
    get_const_function__Link__guidance(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Guidance *>(untyped_value);
  value = item;
}

void assign_function__Link__guidance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Guidance *>(
    get_function__Link__guidance(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Guidance *>(untyped_value);
  item = value;
}

void resize_function__Link__guidance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__feature_point_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__feature_point_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__feature_point_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__feature_point_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__Link__feature_point_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__Link__feature_point_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__Link__feature_point_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__Link__feature_point_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__feature_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeaturePoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__feature_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeaturePoint> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__feature_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeaturePoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeaturePoint *>(
    get_const_function__Link__feature_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeaturePoint *>(untyped_value);
  value = item;
}

void assign_function__Link__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeaturePoint *>(
    get_function__Link__feature_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeaturePoint *>(untyped_value);
  item = value;
}

void resize_function__Link__feature_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeaturePoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LaneById> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LaneById> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LaneById> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LaneById *>(
    get_const_function__Link__lanes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LaneById *>(untyped_value);
  value = item;
}

void assign_function__Link__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LaneById *>(
    get_function__Link__lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LaneById *>(untyped_value);
  item = value;
}

void resize_function__Link__lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LaneById> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__j6m_intersection_entry_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__j6m_intersection_entry_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__j6m_intersection_entry_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__j6m_intersection_entry_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo *>(
    get_const_function__Link__j6m_intersection_entry_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo *>(untyped_value);
  value = item;
}

void assign_function__Link__j6m_intersection_entry_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo *>(
    get_function__Link__j6m_intersection_entry_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo *>(untyped_value);
  item = value;
}

void resize_function__Link__j6m_intersection_entry_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__j6m_lane_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__j6m_lane_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__j6m_lane_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__j6m_lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__Link__j6m_lane_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__Link__j6m_lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__Link__j6m_lane_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__Link__j6m_lane_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Link__j6m_link_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Link__j6m_link_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__Link__j6m_link_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__Link__j6m_link_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__Link__j6m_link_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__Link__j6m_link_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__Link__j6m_link_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__Link__j6m_link_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Link_message_member_array[16] = {
  {
    "link_attribute",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkAttribute>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, link_attribute),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Coordinate>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, coordinate),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__coordinate,  // size() function pointer
    get_const_function__Link__coordinate,  // get_const(index) function pointer
    get_function__Link__coordinate,  // get(index) function pointer
    fetch_function__Link__coordinate,  // fetch(index, &value) function pointer
    assign_function__Link__coordinate,  // assign(index, value) function pointer
    resize_function__Link__coordinate  // resize(index) function pointer
  },
  {
    "raw_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, raw_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "topology",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Topology>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, topology),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_curvature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkCurvature>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, link_curvature),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "guidance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Guidance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, guidance),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__guidance,  // size() function pointer
    get_const_function__Link__guidance,  // get_const(index) function pointer
    get_function__Link__guidance,  // get(index) function pointer
    fetch_function__Link__guidance,  // fetch(index, &value) function pointer
    assign_function__Link__guidance,  // assign(index, value) function pointer
    resize_function__Link__guidance  // resize(index) function pointer
  },
  {
    "start_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::NodeIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, start_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::NodeIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, end_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feature_point_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, feature_point_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__feature_point_ids,  // size() function pointer
    get_const_function__Link__feature_point_ids,  // get_const(index) function pointer
    get_function__Link__feature_point_ids,  // get(index) function pointer
    fetch_function__Link__feature_point_ids,  // fetch(index, &value) function pointer
    assign_function__Link__feature_point_ids,  // assign(index, value) function pointer
    resize_function__Link__feature_point_ids  // resize(index) function pointer
  },
  {
    "start",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, start),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeaturePoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, feature_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__feature_points,  // size() function pointer
    get_const_function__Link__feature_points,  // get_const(index) function pointer
    get_function__Link__feature_points,  // get(index) function pointer
    fetch_function__Link__feature_points,  // fetch(index, &value) function pointer
    assign_function__Link__feature_points,  // assign(index, value) function pointer
    resize_function__Link__feature_points  // resize(index) function pointer
  },
  {
    "lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LaneById>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__lanes,  // size() function pointer
    get_const_function__Link__lanes,  // get_const(index) function pointer
    get_function__Link__lanes,  // get(index) function pointer
    fetch_function__Link__lanes,  // fetch(index, &value) function pointer
    assign_function__Link__lanes,  // assign(index, value) function pointer
    resize_function__Link__lanes  // resize(index) function pointer
  },
  {
    "j6m_intersection_entry_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, j6m_intersection_entry_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__j6m_intersection_entry_infos,  // size() function pointer
    get_const_function__Link__j6m_intersection_entry_infos,  // get_const(index) function pointer
    get_function__Link__j6m_intersection_entry_infos,  // get(index) function pointer
    fetch_function__Link__j6m_intersection_entry_infos,  // fetch(index, &value) function pointer
    assign_function__Link__j6m_intersection_entry_infos,  // assign(index, value) function pointer
    resize_function__Link__j6m_intersection_entry_infos  // resize(index) function pointer
  },
  {
    "j6m_lane_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, j6m_lane_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__j6m_lane_ids,  // size() function pointer
    get_const_function__Link__j6m_lane_ids,  // get_const(index) function pointer
    get_function__Link__j6m_lane_ids,  // get(index) function pointer
    fetch_function__Link__j6m_lane_ids,  // fetch(index, &value) function pointer
    assign_function__Link__j6m_lane_ids,  // assign(index, value) function pointer
    resize_function__Link__j6m_lane_ids  // resize(index) function pointer
  },
  {
    "j6m_link_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Link, j6m_link_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__Link__j6m_link_ids,  // size() function pointer
    get_const_function__Link__j6m_link_ids,  // get_const(index) function pointer
    get_function__Link__j6m_link_ids,  // get(index) function pointer
    fetch_function__Link__j6m_link_ids,  // fetch(index, &value) function pointer
    assign_function__Link__j6m_link_ids,  // assign(index, value) function pointer
    resize_function__Link__j6m_link_ids  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Link_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "Link",  // message name
  16,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::Link),
  Link_message_member_array,  // message members
  Link_init_function,  // function to initialize message memory (memory has to be allocated)
  Link_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Link_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Link_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::Link>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Link_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, Link)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Link_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
