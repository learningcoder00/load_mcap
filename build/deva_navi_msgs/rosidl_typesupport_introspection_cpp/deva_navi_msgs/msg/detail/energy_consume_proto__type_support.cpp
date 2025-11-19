// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_navi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EnergyConsumeProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::EnergyConsumeProto(_init);
}

void EnergyConsumeProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::EnergyConsumeProto *>(message_memory);
  typed_message->~EnergyConsumeProto();
}

size_t size_function__EnergyConsumeProto__vehiclechargeleft(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnergyConsumeProto__vehiclechargeleft(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EnergyConsumeProto__vehiclechargeleft(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnergyConsumeProto__vehiclechargeleft(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__EnergyConsumeProto__vehiclechargeleft(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__EnergyConsumeProto__vehiclechargeleft(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__EnergyConsumeProto__vehiclechargeleft(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__EnergyConsumeProto__vehiclechargeleft(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnergyConsumeProto_message_member_array[3] = {
  {
    "energy_end_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::EnergyConsumeProto, energy_end_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "energy_end_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::EnergyEndPointProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::EnergyConsumeProto, energy_end_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehiclechargeleft",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::EnergyConsumeProto, vehiclechargeleft),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnergyConsumeProto__vehiclechargeleft,  // size() function pointer
    get_const_function__EnergyConsumeProto__vehiclechargeleft,  // get_const(index) function pointer
    get_function__EnergyConsumeProto__vehiclechargeleft,  // get(index) function pointer
    fetch_function__EnergyConsumeProto__vehiclechargeleft,  // fetch(index, &value) function pointer
    assign_function__EnergyConsumeProto__vehiclechargeleft,  // assign(index, value) function pointer
    resize_function__EnergyConsumeProto__vehiclechargeleft  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnergyConsumeProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "EnergyConsumeProto",  // message name
  3,  // number of fields
  sizeof(deva_navi_msgs::msg::EnergyConsumeProto),
  EnergyConsumeProto_message_member_array,  // message members
  EnergyConsumeProto_init_function,  // function to initialize message memory (memory has to be allocated)
  EnergyConsumeProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnergyConsumeProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnergyConsumeProto_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_navi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::EnergyConsumeProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::EnergyConsumeProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, EnergyConsumeProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::EnergyConsumeProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
