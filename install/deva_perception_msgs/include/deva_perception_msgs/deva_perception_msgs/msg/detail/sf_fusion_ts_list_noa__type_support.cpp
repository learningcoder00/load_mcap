// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/SFFusionTSListNOA.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_ts_list_noa__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SFFusionTSListNOA_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::SFFusionTSListNOA(_init);
}

void SFFusionTSListNOA_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::SFFusionTSListNOA *>(message_memory);
  typed_message->~SFFusionTSListNOA();
}

size_t size_function__SFFusionTSListNOA__reversed(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SFFusionTSListNOA__reversed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTSListNOA__reversed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTSListNOA__reversed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SFFusionTSListNOA__reversed(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTSListNOA__reversed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SFFusionTSListNOA__reversed(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTSListNOA__trafficsign(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__SFFusionTSListNOA__trafficsign(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::SFFusionTSNOA, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTSListNOA__trafficsign(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::SFFusionTSNOA, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTSListNOA__trafficsign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTSNOA *>(
    get_const_function__SFFusionTSListNOA__trafficsign(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTSNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTSListNOA__trafficsign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTSNOA *>(
    get_function__SFFusionTSListNOA__trafficsign(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTSNOA *>(untyped_value);
  item = value;
}

size_t size_function__SFFusionTSListNOA__trafficsign_all(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::SFFusionTSNOA> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SFFusionTSListNOA__trafficsign_all(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::SFFusionTSNOA> *>(untyped_member);
  return &member[index];
}

void * get_function__SFFusionTSListNOA__trafficsign_all(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::SFFusionTSNOA> *>(untyped_member);
  return &member[index];
}

void fetch_function__SFFusionTSListNOA__trafficsign_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTSNOA *>(
    get_const_function__SFFusionTSListNOA__trafficsign_all(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTSNOA *>(untyped_value);
  value = item;
}

void assign_function__SFFusionTSListNOA__trafficsign_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::SFFusionTSNOA *>(
    get_function__SFFusionTSListNOA__trafficsign_all(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::SFFusionTSNOA *>(untyped_value);
  item = value;
}

void resize_function__SFFusionTSListNOA__trafficsign_all(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::SFFusionTSNOA> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SFFusionTSListNOA_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, timestamp),  // bytes offset in struct
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
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, framenum),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reversed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, reversed),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTSListNOA__reversed,  // size() function pointer
    get_const_function__SFFusionTSListNOA__reversed,  // get_const(index) function pointer
    get_function__SFFusionTSListNOA__reversed,  // get(index) function pointer
    fetch_function__SFFusionTSListNOA__reversed,  // fetch(index, &value) function pointer
    assign_function__SFFusionTSListNOA__reversed,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trafficsign",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTSNOA>(),  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, trafficsign),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTSListNOA__trafficsign,  // size() function pointer
    get_const_function__SFFusionTSListNOA__trafficsign,  // get_const(index) function pointer
    get_function__SFFusionTSListNOA__trafficsign,  // get(index) function pointer
    fetch_function__SFFusionTSListNOA__trafficsign,  // fetch(index, &value) function pointer
    assign_function__SFFusionTSListNOA__trafficsign,  // assign(index, value) function pointer
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
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, validsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trafficsign_all",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTSNOA>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, trafficsign_all),  // bytes offset in struct
    nullptr,  // default value
    size_function__SFFusionTSListNOA__trafficsign_all,  // size() function pointer
    get_const_function__SFFusionTSListNOA__trafficsign_all,  // get_const(index) function pointer
    get_function__SFFusionTSListNOA__trafficsign_all,  // get(index) function pointer
    fetch_function__SFFusionTSListNOA__trafficsign_all,  // fetch(index, &value) function pointer
    assign_function__SFFusionTSListNOA__trafficsign_all,  // assign(index, value) function pointer
    resize_function__SFFusionTSListNOA__trafficsign_all  // resize(index) function pointer
  },
  {
    "all_validsize",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::SFFusionTSListNOA, all_validsize),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SFFusionTSListNOA_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "SFFusionTSListNOA",  // message name
  8,  // number of fields
  sizeof(deva_perception_msgs::msg::SFFusionTSListNOA),
  SFFusionTSListNOA_message_member_array,  // message members
  SFFusionTSListNOA_init_function,  // function to initialize message memory (memory has to be allocated)
  SFFusionTSListNOA_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SFFusionTSListNOA_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SFFusionTSListNOA_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::SFFusionTSListNOA>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionTSListNOA_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, SFFusionTSListNOA)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::SFFusionTSListNOA_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
