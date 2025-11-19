// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/String2Int.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/string2_int__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_planning_msgs2
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void String2Int_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::String2Int(_init);
}

void String2Int_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::String2Int *>(message_memory);
  typed_message->~String2Int();
}

size_t size_function__String2Int__value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__String2Int__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__String2Int__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__String2Int__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__String2Int__value(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__String2Int__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__String2Int__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__String2Int__value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember String2Int_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::String2Int, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::String2Int, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__String2Int__value,  // size() function pointer
    get_const_function__String2Int__value,  // get_const(index) function pointer
    get_function__String2Int__value,  // get(index) function pointer
    fetch_function__String2Int__value,  // fetch(index, &value) function pointer
    assign_function__String2Int__value,  // assign(index, value) function pointer
    resize_function__String2Int__value  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers String2Int_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "String2Int",  // message name
  2,  // number of fields
  sizeof(deva_planning_msgs2::msg::String2Int),
  String2Int_message_member_array,  // message members
  String2Int_init_function,  // function to initialize message memory (memory has to be allocated)
  String2Int_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t String2Int_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &String2Int_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_planning_msgs2


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs2::msg::String2Int>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::String2Int_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, String2Int)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::String2Int_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
