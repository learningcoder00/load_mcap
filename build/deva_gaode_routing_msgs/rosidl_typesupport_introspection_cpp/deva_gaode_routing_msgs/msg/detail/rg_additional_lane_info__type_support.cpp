// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/RGAdditionalLaneInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.hpp"
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

void RGAdditionalLaneInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo(_init);
}

void RGAdditionalLaneInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(message_memory);
  typed_message->~RGAdditionalLaneInfo();
}

size_t size_function__RGAdditionalLaneInfo__arrow(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGAdditionalLaneInfo__arrow(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGAdditionalLaneInfo__arrow(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGAdditionalLaneInfo__arrow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGAdditionalLaneInfo__arrow(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGAdditionalLaneInfo__arrow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGAdditionalLaneInfo__arrow(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGAdditionalLaneInfo__arrow(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGAdditionalLaneInfo__flag(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGAdditionalLaneInfo__flag(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGAdditionalLaneInfo__flag(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGAdditionalLaneInfo__flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGAdditionalLaneInfo__flag(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGAdditionalLaneInfo__flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGAdditionalLaneInfo__flag(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGAdditionalLaneInfo__flag(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGAdditionalLaneInfo__rg_add_lane_property(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGAdditionalLaneInfo__rg_add_lane_property(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGAdditionalLaneInfo__rg_add_lane_property(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGAdditionalLaneInfo__rg_add_lane_property(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGAdditionalLaneInfo__rg_add_lane_property(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGAdditionalLaneInfo__rg_add_lane_property(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGAdditionalLaneInfo__rg_add_lane_property(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGAdditionalLaneInfo__rg_add_lane_property(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RGAdditionalLaneInfo_message_member_array[4] = {
  {
    "arrow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo, arrow),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGAdditionalLaneInfo__arrow,  // size() function pointer
    get_const_function__RGAdditionalLaneInfo__arrow,  // get_const(index) function pointer
    get_function__RGAdditionalLaneInfo__arrow,  // get(index) function pointer
    fetch_function__RGAdditionalLaneInfo__arrow,  // fetch(index, &value) function pointer
    assign_function__RGAdditionalLaneInfo__arrow,  // assign(index, value) function pointer
    resize_function__RGAdditionalLaneInfo__arrow  // resize(index) function pointer
  },
  {
    "flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo, flag),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGAdditionalLaneInfo__flag,  // size() function pointer
    get_const_function__RGAdditionalLaneInfo__flag,  // get_const(index) function pointer
    get_function__RGAdditionalLaneInfo__flag,  // get(index) function pointer
    fetch_function__RGAdditionalLaneInfo__flag,  // fetch(index, &value) function pointer
    assign_function__RGAdditionalLaneInfo__flag,  // assign(index, value) function pointer
    resize_function__RGAdditionalLaneInfo__flag  // resize(index) function pointer
  },
  {
    "rg_add_lane_property",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo, rg_add_lane_property),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGAdditionalLaneInfo__rg_add_lane_property,  // size() function pointer
    get_const_function__RGAdditionalLaneInfo__rg_add_lane_property,  // get_const(index) function pointer
    get_function__RGAdditionalLaneInfo__rg_add_lane_property,  // get(index) function pointer
    fetch_function__RGAdditionalLaneInfo__rg_add_lane_property,  // fetch(index, &value) function pointer
    assign_function__RGAdditionalLaneInfo__rg_add_lane_property,  // assign(index, value) function pointer
    resize_function__RGAdditionalLaneInfo__rg_add_lane_property  // resize(index) function pointer
  },
  {
    "active_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo, active_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RGAdditionalLaneInfo_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "RGAdditionalLaneInfo",  // message name
  4,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo),
  RGAdditionalLaneInfo_message_member_array,  // message members
  RGAdditionalLaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  RGAdditionalLaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RGAdditionalLaneInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RGAdditionalLaneInfo_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RGAdditionalLaneInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RGAdditionalLaneInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
