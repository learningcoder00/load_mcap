// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.hpp"
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

void ChannelLaneLine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::ChannelLaneLine(_init);
}

void ChannelLaneLine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::ChannelLaneLine *>(message_memory);
  typed_message->~ChannelLaneLine();
}

size_t size_function__ChannelLaneLine__markingequation_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneLine__markingequation_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneLine__markingequation_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneLine__markingequation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::EquationCurve *>(
    get_const_function__ChannelLaneLine__markingequation_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::EquationCurve *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneLine__markingequation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::EquationCurve *>(
    get_function__ChannelLaneLine__markingequation_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::EquationCurve *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneLine__markingequation_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::EquationCurve> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChannelLaneLine__markingpoint_vec(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelLaneLine__markingpoint_vec(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelLaneLine__markingpoint_vec(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelLaneLine__markingpoint_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(
    get_const_function__ChannelLaneLine__markingpoint_vec(untyped_member, index));
  auto & value = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(untyped_value);
  value = item;
}

void assign_function__ChannelLaneLine__markingpoint_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_common_msgs::msg::Point2d *>(
    get_function__ChannelLaneLine__markingpoint_vec(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_common_msgs::msg::Point2d *>(untyped_value);
  item = value;
}

void resize_function__ChannelLaneLine__markingpoint_vec(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_common_msgs::msg::Point2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChannelLaneLine_message_member_array[3] = {
  {
    "available",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneLine, available),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "markingequation_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::EquationCurve>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneLine, markingequation_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneLine__markingequation_vec,  // size() function pointer
    get_const_function__ChannelLaneLine__markingequation_vec,  // get_const(index) function pointer
    get_function__ChannelLaneLine__markingequation_vec,  // get(index) function pointer
    fetch_function__ChannelLaneLine__markingequation_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneLine__markingequation_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneLine__markingequation_vec  // resize(index) function pointer
  },
  {
    "markingpoint_vec",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Point2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ChannelLaneLine, markingpoint_vec),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelLaneLine__markingpoint_vec,  // size() function pointer
    get_const_function__ChannelLaneLine__markingpoint_vec,  // get_const(index) function pointer
    get_function__ChannelLaneLine__markingpoint_vec,  // get(index) function pointer
    fetch_function__ChannelLaneLine__markingpoint_vec,  // fetch(index, &value) function pointer
    assign_function__ChannelLaneLine__markingpoint_vec,  // assign(index, value) function pointer
    resize_function__ChannelLaneLine__markingpoint_vec  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChannelLaneLine_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "ChannelLaneLine",  // message name
  3,  // number of fields
  sizeof(deva_map_msgs::msg::ChannelLaneLine),
  ChannelLaneLine_message_member_array,  // message members
  ChannelLaneLine_init_function,  // function to initialize message memory (memory has to be allocated)
  ChannelLaneLine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChannelLaneLine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChannelLaneLine_message_members,
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
get_message_type_support_handle<deva_map_msgs::msg::ChannelLaneLine>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneLine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, ChannelLaneLine)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelLaneLine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
