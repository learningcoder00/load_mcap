// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/HeterogeneousMatchLink.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__struct.hpp"
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

void HeterogeneousMatchLink_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::HeterogeneousMatchLink(_init);
}

void HeterogeneousMatchLink_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::HeterogeneousMatchLink *>(message_memory);
  typed_message->~HeterogeneousMatchLink();
}

size_t size_function__HeterogeneousMatchLink__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HeterogeneousMatchLink__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__HeterogeneousMatchLink__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__HeterogeneousMatchLink__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__HeterogeneousMatchLink__links(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__HeterogeneousMatchLink__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__HeterogeneousMatchLink__links(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__HeterogeneousMatchLink__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HeterogeneousMatchLink_message_member_array[1] = {
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::HeterogeneousMatchLink, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__HeterogeneousMatchLink__links,  // size() function pointer
    get_const_function__HeterogeneousMatchLink__links,  // get_const(index) function pointer
    get_function__HeterogeneousMatchLink__links,  // get(index) function pointer
    fetch_function__HeterogeneousMatchLink__links,  // fetch(index, &value) function pointer
    assign_function__HeterogeneousMatchLink__links,  // assign(index, value) function pointer
    resize_function__HeterogeneousMatchLink__links  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HeterogeneousMatchLink_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "HeterogeneousMatchLink",  // message name
  1,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::HeterogeneousMatchLink),
  HeterogeneousMatchLink_message_member_array,  // message members
  HeterogeneousMatchLink_init_function,  // function to initialize message memory (memory has to be allocated)
  HeterogeneousMatchLink_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HeterogeneousMatchLink_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HeterogeneousMatchLink_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::HeterogeneousMatchLink>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::HeterogeneousMatchLink_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, HeterogeneousMatchLink)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::HeterogeneousMatchLink_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
