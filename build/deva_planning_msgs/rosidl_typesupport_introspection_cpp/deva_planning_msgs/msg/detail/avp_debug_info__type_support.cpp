// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AvpDebugInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs::msg::AvpDebugInfo(_init);
}

void AvpDebugInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs::msg::AvpDebugInfo *>(message_memory);
  typed_message->~AvpDebugInfo();
}

size_t size_function__AvpDebugInfo__origin_ref_line(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLine> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__origin_ref_line(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLine> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__origin_ref_line(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLine> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__origin_ref_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLine *>(
    get_const_function__AvpDebugInfo__origin_ref_line(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLine *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__origin_ref_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLine *>(
    get_function__AvpDebugInfo__origin_ref_line(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLine *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__origin_ref_line(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLine> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__used_ref_line_tree(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__used_ref_line_tree(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__used_ref_line_tree(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__used_ref_line_tree(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLineTreePointVec *>(
    get_const_function__AvpDebugInfo__used_ref_line_tree(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLineTreePointVec *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__used_ref_line_tree(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLineTreePointVec *>(
    get_function__AvpDebugInfo__used_ref_line_tree(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLineTreePointVec *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__used_ref_line_tree(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__driver_path(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__driver_path(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__driver_path(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__driver_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLineTreePointVec *>(
    get_const_function__AvpDebugInfo__driver_path(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLineTreePointVec *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__driver_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::AvpRefLineTreePointVec *>(
    get_function__AvpDebugInfo__driver_path(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::AvpRefLineTreePointVec *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__driver_path(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::AvpRefLineTreePointVec> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__now_mpc_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__now_mpc_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__now_mpc_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__now_mpc_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(
    get_const_function__AvpDebugInfo__now_mpc_data(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__now_mpc_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(
    get_function__AvpDebugInfo__now_mpc_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__now_mpc_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__now_path_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__now_path_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__now_path_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__now_path_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(
    get_const_function__AvpDebugInfo__now_path_data(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__now_path_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(
    get_function__AvpDebugInfo__now_path_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__now_path_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__past_path_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__past_path_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__past_path_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__past_path_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(
    get_const_function__AvpDebugInfo__past_path_data(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__past_path_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::MpcPathData *>(
    get_function__AvpDebugInfo__past_path_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::MpcPathData *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__past_path_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::MpcPathData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__boundary_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__boundary_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__boundary_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__boundary_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::PathPoint *>(
    get_const_function__AvpDebugInfo__boundary_poses(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::PathPoint *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__boundary_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::PathPoint *>(
    get_function__AvpDebugInfo__boundary_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::PathPoint *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__boundary_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AvpDebugInfo__obstacle_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AvpDebugInfo__obstacle_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__AvpDebugInfo__obstacle_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AvpDebugInfo__obstacle_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::PathPoint *>(
    get_const_function__AvpDebugInfo__obstacle_poses(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::PathPoint *>(untyped_value);
  value = item;
}

void assign_function__AvpDebugInfo__obstacle_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::PathPoint *>(
    get_function__AvpDebugInfo__obstacle_poses(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::PathPoint *>(untyped_value);
  item = value;
}

void resize_function__AvpDebugInfo__obstacle_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::PathPoint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AvpDebugInfo_message_member_array[12] = {
  {
    "solve_num",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, solve_num),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acados_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, acados_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "origin_ref_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::AvpRefLine>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, origin_ref_line),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__origin_ref_line,  // size() function pointer
    get_const_function__AvpDebugInfo__origin_ref_line,  // get_const(index) function pointer
    get_function__AvpDebugInfo__origin_ref_line,  // get(index) function pointer
    fetch_function__AvpDebugInfo__origin_ref_line,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__origin_ref_line,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__origin_ref_line  // resize(index) function pointer
  },
  {
    "smooth_line",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::AvpRefLineTreePointVec>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, smooth_line),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "used_ref_line_tree",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::AvpRefLineTreePointVec>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, used_ref_line_tree),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__used_ref_line_tree,  // size() function pointer
    get_const_function__AvpDebugInfo__used_ref_line_tree,  // get_const(index) function pointer
    get_function__AvpDebugInfo__used_ref_line_tree,  // get(index) function pointer
    fetch_function__AvpDebugInfo__used_ref_line_tree,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__used_ref_line_tree,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__used_ref_line_tree  // resize(index) function pointer
  },
  {
    "driver_path",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::AvpRefLineTreePointVec>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, driver_path),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__driver_path,  // size() function pointer
    get_const_function__AvpDebugInfo__driver_path,  // get_const(index) function pointer
    get_function__AvpDebugInfo__driver_path,  // get(index) function pointer
    fetch_function__AvpDebugInfo__driver_path,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__driver_path,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__driver_path  // resize(index) function pointer
  },
  {
    "now_mpc_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::MpcPathData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, now_mpc_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__now_mpc_data,  // size() function pointer
    get_const_function__AvpDebugInfo__now_mpc_data,  // get_const(index) function pointer
    get_function__AvpDebugInfo__now_mpc_data,  // get(index) function pointer
    fetch_function__AvpDebugInfo__now_mpc_data,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__now_mpc_data,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__now_mpc_data  // resize(index) function pointer
  },
  {
    "now_path_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::MpcPathData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, now_path_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__now_path_data,  // size() function pointer
    get_const_function__AvpDebugInfo__now_path_data,  // get_const(index) function pointer
    get_function__AvpDebugInfo__now_path_data,  // get(index) function pointer
    fetch_function__AvpDebugInfo__now_path_data,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__now_path_data,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__now_path_data  // resize(index) function pointer
  },
  {
    "past_path_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::MpcPathData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, past_path_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__past_path_data,  // size() function pointer
    get_const_function__AvpDebugInfo__past_path_data,  // get_const(index) function pointer
    get_function__AvpDebugInfo__past_path_data,  // get(index) function pointer
    fetch_function__AvpDebugInfo__past_path_data,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__past_path_data,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__past_path_data  // resize(index) function pointer
  },
  {
    "boundary_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::PathPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, boundary_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__boundary_poses,  // size() function pointer
    get_const_function__AvpDebugInfo__boundary_poses,  // get_const(index) function pointer
    get_function__AvpDebugInfo__boundary_poses,  // get(index) function pointer
    fetch_function__AvpDebugInfo__boundary_poses,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__boundary_poses,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__boundary_poses  // resize(index) function pointer
  },
  {
    "obstacle_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::PathPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, obstacle_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__AvpDebugInfo__obstacle_poses,  // size() function pointer
    get_const_function__AvpDebugInfo__obstacle_poses,  // get_const(index) function pointer
    get_function__AvpDebugInfo__obstacle_poses,  // get(index) function pointer
    fetch_function__AvpDebugInfo__obstacle_poses,  // fetch(index, &value) function pointer
    assign_function__AvpDebugInfo__obstacle_poses,  // assign(index, value) function pointer
    resize_function__AvpDebugInfo__obstacle_poses  // resize(index) function pointer
  },
  {
    "stitch_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::StitchData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::AvpDebugInfo, stitch_data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AvpDebugInfo_message_members = {
  "deva_planning_msgs::msg",  // message namespace
  "AvpDebugInfo",  // message name
  12,  // number of fields
  sizeof(deva_planning_msgs::msg::AvpDebugInfo),
  AvpDebugInfo_message_member_array,  // message members
  AvpDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  AvpDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AvpDebugInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AvpDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_planning_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs::msg::AvpDebugInfo>()
{
  return &::deva_planning_msgs::msg::rosidl_typesupport_introspection_cpp::AvpDebugInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs, msg, AvpDebugInfo)() {
  return &::deva_planning_msgs::msg::rosidl_typesupport_introspection_cpp::AvpDebugInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
