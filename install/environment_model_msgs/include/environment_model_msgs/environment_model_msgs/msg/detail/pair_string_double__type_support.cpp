// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/PairStringDouble.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/pair_string_double__struct.hpp"
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

void PairStringDouble_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::PairStringDouble(_init);
}

void PairStringDouble_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::PairStringDouble *>(message_memory);
  typed_message->~PairStringDouble();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PairStringDouble_message_member_array[2] = {
  {
    "first",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::PairStringDouble, first),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "second",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::PairStringDouble, second),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PairStringDouble_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "PairStringDouble",  // message name
  2,  // number of fields
  sizeof(environment_model_msgs::msg::PairStringDouble),
  PairStringDouble_message_member_array,  // message members
  PairStringDouble_init_function,  // function to initialize message memory (memory has to be allocated)
  PairStringDouble_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PairStringDouble_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PairStringDouble_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::PairStringDouble>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::PairStringDouble_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, PairStringDouble)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::PairStringDouble_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
