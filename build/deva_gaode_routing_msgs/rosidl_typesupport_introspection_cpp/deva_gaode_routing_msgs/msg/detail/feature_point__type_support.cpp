// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.hpp"
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

void FeaturePoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::FeaturePoint(_init);
}

void FeaturePoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::FeaturePoint *>(message_memory);
  typed_message->~FeaturePoint();
}

size_t size_function__FeaturePoint__feature_point_id_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeaturePoint__feature_point_id_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__FeaturePoint__feature_point_id_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeaturePoint__feature_point_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__FeaturePoint__feature_point_id_s(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__FeaturePoint__feature_point_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__FeaturePoint__feature_point_id_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__FeaturePoint__feature_point_id_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FeaturePoint__feature_point_id_s_by_link_id(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FeaturePoint__feature_point_id_s_by_link_id(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__FeaturePoint__feature_point_id_s_by_link_id(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__FeaturePoint__feature_point_id_s_by_link_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_const_function__FeaturePoint__feature_point_id_s_by_link_id(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  value = item;
}

void assign_function__FeaturePoint__feature_point_id_s_by_link_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::FeatureIDType *>(
    get_function__FeaturePoint__feature_point_id_s_by_link_id(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::FeatureIDType *>(untyped_value);
  item = value;
}

void resize_function__FeaturePoint__feature_point_id_s_by_link_id(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::FeatureIDType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FeaturePoint_message_member_array[3] = {
  {
    "feature_point_id_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::FeaturePoint, feature_point_id_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeaturePoint__feature_point_id_s,  // size() function pointer
    get_const_function__FeaturePoint__feature_point_id_s,  // get_const(index) function pointer
    get_function__FeaturePoint__feature_point_id_s,  // get(index) function pointer
    fetch_function__FeaturePoint__feature_point_id_s,  // fetch(index, &value) function pointer
    assign_function__FeaturePoint__feature_point_id_s,  // assign(index, value) function pointer
    resize_function__FeaturePoint__feature_point_id_s  // resize(index) function pointer
  },
  {
    "feature_point_id_s_by_link_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeatureIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::FeaturePoint, feature_point_id_s_by_link_id),  // bytes offset in struct
    nullptr,  // default value
    size_function__FeaturePoint__feature_point_id_s_by_link_id,  // size() function pointer
    get_const_function__FeaturePoint__feature_point_id_s_by_link_id,  // get_const(index) function pointer
    get_function__FeaturePoint__feature_point_id_s_by_link_id,  // get(index) function pointer
    fetch_function__FeaturePoint__feature_point_id_s_by_link_id,  // fetch(index, &value) function pointer
    assign_function__FeaturePoint__feature_point_id_s_by_link_id,  // assign(index, value) function pointer
    resize_function__FeaturePoint__feature_point_id_s_by_link_id  // resize(index) function pointer
  },
  {
    "feature_point_id_by_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeaturePointById>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::FeaturePoint, feature_point_id_by_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FeaturePoint_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "FeaturePoint",  // message name
  3,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::FeaturePoint),
  FeaturePoint_message_member_array,  // message members
  FeaturePoint_init_function,  // function to initialize message memory (memory has to be allocated)
  FeaturePoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FeaturePoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FeaturePoint_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::FeaturePoint>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::FeaturePoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, FeaturePoint)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::FeaturePoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
