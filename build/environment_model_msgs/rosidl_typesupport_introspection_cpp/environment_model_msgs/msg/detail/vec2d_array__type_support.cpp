// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/Vec2dArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/vec2d_array__struct.hpp"
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

void Vec2dArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::Vec2dArray(_init);
}

void Vec2dArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::Vec2dArray *>(message_memory);
  typed_message->~Vec2dArray();
}

size_t size_function__Vec2dArray__vec2d_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Vec2dArray__vec2d_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__Vec2dArray__vec2d_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__Vec2dArray__vec2d_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__Vec2dArray__vec2d_array(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__Vec2dArray__vec2d_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__Vec2dArray__vec2d_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__Vec2dArray__vec2d_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Vec2dArray_message_member_array[1] = {
  {
    "vec2d_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::Vec2dArray, vec2d_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__Vec2dArray__vec2d_array,  // size() function pointer
    get_const_function__Vec2dArray__vec2d_array,  // get_const(index) function pointer
    get_function__Vec2dArray__vec2d_array,  // get(index) function pointer
    fetch_function__Vec2dArray__vec2d_array,  // fetch(index, &value) function pointer
    assign_function__Vec2dArray__vec2d_array,  // assign(index, value) function pointer
    resize_function__Vec2dArray__vec2d_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Vec2dArray_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "Vec2dArray",  // message name
  1,  // number of fields
  sizeof(environment_model_msgs::msg::Vec2dArray),
  Vec2dArray_message_member_array,  // message members
  Vec2dArray_init_function,  // function to initialize message memory (memory has to be allocated)
  Vec2dArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Vec2dArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Vec2dArray_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::Vec2dArray>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::Vec2dArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, Vec2dArray)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::Vec2dArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
