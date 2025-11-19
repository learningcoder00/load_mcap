// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_function_msgs/msg/detail/e2e_failsafe_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_function_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void E2eFailsafeArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_function_msgs::msg::E2eFailsafeArray(_init);
}

void E2eFailsafeArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_function_msgs::msg::E2eFailsafeArray *>(message_memory);
  typed_message->~E2eFailsafeArray();
}

size_t size_function__E2eFailsafeArray__e2e_failsafe_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_function_msgs::msg::E2eFailsafe> *>(untyped_member);
  return member->size();
}

const void * get_const_function__E2eFailsafeArray__e2e_failsafe_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_function_msgs::msg::E2eFailsafe> *>(untyped_member);
  return &member[index];
}

void * get_function__E2eFailsafeArray__e2e_failsafe_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_function_msgs::msg::E2eFailsafe> *>(untyped_member);
  return &member[index];
}

void fetch_function__E2eFailsafeArray__e2e_failsafe_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_function_msgs::msg::E2eFailsafe *>(
    get_const_function__E2eFailsafeArray__e2e_failsafe_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_function_msgs::msg::E2eFailsafe *>(untyped_value);
  value = item;
}

void assign_function__E2eFailsafeArray__e2e_failsafe_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_function_msgs::msg::E2eFailsafe *>(
    get_function__E2eFailsafeArray__e2e_failsafe_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_function_msgs::msg::E2eFailsafe *>(untyped_value);
  item = value;
}

void resize_function__E2eFailsafeArray__e2e_failsafe_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_function_msgs::msg::E2eFailsafe> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember E2eFailsafeArray_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::E2eFailsafeArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::E2eFailsafeArray, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "e2e_failsafe_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_function_msgs::msg::E2eFailsafe>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::E2eFailsafeArray, e2e_failsafe_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__E2eFailsafeArray__e2e_failsafe_array,  // size() function pointer
    get_const_function__E2eFailsafeArray__e2e_failsafe_array,  // get_const(index) function pointer
    get_function__E2eFailsafeArray__e2e_failsafe_array,  // get(index) function pointer
    fetch_function__E2eFailsafeArray__e2e_failsafe_array,  // fetch(index, &value) function pointer
    assign_function__E2eFailsafeArray__e2e_failsafe_array,  // assign(index, value) function pointer
    resize_function__E2eFailsafeArray__e2e_failsafe_array  // resize(index) function pointer
  },
  {
    "sum_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::E2eFailsafeArray, sum_result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers E2eFailsafeArray_message_members = {
  "deva_function_msgs::msg",  // message namespace
  "E2eFailsafeArray",  // message name
  4,  // number of fields
  sizeof(deva_function_msgs::msg::E2eFailsafeArray),
  E2eFailsafeArray_message_member_array,  // message members
  E2eFailsafeArray_init_function,  // function to initialize message memory (memory has to be allocated)
  E2eFailsafeArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t E2eFailsafeArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &E2eFailsafeArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_function_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::E2eFailsafeArray>()
{
  return &::deva_function_msgs::msg::rosidl_typesupport_introspection_cpp::E2eFailsafeArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_function_msgs, msg, E2eFailsafeArray)() {
  return &::deva_function_msgs::msg::rosidl_typesupport_introspection_cpp::E2eFailsafeArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
