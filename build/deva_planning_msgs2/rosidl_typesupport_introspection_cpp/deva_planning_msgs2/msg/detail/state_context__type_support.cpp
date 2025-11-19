// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/StateContext.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/state_context__struct.hpp"
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

void StateContext_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::StateContext(_init);
}

void StateContext_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::StateContext *>(message_memory);
  typed_message->~StateContext();
}

size_t size_function__StateContext__mcts_trees(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PolicyScenario> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__mcts_trees(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PolicyScenario> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__mcts_trees(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::PolicyScenario> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__mcts_trees(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::PolicyScenario *>(
    get_const_function__StateContext__mcts_trees(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::PolicyScenario *>(untyped_value);
  value = item;
}

void assign_function__StateContext__mcts_trees(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::PolicyScenario *>(
    get_function__StateContext__mcts_trees(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::PolicyScenario *>(untyped_value);
  item = value;
}

void resize_function__StateContext__mcts_trees(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::PolicyScenario> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__tagged_obstacle(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__tagged_obstacle(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__tagged_obstacle(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__tagged_obstacle(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(
    get_const_function__StateContext__tagged_obstacle(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  value = item;
}

void assign_function__StateContext__tagged_obstacle(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(
    get_function__StateContext__tagged_obstacle(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  item = value;
}

void resize_function__StateContext__tagged_obstacle(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__lane_bind_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::LaneBindInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__lane_bind_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::LaneBindInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__lane_bind_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::LaneBindInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__lane_bind_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::LaneBindInfo *>(
    get_const_function__StateContext__lane_bind_infos(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::LaneBindInfo *>(untyped_value);
  value = item;
}

void assign_function__StateContext__lane_bind_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::LaneBindInfo *>(
    get_function__StateContext__lane_bind_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::LaneBindInfo *>(untyped_value);
  item = value;
}

void resize_function__StateContext__lane_bind_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::LaneBindInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__ego_sl_on_ref_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::Ref2SLBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__ego_sl_on_ref_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::Ref2SLBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__ego_sl_on_ref_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::Ref2SLBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__ego_sl_on_ref_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::Ref2SLBoundary *>(
    get_const_function__StateContext__ego_sl_on_ref_lines(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::Ref2SLBoundary *>(untyped_value);
  value = item;
}

void assign_function__StateContext__ego_sl_on_ref_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::Ref2SLBoundary *>(
    get_function__StateContext__ego_sl_on_ref_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::Ref2SLBoundary *>(untyped_value);
  item = value;
}

void resize_function__StateContext__ego_sl_on_ref_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::Ref2SLBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__scalable_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__scalable_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__scalable_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__StateContext__scalable_flags(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__StateContext__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__StateContext__scalable_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__StateContext__scalable_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__scalable_multimap(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__scalable_multimap(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__scalable_multimap(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(
    get_const_function__StateContext__scalable_multimap(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(untyped_value);
  value = item;
}

void assign_function__StateContext__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(
    get_function__StateContext__scalable_multimap(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(untyped_value);
  item = value;
}

void resize_function__StateContext__scalable_multimap(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  member->resize(size);
}

size_t size_function__StateContext__scalable_stream(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__StateContext__scalable_stream(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return &member[index];
}

void * get_function__StateContext__scalable_stream(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return &member[index];
}

void fetch_function__StateContext__scalable_stream(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2UInt *>(
    get_const_function__StateContext__scalable_stream(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2UInt *>(untyped_value);
  value = item;
}

void assign_function__StateContext__scalable_stream(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2UInt *>(
    get_function__StateContext__scalable_stream(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2UInt *>(untyped_value);
  item = value;
}

void resize_function__StateContext__scalable_stream(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StateContext_message_member_array[19] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "behavior_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, behavior_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "routing_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, routing_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_turn_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, current_turn_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "use_mdriver_ego",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, use_mdriver_ego),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_line_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, target_line_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_line_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, current_line_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_obstacle_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, front_obstacle_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rear_obstacle_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, rear_obstacle_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_change_task",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, lane_change_task),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "best_tree_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, best_tree_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mcts_trees",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::PolicyScenario>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, mcts_trees),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__mcts_trees,  // size() function pointer
    get_const_function__StateContext__mcts_trees,  // get_const(index) function pointer
    get_function__StateContext__mcts_trees,  // get(index) function pointer
    fetch_function__StateContext__mcts_trees,  // fetch(index, &value) function pointer
    assign_function__StateContext__mcts_trees,  // assign(index, value) function pointer
    resize_function__StateContext__mcts_trees  // resize(index) function pointer
  },
  {
    "tagged_obstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::UInt2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, tagged_obstacle),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__tagged_obstacle,  // size() function pointer
    get_const_function__StateContext__tagged_obstacle,  // get_const(index) function pointer
    get_function__StateContext__tagged_obstacle,  // get(index) function pointer
    fetch_function__StateContext__tagged_obstacle,  // fetch(index, &value) function pointer
    assign_function__StateContext__tagged_obstacle,  // assign(index, value) function pointer
    resize_function__StateContext__tagged_obstacle  // resize(index) function pointer
  },
  {
    "lane_bind_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::LaneBindInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, lane_bind_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__lane_bind_infos,  // size() function pointer
    get_const_function__StateContext__lane_bind_infos,  // get_const(index) function pointer
    get_function__StateContext__lane_bind_infos,  // get(index) function pointer
    fetch_function__StateContext__lane_bind_infos,  // fetch(index, &value) function pointer
    assign_function__StateContext__lane_bind_infos,  // assign(index, value) function pointer
    resize_function__StateContext__lane_bind_infos  // resize(index) function pointer
  },
  {
    "ego_sl_on_ref_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::Ref2SLBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, ego_sl_on_ref_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__ego_sl_on_ref_lines,  // size() function pointer
    get_const_function__StateContext__ego_sl_on_ref_lines,  // get_const(index) function pointer
    get_function__StateContext__ego_sl_on_ref_lines,  // get(index) function pointer
    fetch_function__StateContext__ego_sl_on_ref_lines,  // fetch(index, &value) function pointer
    assign_function__StateContext__ego_sl_on_ref_lines,  // assign(index, value) function pointer
    resize_function__StateContext__ego_sl_on_ref_lines  // resize(index) function pointer
  },
  {
    "lane_change_cancel_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, lane_change_cancel_reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, scalable_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__scalable_flags,  // size() function pointer
    get_const_function__StateContext__scalable_flags,  // get_const(index) function pointer
    get_function__StateContext__scalable_flags,  // get(index) function pointer
    fetch_function__StateContext__scalable_flags,  // fetch(index, &value) function pointer
    assign_function__StateContext__scalable_flags,  // assign(index, value) function pointer
    resize_function__StateContext__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, scalable_multimap),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__scalable_multimap,  // size() function pointer
    get_const_function__StateContext__scalable_multimap,  // get_const(index) function pointer
    get_function__StateContext__scalable_multimap,  // get(index) function pointer
    fetch_function__StateContext__scalable_multimap,  // fetch(index, &value) function pointer
    assign_function__StateContext__scalable_multimap,  // assign(index, value) function pointer
    resize_function__StateContext__scalable_multimap  // resize(index) function pointer
  },
  {
    "scalable_stream",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2UInt>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::StateContext, scalable_stream),  // bytes offset in struct
    nullptr,  // default value
    size_function__StateContext__scalable_stream,  // size() function pointer
    get_const_function__StateContext__scalable_stream,  // get_const(index) function pointer
    get_function__StateContext__scalable_stream,  // get(index) function pointer
    fetch_function__StateContext__scalable_stream,  // fetch(index, &value) function pointer
    assign_function__StateContext__scalable_stream,  // assign(index, value) function pointer
    resize_function__StateContext__scalable_stream  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StateContext_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "StateContext",  // message name
  19,  // number of fields
  sizeof(deva_planning_msgs2::msg::StateContext),
  StateContext_message_member_array,  // message members
  StateContext_init_function,  // function to initialize message memory (memory has to be allocated)
  StateContext_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StateContext_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StateContext_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::StateContext>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::StateContext_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, StateContext)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::StateContext_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
