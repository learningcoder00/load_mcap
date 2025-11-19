// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_info__struct.hpp"
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

void EnvInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvInfo(_init);
}

void EnvInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvInfo *>(message_memory);
  typed_message->~EnvInfo();
}

size_t size_function__EnvInfo__env_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__env_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLine> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__env_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__env_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvLine *>(
    get_const_function__EnvInfo__env_lines(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvLine *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__env_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvLine *>(
    get_function__EnvInfo__env_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvLine *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__env_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__env_objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__env_objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvObject> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__env_objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__env_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvObject *>(
    get_const_function__EnvInfo__env_objects(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvObject *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__env_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvObject *>(
    get_function__EnvInfo__env_objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvObject *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__env_objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvObject> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__env_signals(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvSignal> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__env_signals(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvSignal> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__env_signals(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvSignal> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__env_signals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvSignal *>(
    get_const_function__EnvInfo__env_signals(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvSignal *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__env_signals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvSignal *>(
    get_function__EnvInfo__env_signals(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvSignal *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__env_signals(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvSignal> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__junction_box(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__junction_box(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__junction_box(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__junction_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvInfo__junction_box(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__junction_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvInfo__junction_box(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__junction_box(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__passable_space(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__passable_space(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__passable_space(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__passable_space(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(
    get_const_function__EnvInfo__passable_space(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__passable_space(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(
    get_function__EnvInfo__passable_space(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__passable_space(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__law_space(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__law_space(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__law_space(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__law_space(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(
    get_const_function__EnvInfo__law_space(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__law_space(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(
    get_function__EnvInfo__law_space(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__law_space(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__roadline_final(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__roadline_final(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__roadline_final(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__roadline_final(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvInfo__roadline_final(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__roadline_final(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvInfo__roadline_final(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__roadline_final(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__roadline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__roadline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__roadline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__roadline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvInfo__roadline(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__roadline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvInfo__roadline(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__roadline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__law_space_merged(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__law_space_merged(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__law_space_merged(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__law_space_merged(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(
    get_const_function__EnvInfo__law_space_merged(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__law_space_merged(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(
    get_function__EnvInfo__law_space_merged(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__law_space_merged(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__hdair_driveline(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__hdair_driveline(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__hdair_driveline(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__hdair_driveline(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(
    get_const_function__EnvInfo__hdair_driveline(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__hdair_driveline(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2dArray *>(
    get_function__EnvInfo__hdair_driveline(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2dArray *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__hdair_driveline(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2dArray> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__links(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLink> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__links(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvLink> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__links(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLink> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvLink *>(
    get_const_function__EnvInfo__links(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvLink *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvLink *>(
    get_function__EnvInfo__links(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvLink *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__links(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvLink> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__road_boundaries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::RoadBoundary> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__road_boundaries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::RoadBoundary> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__road_boundaries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::RoadBoundary> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__road_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::RoadBoundary *>(
    get_const_function__EnvInfo__road_boundaries(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::RoadBoundary *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__road_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::RoadBoundary *>(
    get_function__EnvInfo__road_boundaries(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::RoadBoundary *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__road_boundaries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::RoadBoundary> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvInfo__scenario_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::ScenarioInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvInfo__scenario_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::ScenarioInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvInfo__scenario_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::ScenarioInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvInfo__scenario_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::ScenarioInfo *>(
    get_const_function__EnvInfo__scenario_info(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::ScenarioInfo *>(untyped_value);
  value = item;
}

void assign_function__EnvInfo__scenario_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::ScenarioInfo *>(
    get_function__EnvInfo__scenario_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::ScenarioInfo *>(untyped_value);
  item = value;
}

void resize_function__EnvInfo__scenario_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::ScenarioInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvInfo_message_member_array[26] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "env_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, env_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__env_lines,  // size() function pointer
    get_const_function__EnvInfo__env_lines,  // get_const(index) function pointer
    get_function__EnvInfo__env_lines,  // get(index) function pointer
    fetch_function__EnvInfo__env_lines,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__env_lines,  // assign(index, value) function pointer
    resize_function__EnvInfo__env_lines  // resize(index) function pointer
  },
  {
    "env_objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, env_objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__env_objects,  // size() function pointer
    get_const_function__EnvInfo__env_objects,  // get_const(index) function pointer
    get_function__EnvInfo__env_objects,  // get(index) function pointer
    fetch_function__EnvInfo__env_objects,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__env_objects,  // assign(index, value) function pointer
    resize_function__EnvInfo__env_objects  // resize(index) function pointer
  },
  {
    "env_signals",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvSignal>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, env_signals),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__env_signals,  // size() function pointer
    get_const_function__EnvInfo__env_signals,  // get_const(index) function pointer
    get_function__EnvInfo__env_signals,  // get(index) function pointer
    fetch_function__EnvInfo__env_signals,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__env_signals,  // assign(index, value) function pointer
    resize_function__EnvInfo__env_signals  // resize(index) function pointer
  },
  {
    "junction_box",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, junction_box),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__junction_box,  // size() function pointer
    get_const_function__EnvInfo__junction_box,  // get_const(index) function pointer
    get_function__EnvInfo__junction_box,  // get(index) function pointer
    fetch_function__EnvInfo__junction_box,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__junction_box,  // assign(index, value) function pointer
    resize_function__EnvInfo__junction_box  // resize(index) function pointer
  },
  {
    "env_start_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, env_start_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, map_header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "map_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, map_mode),  // bytes offset in struct
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
    offsetof(environment_model_msgs::msg::EnvInfo, routing_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "navi_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, navi_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, has_map),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "passable_space",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, passable_space),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__passable_space,  // size() function pointer
    get_const_function__EnvInfo__passable_space,  // get_const(index) function pointer
    get_function__EnvInfo__passable_space,  // get(index) function pointer
    fetch_function__EnvInfo__passable_space,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__passable_space,  // assign(index, value) function pointer
    resize_function__EnvInfo__passable_space  // resize(index) function pointer
  },
  {
    "law_space",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, law_space),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__law_space,  // size() function pointer
    get_const_function__EnvInfo__law_space,  // get_const(index) function pointer
    get_function__EnvInfo__law_space,  // get(index) function pointer
    fetch_function__EnvInfo__law_space,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__law_space,  // assign(index, value) function pointer
    resize_function__EnvInfo__law_space  // resize(index) function pointer
  },
  {
    "roadline_final",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, roadline_final),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__roadline_final,  // size() function pointer
    get_const_function__EnvInfo__roadline_final,  // get_const(index) function pointer
    get_function__EnvInfo__roadline_final,  // get(index) function pointer
    fetch_function__EnvInfo__roadline_final,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__roadline_final,  // assign(index, value) function pointer
    resize_function__EnvInfo__roadline_final  // resize(index) function pointer
  },
  {
    "roadline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, roadline),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__roadline,  // size() function pointer
    get_const_function__EnvInfo__roadline,  // get_const(index) function pointer
    get_function__EnvInfo__roadline,  // get(index) function pointer
    fetch_function__EnvInfo__roadline,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__roadline,  // assign(index, value) function pointer
    resize_function__EnvInfo__roadline  // resize(index) function pointer
  },
  {
    "law_space_merged",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, law_space_merged),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__law_space_merged,  // size() function pointer
    get_const_function__EnvInfo__law_space_merged,  // get_const(index) function pointer
    get_function__EnvInfo__law_space_merged,  // get(index) function pointer
    fetch_function__EnvInfo__law_space_merged,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__law_space_merged,  // assign(index, value) function pointer
    resize_function__EnvInfo__law_space_merged  // resize(index) function pointer
  },
  {
    "meg_map_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, meg_map_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "channel_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, channel_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dist_sd_junction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, dist_sd_junction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hdair_driveline",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2dArray>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, hdair_driveline),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__hdair_driveline,  // size() function pointer
    get_const_function__EnvInfo__hdair_driveline,  // get_const(index) function pointer
    get_function__EnvInfo__hdair_driveline,  // get(index) function pointer
    fetch_function__EnvInfo__hdair_driveline,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__hdair_driveline,  // assign(index, value) function pointer
    resize_function__EnvInfo__hdair_driveline  // resize(index) function pointer
  },
  {
    "links",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvLink>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, links),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__links,  // size() function pointer
    get_const_function__EnvInfo__links,  // get_const(index) function pointer
    get_function__EnvInfo__links,  // get(index) function pointer
    fetch_function__EnvInfo__links,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__links,  // assign(index, value) function pointer
    resize_function__EnvInfo__links  // resize(index) function pointer
  },
  {
    "ownership",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, ownership),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_boundaries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::RoadBoundary>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, road_boundaries),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__road_boundaries,  // size() function pointer
    get_const_function__EnvInfo__road_boundaries,  // get_const(index) function pointer
    get_function__EnvInfo__road_boundaries,  // get(index) function pointer
    fetch_function__EnvInfo__road_boundaries,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__road_boundaries,  // assign(index, value) function pointer
    resize_function__EnvInfo__road_boundaries  // resize(index) function pointer
  },
  {
    "scenario_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::ScenarioInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, scenario_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvInfo__scenario_info,  // size() function pointer
    get_const_function__EnvInfo__scenario_info,  // get_const(index) function pointer
    get_function__EnvInfo__scenario_info,  // get(index) function pointer
    fetch_function__EnvInfo__scenario_info,  // fetch(index, &value) function pointer
    assign_function__EnvInfo__scenario_info,  // assign(index, value) function pointer
    resize_function__EnvInfo__scenario_info  // resize(index) function pointer
  },
  {
    "highway_scene",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvInfo, highway_scene),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvInfo_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvInfo",  // message name
  26,  // number of fields
  sizeof(environment_model_msgs::msg::EnvInfo),
  EnvInfo_message_member_array,  // message members
  EnvInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvInfo_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::EnvInfo>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvInfo)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
