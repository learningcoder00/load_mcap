// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/ReroutingInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/rerouting_info__struct.hpp"
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

void ReroutingInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::ReroutingInfo(_init);
}

void ReroutingInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::ReroutingInfo *>(message_memory);
  typed_message->~ReroutingInfo();
}

size_t size_function__ReroutingInfo__obstacle_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_map_msgs::msg::ObstacleEdge> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReroutingInfo__obstacle_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_map_msgs::msg::ObstacleEdge> *>(untyped_member);
  return &member[index];
}

void * get_function__ReroutingInfo__obstacle_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_map_msgs::msg::ObstacleEdge> *>(untyped_member);
  return &member[index];
}

void fetch_function__ReroutingInfo__obstacle_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_map_msgs::msg::ObstacleEdge *>(
    get_const_function__ReroutingInfo__obstacle_edges(untyped_member, index));
  auto & value = *reinterpret_cast<deva_map_msgs::msg::ObstacleEdge *>(untyped_value);
  value = item;
}

void assign_function__ReroutingInfo__obstacle_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_map_msgs::msg::ObstacleEdge *>(
    get_function__ReroutingInfo__obstacle_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_map_msgs::msg::ObstacleEdge *>(untyped_value);
  item = value;
}

void resize_function__ReroutingInfo__obstacle_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_map_msgs::msg::ObstacleEdge> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReroutingInfo_message_member_array[1] = {
  {
    "obstacle_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_map_msgs::msg::ObstacleEdge>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReroutingInfo, obstacle_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReroutingInfo__obstacle_edges,  // size() function pointer
    get_const_function__ReroutingInfo__obstacle_edges,  // get_const(index) function pointer
    get_function__ReroutingInfo__obstacle_edges,  // get(index) function pointer
    fetch_function__ReroutingInfo__obstacle_edges,  // fetch(index, &value) function pointer
    assign_function__ReroutingInfo__obstacle_edges,  // assign(index, value) function pointer
    resize_function__ReroutingInfo__obstacle_edges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReroutingInfo_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "ReroutingInfo",  // message name
  1,  // number of fields
  sizeof(deva_planning_msgs2::msg::ReroutingInfo),
  ReroutingInfo_message_member_array,  // message members
  ReroutingInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  ReroutingInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReroutingInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReroutingInfo_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::ReroutingInfo>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::ReroutingInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, ReroutingInfo)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::ReroutingInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
