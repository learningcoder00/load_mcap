// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/LaneBindInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/lane_bind_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_planning_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneBindInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::LaneBindInfo(_init);
}

void LaneBindInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::LaneBindInfo *>(message_memory);
  typed_message->~LaneBindInfo();
}

size_t size_function__LaneBindInfo__binded_obs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneBindInfo__binded_obs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneBindInfo__binded_obs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneBindInfo__binded_obs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(
    get_const_function__LaneBindInfo__binded_obs(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  value = item;
}

void assign_function__LaneBindInfo__binded_obs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(
    get_function__LaneBindInfo__binded_obs(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  item = value;
}

void resize_function__LaneBindInfo__binded_obs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneBindInfo__sl_boundary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2SLBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneBindInfo__sl_boundary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2SLBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneBindInfo__sl_boundary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2SLBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneBindInfo__sl_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2SLBoundary *>(
    get_const_function__LaneBindInfo__sl_boundary(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2SLBoundary *>(untyped_value);
  value = item;
}

void assign_function__LaneBindInfo__sl_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2SLBoundary *>(
    get_function__LaneBindInfo__sl_boundary(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2SLBoundary *>(untyped_value);
  item = value;
}

void resize_function__LaneBindInfo__sl_boundary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2SLBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneBindInfo__scalable_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneBindInfo__scalable_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneBindInfo__scalable_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneBindInfo__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__LaneBindInfo__scalable_flags(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__LaneBindInfo__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__LaneBindInfo__scalable_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__LaneBindInfo__scalable_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LaneBindInfo__scalable_multimap(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneBindInfo__scalable_multimap(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneBindInfo__scalable_multimap(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__LaneBindInfo__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(
    get_const_function__LaneBindInfo__scalable_multimap(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(untyped_value);
  value = item;
}

void assign_function__LaneBindInfo__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(
    get_function__LaneBindInfo__scalable_multimap(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(untyped_value);
  item = value;
}

void resize_function__LaneBindInfo__scalable_multimap(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneBindInfo_message_member_array[5] = {
  {
    "ref_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::LaneBindInfo, ref_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "binded_obs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::UInt2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::LaneBindInfo, binded_obs),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneBindInfo__binded_obs,  // size() function pointer
    get_const_function__LaneBindInfo__binded_obs,  // get_const(index) function pointer
    get_function__LaneBindInfo__binded_obs,  // get(index) function pointer
    fetch_function__LaneBindInfo__binded_obs,  // fetch(index, &value) function pointer
    assign_function__LaneBindInfo__binded_obs,  // assign(index, value) function pointer
    resize_function__LaneBindInfo__binded_obs  // resize(index) function pointer
  },
  {
    "sl_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2SLBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::LaneBindInfo, sl_boundary),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneBindInfo__sl_boundary,  // size() function pointer
    get_const_function__LaneBindInfo__sl_boundary,  // get_const(index) function pointer
    get_function__LaneBindInfo__sl_boundary,  // get(index) function pointer
    fetch_function__LaneBindInfo__sl_boundary,  // fetch(index, &value) function pointer
    assign_function__LaneBindInfo__sl_boundary,  // assign(index, value) function pointer
    resize_function__LaneBindInfo__sl_boundary  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::LaneBindInfo, scalable_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneBindInfo__scalable_flags,  // size() function pointer
    get_const_function__LaneBindInfo__scalable_flags,  // get_const(index) function pointer
    get_function__LaneBindInfo__scalable_flags,  // get(index) function pointer
    fetch_function__LaneBindInfo__scalable_flags,  // fetch(index, &value) function pointer
    assign_function__LaneBindInfo__scalable_flags,  // assign(index, value) function pointer
    resize_function__LaneBindInfo__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::LaneBindInfo, scalable_multimap),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneBindInfo__scalable_multimap,  // size() function pointer
    get_const_function__LaneBindInfo__scalable_multimap,  // get_const(index) function pointer
    get_function__LaneBindInfo__scalable_multimap,  // get(index) function pointer
    fetch_function__LaneBindInfo__scalable_multimap,  // fetch(index, &value) function pointer
    assign_function__LaneBindInfo__scalable_multimap,  // assign(index, value) function pointer
    resize_function__LaneBindInfo__scalable_multimap  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneBindInfo_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "LaneBindInfo",  // message name
  5,  // number of fields
  sizeof(deva_planning_msgs2::msg::LaneBindInfo),
  LaneBindInfo_message_member_array,  // message members
  LaneBindInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneBindInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneBindInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneBindInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::LaneBindInfo>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::LaneBindInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, LaneBindInfo)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::LaneBindInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
