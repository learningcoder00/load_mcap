// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_plug_msg/msg/detail/exception_monitor__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rviz_plug_msg
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ExceptionMonitor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_plug_msg::msg::ExceptionMonitor(_init);
}

void ExceptionMonitor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_plug_msg::msg::ExceptionMonitor *>(message_memory);
  typed_message->~ExceptionMonitor();
}

size_t size_function__ExceptionMonitor__exception_content(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ExceptionMonitor__exception_content(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ExceptionMonitor__exception_content(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ExceptionMonitor__exception_content(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ExceptionMonitor__exception_content(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ExceptionMonitor__exception_content(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ExceptionMonitor__exception_content(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ExceptionMonitor__exception_content(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ExceptionMonitor_message_member_array[1] = {
  {
    "exception_content",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::ExceptionMonitor, exception_content),  // bytes offset in struct
    nullptr,  // default value
    size_function__ExceptionMonitor__exception_content,  // size() function pointer
    get_const_function__ExceptionMonitor__exception_content,  // get_const(index) function pointer
    get_function__ExceptionMonitor__exception_content,  // get(index) function pointer
    fetch_function__ExceptionMonitor__exception_content,  // fetch(index, &value) function pointer
    assign_function__ExceptionMonitor__exception_content,  // assign(index, value) function pointer
    resize_function__ExceptionMonitor__exception_content  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ExceptionMonitor_message_members = {
  "rviz_plug_msg::msg",  // message namespace
  "ExceptionMonitor",  // message name
  1,  // number of fields
  sizeof(rviz_plug_msg::msg::ExceptionMonitor),
  ExceptionMonitor_message_member_array,  // message members
  ExceptionMonitor_init_function,  // function to initialize message memory (memory has to be allocated)
  ExceptionMonitor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ExceptionMonitor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ExceptionMonitor_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rviz_plug_msg


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rviz_plug_msg::msg::ExceptionMonitor>()
{
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::ExceptionMonitor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_plug_msg, msg, ExceptionMonitor)() {
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::ExceptionMonitor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
