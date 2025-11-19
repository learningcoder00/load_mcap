// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rviz_plug_msg:msg/InfoEnum.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rviz_plug_msg/msg/detail/info_enum__struct.hpp"
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

void InfoEnum_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rviz_plug_msg::msg::InfoEnum(_init);
}

void InfoEnum_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rviz_plug_msg::msg::InfoEnum *>(message_memory);
  typed_message->~InfoEnum();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InfoEnum_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg::msg::InfoEnum, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InfoEnum_message_members = {
  "rviz_plug_msg::msg",  // message namespace
  "InfoEnum",  // message name
  1,  // number of fields
  sizeof(rviz_plug_msg::msg::InfoEnum),
  InfoEnum_message_member_array,  // message members
  InfoEnum_init_function,  // function to initialize message memory (memory has to be allocated)
  InfoEnum_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InfoEnum_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InfoEnum_message_members,
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
get_message_type_support_handle<rviz_plug_msg::msg::InfoEnum>()
{
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::InfoEnum_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rviz_plug_msg, msg, InfoEnum)() {
  return &::rviz_plug_msg::msg::rosidl_typesupport_introspection_cpp::InfoEnum_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
