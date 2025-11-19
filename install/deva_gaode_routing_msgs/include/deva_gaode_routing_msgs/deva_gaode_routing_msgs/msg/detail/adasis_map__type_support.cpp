// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.hpp"
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

void AdasisMap_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::AdasisMap(_init);
}

void AdasisMap_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::AdasisMap *>(message_memory);
  typed_message->~AdasisMap();
}

size_t size_function__AdasisMap__ehp_segments(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpSegment> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__ehp_segments(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpSegment> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__ehp_segments(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpSegment> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__ehp_segments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpSegment *>(
    get_const_function__AdasisMap__ehp_segments(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpSegment *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__ehp_segments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpSegment *>(
    get_function__AdasisMap__ehp_segments(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpSegment *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__ehp_segments(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpSegment> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__ehp_stubs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpStub> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__ehp_stubs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpStub> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__ehp_stubs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpStub> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__ehp_stubs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpStub *>(
    get_const_function__AdasisMap__ehp_stubs(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpStub *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__ehp_stubs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpStub *>(
    get_function__AdasisMap__ehp_stubs(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpStub *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__ehp_stubs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpStub> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__ehp_profile_shorts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__ehp_profile_shorts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__ehp_profile_shorts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__ehp_profile_shorts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpProfileShort *>(
    get_const_function__AdasisMap__ehp_profile_shorts(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpProfileShort *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__ehp_profile_shorts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpProfileShort *>(
    get_function__AdasisMap__ehp_profile_shorts(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpProfileShort *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__ehp_profile_shorts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__ehp_profile_longs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__ehp_profile_longs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__ehp_profile_longs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__ehp_profile_longs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpProfileLong *>(
    get_const_function__AdasisMap__ehp_profile_longs(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpProfileLong *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__ehp_profile_longs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::EhpProfileLong *>(
    get_function__AdasisMap__ehp_profile_longs(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::EhpProfileLong *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__ehp_profile_longs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__link(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Link> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__link(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__link(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Link> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__link(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Link *>(
    get_const_function__AdasisMap__link(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Link *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__link(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Link *>(
    get_function__AdasisMap__link(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Link *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__link(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Link> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__node(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Node> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__node(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__node(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Node> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__node(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Node *>(
    get_const_function__AdasisMap__node(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Node *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__node(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Node *>(
    get_function__AdasisMap__node(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Node *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__node(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Node> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__feature_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeaturePointById> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__feature_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeaturePointById> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__feature_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeaturePointById> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeaturePointById *>(
    get_const_function__AdasisMap__feature_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeaturePointById *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeaturePointById *>(
    get_function__AdasisMap__feature_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeaturePointById *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__feature_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeaturePointById> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__lanes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LANE> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__lanes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LANE> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__lanes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LANE> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LANE *>(
    get_const_function__AdasisMap__lanes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LANE *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LANE *>(
    get_function__AdasisMap__lanes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LANE *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__lanes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LANE> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__stoplines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::StopLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__stoplines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::StopLine> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__stoplines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::StopLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__stoplines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::StopLine *>(
    get_const_function__AdasisMap__stoplines(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::StopLine *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__stoplines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::StopLine *>(
    get_function__AdasisMap__stoplines(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::StopLine *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__stoplines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::StopLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__intersection_road_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__intersection_road_nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__intersection_road_nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__intersection_road_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::IntersectionRoadNode *>(
    get_const_function__AdasisMap__intersection_road_nodes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::IntersectionRoadNode *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__intersection_road_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::IntersectionRoadNode *>(
    get_function__AdasisMap__intersection_road_nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::IntersectionRoadNode *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__intersection_road_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdasisMap__intersection_roads(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdasisMap__intersection_roads(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad> *>(untyped_member);
  return &member[index];
}

void * get_function__AdasisMap__intersection_roads(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdasisMap__intersection_roads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::IntersectionRoad *>(
    get_const_function__AdasisMap__intersection_roads(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::IntersectionRoad *>(untyped_value);
  value = item;
}

void assign_function__AdasisMap__intersection_roads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::IntersectionRoad *>(
    get_function__AdasisMap__intersection_roads(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::IntersectionRoad *>(untyped_value);
  item = value;
}

void resize_function__AdasisMap__intersection_roads(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AdasisMap_message_member_array[24] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_update_ehp_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpPosition>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_update_ehp_meta_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_meta_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_meta_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpMetaData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_meta_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_update_ehp_segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_segments),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_segments",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpSegment>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_segments),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__ehp_segments,  // size() function pointer
    get_const_function__AdasisMap__ehp_segments,  // get_const(index) function pointer
    get_function__AdasisMap__ehp_segments,  // get(index) function pointer
    fetch_function__AdasisMap__ehp_segments,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__ehp_segments,  // assign(index, value) function pointer
    resize_function__AdasisMap__ehp_segments  // resize(index) function pointer
  },
  {
    "is_update_ehp_stubs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_stubs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_stubs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpStub>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_stubs),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__ehp_stubs,  // size() function pointer
    get_const_function__AdasisMap__ehp_stubs,  // get_const(index) function pointer
    get_function__AdasisMap__ehp_stubs,  // get(index) function pointer
    fetch_function__AdasisMap__ehp_stubs,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__ehp_stubs,  // assign(index, value) function pointer
    resize_function__AdasisMap__ehp_stubs  // resize(index) function pointer
  },
  {
    "is_update_ehp_profile_shorts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_profile_shorts),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_profile_shorts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpProfileShort>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_profile_shorts),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__ehp_profile_shorts,  // size() function pointer
    get_const_function__AdasisMap__ehp_profile_shorts,  // get_const(index) function pointer
    get_function__AdasisMap__ehp_profile_shorts,  // get(index) function pointer
    fetch_function__AdasisMap__ehp_profile_shorts,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__ehp_profile_shorts,  // assign(index, value) function pointer
    resize_function__AdasisMap__ehp_profile_shorts  // resize(index) function pointer
  },
  {
    "is_update_ehp_profile_longs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, is_update_ehp_profile_longs),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ehp_profile_longs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::EhpProfileLong>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, ehp_profile_longs),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__ehp_profile_longs,  // size() function pointer
    get_const_function__AdasisMap__ehp_profile_longs,  // get_const(index) function pointer
    get_function__AdasisMap__ehp_profile_longs,  // get(index) function pointer
    fetch_function__AdasisMap__ehp_profile_longs,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__ehp_profile_longs,  // assign(index, value) function pointer
    resize_function__AdasisMap__ehp_profile_longs  // resize(index) function pointer
  },
  {
    "link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Link>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, link),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__link,  // size() function pointer
    get_const_function__AdasisMap__link,  // get_const(index) function pointer
    get_function__AdasisMap__link,  // get(index) function pointer
    fetch_function__AdasisMap__link,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__link,  // assign(index, value) function pointer
    resize_function__AdasisMap__link  // resize(index) function pointer
  },
  {
    "node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Node>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, node),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__node,  // size() function pointer
    get_const_function__AdasisMap__node,  // get_const(index) function pointer
    get_function__AdasisMap__node,  // get(index) function pointer
    fetch_function__AdasisMap__node,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__node,  // assign(index, value) function pointer
    resize_function__AdasisMap__node  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeaturePointById>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, feature_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__feature_points,  // size() function pointer
    get_const_function__AdasisMap__feature_points,  // get_const(index) function pointer
    get_function__AdasisMap__feature_points,  // get(index) function pointer
    fetch_function__AdasisMap__feature_points,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__feature_points,  // assign(index, value) function pointer
    resize_function__AdasisMap__feature_points  // resize(index) function pointer
  },
  {
    "lanes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LANE>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, lanes),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__lanes,  // size() function pointer
    get_const_function__AdasisMap__lanes,  // get_const(index) function pointer
    get_function__AdasisMap__lanes,  // get(index) function pointer
    fetch_function__AdasisMap__lanes,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__lanes,  // assign(index, value) function pointer
    resize_function__AdasisMap__lanes  // resize(index) function pointer
  },
  {
    "stoplines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::StopLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, stoplines),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__stoplines,  // size() function pointer
    get_const_function__AdasisMap__stoplines,  // get_const(index) function pointer
    get_function__AdasisMap__stoplines,  // get(index) function pointer
    fetch_function__AdasisMap__stoplines,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__stoplines,  // assign(index, value) function pointer
    resize_function__AdasisMap__stoplines  // resize(index) function pointer
  },
  {
    "intersection_road_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::IntersectionRoadNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, intersection_road_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__intersection_road_nodes,  // size() function pointer
    get_const_function__AdasisMap__intersection_road_nodes,  // get_const(index) function pointer
    get_function__AdasisMap__intersection_road_nodes,  // get(index) function pointer
    fetch_function__AdasisMap__intersection_road_nodes,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__intersection_road_nodes,  // assign(index, value) function pointer
    resize_function__AdasisMap__intersection_road_nodes  // resize(index) function pointer
  },
  {
    "intersection_roads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::IntersectionRoad>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, intersection_roads),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdasisMap__intersection_roads,  // size() function pointer
    get_const_function__AdasisMap__intersection_roads,  // get_const(index) function pointer
    get_function__AdasisMap__intersection_roads,  // get(index) function pointer
    fetch_function__AdasisMap__intersection_roads,  // fetch(index, &value) function pointer
    assign_function__AdasisMap__intersection_roads,  // assign(index, value) function pointer
    resize_function__AdasisMap__intersection_roads  // resize(index) function pointer
  },
  {
    "position_match_link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::PositionMatchLink>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, position_match_link),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "heterogeneous_match_link",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::HeterogeneousMatchLink>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, heterogeneous_match_link),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "route_guide_response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RouteGuideResponse>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, route_guide_response),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "j6m_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::J6mData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::AdasisMap, j6m_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AdasisMap_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "AdasisMap",  // message name
  24,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::AdasisMap),
  AdasisMap_message_member_array,  // message members
  AdasisMap_init_function,  // function to initialize message memory (memory has to be allocated)
  AdasisMap_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AdasisMap_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AdasisMap_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::AdasisMap>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::AdasisMap_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, AdasisMap)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::AdasisMap_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
