// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/reference_lines__struct.hpp"
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

void ReferenceLines_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::ReferenceLines(_init);
}

void ReferenceLines_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::ReferenceLines *>(message_memory);
  typed_message->~ReferenceLines();
}

size_t size_function__ReferenceLines__reference_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::ReferenceLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ReferenceLines__reference_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::ReferenceLine> *>(untyped_member);
  return &member[index];
}

void * get_function__ReferenceLines__reference_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::ReferenceLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__ReferenceLines__reference_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::ReferenceLine *>(
    get_const_function__ReferenceLines__reference_lines(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::ReferenceLine *>(untyped_value);
  value = item;
}

void assign_function__ReferenceLines__reference_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::ReferenceLine *>(
    get_function__ReferenceLines__reference_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::ReferenceLine *>(untyped_value);
  item = value;
}

void resize_function__ReferenceLines__reference_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::ReferenceLine> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ReferenceLines_message_member_array[8] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reference_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::ReferenceLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, reference_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__ReferenceLines__reference_lines,  // size() function pointer
    get_const_function__ReferenceLines__reference_lines,  // get_const(index) function pointer
    get_function__ReferenceLines__reference_lines,  // get(index) function pointer
    fetch_function__ReferenceLines__reference_lines,  // fetch(index, &value) function pointer
    assign_function__ReferenceLines__reference_lines,  // assign(index, value) function pointer
    resize_function__ReferenceLines__reference_lines  // resize(index) function pointer
  },
  {
    "curr_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, curr_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tar_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, tar_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curr_model_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, curr_model_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curr_line_virtual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, curr_line_virtual),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curr_left_nums",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, curr_left_nums),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "curr_right_nums",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::ReferenceLines, curr_right_nums),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ReferenceLines_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "ReferenceLines",  // message name
  8,  // number of fields
  sizeof(deva_planning_msgs2::msg::ReferenceLines),
  ReferenceLines_message_member_array,  // message members
  ReferenceLines_init_function,  // function to initialize message memory (memory has to be allocated)
  ReferenceLines_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ReferenceLines_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ReferenceLines_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::ReferenceLines>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::ReferenceLines_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, ReferenceLines)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::ReferenceLines_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
