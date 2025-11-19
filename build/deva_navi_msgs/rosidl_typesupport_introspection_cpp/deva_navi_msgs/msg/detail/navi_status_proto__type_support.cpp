// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/NaviStatusProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/navi_status_proto__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_navi_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NaviStatusProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::NaviStatusProto(_init);
}

void NaviStatusProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::NaviStatusProto *>(message_memory);
  typed_message->~NaviStatusProto();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NaviStatusProto_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_navi_msgs::msg::HeaderProto>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviStatusProto, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::NaviStatusProto, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NaviStatusProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "NaviStatusProto",  // message name
  2,  // number of fields
  sizeof(deva_navi_msgs::msg::NaviStatusProto),
  NaviStatusProto_message_member_array,  // message members
  NaviStatusProto_init_function,  // function to initialize message memory (memory has to be allocated)
  NaviStatusProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NaviStatusProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NaviStatusProto_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_navi_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_navi_msgs::msg::NaviStatusProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::NaviStatusProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, NaviStatusProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::NaviStatusProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
