// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_signal__struct.hpp"
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

void EnvSignal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvSignal(_init);
}

void EnvSignal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvSignal *>(message_memory);
  typed_message->~EnvSignal();
}

size_t size_function__EnvSignal__polygen(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvSignal__polygen(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvSignal__polygen(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvSignal__polygen(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(
    get_const_function__EnvSignal__polygen(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(untyped_value);
  value = item;
}

void assign_function__EnvSignal__polygen(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(
    get_function__EnvSignal__polygen(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(untyped_value);
  item = value;
}

void resize_function__EnvSignal__polygen(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvSignal__virtual_brake_point(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvSignal__virtual_brake_point(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvSignal__virtual_brake_point(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvSignal__virtual_brake_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(
    get_const_function__EnvSignal__virtual_brake_point(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(untyped_value);
  value = item;
}

void assign_function__EnvSignal__virtual_brake_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec3d *>(
    get_function__EnvSignal__virtual_brake_point(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec3d *>(untyped_value);
  item = value;
}

void resize_function__EnvSignal__virtual_brake_point(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec3d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvSignal_message_member_array[8] = {
  {
    "enum_color",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, enum_color),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "remain_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, remain_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enum_shape_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, enum_shape_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "polygen",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec3d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, polygen),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvSignal__polygen,  // size() function pointer
    get_const_function__EnvSignal__polygen,  // get_const(index) function pointer
    get_function__EnvSignal__polygen,  // get(index) function pointer
    fetch_function__EnvSignal__polygen,  // fetch(index, &value) function pointer
    assign_function__EnvSignal__polygen,  // assign(index, value) function pointer
    resize_function__EnvSignal__polygen  // resize(index) function pointer
  },
  {
    "virtual_brake_point",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec3d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, virtual_brake_point),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvSignal__virtual_brake_point,  // size() function pointer
    get_const_function__EnvSignal__virtual_brake_point,  // get_const(index) function pointer
    get_function__EnvSignal__virtual_brake_point,  // get(index) function pointer
    fetch_function__EnvSignal__virtual_brake_point,  // fetch(index, &value) function pointer
    assign_function__EnvSignal__virtual_brake_point,  // assign(index, value) function pointer
    resize_function__EnvSignal__virtual_brake_point  // resize(index) function pointer
  },
  {
    "blink",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, blink),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "block",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvSignal, block),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvSignal_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvSignal",  // message name
  8,  // number of fields
  sizeof(environment_model_msgs::msg::EnvSignal),
  EnvSignal_message_member_array,  // message members
  EnvSignal_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvSignal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvSignal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvSignal_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::EnvSignal>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvSignal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvSignal)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvSignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
