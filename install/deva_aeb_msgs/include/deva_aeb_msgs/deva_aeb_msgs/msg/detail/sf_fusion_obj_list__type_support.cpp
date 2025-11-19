// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/SFFusionObjList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_aeb_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SFFusionObjList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_aeb_msgs::msg::SFFusionObjList(_init);
}

void SFFusionObjList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_aeb_msgs::msg::SFFusionObjList *>(message_memory);
  typed_message->~SFFusionObjList();
}

size_t size_function__SFFusionObjList__reserved(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__SFFusionObjList__reserved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionObjList__reserved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionObjList__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFFusionObjList__reserved(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFFusionObjList__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFFusionObjList__reserved(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionObjList__obj(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__SFFusionObjList__obj(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_aeb_msgs::msg::SFFusionObjNOA, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionObjList__obj(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_aeb_msgs::msg::SFFusionObjNOA, 64> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionObjList__obj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_aeb_msgs::msg::SFFusionObjNOA *>(
    get_const_function__SFFusionObjList__obj(untyped_member, index));
  auto & value = *reinterpret_cast<deva_aeb_msgs::msg::SFFusionObjNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionObjList__obj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_aeb_msgs::msg::SFFusionObjNOA *>(
    get_function__SFFusionObjList__obj(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_aeb_msgs::msg::SFFusionObjNOA *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SFFusionObjList_message_member_array[6] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "framenum",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "snsrstate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, snsrstate),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, reserved),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionObjList__reserved,  // size() function pointer
    get_const_function__SFFusionObjList__reserved,  // get_const(index) function pointer
    get_function__SFFusionObjList__reserved,  // get(index) function pointer
    fetch_function__SFFusionObjList__reserved,  // fetch(index, &value) function pointer
    assign_function__SFFusionObjList__reserved,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obj",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionObjNOA>(),  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, obj),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionObjList__obj,  // size() function pointer
    get_const_function__SFFusionObjList__obj,  // get_const(index) function pointer
    get_function__SFFusionObjList__obj,  // get(index) function pointer
    fetch_function__SFFusionObjList__obj,  // fetch(index, &value) function pointer
    assign_function__SFFusionObjList__obj,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "validsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::SFFusionObjList, validsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SFFusionObjList_message_members = {
  "deva_aeb_msgs::msg",  // message namespace
  "SFFusionObjList",  // message name
  6,  // number of fields
  sizeof(deva_aeb_msgs::msg::SFFusionObjList),
  SFFusionObjList_message_member_array,  // message members
  SFFusionObjList_init_function,  // function to initialize message memory (memory has to be allocated)
  SFFusionObjList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SFFusionObjList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SFFusionObjList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::SFFusionObjList>()
{
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionObjList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_aeb_msgs, msg, SFFusionObjList)() {
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionObjList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
