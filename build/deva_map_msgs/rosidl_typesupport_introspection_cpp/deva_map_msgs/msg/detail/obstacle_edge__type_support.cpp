// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_map_msgs/msg/detail/obstacle_edge__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_map_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ObstacleEdge_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_map_msgs::msg::ObstacleEdge(_init);
}

void ObstacleEdge_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_map_msgs::msg::ObstacleEdge *>(message_memory);
  typed_message->~ObstacleEdge();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ObstacleEdge_message_member_array[1] = {
  {
    "world_coord_center_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs::msg::ObstacleEdge, world_coord_center_point),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ObstacleEdge_message_members = {
  "deva_map_msgs::msg",  // message namespace
  "ObstacleEdge",  // message name
  1,  // number of fields
  sizeof(deva_map_msgs::msg::ObstacleEdge),
  ObstacleEdge_message_member_array,  // message members
  ObstacleEdge_init_function,  // function to initialize message memory (memory has to be allocated)
  ObstacleEdge_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ObstacleEdge_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ObstacleEdge_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_map_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_map_msgs::msg::ObstacleEdge>()
{
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleEdge_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_map_msgs, msg, ObstacleEdge)() {
  return &::deva_map_msgs::msg::rosidl_typesupport_introspection_cpp::ObstacleEdge_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
