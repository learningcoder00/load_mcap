// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "environment_model_msgs/msg/detail/env_line__struct.hpp"
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

void EnvLine_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) environment_model_msgs::msg::EnvLine(_init);
}

void EnvLine_fini_function(void * message_memory)
{
  auto typed_message = static_cast<environment_model_msgs::msg::EnvLine *>(message_memory);
  typed_message->~EnvLine();
}

size_t size_function__EnvLine__env_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__env_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::EnvPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__env_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::EnvPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__env_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::EnvPoint *>(
    get_const_function__EnvLine__env_points(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::EnvPoint *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__env_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::EnvPoint *>(
    get_function__EnvLine__env_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::EnvPoint *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__env_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::EnvPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__last_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::PairInt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__last_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::PairInt> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__last_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::PairInt> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__last_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::PairInt *>(
    get_const_function__EnvLine__last_ids(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::PairInt *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__last_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::PairInt *>(
    get_function__EnvLine__last_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::PairInt *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__last_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::PairInt> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__merge_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__merge_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__merge_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__merge_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__EnvLine__merge_lines(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__merge_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__EnvLine__merge_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__merge_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__split_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__split_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__split_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__split_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__EnvLine__split_lines(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__split_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__EnvLine__split_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__split_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__merge_pos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::PairDoubleInt> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__merge_pos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::PairDoubleInt> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__merge_pos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::PairDoubleInt> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__merge_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::PairDoubleInt *>(
    get_const_function__EnvLine__merge_pos(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::PairDoubleInt *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__merge_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::PairDoubleInt *>(
    get_function__EnvLine__merge_pos(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::PairDoubleInt *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__merge_pos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::PairDoubleInt> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__lk_lines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__lk_lines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__lk_lines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__lk_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int32_t *>(
    get_const_function__EnvLine__lk_lines(untyped_member, index));
  auto & value = *reinterpret_cast<int32_t *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__lk_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int32_t *>(
    get_function__EnvLine__lk_lines(untyped_member, index));
  const auto & value = *reinterpret_cast<const int32_t *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__lk_lines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__left_ids_map(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__left_ids_map(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__left_ids_map(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__left_ids_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(
    get_const_function__EnvLine__left_ids_map(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__left_ids_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(
    get_function__EnvLine__left_ids_map(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__left_ids_map(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__right_ids_map(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__right_ids_map(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__right_ids_map(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__right_ids_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(
    get_const_function__EnvLine__right_ids_map(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__right_ids_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(
    get_function__EnvLine__right_ids_map(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__right_ids_map(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__signal_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::PairString> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__signal_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::PairString> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__signal_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::PairString> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__signal_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::PairString *>(
    get_const_function__EnvLine__signal_infos(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::PairString *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__signal_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::PairString *>(
    get_function__EnvLine__signal_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::PairString *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__signal_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::PairString> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__object_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::PairStringDouble> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__object_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::PairStringDouble> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__object_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::PairStringDouble> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__object_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::PairStringDouble *>(
    get_const_function__EnvLine__object_infos(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::PairStringDouble *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__object_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::PairStringDouble *>(
    get_function__EnvLine__object_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::PairStringDouble *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__object_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::PairStringDouble> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__virtual_line_infos(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::VirtualLineInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__virtual_line_infos(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::VirtualLineInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__virtual_line_infos(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::VirtualLineInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__virtual_line_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::VirtualLineInfo *>(
    get_const_function__EnvLine__virtual_line_infos(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::VirtualLineInfo *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__virtual_line_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::VirtualLineInfo *>(
    get_function__EnvLine__virtual_line_infos(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::VirtualLineInfo *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__virtual_line_infos(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::VirtualLineInfo> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__left_road_bound_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__left_road_bound_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__left_road_bound_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__left_road_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLine__left_road_bound_line(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__left_road_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLine__left_road_bound_line(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__left_road_bound_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__right_road_bound_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__right_road_bound_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__right_road_bound_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__right_road_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(
    get_const_function__EnvLine__right_road_bound_line(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__right_road_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::Vec2d *>(
    get_function__EnvLine__right_road_bound_line(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::Vec2d *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__right_road_bound_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::Vec2d> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__lane_sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__lane_sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__lane_sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__lane_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__EnvLine__lane_sequence(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__lane_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__EnvLine__lane_sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__lane_sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__EnvLine__overwide_pairs(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EnvLine__overwide_pairs(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void * get_function__EnvLine__overwide_pairs(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  return &member[index];
}

void fetch_function__EnvLine__overwide_pairs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(
    get_const_function__EnvLine__overwide_pairs(untyped_member, index));
  auto & value = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(untyped_value);
  value = item;
}

void assign_function__EnvLine__overwide_pairs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<environment_model_msgs::msg::MapIds *>(
    get_function__EnvLine__overwide_pairs(untyped_member, index));
  const auto & value = *reinterpret_cast<const environment_model_msgs::msg::MapIds *>(untyped_value);
  item = value;
}

void resize_function__EnvLine__overwide_pairs(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<environment_model_msgs::msg::MapIds> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EnvLine_message_member_array[33] = {
  {
    "env_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::EnvPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, env_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__env_points,  // size() function pointer
    get_const_function__EnvLine__env_points,  // get_const(index) function pointer
    get_function__EnvLine__env_points,  // get(index) function pointer
    fetch_function__EnvLine__env_points,  // fetch(index, &value) function pointer
    assign_function__EnvLine__env_points,  // assign(index, value) function pointer
    resize_function__EnvLine__env_points  // resize(index) function pointer
  },
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairInt>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, last_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__last_ids,  // size() function pointer
    get_const_function__EnvLine__last_ids,  // get_const(index) function pointer
    get_function__EnvLine__last_ids,  // get(index) function pointer
    fetch_function__EnvLine__last_ids,  // fetch(index, &value) function pointer
    assign_function__EnvLine__last_ids,  // assign(index, value) function pointer
    resize_function__EnvLine__last_ids  // resize(index) function pointer
  },
  {
    "perception_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairInt>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, perception_ids),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, ego_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_l",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, ego_l),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_on_road",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, is_on_road),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "routing_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, routing_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_reverse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, is_reverse),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enum_turn_scenario",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, enum_turn_scenario),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "merge_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, merge_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__merge_lines,  // size() function pointer
    get_const_function__EnvLine__merge_lines,  // get_const(index) function pointer
    get_function__EnvLine__merge_lines,  // get(index) function pointer
    fetch_function__EnvLine__merge_lines,  // fetch(index, &value) function pointer
    assign_function__EnvLine__merge_lines,  // assign(index, value) function pointer
    resize_function__EnvLine__merge_lines  // resize(index) function pointer
  },
  {
    "split_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, split_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__split_lines,  // size() function pointer
    get_const_function__EnvLine__split_lines,  // get_const(index) function pointer
    get_function__EnvLine__split_lines,  // get(index) function pointer
    fetch_function__EnvLine__split_lines,  // fetch(index, &value) function pointer
    assign_function__EnvLine__split_lines,  // assign(index, value) function pointer
    resize_function__EnvLine__split_lines  // resize(index) function pointer
  },
  {
    "merge_pos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairDoubleInt>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, merge_pos),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__merge_pos,  // size() function pointer
    get_const_function__EnvLine__merge_pos,  // get_const(index) function pointer
    get_function__EnvLine__merge_pos,  // get(index) function pointer
    fetch_function__EnvLine__merge_pos,  // fetch(index, &value) function pointer
    assign_function__EnvLine__merge_pos,  // assign(index, value) function pointer
    resize_function__EnvLine__merge_pos  // resize(index) function pointer
  },
  {
    "lk_lines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, lk_lines),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__lk_lines,  // size() function pointer
    get_const_function__EnvLine__lk_lines,  // get_const(index) function pointer
    get_function__EnvLine__lk_lines,  // get(index) function pointer
    fetch_function__EnvLine__lk_lines,  // fetch(index, &value) function pointer
    assign_function__EnvLine__lk_lines,  // assign(index, value) function pointer
    resize_function__EnvLine__lk_lines  // resize(index) function pointer
  },
  {
    "left_ids_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::MapIds>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, left_ids_map),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__left_ids_map,  // size() function pointer
    get_const_function__EnvLine__left_ids_map,  // get_const(index) function pointer
    get_function__EnvLine__left_ids_map,  // get(index) function pointer
    fetch_function__EnvLine__left_ids_map,  // fetch(index, &value) function pointer
    assign_function__EnvLine__left_ids_map,  // assign(index, value) function pointer
    resize_function__EnvLine__left_ids_map  // resize(index) function pointer
  },
  {
    "right_ids_map",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::MapIds>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, right_ids_map),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__right_ids_map,  // size() function pointer
    get_const_function__EnvLine__right_ids_map,  // get_const(index) function pointer
    get_function__EnvLine__right_ids_map,  // get(index) function pointer
    fetch_function__EnvLine__right_ids_map,  // fetch(index, &value) function pointer
    assign_function__EnvLine__right_ids_map,  // assign(index, value) function pointer
    resize_function__EnvLine__right_ids_map  // resize(index) function pointer
  },
  {
    "enum_road_struct_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, enum_road_struct_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "road_struct_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::RoadStructType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, road_struct_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "signal_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairString>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, signal_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__signal_infos,  // size() function pointer
    get_const_function__EnvLine__signal_infos,  // get_const(index) function pointer
    get_function__EnvLine__signal_infos,  // get(index) function pointer
    fetch_function__EnvLine__signal_infos,  // fetch(index, &value) function pointer
    assign_function__EnvLine__signal_infos,  // assign(index, value) function pointer
    resize_function__EnvLine__signal_infos  // resize(index) function pointer
  },
  {
    "object_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairStringDouble>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, object_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__object_infos,  // size() function pointer
    get_const_function__EnvLine__object_infos,  // get_const(index) function pointer
    get_function__EnvLine__object_infos,  // get(index) function pointer
    fetch_function__EnvLine__object_infos,  // fetch(index, &value) function pointer
    assign_function__EnvLine__object_infos,  // assign(index, value) function pointer
    resize_function__EnvLine__object_infos  // resize(index) function pointer
  },
  {
    "navi_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::NaviScore>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, navi_score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "virtual_line_infos",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::VirtualLineInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, virtual_line_infos),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__virtual_line_infos,  // size() function pointer
    get_const_function__EnvLine__virtual_line_infos,  // get_const(index) function pointer
    get_function__EnvLine__virtual_line_infos,  // get(index) function pointer
    fetch_function__EnvLine__virtual_line_infos,  // fetch(index, &value) function pointer
    assign_function__EnvLine__virtual_line_infos,  // assign(index, value) function pointer
    resize_function__EnvLine__virtual_line_infos  // resize(index) function pointer
  },
  {
    "left_road_bound_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, left_road_bound_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__left_road_bound_line,  // size() function pointer
    get_const_function__EnvLine__left_road_bound_line,  // get_const(index) function pointer
    get_function__EnvLine__left_road_bound_line,  // get(index) function pointer
    fetch_function__EnvLine__left_road_bound_line,  // fetch(index, &value) function pointer
    assign_function__EnvLine__left_road_bound_line,  // assign(index, value) function pointer
    resize_function__EnvLine__left_road_bound_line  // resize(index) function pointer
  },
  {
    "right_road_bound_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::Vec2d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, right_road_bound_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__right_road_bound_line,  // size() function pointer
    get_const_function__EnvLine__right_road_bound_line,  // get_const(index) function pointer
    get_function__EnvLine__right_road_bound_line,  // get(index) function pointer
    fetch_function__EnvLine__right_road_bound_line,  // fetch(index, &value) function pointer
    assign_function__EnvLine__right_road_bound_line,  // assign(index, value) function pointer
    resize_function__EnvLine__right_road_bound_line  // resize(index) function pointer
  },
  {
    "lane_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, lane_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, lane_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lane_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, lane_sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__lane_sequence,  // size() function pointer
    get_const_function__EnvLine__lane_sequence,  // get_const(index) function pointer
    get_function__EnvLine__lane_sequence,  // get(index) function pointer
    fetch_function__EnvLine__lane_sequence,  // fetch(index, &value) function pointer
    assign_function__EnvLine__lane_sequence,  // assign(index, value) function pointer
    resize_function__EnvLine__lane_sequence  // resize(index) function pointer
  },
  {
    "lane_seq_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, lane_seq_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "channel_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::PairInt>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, channel_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "virtual_line_to",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, virtual_line_to),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "midd_line_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, midd_line_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "overwide_pairs",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<environment_model_msgs::msg::MapIds>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, overwide_pairs),  // bytes offset in struct
    nullptr,  // default value
    size_function__EnvLine__overwide_pairs,  // size() function pointer
    get_const_function__EnvLine__overwide_pairs,  // get_const(index) function pointer
    get_function__EnvLine__overwide_pairs,  // get(index) function pointer
    fetch_function__EnvLine__overwide_pairs,  // fetch(index, &value) function pointer
    assign_function__EnvLine__overwide_pairs,  // assign(index, value) function pointer
    resize_function__EnvLine__overwide_pairs  // resize(index) function pointer
  },
  {
    "usemdriver",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs::msg::EnvLine, usemdriver),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EnvLine_message_members = {
  "environment_model_msgs::msg",  // message namespace
  "EnvLine",  // message name
  33,  // number of fields
  sizeof(environment_model_msgs::msg::EnvLine),
  EnvLine_message_member_array,  // message members
  EnvLine_init_function,  // function to initialize message memory (memory has to be allocated)
  EnvLine_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EnvLine_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EnvLine_message_members,
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
get_message_type_support_handle<environment_model_msgs::msg::EnvLine>()
{
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLine_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, environment_model_msgs, msg, EnvLine)() {
  return &::environment_model_msgs::msg::rosidl_typesupport_introspection_cpp::EnvLine_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
