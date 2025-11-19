// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/structured_link__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace environment_model_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void StructuredLink_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::StructuredLink(_init);
}

void StructuredLink_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::StructuredLink *>(message_memory);
  typed_message->~StructuredLink();
}

size_t size_function__StructuredLink__prev_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__prev_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__prev_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__prev_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__StructuredLink__prev_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__prev_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__StructuredLink__prev_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__prev_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StructuredLink__succ_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__succ_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__succ_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__succ_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__StructuredLink__succ_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__succ_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__StructuredLink__succ_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__succ_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StructuredLink__feature_point_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__feature_point_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__feature_point_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__feature_point_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__StructuredLink__feature_point_ids(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__feature_point_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__StructuredLink__feature_point_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__feature_point_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StructuredLink__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(
    get_const_function__StructuredLink__points(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(
    get_function__StructuredLink__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StructuredLink__guidances(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__guidances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__guidances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__guidances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Guidance *>(
    get_const_function__StructuredLink__guidances(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Guidance *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__guidances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Guidance *>(
    get_function__StructuredLink__guidances(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Guidance *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__guidances(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Guidance> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StructuredLink__link_kinds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StructuredLink__link_kinds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StructuredLink__link_kinds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StructuredLink__link_kinds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__StructuredLink__link_kinds(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__StructuredLink__link_kinds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__StructuredLink__link_kinds(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__StructuredLink__link_kinds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StructuredLink_message_member_array[18] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "prev_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, prev_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__prev_ids,  // size() function pointer
    get_const_function__StructuredLink__prev_ids,  // get_const(index) function pointer
    get_function__StructuredLink__prev_ids,  // get(index) function pointer
    fetch_function__StructuredLink__prev_ids,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__prev_ids,  // assign(index, value) function pointer
    resize_function__StructuredLink__prev_ids  // resize(index) function pointer
  },
  {
    "succ_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, succ_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__succ_ids,  // size() function pointer
    get_const_function__StructuredLink__succ_ids,  // get_const(index) function pointer
    get_function__StructuredLink__succ_ids,  // get(index) function pointer
    fetch_function__StructuredLink__succ_ids,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__succ_ids,  // assign(index, value) function pointer
    resize_function__StructuredLink__succ_ids  // resize(index) function pointer
  },
  {
    "feature_point_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, feature_point_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__feature_point_ids,  // size() function pointer
    get_const_function__StructuredLink__feature_point_ids,  // get_const(index) function pointer
    get_function__StructuredLink__feature_point_ids,  // get(index) function pointer
    fetch_function__StructuredLink__feature_point_ids,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__feature_point_ids,  // assign(index, value) function pointer
    resize_function__StructuredLink__feature_point_ids  // resize(index) function pointer
  },
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec3d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__points,  // size() function pointer
    get_const_function__StructuredLink__points,  // get_const(index) function pointer
    get_function__StructuredLink__points,  // get(index) function pointer
    fetch_function__StructuredLink__points,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__points,  // assign(index, value) function pointer
    resize_function__StructuredLink__points  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, direction),  // bytes offset in struct
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
    offsetof(environment_model_msgs::msg::StructuredLink, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit_s2e",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, speed_limit_s2e),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed_limit_e2s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, speed_limit_e2s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coverage_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, coverage_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, lane_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_num_s2e",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, lane_num_s2e),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_num_e2s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, lane_num_e2s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "relationship_with_junction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, relationship_with_junction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "guidances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Guidance>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, guidances),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__guidances,  // size() function pointer
    get_const_function__StructuredLink__guidances,  // get_const(index) function pointer
    get_function__StructuredLink__guidances,  // get(index) function pointer
    fetch_function__StructuredLink__guidances,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__guidances,  // assign(index, value) function pointer
    resize_function__StructuredLink__guidances  // resize(index) function pointer
  },
  {
    "is_on_routing",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, is_on_routing),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "need_revert",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, need_revert),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "link_kinds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::StructuredLink, link_kinds),  // bytes offset in struct
    nullptr,  // default value
    size_function__StructuredLink__link_kinds,  // size() function pointer
    get_const_function__StructuredLink__link_kinds,  // get_const(index) function pointer
    get_function__StructuredLink__link_kinds,  // get(index) function pointer
    fetch_function__StructuredLink__link_kinds,  // fetch(index, &value) function pointer
    assign_function__StructuredLink__link_kinds,  // assign(index, value) function pointer
    resize_function__StructuredLink__link_kinds  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StructuredLink_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "StructuredLink",  // message name
  18,  // number of fields
  sizeof(environment_model_msgs::msg::StructuredLink),
  StructuredLink_message_member_array,  // message members
  StructuredLink_init_function,  // function to initialize message memory (memory has to be allocated)
  StructuredLink_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StructuredLink_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StructuredLink_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace environment_model_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::StructuredLink>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::StructuredLink_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, StructuredLink)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::StructuredLink_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
