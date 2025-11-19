// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fault_diagnosis/msg/detail/odd_status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fault_diagnosis
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void OddStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fault_diagnosis::msg::OddStatus(_init);
}

void OddStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fault_diagnosis::msg::OddStatus *>(message_memory);
  typed_message->~OddStatus();
}

size_t size_function__OddStatus__fault_reasons(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OddStatus__fault_reasons(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__OddStatus__fault_reasons(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__OddStatus__fault_reasons(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__OddStatus__fault_reasons(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__OddStatus__fault_reasons(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__OddStatus__fault_reasons(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__OddStatus__fault_reasons(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OddStatus_message_member_array[3] = {
  {
    "function_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::OddStatus, function_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::OddStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fault_reasons",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::OddStatus, fault_reasons),  // bytes offset in struct
    nullptr,  // default value
    size_function__OddStatus__fault_reasons,  // size() function pointer
    get_const_function__OddStatus__fault_reasons,  // get_const(index) function pointer
    get_function__OddStatus__fault_reasons,  // get(index) function pointer
    fetch_function__OddStatus__fault_reasons,  // fetch(index, &value) function pointer
    assign_function__OddStatus__fault_reasons,  // assign(index, value) function pointer
    resize_function__OddStatus__fault_reasons  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OddStatus_message_members = {
  "fault_diagnosis::msg",  // message namespace
  "OddStatus",  // message name
  3,  // number of fields
  sizeof(fault_diagnosis::msg::OddStatus),
  OddStatus_message_member_array,  // message members
  OddStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  OddStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OddStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OddStatus_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fault_diagnosis


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fault_diagnosis::msg::OddStatus>()
{
  return &::fault_diagnosis::msg::rosidl_typesupport_introspection_cpp::OddStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fault_diagnosis, msg, OddStatus)() {
  return &::fault_diagnosis::msg::rosidl_typesupport_introspection_cpp::OddStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
