// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_navi_msgs:msg/GroupTimeRangeProto.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_navi_msgs/msg/detail/group_time_range_proto__struct.hpp"
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

void GroupTimeRangeProto_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_navi_msgs::msg::GroupTimeRangeProto(_init);
}

void GroupTimeRangeProto_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_navi_msgs::msg::GroupTimeRangeProto *>(message_memory);
  typed_message->~GroupTimeRangeProto();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GroupTimeRangeProto_message_member_array[2] = {
  {
    "start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::GroupTimeRangeProto, start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs::msg::GroupTimeRangeProto, end_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GroupTimeRangeProto_message_members = {
  "deva_navi_msgs::msg",  // message namespace
  "GroupTimeRangeProto",  // message name
  2,  // number of fields
  sizeof(deva_navi_msgs::msg::GroupTimeRangeProto),
  GroupTimeRangeProto_message_member_array,  // message members
  GroupTimeRangeProto_init_function,  // function to initialize message memory (memory has to be allocated)
  GroupTimeRangeProto_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GroupTimeRangeProto_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GroupTimeRangeProto_message_members,
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
get_message_type_support_handle<deva_navi_msgs::msg::GroupTimeRangeProto>()
{
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::GroupTimeRangeProto_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_navi_msgs, msg, GroupTimeRangeProto)() {
  return &::deva_navi_msgs::msg::rosidl_typesupport_introspection_cpp::GroupTimeRangeProto_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
