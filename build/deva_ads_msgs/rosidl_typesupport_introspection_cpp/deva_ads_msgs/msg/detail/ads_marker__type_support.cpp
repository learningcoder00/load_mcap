// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_ads_msgs/msg/detail/ads_marker__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_ads_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AdsMarker_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_ads_msgs::msg::AdsMarker(_init);
}

void AdsMarker_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_ads_msgs::msg::AdsMarker *>(message_memory);
  typed_message->~AdsMarker();
}

size_t size_function__AdsMarker__points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdsMarker__points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void * get_function__AdsMarker__points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdsMarker__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const geometry_msgs::msg::Point *>(
    get_const_function__AdsMarker__points(untyped_member, index));
  auto & value = *reinterpret_cast<geometry_msgs::msg::Point *>(untyped_value);
  value = item;
}

void assign_function__AdsMarker__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<geometry_msgs::msg::Point *>(
    get_function__AdsMarker__points(untyped_member, index));
  const auto & value = *reinterpret_cast<const geometry_msgs::msg::Point *>(untyped_value);
  item = value;
}

void resize_function__AdsMarker__points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<geometry_msgs::msg::Point> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AdsMarker__detail(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_ads_msgs::msg::AdsInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdsMarker__detail(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_ads_msgs::msg::AdsInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__AdsMarker__detail(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_ads_msgs::msg::AdsInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdsMarker__detail(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_ads_msgs::msg::AdsInfo *>(
    get_const_function__AdsMarker__detail(untyped_member, index));
  auto & value = *reinterpret_cast<deva_ads_msgs::msg::AdsInfo *>(untyped_value);
  value = item;
}

void assign_function__AdsMarker__detail(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_ads_msgs::msg::AdsInfo *>(
    get_function__AdsMarker__detail(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_ads_msgs::msg::AdsInfo *>(untyped_value);
  item = value;
}

void resize_function__AdsMarker__detail(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_ads_msgs::msg::AdsInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AdsMarker_message_member_array[4] = {
  {
    "points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarker, points),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdsMarker__points,  // size() function pointer
    get_const_function__AdsMarker__points,  // get_const(index) function pointer
    get_function__AdsMarker__points,  // get(index) function pointer
    fetch_function__AdsMarker__points,  // fetch(index, &value) function pointer
    assign_function__AdsMarker__points,  // assign(index, value) function pointer
    resize_function__AdsMarker__points  // resize(index) function pointer
  },
  {
    "text",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarker, text),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "clickable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarker, clickable),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "detail",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_ads_msgs::msg::AdsInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarker, detail),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdsMarker__detail,  // size() function pointer
    get_const_function__AdsMarker__detail,  // get_const(index) function pointer
    get_function__AdsMarker__detail,  // get(index) function pointer
    fetch_function__AdsMarker__detail,  // fetch(index, &value) function pointer
    assign_function__AdsMarker__detail,  // assign(index, value) function pointer
    resize_function__AdsMarker__detail  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AdsMarker_message_members = {
  "deva_ads_msgs::msg",  // message namespace
  "AdsMarker",  // message name
  4,  // number of fields
  sizeof(deva_ads_msgs::msg::AdsMarker),
  AdsMarker_message_member_array,  // message members
  AdsMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  AdsMarker_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AdsMarker_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AdsMarker_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_ads_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_ads_msgs::msg::AdsMarker>()
{
  return &::deva_ads_msgs::msg::rosidl_typesupport_introspection_cpp::AdsMarker_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_ads_msgs, msg, AdsMarker)() {
  return &::deva_ads_msgs::msg::rosidl_typesupport_introspection_cpp::AdsMarker_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
