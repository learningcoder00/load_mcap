// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/VirtualWallArray.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/virtual_wall_array__struct.hpp"
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

void VirtualWallArray_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::VirtualWallArray(_init);
}

void VirtualWallArray_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::VirtualWallArray *>(message_memory);
  typed_message->~VirtualWallArray();
}

size_t size_function__VirtualWallArray__virtual_wall_array(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::VirtualWall> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VirtualWallArray__virtual_wall_array(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::VirtualWall> *>(untyped_member);
  return &member[index];
}

void * get_function__VirtualWallArray__virtual_wall_array(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::VirtualWall> *>(untyped_member);
  return &member[index];
}

void fetch_function__VirtualWallArray__virtual_wall_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::VirtualWall *>(
    get_const_function__VirtualWallArray__virtual_wall_array(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::VirtualWall *>(untyped_value);
  value = item;
}

void assign_function__VirtualWallArray__virtual_wall_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::VirtualWall *>(
    get_function__VirtualWallArray__virtual_wall_array(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::VirtualWall *>(untyped_value);
  item = value;
}

void resize_function__VirtualWallArray__virtual_wall_array(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::VirtualWall> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VirtualWallArray_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::VirtualWallArray, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::VirtualWallArray, num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "virtual_wall_array",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::VirtualWall>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::VirtualWallArray, virtual_wall_array),  // bytes offset in struct
    nullptr,  // default value
    size_function__VirtualWallArray__virtual_wall_array,  // size() function pointer
    get_const_function__VirtualWallArray__virtual_wall_array,  // get_const(index) function pointer
    get_function__VirtualWallArray__virtual_wall_array,  // get(index) function pointer
    fetch_function__VirtualWallArray__virtual_wall_array,  // fetch(index, &value) function pointer
    assign_function__VirtualWallArray__virtual_wall_array,  // assign(index, value) function pointer
    resize_function__VirtualWallArray__virtual_wall_array  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VirtualWallArray_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "VirtualWallArray",  // message name
  3,  // number of fields
  sizeof(deva_planning_msgs2::msg::VirtualWallArray),
  VirtualWallArray_message_member_array,  // message members
  VirtualWallArray_init_function,  // function to initialize message memory (memory has to be allocated)
  VirtualWallArray_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VirtualWallArray_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VirtualWallArray_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::VirtualWallArray>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::VirtualWallArray_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, VirtualWallArray)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::VirtualWallArray_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
