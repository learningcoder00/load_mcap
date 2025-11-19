// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/RouteGuide.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/route_guide__struct.hpp"
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

void RouteGuide_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::RouteGuide(_init);
}

void RouteGuide_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::RouteGuide *>(message_memory);
  typed_message->~RouteGuide();
}

size_t size_function__RouteGuide__routes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Route> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RouteGuide__routes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void * get_function__RouteGuide__routes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void fetch_function__RouteGuide__routes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Route *>(
    get_const_function__RouteGuide__routes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::Route *>(untyped_value);
  value = item;
}

void assign_function__RouteGuide__routes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::Route *>(
    get_function__RouteGuide__routes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::Route *>(untyped_value);
  item = value;
}

void resize_function__RouteGuide__routes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::Route> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RouteGuide_message_member_array[1] = {
  {
    "routes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::Route>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::RouteGuide, routes),  // bytes offset in struct
    nullptr,  // default value
    size_function__RouteGuide__routes,  // size() function pointer
    get_const_function__RouteGuide__routes,  // get_const(index) function pointer
    get_function__RouteGuide__routes,  // get(index) function pointer
    fetch_function__RouteGuide__routes,  // fetch(index, &value) function pointer
    assign_function__RouteGuide__routes,  // assign(index, value) function pointer
    resize_function__RouteGuide__routes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RouteGuide_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "RouteGuide",  // message name
  1,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::RouteGuide),
  RouteGuide_message_member_array,  // message members
  RouteGuide_init_function,  // function to initialize message memory (memory has to be allocated)
  RouteGuide_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RouteGuide_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RouteGuide_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::RouteGuide>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RouteGuide_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, RouteGuide)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::RouteGuide_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
