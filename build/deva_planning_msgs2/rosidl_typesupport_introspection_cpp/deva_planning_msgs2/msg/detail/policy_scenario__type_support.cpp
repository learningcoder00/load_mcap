// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.hpp"
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

void PolicyScenario_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::PolicyScenario(_init);
}

void PolicyScenario_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::PolicyScenario *>(message_memory);
  typed_message->~PolicyScenario();
}

size_t size_function__PolicyScenario__game_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__game_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__game_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__game_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(
    get_const_function__PolicyScenario__game_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__game_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::UInt2String *>(
    get_function__PolicyScenario__game_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::UInt2String *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__game_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::UInt2String> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__critical_obstacles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__critical_obstacles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::PlanningObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__critical_obstacles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__critical_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningObstacle *>(
    get_const_function__PolicyScenario__critical_obstacles(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::PlanningObstacle *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__critical_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::PlanningObstacle *>(
    get_function__PolicyScenario__critical_obstacles(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::PlanningObstacle *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__critical_obstacles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::PlanningObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__tree_score(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__tree_score(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__tree_score(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__tree_score(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(
    get_const_function__PolicyScenario__tree_score(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__tree_score(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(
    get_function__PolicyScenario__tree_score(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__tree_score(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__tree_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::SemanticTreeNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__tree_nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::SemanticTreeNode> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__tree_nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::SemanticTreeNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__tree_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::SemanticTreeNode *>(
    get_const_function__PolicyScenario__tree_nodes(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::SemanticTreeNode *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__tree_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::SemanticTreeNode *>(
    get_function__PolicyScenario__tree_nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::SemanticTreeNode *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__tree_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::SemanticTreeNode> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__tree_output_trajs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::TreeTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__tree_output_trajs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::TreeTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__tree_output_trajs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::TreeTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__tree_output_trajs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::TreeTrajectory *>(
    get_const_function__PolicyScenario__tree_output_trajs(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::TreeTrajectory *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__tree_output_trajs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::TreeTrajectory *>(
    get_function__PolicyScenario__tree_output_trajs(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::TreeTrajectory *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__tree_output_trajs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::TreeTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__scalable_flags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__scalable_flags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__scalable_flags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__scalable_flags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PolicyScenario__scalable_flags(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__scalable_flags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PolicyScenario__scalable_flags(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__scalable_flags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PolicyScenario__scalable_multimap(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PolicyScenario__scalable_multimap(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void * get_function__PolicyScenario__scalable_multimap(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  return &member[index];
}

void fetch_function__PolicyScenario__scalable_multimap(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(
    get_const_function__PolicyScenario__scalable_multimap(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(untyped_value);
  value = item;
}

void assign_function__PolicyScenario__scalable_multimap(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2String *>(
    get_function__PolicyScenario__scalable_multimap(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2String *>(untyped_value);
  item = value;
}

void resize_function__PolicyScenario__scalable_multimap(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2String> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PolicyScenario_message_member_array[15] = {
  {
    "tree_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, tree_id),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2::msg::PolicyScenario, behavior_type),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2::msg::PolicyScenario, target_line_id),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2::msg::PolicyScenario, current_line_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_from_mdriver",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, is_from_mdriver),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2::msg::PolicyScenario, front_obstacle_id),  // bytes offset in struct
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
    offsetof(deva_planning_msgs2::msg::PolicyScenario, rear_obstacle_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "game_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::UInt2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, game_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__game_obstacles,  // size() function pointer
    get_const_function__PolicyScenario__game_obstacles,  // get_const(index) function pointer
    get_function__PolicyScenario__game_obstacles,  // get(index) function pointer
    fetch_function__PolicyScenario__game_obstacles,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__game_obstacles,  // assign(index, value) function pointer
    resize_function__PolicyScenario__game_obstacles  // resize(index) function pointer
  },
  {
    "critical_obstacles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::PlanningObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, critical_obstacles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__critical_obstacles,  // size() function pointer
    get_const_function__PolicyScenario__critical_obstacles,  // get_const(index) function pointer
    get_function__PolicyScenario__critical_obstacles,  // get(index) function pointer
    fetch_function__PolicyScenario__critical_obstacles,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__critical_obstacles,  // assign(index, value) function pointer
    resize_function__PolicyScenario__critical_obstacles  // resize(index) function pointer
  },
  {
    "tree_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Double>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, tree_score),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__tree_score,  // size() function pointer
    get_const_function__PolicyScenario__tree_score,  // get_const(index) function pointer
    get_function__PolicyScenario__tree_score,  // get(index) function pointer
    fetch_function__PolicyScenario__tree_score,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__tree_score,  // assign(index, value) function pointer
    resize_function__PolicyScenario__tree_score  // resize(index) function pointer
  },
  {
    "rollout_start_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, rollout_start_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tree_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::SemanticTreeNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, tree_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__tree_nodes,  // size() function pointer
    get_const_function__PolicyScenario__tree_nodes,  // get_const(index) function pointer
    get_function__PolicyScenario__tree_nodes,  // get(index) function pointer
    fetch_function__PolicyScenario__tree_nodes,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__tree_nodes,  // assign(index, value) function pointer
    resize_function__PolicyScenario__tree_nodes  // resize(index) function pointer
  },
  {
    "tree_output_trajs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::TreeTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, tree_output_trajs),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__tree_output_trajs,  // size() function pointer
    get_const_function__PolicyScenario__tree_output_trajs,  // get_const(index) function pointer
    get_function__PolicyScenario__tree_output_trajs,  // get(index) function pointer
    fetch_function__PolicyScenario__tree_output_trajs,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__tree_output_trajs,  // assign(index, value) function pointer
    resize_function__PolicyScenario__tree_output_trajs  // resize(index) function pointer
  },
  {
    "scalable_flags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, scalable_flags),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__scalable_flags,  // size() function pointer
    get_const_function__PolicyScenario__scalable_flags,  // get_const(index) function pointer
    get_function__PolicyScenario__scalable_flags,  // get(index) function pointer
    fetch_function__PolicyScenario__scalable_flags,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__scalable_flags,  // assign(index, value) function pointer
    resize_function__PolicyScenario__scalable_flags  // resize(index) function pointer
  },
  {
    "scalable_multimap",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2String>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PolicyScenario, scalable_multimap),  // bytes offset in struct
    nullptr,  // default value
    size_function__PolicyScenario__scalable_multimap,  // size() function pointer
    get_const_function__PolicyScenario__scalable_multimap,  // get_const(index) function pointer
    get_function__PolicyScenario__scalable_multimap,  // get(index) function pointer
    fetch_function__PolicyScenario__scalable_multimap,  // fetch(index, &value) function pointer
    assign_function__PolicyScenario__scalable_multimap,  // assign(index, value) function pointer
    resize_function__PolicyScenario__scalable_multimap  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PolicyScenario_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "PolicyScenario",  // message name
  15,  // number of fields
  sizeof(deva_planning_msgs2::msg::PolicyScenario),
  PolicyScenario_message_member_array,  // message members
  PolicyScenario_init_function,  // function to initialize message memory (memory has to be allocated)
  PolicyScenario_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PolicyScenario_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PolicyScenario_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::PolicyScenario>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PolicyScenario_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, PolicyScenario)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PolicyScenario_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
