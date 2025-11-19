// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_perception_msgs:msg/TrafficLightArrayNew.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_perception_msgs/msg/detail/traffic_light_array_new__struct.hpp"
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

void TrafficLightArrayNew_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_perception_msgs::msg::TrafficLightArrayNew(_init);
}

void TrafficLightArrayNew_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_perception_msgs::msg::TrafficLightArrayNew *>(message_memory);
  typed_message->~TrafficLightArrayNew();
}

size_t size_function__TrafficLightArrayNew__traffic_lights(const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * get_const_function__TrafficLightArrayNew__traffic_lights(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<deva_perception_msgs::msg::TrafficLightNew, 12> *>(untyped_member);
  return &member[index];
}

void * get_function__TrafficLightArrayNew__traffic_lights(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<deva_perception_msgs::msg::TrafficLightNew, 12> *>(untyped_member);
  return &member[index];
}

void fetch_function__TrafficLightArrayNew__traffic_lights(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_perception_msgs::msg::TrafficLightNew *>(
    get_const_function__TrafficLightArrayNew__traffic_lights(untyped_member, index));
  auto & value = *reinterpret_cast<deva_perception_msgs::msg::TrafficLightNew *>(untyped_value);
  value = item;
}

void assign_function__TrafficLightArrayNew__traffic_lights(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_perception_msgs::msg::TrafficLightNew *>(
    get_function__TrafficLightArrayNew__traffic_lights(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_perception_msgs::msg::TrafficLightNew *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TrafficLightArrayNew_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficLightArrayNew, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "traffic_lights",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::TrafficLightNew>(),  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs::msg::TrafficLightArrayNew, traffic_lights),  // bytes offset in struct
    nullptr,  // default value
    size_function__TrafficLightArrayNew__traffic_lights,  // size() function pointer
    get_const_function__TrafficLightArrayNew__traffic_lights,  // get_const(index) function pointer
    get_function__TrafficLightArrayNew__traffic_lights,  // get(index) function pointer
    fetch_function__TrafficLightArrayNew__traffic_lights,  // fetch(index, &value) function pointer
    assign_function__TrafficLightArrayNew__traffic_lights,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TrafficLightArrayNew_message_members = {
  "deva_perception_msgs::msg",  // message namespace
  "TrafficLightArrayNew",  // message name
  2,  // number of fields
  sizeof(deva_perception_msgs::msg::TrafficLightArrayNew),
  TrafficLightArrayNew_message_member_array,  // message members
  TrafficLightArrayNew_init_function,  // function to initialize message memory (memory has to be allocated)
  TrafficLightArrayNew_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TrafficLightArrayNew_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TrafficLightArrayNew_message_members,
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
get_message_type_support_handle<deva_perception_msgs::msg::TrafficLightArrayNew>()
{
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightArrayNew_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_perception_msgs, msg, TrafficLightArrayNew)() {
  return &::deva_perception_msgs::msg::rosidl_typesupport_introspection_cpp::TrafficLightArrayNew_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
