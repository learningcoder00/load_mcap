// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChannelLaneInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::ChannelLaneInfo(_init);
}

void ChannelLaneInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::ChannelLaneInfo *>(message_memory);
  typed_message->~ChannelLaneInfo();
}

size_t size_function__ChannelLaneInfo__lane_id_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneInfo__lane_id_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneInfo__lane_id_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneInfo__lane_id_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ChannelLaneInfo__lane_id_vec(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneInfo__lane_id_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ChannelLaneInfo__lane_id_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneInfo__lane_id_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneInfo__lanetype_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelLaneType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneInfo__lanetype_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelLaneType> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneInfo__lanetype_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelLaneType> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneInfo__lanetype_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ChannelLaneType *>(
    get_const_function__ChannelLaneInfo__lanetype_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ChannelLaneType *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneInfo__lanetype_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ChannelLaneType *>(
    get_function__ChannelLaneInfo__lanetype_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ChannelLaneType *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneInfo__lanetype_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelLaneType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneInfo__turntype_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelTurnType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneInfo__turntype_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelTurnType> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneInfo__turntype_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelTurnType> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneInfo__turntype_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ChannelTurnType *>(
    get_const_function__ChannelLaneInfo__turntype_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ChannelTurnType *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneInfo__turntype_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ChannelTurnType *>(
    get_function__ChannelLaneInfo__turntype_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ChannelTurnType *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneInfo__turntype_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelTurnType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneInfo__lanespeedlimitation_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneInfo__lanespeedlimitation_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneInfo__lanespeedlimitation_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneInfo__lanespeedlimitation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ChannelLaneSpeedLimitation *>(
    get_const_function__ChannelLaneInfo__lanespeedlimitation_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ChannelLaneSpeedLimitation *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneInfo__lanespeedlimitation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ChannelLaneSpeedLimitation *>(
    get_function__ChannelLaneInfo__lanespeedlimitation_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ChannelLaneSpeedLimitation *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneInfo__lanespeedlimitation_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChannelLaneInfo_message_member_array[4] = {
  {
    "lane_id_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneInfo, lane_id_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneInfo__lane_id_vec,  // size() function pointer
    get_const_function__ChannelLaneInfo__lane_id_vec,  // get_const(index) function pointer
    get_function__ChannelLaneInfo__lane_id_vec,  // get(index) function pointer
    fetch_function__ChannelLaneInfo__lane_id_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneInfo__lane_id_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneInfo__lane_id_vec  // resize(index) function pointer
  },
  {
    "lanetype_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ChannelLaneType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneInfo, lanetype_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneInfo__lanetype_vec,  // size() function pointer
    get_const_function__ChannelLaneInfo__lanetype_vec,  // get_const(index) function pointer
    get_function__ChannelLaneInfo__lanetype_vec,  // get(index) function pointer
    fetch_function__ChannelLaneInfo__lanetype_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneInfo__lanetype_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneInfo__lanetype_vec  // resize(index) function pointer
  },
  {
    "turntype_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ChannelTurnType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneInfo, turntype_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneInfo__turntype_vec,  // size() function pointer
    get_const_function__ChannelLaneInfo__turntype_vec,  // get_const(index) function pointer
    get_function__ChannelLaneInfo__turntype_vec,  // get(index) function pointer
    fetch_function__ChannelLaneInfo__turntype_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneInfo__turntype_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneInfo__turntype_vec  // resize(index) function pointer
  },
  {
    "lanespeedlimitation_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ChannelLaneSpeedLimitation>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneInfo, lanespeedlimitation_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneInfo__lanespeedlimitation_vec,  // size() function pointer
    get_const_function__ChannelLaneInfo__lanespeedlimitation_vec,  // get_const(index) function pointer
    get_function__ChannelLaneInfo__lanespeedlimitation_vec,  // get(index) function pointer
    fetch_function__ChannelLaneInfo__lanespeedlimitation_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneInfo__lanespeedlimitation_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneInfo__lanespeedlimitation_vec  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChannelLaneInfo_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "ChannelLaneInfo",  // message name
  4,  // number of fields
  sizeof(deva_map_msgs::msg::ChannelLaneInfo),
  ChannelLaneInfo_message_member_array,  // message members
  ChannelLaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ChannelLaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChannelLaneInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChannelLaneInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_map_msgs::msg::ChannelLaneInfo>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, ChannelLaneInfo)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
