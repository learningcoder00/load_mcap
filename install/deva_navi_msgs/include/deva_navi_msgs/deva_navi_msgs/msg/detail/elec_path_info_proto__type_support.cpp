// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.hpp"
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

void ElecPathInfoProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::ElecPathInfoProto(_init);
}

void ElecPathInfoProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::ElecPathInfoProto *>(message_memory);
  typed_message->~ElecPathInfoProto();
}

size_t size_function__ElecPathInfoProto__m_link_consume(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ElecPathInfoProto__m_link_consume(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ElecPathInfoProto__m_link_consume(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ElecPathInfoProto__m_link_consume(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__ElecPathInfoProto__m_link_consume(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__ElecPathInfoProto__m_link_consume(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__ElecPathInfoProto__m_link_consume(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__ElecPathInfoProto__m_link_consume(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ElecPathInfoProto__m_link_distance(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ElecPathInfoProto__m_link_distance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ElecPathInfoProto__m_link_distance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ElecPathInfoProto__m_link_distance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int64_t *>(
    get_const_function__ElecPathInfoProto__m_link_distance(untyped_member, index));
  auto & value = *reinterpret_cast<int64_t *>(untyped_value);
  value = item;
}

void assign_function__ElecPathInfoProto__m_link_distance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int64_t *>(
    get_function__ElecPathInfoProto__m_link_distance(untyped_member, index));
  const auto & value = *reinterpret_cast<const int64_t *>(untyped_value);
  item = value;
}

void resize_function__ElecPathInfoProto__m_link_distance(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ElecPathInfoProto__m_via_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ElecPathInfoProto__m_via_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return &member[index];
}

void * get_function__ElecPathInfoProto__m_via_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  return &member[index];
}

void fetch_function__ElecPathInfoProto__m_via_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_navi_msgs::msg::ViaPointInfoProto *>(
    get_const_function__ElecPathInfoProto__m_via_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_navi_msgs::msg::ViaPointInfoProto *>(untyped_value);
  value = item;
}

void assign_function__ElecPathInfoProto__m_via_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_navi_msgs::msg::ViaPointInfoProto *>(
    get_function__ElecPathInfoProto__m_via_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_navi_msgs::msg::ViaPointInfoProto *>(untyped_value);
  item = value;
}

void resize_function__ElecPathInfoProto__m_via_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_navi_msgs::msg::ViaPointInfoProto> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ElecPathInfoProto_message_member_array[11] = {
  {
    "m_is_elec_route",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_is_elec_route),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_link_consume_size_word",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_link_consume_size_word),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_traffic_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_traffic_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_energy_unit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_energy_unit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_path_flag",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_path_flag),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_energy_sum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_energy_sum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_link_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_link_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "m_link_consume",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_link_consume),  // bytes offset in struct
    nullptr,  // default value
    size_function__ElecPathInfoProto__m_link_consume,  // size() function pointer
    get_const_function__ElecPathInfoProto__m_link_consume,  // get_const(index) function pointer
    get_function__ElecPathInfoProto__m_link_consume,  // get(index) function pointer
    fetch_function__ElecPathInfoProto__m_link_consume,  // fetch(index, &value) function pointer
    assign_function__ElecPathInfoProto__m_link_consume,  // assign(index, value) function pointer
    resize_function__ElecPathInfoProto__m_link_consume  // resize(index) function pointer
  },
  {
    "m_link_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_link_distance),  // bytes offset in struct
    nullptr,  // default value
    size_function__ElecPathInfoProto__m_link_distance,  // size() function pointer
    get_const_function__ElecPathInfoProto__m_link_distance,  // get_const(index) function pointer
    get_function__ElecPathInfoProto__m_link_distance,  // get(index) function pointer
    fetch_function__ElecPathInfoProto__m_link_distance,  // fetch(index, &value) function pointer
    assign_function__ElecPathInfoProto__m_link_distance,  // assign(index, value) function pointer
    resize_function__ElecPathInfoProto__m_link_distance  // resize(index) function pointer
  },
  {
    "m_via_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::ViaPointInfoProto>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_via_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__ElecPathInfoProto__m_via_info,  // size() function pointer
    get_const_function__ElecPathInfoProto__m_via_info,  // get_const(index) function pointer
    get_function__ElecPathInfoProto__m_via_info,  // get(index) function pointer
    fetch_function__ElecPathInfoProto__m_via_info,  // fetch(index, &value) function pointer
    assign_function__ElecPathInfoProto__m_via_info,  // assign(index, value) function pointer
    resize_function__ElecPathInfoProto__m_via_info  // resize(index) function pointer
  },
  {
    "m_energy_consume",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::EnergyConsumeProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::ElecPathInfoProto, m_energy_consume),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ElecPathInfoProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "ElecPathInfoProto",  // message name
  11,  // number of fields
  sizeof(deva_navi_msgs::msg::ElecPathInfoProto),
  ElecPathInfoProto_message_member_array,  // message members
  ElecPathInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  ElecPathInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ElecPathInfoProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ElecPathInfoProto_message_members,
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
get_message_type_support_handle<deva_navi_msgs::msg::ElecPathInfoProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::ElecPathInfoProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, ElecPathInfoProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::ElecPathInfoProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
