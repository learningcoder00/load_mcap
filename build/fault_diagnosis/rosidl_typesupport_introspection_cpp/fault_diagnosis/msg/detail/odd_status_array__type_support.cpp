// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fault_diagnosis/msg/detail/odd_status_array__struct.hpp"
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

void ODDStatusArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fault_diagnosis::msg::ODDStatusArray(_init);
}

void ODDStatusArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fault_diagnosis::msg::ODDStatusArray *>(message_memory);
  typed_message->~ODDStatusArray();
}

size_t size_function__ODDStatusArray__functions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<fault_diagnosis::msg::OddStatus> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODDStatusArray__functions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<fault_diagnosis::msg::OddStatus> *>(untyped_member);
  return &member[index];
}

void * get_function__ODDStatusArray__functions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<fault_diagnosis::msg::OddStatus> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODDStatusArray__functions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const fault_diagnosis::msg::OddStatus *>(
    get_const_function__ODDStatusArray__functions(untyped_member, index));
  auto & value = *reinterpret_cast<fault_diagnosis::msg::OddStatus *>(untyped_value);
  value = item;
}

void assign_function__ODDStatusArray__functions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<fault_diagnosis::msg::OddStatus *>(
    get_function__ODDStatusArray__functions(untyped_member, index));
  const auto & value = *reinterpret_cast<const fault_diagnosis::msg::OddStatus *>(untyped_value);
  item = value;
}

void resize_function__ODDStatusArray__functions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<fault_diagnosis::msg::OddStatus> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODDStatusArray__global_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODDStatusArray__global_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ODDStatusArray__global_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODDStatusArray__global_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ODDStatusArray__global_faults(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ODDStatusArray__global_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ODDStatusArray__global_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ODDStatusArray__global_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ODDStatusArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::ODDStatusArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "functions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<fault_diagnosis::msg::OddStatus>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::ODDStatusArray, functions),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODDStatusArray__functions,  // size() function pointer
    get_const_function__ODDStatusArray__functions,  // get_const(index) function pointer
    get_function__ODDStatusArray__functions,  // get(index) function pointer
    fetch_function__ODDStatusArray__functions,  // fetch(index, &value) function pointer
    assign_function__ODDStatusArray__functions,  // assign(index, value) function pointer
    resize_function__ODDStatusArray__functions  // resize(index) function pointer
  },
  {
    "global_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fault_diagnosis::msg::ODDStatusArray, global_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODDStatusArray__global_faults,  // size() function pointer
    get_const_function__ODDStatusArray__global_faults,  // get_const(index) function pointer
    get_function__ODDStatusArray__global_faults,  // get(index) function pointer
    fetch_function__ODDStatusArray__global_faults,  // fetch(index, &value) function pointer
    assign_function__ODDStatusArray__global_faults,  // assign(index, value) function pointer
    resize_function__ODDStatusArray__global_faults  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ODDStatusArray_message_members = {
  "fault_diagnosis::msg",  // message namespace
  "ODDStatusArray",  // message name
  3,  // number of fields
  sizeof(fault_diagnosis::msg::ODDStatusArray),
  ODDStatusArray_message_member_array,  // message members
  ODDStatusArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ODDStatusArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ODDStatusArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ODDStatusArray_message_members,
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
get_message_type_support_handle<fault_diagnosis::msg::ODDStatusArray>()
{
  return &::fault_diagnosis::msg::rosidl_typesupport_introspection_cpp::ODDStatusArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fault_diagnosis, msg, ODDStatusArray)() {
  return &::fault_diagnosis::msg::rosidl_typesupport_introspection_cpp::ODDStatusArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
