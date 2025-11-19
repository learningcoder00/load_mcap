// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/ChannelArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/channel_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_perception_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChannelArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::ChannelArray(_init);
}

void ChannelArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::ChannelArray *>(message_memory);
  typed_message->~ChannelArray();
}

size_t size_function__ChannelArray__traffic_channel_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_perception_msgs::msg::Channel> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChannelArray__traffic_channel_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_perception_msgs::msg::Channel> *>(untyped_member);
  return &member[index];
}

void * get_function__ChannelArray__traffic_channel_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_perception_msgs::msg::Channel> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChannelArray__traffic_channel_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::Channel *>(
    get_const_function__ChannelArray__traffic_channel_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::Channel *>(untyped_value);
  value = item;
}

void assign_function__ChannelArray__traffic_channel_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::Channel *>(
    get_function__ChannelArray__traffic_channel_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::Channel *>(untyped_value);
  item = value;
}

void resize_function__ChannelArray__traffic_channel_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_perception_msgs::msg::Channel> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChannelArray_message_member_array[5] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ChannelArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_channel_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::Channel>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ChannelArray, traffic_channel_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChannelArray__traffic_channel_array,  // size() function pointer
    get_const_function__ChannelArray__traffic_channel_array,  // get_const(index) function pointer
    get_function__ChannelArray__traffic_channel_array,  // get(index) function pointer
    fetch_function__ChannelArray__traffic_channel_array,  // fetch(index, &value) function pointer
    assign_function__ChannelArray__traffic_channel_array,  // assign(index, value) function pointer
    resize_function__ChannelArray__traffic_channel_array  // resize(index) function pointer
  },
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ChannelArray, position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "orientation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ChannelArray, orientation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::ChannelArray, state_message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChannelArray_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "ChannelArray",  // message name
  5,  // number of fields
  sizeof(deva_perception_msgs::msg::ChannelArray),
  ChannelArray_message_member_array,  // message members
  ChannelArray_init_function,  // function to initialize message memory (memory has to be allocated)
  ChannelArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChannelArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChannelArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_perception_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_perception_msgs::msg::ChannelArray>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, ChannelArray)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::ChannelArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
