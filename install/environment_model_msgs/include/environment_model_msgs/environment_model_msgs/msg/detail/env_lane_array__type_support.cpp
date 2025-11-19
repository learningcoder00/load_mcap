// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_lane_array__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace environment_model_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EnvLaneArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvLaneArray(_init);
}

void EnvLaneArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvLaneArray *>(message_memory);
  typed_message->~EnvLaneArray();
}

size_t size_function__EnvLaneArray__env_lane(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLane> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLaneArray__env_lane(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLane> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLaneArray__env_lane(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLane> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLaneArray__env_lane(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvLane *>(
    get_const_function__EnvLaneArray__env_lane(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvLane *>(untyped_value);
  value = item;
}

void assign_function__EnvLaneArray__env_lane(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvLane *>(
    get_function__EnvLaneArray__env_lane(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvLane *>(untyped_value);
  item = value;
}

void resize_function__EnvLaneArray__env_lane(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLane> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvLaneArray_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLaneArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "env_lane",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvLane>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLaneArray, env_lane),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLaneArray__env_lane,  // size() function pointer
    get_const_function__EnvLaneArray__env_lane,  // get_const(index) function pointer
    get_function__EnvLaneArray__env_lane,  // get(index) function pointer
    fetch_function__EnvLaneArray__env_lane,  // fetch(index, &value) function pointer
    assign_function__EnvLaneArray__env_lane,  // assign(index, value) function pointer
    resize_function__EnvLaneArray__env_lane  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvLaneArray_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvLaneArray",  // message name
  2,  // number of fields
  sizeof(environment_model_msgs::msg::EnvLaneArray),
  EnvLaneArray_message_member_array,  // message members
  EnvLaneArray_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvLaneArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvLaneArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvLaneArray_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace environment_model_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<environment_model_msgs::msg::EnvLaneArray>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLaneArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvLaneArray)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLaneArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
