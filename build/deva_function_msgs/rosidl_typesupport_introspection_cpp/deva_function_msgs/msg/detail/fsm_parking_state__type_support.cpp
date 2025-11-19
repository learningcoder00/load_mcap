// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/FsmParkingState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_function_msgs/msg/detail/fsm_parking_state__struct.hpp"
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

void FsmParkingState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_function_msgs::msg::FsmParkingState(_init);
}

void FsmParkingState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_function_msgs::msg::FsmParkingState *>(message_memory);
  typed_message->~FsmParkingState();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FsmParkingState_message_member_array[2] = {
  {
    "publish_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::FsmParkingState, publish_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fsm_apa_current_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs::msg::FsmParkingState, fsm_apa_current_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FsmParkingState_message_members = {
  "deva_function_msgs::msg",  // message namespace
  "FsmParkingState",  // message name
  2,  // number of fields
  sizeof(deva_function_msgs::msg::FsmParkingState),
  FsmParkingState_message_member_array,  // message members
  FsmParkingState_init_function,  // function to initialize message memory (memory has to be allocated)
  FsmParkingState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FsmParkingState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FsmParkingState_message_members,
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
get_message_type_support_handle<deva_function_msgs::msg::FsmParkingState>()
{
  return &::deva_function_msgs::msg::rosidl_typesupport_introspection_cpp::FsmParkingState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_function_msgs, msg, FsmParkingState)() {
  return &::deva_function_msgs::msg::rosidl_typesupport_introspection_cpp::FsmParkingState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
