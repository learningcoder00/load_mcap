// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/SemanticTreeNode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__struct.hpp"
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

void SemanticTreeNode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::SemanticTreeNode(_init);
}

void SemanticTreeNode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::SemanticTreeNode *>(message_memory);
  typed_message->~SemanticTreeNode();
}

size_t size_function__SemanticTreeNode__game_cost(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticTreeNode__game_cost(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticTreeNode__game_cost(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticTreeNode__game_cost(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(
    get_const_function__SemanticTreeNode__game_cost(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(untyped_value);
  value = item;
}

void assign_function__SemanticTreeNode__game_cost(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(
    get_function__SemanticTreeNode__game_cost(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(untyped_value);
  item = value;
}

void resize_function__SemanticTreeNode__game_cost(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticTreeNode__rollout_cost(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticTreeNode__rollout_cost(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticTreeNode__rollout_cost(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticTreeNode__rollout_cost(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(
    get_const_function__SemanticTreeNode__rollout_cost(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(untyped_value);
  value = item;
}

void assign_function__SemanticTreeNode__rollout_cost(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(
    get_function__SemanticTreeNode__rollout_cost(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(untyped_value);
  item = value;
}

void resize_function__SemanticTreeNode__rollout_cost(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticTreeNode__scalable_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticTreeNode__scalable_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticTreeNode__scalable_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticTreeNode__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SemanticTreeNode__scalable_flags(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SemanticTreeNode__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SemanticTreeNode__scalable_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__SemanticTreeNode__scalable_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SemanticTreeNode__scalable_multimap(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SemanticTreeNode__scalable_multimap(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void * get_function__SemanticTreeNode__scalable_multimap(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__SemanticTreeNode__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(
    get_const_function__SemanticTreeNode__scalable_multimap(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(untyped_value);
  value = item;
}

void assign_function__SemanticTreeNode__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(
    get_function__SemanticTreeNode__scalable_multimap(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(untyped_value);
  item = value;
}

void resize_function__SemanticTreeNode__scalable_multimap(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SemanticTreeNode_message_member_array[9] = {
  {
    "node_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, node_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rollout_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, rollout_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "total_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, total_score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "game_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, game_score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rollout_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, rollout_score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "game_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Double>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, game_cost),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticTreeNode__game_cost,  // size() function pointer
    get_const_function__SemanticTreeNode__game_cost,  // get_const(index) function pointer
    get_function__SemanticTreeNode__game_cost,  // get(index) function pointer
    fetch_function__SemanticTreeNode__game_cost,  // fetch(index, &value) function pointer
    assign_function__SemanticTreeNode__game_cost,  // assign(index, value) function pointer
    resize_function__SemanticTreeNode__game_cost  // resize(index) function pointer
  },
  {
    "rollout_cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Double>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, rollout_cost),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticTreeNode__rollout_cost,  // size() function pointer
    get_const_function__SemanticTreeNode__rollout_cost,  // get_const(index) function pointer
    get_function__SemanticTreeNode__rollout_cost,  // get(index) function pointer
    fetch_function__SemanticTreeNode__rollout_cost,  // fetch(index, &value) function pointer
    assign_function__SemanticTreeNode__rollout_cost,  // assign(index, value) function pointer
    resize_function__SemanticTreeNode__rollout_cost  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, scalable_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticTreeNode__scalable_flags,  // size() function pointer
    get_const_function__SemanticTreeNode__scalable_flags,  // get_const(index) function pointer
    get_function__SemanticTreeNode__scalable_flags,  // get(index) function pointer
    fetch_function__SemanticTreeNode__scalable_flags,  // fetch(index, &value) function pointer
    assign_function__SemanticTreeNode__scalable_flags,  // assign(index, value) function pointer
    resize_function__SemanticTreeNode__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::SemanticTreeNode, scalable_multimap),  // bytes offset in struct
    nullptr,  // default value
    size_function__SemanticTreeNode__scalable_multimap,  // size() function pointer
    get_const_function__SemanticTreeNode__scalable_multimap,  // get_const(index) function pointer
    get_function__SemanticTreeNode__scalable_multimap,  // get(index) function pointer
    fetch_function__SemanticTreeNode__scalable_multimap,  // fetch(index, &value) function pointer
    assign_function__SemanticTreeNode__scalable_multimap,  // assign(index, value) function pointer
    resize_function__SemanticTreeNode__scalable_multimap  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SemanticTreeNode_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "SemanticTreeNode",  // message name
  9,  // number of fields
  sizeof(deva_planning_msgs2::msg::SemanticTreeNode),
  SemanticTreeNode_message_member_array,  // message members
  SemanticTreeNode_init_function,  // function to initialize message memory (memory has to be allocated)
  SemanticTreeNode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SemanticTreeNode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SemanticTreeNode_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::SemanticTreeNode>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::SemanticTreeNode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, SemanticTreeNode)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::SemanticTreeNode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
