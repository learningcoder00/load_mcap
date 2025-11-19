// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace environment_model_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EnvState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvState(_init);
}

void EnvState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvState *>(message_memory);
  typed_message->~EnvState();
}

size_t size_function__EnvState__msg(const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * get_const_function__EnvState__msg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvState__msg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 64> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvState__msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__EnvState__msg(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__EnvState__msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__EnvState__msg(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvState_message_member_array[3] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvState, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg_length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvState, msg_length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvState, msg),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvState__msg,  // size() function pointer
    get_const_function__EnvState__msg,  // get_const(index) function pointer
    get_function__EnvState__msg,  // get(index) function pointer
    fetch_function__EnvState__msg,  // fetch(index, &value) function pointer
    assign_function__EnvState__msg,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvState_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvState",  // message name
  3,  // number of fields
  sizeof(environment_model_msgs::msg::EnvState),
  EnvState_message_member_array,  // message members
  EnvState_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace environment_model_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::EnvState>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvState)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
