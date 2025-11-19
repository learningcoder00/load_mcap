// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_lane__struct.hpp"
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

void EnvLane_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvLane(_init);
}

void EnvLane_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvLane *>(message_memory);
  typed_message->~EnvLane();
}

size_t size_function__EnvLane__coords(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__coords(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__coords(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__coords(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLane__coords(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__coords(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLane__coords(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__coords(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLane__extends(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__extends(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__extends(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__extends(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLane__extends(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__extends(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLane__extends(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__extends(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLane__left_boundary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__left_boundary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__left_boundary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__left_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLane__left_boundary(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__left_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLane__left_boundary(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__left_boundary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLane__right_boundary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__right_boundary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__right_boundary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__right_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLane__right_boundary(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__right_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLane__right_boundary(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__right_boundary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLane__left_neibors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__left_neibors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__left_neibors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__left_neibors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(
    get_const_function__EnvLane__left_neibors(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__left_neibors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(
    get_function__EnvLane__left_neibors(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__left_neibors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLane__right_neibors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLane__right_neibors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLane__right_neibors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLane__right_neibors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(
    get_const_function__EnvLane__right_neibors(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(untyped_value);
  value = item;
}

void assign_function__EnvLane__right_neibors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(
    get_function__EnvLane__right_neibors(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(untyped_value);
  item = value;
}

void resize_function__EnvLane__right_neibors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvLane_message_member_array[7] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coords",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, coords),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__coords,  // size() function pointer
    get_const_function__EnvLane__coords,  // get_const(index) function pointer
    get_function__EnvLane__coords,  // get(index) function pointer
    fetch_function__EnvLane__coords,  // fetch(index, &value) function pointer
    assign_function__EnvLane__coords,  // assign(index, value) function pointer
    resize_function__EnvLane__coords  // resize(index) function pointer
  },
  {
    "extends",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, extends),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__extends,  // size() function pointer
    get_const_function__EnvLane__extends,  // get_const(index) function pointer
    get_function__EnvLane__extends,  // get(index) function pointer
    fetch_function__EnvLane__extends,  // fetch(index, &value) function pointer
    assign_function__EnvLane__extends,  // assign(index, value) function pointer
    resize_function__EnvLane__extends  // resize(index) function pointer
  },
  {
    "left_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, left_boundary),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__left_boundary,  // size() function pointer
    get_const_function__EnvLane__left_boundary,  // get_const(index) function pointer
    get_function__EnvLane__left_boundary,  // get(index) function pointer
    fetch_function__EnvLane__left_boundary,  // fetch(index, &value) function pointer
    assign_function__EnvLane__left_boundary,  // assign(index, value) function pointer
    resize_function__EnvLane__left_boundary  // resize(index) function pointer
  },
  {
    "right_boundary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, right_boundary),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__right_boundary,  // size() function pointer
    get_const_function__EnvLane__right_boundary,  // get_const(index) function pointer
    get_function__EnvLane__right_boundary,  // get(index) function pointer
    fetch_function__EnvLane__right_boundary,  // fetch(index, &value) function pointer
    assign_function__EnvLane__right_boundary,  // assign(index, value) function pointer
    resize_function__EnvLane__right_boundary  // resize(index) function pointer
  },
  {
    "left_neibors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::MapIds>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, left_neibors),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__left_neibors,  // size() function pointer
    get_const_function__EnvLane__left_neibors,  // get_const(index) function pointer
    get_function__EnvLane__left_neibors,  // get(index) function pointer
    fetch_function__EnvLane__left_neibors,  // fetch(index, &value) function pointer
    assign_function__EnvLane__left_neibors,  // assign(index, value) function pointer
    resize_function__EnvLane__left_neibors  // resize(index) function pointer
  },
  {
    "right_neibors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::MapIds>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLane, right_neibors),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLane__right_neibors,  // size() function pointer
    get_const_function__EnvLane__right_neibors,  // get_const(index) function pointer
    get_function__EnvLane__right_neibors,  // get(index) function pointer
    fetch_function__EnvLane__right_neibors,  // fetch(index, &value) function pointer
    assign_function__EnvLane__right_neibors,  // assign(index, value) function pointer
    resize_function__EnvLane__right_neibors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvLane_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvLane",  // message name
  7,  // number of fields
  sizeof(environment_model_msgs::msg::EnvLane),
  EnvLane_message_member_array,  // message members
  EnvLane_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvLane_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvLane_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvLane_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::EnvLane>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLane_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvLane)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLane_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
