// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/PlanningLog.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/planning_log__struct.hpp"
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

void PlanningLog_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::PlanningLog(_init);
}

void PlanningLog_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::PlanningLog *>(message_memory);
  typed_message->~PlanningLog();
}

size_t size_function__PlanningLog__localization(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__localization(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__localization(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__localization(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__localization(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__localization(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__localization(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__localization(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__chassis(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__chassis(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__chassis(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__chassis(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__chassis(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__chassis(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__chassis(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__chassis(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__pad_message(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__pad_message(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__pad_message(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__pad_message(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__pad_message(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__pad_message(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__pad_message(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__pad_message(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__pull_over_msg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__pull_over_msg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__pull_over_msg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__pull_over_msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__pull_over_msg(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__pull_over_msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__pull_over_msg(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__pull_over_msg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__traffic_poles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__traffic_poles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__traffic_poles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__traffic_poles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__traffic_poles(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__traffic_poles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__traffic_poles(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__traffic_poles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__apollo_decision(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__apollo_decision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__apollo_decision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__apollo_decision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__apollo_decision(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__apollo_decision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__apollo_decision(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__apollo_decision(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__prediction(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__prediction(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__prediction(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__prediction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__prediction(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__prediction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__prediction(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__prediction(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__megmap_proto(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__megmap_proto(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__megmap_proto(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__megmap_proto(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__megmap_proto(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__megmap_proto(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__megmap_proto(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__megmap_proto(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__state_context(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__state_context(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__state_context(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__state_context(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__state_context(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__state_context(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__state_context(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__state_context(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__target_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__target_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__target_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__target_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__target_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__target_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__target_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__target_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__speed_solver_debug_sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__speed_solver_debug_sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__speed_solver_debug_sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__speed_solver_debug_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__speed_solver_debug_sequence(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__speed_solver_debug_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__speed_solver_debug_sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__speed_solver_debug_sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__trajectory_solver_debug_sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__trajectory_solver_debug_sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__trajectory_solver_debug_sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__trajectory_solver_debug_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__trajectory_solver_debug_sequence(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__trajectory_solver_debug_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__trajectory_solver_debug_sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__trajectory_solver_debug_sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__planning_log(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__planning_log(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__planning_log(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__planning_log(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__planning_log(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__planning_log(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__planning_log(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__planning_log(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__navigator_routing(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__navigator_routing(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__navigator_routing(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__navigator_routing(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PlanningLog__navigator_routing(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__navigator_routing(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PlanningLog__navigator_routing(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__navigator_routing(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__scalable_stream(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__scalable_stream(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__scalable_stream(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__scalable_stream(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2UInt *>(
    get_const_function__PlanningLog__scalable_stream(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2UInt *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__scalable_stream(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2UInt *>(
    get_function__PlanningLog__scalable_stream(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2UInt *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__scalable_stream(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2UInt> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__scalable_int(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Int> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__scalable_int(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Int> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__scalable_int(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Int> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__scalable_int(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Int *>(
    get_const_function__PlanningLog__scalable_int(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Int *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__scalable_int(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Int *>(
    get_function__PlanningLog__scalable_int(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Int *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__scalable_int(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Int> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__scalable_double(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__scalable_double(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__scalable_double(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__scalable_double(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(
    get_const_function__PlanningLog__scalable_double(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__scalable_double(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(
    get_function__PlanningLog__scalable_double(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__scalable_double(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningLog__scalable_bool(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Bool> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningLog__scalable_bool(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Bool> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningLog__scalable_bool(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Bool> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningLog__scalable_bool(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Bool *>(
    get_const_function__PlanningLog__scalable_bool(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Bool *>(untyped_value);
  value = item;
}

void assign_function__PlanningLog__scalable_bool(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Bool *>(
    get_function__PlanningLog__scalable_bool(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Bool *>(untyped_value);
  item = value;
}

void resize_function__PlanningLog__scalable_bool(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Bool> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningLog_message_member_array[19] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "localization",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, localization),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__localization,  // size() function pointer
    get_const_function__PlanningLog__localization,  // get_const(index) function pointer
    get_function__PlanningLog__localization,  // get(index) function pointer
    fetch_function__PlanningLog__localization,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__localization,  // assign(index, value) function pointer
    resize_function__PlanningLog__localization  // resize(index) function pointer
  },
  {
    "chassis",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, chassis),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__chassis,  // size() function pointer
    get_const_function__PlanningLog__chassis,  // get_const(index) function pointer
    get_function__PlanningLog__chassis,  // get(index) function pointer
    fetch_function__PlanningLog__chassis,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__chassis,  // assign(index, value) function pointer
    resize_function__PlanningLog__chassis  // resize(index) function pointer
  },
  {
    "pad_message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, pad_message),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__pad_message,  // size() function pointer
    get_const_function__PlanningLog__pad_message,  // get_const(index) function pointer
    get_function__PlanningLog__pad_message,  // get(index) function pointer
    fetch_function__PlanningLog__pad_message,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__pad_message,  // assign(index, value) function pointer
    resize_function__PlanningLog__pad_message  // resize(index) function pointer
  },
  {
    "pull_over_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, pull_over_msg),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__pull_over_msg,  // size() function pointer
    get_const_function__PlanningLog__pull_over_msg,  // get_const(index) function pointer
    get_function__PlanningLog__pull_over_msg,  // get(index) function pointer
    fetch_function__PlanningLog__pull_over_msg,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__pull_over_msg,  // assign(index, value) function pointer
    resize_function__PlanningLog__pull_over_msg  // resize(index) function pointer
  },
  {
    "traffic_poles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, traffic_poles),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__traffic_poles,  // size() function pointer
    get_const_function__PlanningLog__traffic_poles,  // get_const(index) function pointer
    get_function__PlanningLog__traffic_poles,  // get(index) function pointer
    fetch_function__PlanningLog__traffic_poles,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__traffic_poles,  // assign(index, value) function pointer
    resize_function__PlanningLog__traffic_poles  // resize(index) function pointer
  },
  {
    "apollo_decision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, apollo_decision),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__apollo_decision,  // size() function pointer
    get_const_function__PlanningLog__apollo_decision,  // get_const(index) function pointer
    get_function__PlanningLog__apollo_decision,  // get(index) function pointer
    fetch_function__PlanningLog__apollo_decision,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__apollo_decision,  // assign(index, value) function pointer
    resize_function__PlanningLog__apollo_decision  // resize(index) function pointer
  },
  {
    "prediction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, prediction),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__prediction,  // size() function pointer
    get_const_function__PlanningLog__prediction,  // get_const(index) function pointer
    get_function__PlanningLog__prediction,  // get(index) function pointer
    fetch_function__PlanningLog__prediction,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__prediction,  // assign(index, value) function pointer
    resize_function__PlanningLog__prediction  // resize(index) function pointer
  },
  {
    "megmap_proto",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, megmap_proto),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__megmap_proto,  // size() function pointer
    get_const_function__PlanningLog__megmap_proto,  // get_const(index) function pointer
    get_function__PlanningLog__megmap_proto,  // get(index) function pointer
    fetch_function__PlanningLog__megmap_proto,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__megmap_proto,  // assign(index, value) function pointer
    resize_function__PlanningLog__megmap_proto  // resize(index) function pointer
  },
  {
    "state_context",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, state_context),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__state_context,  // size() function pointer
    get_const_function__PlanningLog__state_context,  // get_const(index) function pointer
    get_function__PlanningLog__state_context,  // get(index) function pointer
    fetch_function__PlanningLog__state_context,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__state_context,  // assign(index, value) function pointer
    resize_function__PlanningLog__state_context  // resize(index) function pointer
  },
  {
    "target_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, target_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__target_trajectory,  // size() function pointer
    get_const_function__PlanningLog__target_trajectory,  // get_const(index) function pointer
    get_function__PlanningLog__target_trajectory,  // get(index) function pointer
    fetch_function__PlanningLog__target_trajectory,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__target_trajectory,  // assign(index, value) function pointer
    resize_function__PlanningLog__target_trajectory  // resize(index) function pointer
  },
  {
    "speed_solver_debug_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, speed_solver_debug_sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__speed_solver_debug_sequence,  // size() function pointer
    get_const_function__PlanningLog__speed_solver_debug_sequence,  // get_const(index) function pointer
    get_function__PlanningLog__speed_solver_debug_sequence,  // get(index) function pointer
    fetch_function__PlanningLog__speed_solver_debug_sequence,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__speed_solver_debug_sequence,  // assign(index, value) function pointer
    resize_function__PlanningLog__speed_solver_debug_sequence  // resize(index) function pointer
  },
  {
    "trajectory_solver_debug_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, trajectory_solver_debug_sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__trajectory_solver_debug_sequence,  // size() function pointer
    get_const_function__PlanningLog__trajectory_solver_debug_sequence,  // get_const(index) function pointer
    get_function__PlanningLog__trajectory_solver_debug_sequence,  // get(index) function pointer
    fetch_function__PlanningLog__trajectory_solver_debug_sequence,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__trajectory_solver_debug_sequence,  // assign(index, value) function pointer
    resize_function__PlanningLog__trajectory_solver_debug_sequence  // resize(index) function pointer
  },
  {
    "planning_log",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, planning_log),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__planning_log,  // size() function pointer
    get_const_function__PlanningLog__planning_log,  // get_const(index) function pointer
    get_function__PlanningLog__planning_log,  // get(index) function pointer
    fetch_function__PlanningLog__planning_log,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__planning_log,  // assign(index, value) function pointer
    resize_function__PlanningLog__planning_log  // resize(index) function pointer
  },
  {
    "navigator_routing",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, navigator_routing),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__navigator_routing,  // size() function pointer
    get_const_function__PlanningLog__navigator_routing,  // get_const(index) function pointer
    get_function__PlanningLog__navigator_routing,  // get(index) function pointer
    fetch_function__PlanningLog__navigator_routing,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__navigator_routing,  // assign(index, value) function pointer
    resize_function__PlanningLog__navigator_routing  // resize(index) function pointer
  },
  {
    "scalable_stream",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2UInt>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, scalable_stream),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__scalable_stream,  // size() function pointer
    get_const_function__PlanningLog__scalable_stream,  // get_const(index) function pointer
    get_function__PlanningLog__scalable_stream,  // get(index) function pointer
    fetch_function__PlanningLog__scalable_stream,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__scalable_stream,  // assign(index, value) function pointer
    resize_function__PlanningLog__scalable_stream  // resize(index) function pointer
  },
  {
    "scalable_int",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Int>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, scalable_int),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__scalable_int,  // size() function pointer
    get_const_function__PlanningLog__scalable_int,  // get_const(index) function pointer
    get_function__PlanningLog__scalable_int,  // get(index) function pointer
    fetch_function__PlanningLog__scalable_int,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__scalable_int,  // assign(index, value) function pointer
    resize_function__PlanningLog__scalable_int  // resize(index) function pointer
  },
  {
    "scalable_double",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Double>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, scalable_double),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__scalable_double,  // size() function pointer
    get_const_function__PlanningLog__scalable_double,  // get_const(index) function pointer
    get_function__PlanningLog__scalable_double,  // get(index) function pointer
    fetch_function__PlanningLog__scalable_double,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__scalable_double,  // assign(index, value) function pointer
    resize_function__PlanningLog__scalable_double  // resize(index) function pointer
  },
  {
    "scalable_bool",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Bool>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::PlanningLog, scalable_bool),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningLog__scalable_bool,  // size() function pointer
    get_const_function__PlanningLog__scalable_bool,  // get_const(index) function pointer
    get_function__PlanningLog__scalable_bool,  // get(index) function pointer
    fetch_function__PlanningLog__scalable_bool,  // fetch(index, &value) function pointer
    assign_function__PlanningLog__scalable_bool,  // assign(index, value) function pointer
    resize_function__PlanningLog__scalable_bool  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningLog_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "PlanningLog",  // message name
  19,  // number of fields
  sizeof(deva_planning_msgs2::msg::PlanningLog),
  PlanningLog_message_member_array,  // message members
  PlanningLog_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningLog_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningLog_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningLog_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::PlanningLog>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningLog_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, PlanningLog)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::PlanningLog_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
