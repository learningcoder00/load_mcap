// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.hpp"
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

void RGLaneInfoResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::RGLaneInfoResult(_init);
}

void RGLaneInfoResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::RGLaneInfoResult *>(message_memory);
  typed_message->~RGLaneInfoResult();
}

size_t size_function__RGLaneInfoResult__arrow(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__arrow(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__arrow(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__arrow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGLaneInfoResult__arrow(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__arrow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGLaneInfoResult__arrow(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__arrow(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGLaneInfoResult__flag(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__flag(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__flag(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGLaneInfoResult__flag(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGLaneInfoResult__flag(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__flag(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGLaneInfoResult__rg_lane_result_property(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__rg_lane_result_property(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__rg_lane_result_property(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__rg_lane_result_property(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGLaneInfoResult__rg_lane_result_property(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__rg_lane_result_property(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGLaneInfoResult__rg_lane_result_property(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__rg_lane_result_property(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGLaneInfoResult__recommend(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__recommend(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__recommend(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__recommend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__RGLaneInfoResult__recommend(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__recommend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__RGLaneInfoResult__recommend(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__recommend(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGLaneInfoResult__additional_lane_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__additional_lane_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__additional_lane_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__additional_lane_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(
    get_const_function__RGLaneInfoResult__additional_lane_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__additional_lane_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(
    get_function__RGLaneInfoResult__additional_lane_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__additional_lane_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RGLaneInfoResult__lane_info_raw_link_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RGLaneInfoResult__lane_info_raw_link_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__RGLaneInfoResult__lane_info_raw_link_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__RGLaneInfoResult__lane_info_raw_link_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__RGLaneInfoResult__lane_info_raw_link_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__RGLaneInfoResult__lane_info_raw_link_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__RGLaneInfoResult__lane_info_raw_link_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__RGLaneInfoResult__lane_info_raw_link_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RGLaneInfoResult_message_member_array[9] = {
  {
    "raw_link_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, raw_link_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arrow",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, arrow),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__arrow,  // size() function pointer
    get_const_function__RGLaneInfoResult__arrow,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__arrow,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__arrow,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__arrow,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__arrow  // resize(index) function pointer
  },
  {
    "flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, flag),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__flag,  // size() function pointer
    get_const_function__RGLaneInfoResult__flag,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__flag,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__flag,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__flag,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__flag  // resize(index) function pointer
  },
  {
    "rg_lane_result_property",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, rg_lane_result_property),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__rg_lane_result_property,  // size() function pointer
    get_const_function__RGLaneInfoResult__rg_lane_result_property,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__rg_lane_result_property,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__rg_lane_result_property,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__rg_lane_result_property,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__rg_lane_result_property  // resize(index) function pointer
  },
  {
    "recommend",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, recommend),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__recommend,  // size() function pointer
    get_const_function__RGLaneInfoResult__recommend,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__recommend,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__recommend,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__recommend,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__recommend  // resize(index) function pointer
  },
  {
    "active_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, active_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "additional_lane_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, additional_lane_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__additional_lane_info,  // size() function pointer
    get_const_function__RGLaneInfoResult__additional_lane_info,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__additional_lane_info,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__additional_lane_info,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__additional_lane_info,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__additional_lane_info  // resize(index) function pointer
  },
  {
    "lane_info_raw_link_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, lane_info_raw_link_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__RGLaneInfoResult__lane_info_raw_link_ids,  // size() function pointer
    get_const_function__RGLaneInfoResult__lane_info_raw_link_ids,  // get_const(index) function pointer
    get_function__RGLaneInfoResult__lane_info_raw_link_ids,  // get(index) function pointer
    fetch_function__RGLaneInfoResult__lane_info_raw_link_ids,  // fetch(index, &value) function pointer
    assign_function__RGLaneInfoResult__lane_info_raw_link_ids,  // assign(index, value) function pointer
    resize_function__RGLaneInfoResult__lane_info_raw_link_ids  // resize(index) function pointer
  },
  {
    "pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::RoutePos>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RGLaneInfoResult, pos),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RGLaneInfoResult_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "RGLaneInfoResult",  // message name
  9,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::RGLaneInfoResult),
  RGLaneInfoResult_message_member_array,  // message members
  RGLaneInfoResult_init_function,  // function to initialize message memory (memory has to be allocated)
  RGLaneInfoResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RGLaneInfoResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RGLaneInfoResult_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::RGLaneInfoResult>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RGLaneInfoResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, RGLaneInfoResult)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RGLaneInfoResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
