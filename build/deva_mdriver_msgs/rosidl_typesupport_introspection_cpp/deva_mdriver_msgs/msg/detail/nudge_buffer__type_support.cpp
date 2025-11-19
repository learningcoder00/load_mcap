// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_mdriver_msgs/msg/detail/nudge_buffer__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_mdriver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void NudgeBuffer_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_mdriver_msgs::msg::NudgeBuffer(_init);
}

void NudgeBuffer_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_mdriver_msgs::msg::NudgeBuffer *>(message_memory);
  typed_message->~NudgeBuffer();
}

size_t size_function__NudgeBuffer__obstacle_nudge_buffer(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NudgeBuffer__obstacle_nudge_buffer(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer> *>(untyped_member);
  return &member[index];
}

void * get_function__NudgeBuffer__obstacle_nudge_buffer(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer> *>(untyped_member);
  return &member[index];
}

void fetch_function__NudgeBuffer__obstacle_nudge_buffer(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_mdriver_msgs::msg::ObstacleNudgeBuffer *>(
    get_const_function__NudgeBuffer__obstacle_nudge_buffer(untyped_member, index));
  auto & value = *reinterpret_cast<deva_mdriver_msgs::msg::ObstacleNudgeBuffer *>(untyped_value);
  value = item;
}

void assign_function__NudgeBuffer__obstacle_nudge_buffer(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_mdriver_msgs::msg::ObstacleNudgeBuffer *>(
    get_function__NudgeBuffer__obstacle_nudge_buffer(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_mdriver_msgs::msg::ObstacleNudgeBuffer *>(untyped_value);
  item = value;
}

void resize_function__NudgeBuffer__obstacle_nudge_buffer(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NudgeBuffer_message_member_array[1] = {
  {
    "obstacle_nudge_buffer",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::ObstacleNudgeBuffer>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::NudgeBuffer, obstacle_nudge_buffer),  // bytes offset in struct
    nullptr,  // default value
    size_function__NudgeBuffer__obstacle_nudge_buffer,  // size() function pointer
    get_const_function__NudgeBuffer__obstacle_nudge_buffer,  // get_const(index) function pointer
    get_function__NudgeBuffer__obstacle_nudge_buffer,  // get(index) function pointer
    fetch_function__NudgeBuffer__obstacle_nudge_buffer,  // fetch(index, &value) function pointer
    assign_function__NudgeBuffer__obstacle_nudge_buffer,  // assign(index, value) function pointer
    resize_function__NudgeBuffer__obstacle_nudge_buffer  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NudgeBuffer_message_members = {
  "deva_mdriver_msgs::msg",  // message namespace
  "NudgeBuffer",  // message name
  1,  // number of fields
  sizeof(deva_mdriver_msgs::msg::NudgeBuffer),
  NudgeBuffer_message_member_array,  // message members
  NudgeBuffer_init_function,  // function to initialize message memory (memory has to be allocated)
  NudgeBuffer_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NudgeBuffer_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NudgeBuffer_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_mdriver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_mdriver_msgs::msg::NudgeBuffer>()
{
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::NudgeBuffer_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_mdriver_msgs, msg, NudgeBuffer)() {
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::NudgeBuffer_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
