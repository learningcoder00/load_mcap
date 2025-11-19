// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/PlanningFail.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/planning_fail__struct.hpp"
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

void PlanningFail_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::PlanningFail(_init);
}

void PlanningFail_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::PlanningFail *>(message_memory);
  typed_message->~PlanningFail();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningFail_message_member_array[2] = {
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningFail, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningFail, request),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningFail_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "PlanningFail",  // message name
  2,  // number of fields
  sizeof(deva_planning_msgs2::msg::PlanningFail),
  PlanningFail_message_member_array,  // message members
  PlanningFail_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningFail_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningFail_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningFail_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::PlanningFail>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningFail_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, PlanningFail)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningFail_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
