// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.hpp"
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

void Guidance_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_gaode_routing_msgs::msg::Guidance(_init);
}

void Guidance_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_gaode_routing_msgs::msg::Guidance *>(message_memory);
  typed_message->~Guidance();
}

size_t size_function__Guidance__pass_link_id_s(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Guidance__pass_link_id_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void * get_function__Guidance__pass_link_id_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  return &member[index];
}

void fetch_function__Guidance__pass_link_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_const_function__Guidance__pass_link_id_s(untyped_member, index));
  auto & value = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  value = item;
}

void assign_function__Guidance__pass_link_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_gaode_routing_msgs::msg::LinkIDType *>(
    get_function__Guidance__pass_link_id_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_gaode_routing_msgs::msg::LinkIDType *>(untyped_value);
  item = value;
}

void resize_function__Guidance__pass_link_id_s(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_gaode_routing_msgs::msg::LinkIDType> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Guidance_message_member_array[6] = {
  {
    "in_link_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, in_link_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::NodeIDType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pass_link_id_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::LinkIDType>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, pass_link_id_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__Guidance__pass_link_id_s,  // size() function pointer
    get_const_function__Guidance__pass_link_id_s,  // get_const(index) function pointer
    get_function__Guidance__pass_link_id_s,  // get(index) function pointer
    fetch_function__Guidance__pass_link_id_s,  // fetch(index, &value) function pointer
    assign_function__Guidance__pass_link_id_s,  // assign(index, value) function pointer
    resize_function__Guidance__pass_link_id_s  // resize(index) function pointer
  },
  {
    "k_warning_sign",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::KWarningSign>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, k_warning_sign),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "k_lane_meta_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::KLaneMetaInfo>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, k_lane_meta_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "k_lsl",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_gaode_routing_msgs::msg::KLsl>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs::msg::Guidance, k_lsl),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Guidance_message_members = {
  "deva_gaode_routing_msgs::msg",  // message namespace
  "Guidance",  // message name
  6,  // number of fields
  sizeof(deva_gaode_routing_msgs::msg::Guidance),
  Guidance_message_member_array,  // message members
  Guidance_init_function,  // function to initialize message memory (memory has to be allocated)
  Guidance_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Guidance_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Guidance_message_members,
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
get_message_type_support_handle<deva_gaode_routing_msgs::msg::Guidance>()
{
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Guidance_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_gaode_routing_msgs, msg, Guidance)() {
  return &::deva_gaode_routing_msgs::msg::rosidl_typesupport_introspection_cpp::Guidance_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
