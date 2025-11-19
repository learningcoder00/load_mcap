// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.hpp"
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

void AdsMarkerArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_ads_msgs::msg::AdsMarkerArray(_init);
}

void AdsMarkerArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_ads_msgs::msg::AdsMarkerArray *>(message_memory);
  typed_message->~AdsMarkerArray();
}

size_t size_function__AdsMarkerArray__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_ads_msgs::msg::AdsMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdsMarkerArray__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_ads_msgs::msg::AdsMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__AdsMarkerArray__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_ads_msgs::msg::AdsMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__AdsMarkerArray__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_ads_msgs::msg::AdsMarker *>(
    get_const_function__AdsMarkerArray__markers(untyped_member, index));
  auto & value = *reinterpret_cast<deva_ads_msgs::msg::AdsMarker *>(untyped_value);
  value = item;
}

void assign_function__AdsMarkerArray__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_ads_msgs::msg::AdsMarker *>(
    get_function__AdsMarkerArray__markers(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_ads_msgs::msg::AdsMarker *>(untyped_value);
  item = value;
}

void resize_function__AdsMarkerArray__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_ads_msgs::msg::AdsMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AdsMarkerArray_message_member_array[6] = {
  {
    "uuid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, uuid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "classes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, classes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::ColorRGBA>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_ads_msgs::msg::AdsMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs::msg::AdsMarkerArray, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdsMarkerArray__markers,  // size() function pointer
    get_const_function__AdsMarkerArray__markers,  // get_const(index) function pointer
    get_function__AdsMarkerArray__markers,  // get(index) function pointer
    fetch_function__AdsMarkerArray__markers,  // fetch(index, &value) function pointer
    assign_function__AdsMarkerArray__markers,  // assign(index, value) function pointer
    resize_function__AdsMarkerArray__markers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AdsMarkerArray_message_members = {
  "deva_ads_msgs::msg",  // message namespace
  "AdsMarkerArray",  // message name
  6,  // number of fields
  sizeof(deva_ads_msgs::msg::AdsMarkerArray),
  AdsMarkerArray_message_member_array,  // message members
  AdsMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  AdsMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AdsMarkerArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AdsMarkerArray_message_members,
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
get_message_type_support_handle<deva_ads_msgs::msg::AdsMarkerArray>()
{
  return &::deva_ads_msgs::msg::rosidl_typesupport_introspection_cpp::AdsMarkerArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_ads_msgs, msg, AdsMarkerArray)() {
  return &::deva_ads_msgs::msg::rosidl_typesupport_introspection_cpp::AdsMarkerArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
