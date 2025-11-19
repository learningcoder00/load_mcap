// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.hpp"
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

void NavOpenspaceDebugInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs::msg::NavOpenspaceDebugInfo(_init);
}

void NavOpenspaceDebugInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs::msg::NavOpenspaceDebugInfo *>(message_memory);
  typed_message->~NavOpenspaceDebugInfo();
}

size_t size_function__NavOpenspaceDebugInfo__xy_bounds(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__xy_bounds(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__xy_bounds(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__xy_bounds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__NavOpenspaceDebugInfo__xy_bounds(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__xy_bounds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__NavOpenspaceDebugInfo__xy_bounds(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__xy_bounds(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__obstacles_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::NavOpenspaceObstacle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__obstacles_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::NavOpenspaceObstacle> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__obstacles_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::NavOpenspaceObstacle> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__obstacles_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::NavOpenspaceObstacle *>(
    get_const_function__NavOpenspaceDebugInfo__obstacles_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::NavOpenspaceObstacle *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__obstacles_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::NavOpenspaceObstacle *>(
    get_function__NavOpenspaceDebugInfo__obstacles_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::NavOpenspaceObstacle *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__obstacles_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::NavOpenspaceObstacle> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__parking_slots(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::NavOpenspaceParkingSlot> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__parking_slots(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::NavOpenspaceParkingSlot> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__parking_slots(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::NavOpenspaceParkingSlot> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__parking_slots(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::NavOpenspaceParkingSlot *>(
    get_const_function__NavOpenspaceDebugInfo__parking_slots(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::NavOpenspaceParkingSlot *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__parking_slots(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::NavOpenspaceParkingSlot *>(
    get_function__NavOpenspaceDebugInfo__parking_slots(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::NavOpenspaceParkingSlot *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__parking_slots(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::NavOpenspaceParkingSlot> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__ref_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__ref_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__ref_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__ref_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::PathData *>(
    get_const_function__NavOpenspaceDebugInfo__ref_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::PathData *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__ref_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::PathData *>(
    get_function__NavOpenspaceDebugInfo__ref_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::PathData *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__ref_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(
    get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(
    get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__last_ref_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__last_ref_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__last_ref_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__last_ref_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::PathData *>(
    get_const_function__NavOpenspaceDebugInfo__last_ref_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::PathData *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__last_ref_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::PathData *>(
    get_function__NavOpenspaceDebugInfo__last_ref_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::PathData *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__last_ref_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::PathData> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(
    get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(
    get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__hybrid_astar_search_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  member->resize(size);
}

size_t size_function__NavOpenspaceDebugInfo__optimization_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__NavOpenspaceDebugInfo__optimization_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__NavOpenspaceDebugInfo__optimization_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__NavOpenspaceDebugInfo__optimization_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(
    get_const_function__NavOpenspaceDebugInfo__optimization_results(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  value = item;
}

void assign_function__NavOpenspaceDebugInfo__optimization_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::TargetTrajectory *>(
    get_function__NavOpenspaceDebugInfo__optimization_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::TargetTrajectory *>(untyped_value);
  item = value;
}

void resize_function__NavOpenspaceDebugInfo__optimization_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::TargetTrajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember NavOpenspaceDebugInfo_message_member_array[24] = {
  {
    "x_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, x_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, y_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, theta_s),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "x_e",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, x_e),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_e",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, y_e),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta_e",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, theta_e),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "xy_bounds",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, xy_bounds),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__xy_bounds,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__xy_bounds,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__xy_bounds,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__xy_bounds,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__xy_bounds,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__xy_bounds  // resize(index) function pointer
  },
  {
    "obstacles_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::NavOpenspaceObstacle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, obstacles_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__obstacles_info,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__obstacles_info,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__obstacles_info,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__obstacles_info,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__obstacles_info,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__obstacles_info  // resize(index) function pointer
  },
  {
    "parking_slots",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::NavOpenspaceParkingSlot>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, parking_slots),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__parking_slots,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__parking_slots,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__parking_slots,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__parking_slots,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__parking_slots,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__parking_slots  // resize(index) function pointer
  },
  {
    "start_gear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, start_gear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, speed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "keep_start_gear_distance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, keep_start_gear_distance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kappa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, kappa),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::PathData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, ref_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__ref_points,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__ref_points,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__ref_points,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__ref_points,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__ref_points,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__ref_points  // resize(index) function pointer
  },
  {
    "openspace_planning_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, openspace_planning_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::TargetTrajectory>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, last_trajectory),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_trajectory_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, last_trajectory_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_internal_trajectory_paths",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::TargetTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, last_internal_trajectory_paths),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__last_internal_trajectory_paths  // resize(index) function pointer
  },
  {
    "current_path_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, current_path_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_arrived_path_end",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, is_arrived_path_end),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_ref_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::PathData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, last_ref_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__last_ref_points,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__last_ref_points,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__last_ref_points,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__last_ref_points,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__last_ref_points,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__last_ref_points  // resize(index) function pointer
  },
  {
    "hybrid_astar_search_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::TargetTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, hybrid_astar_search_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__hybrid_astar_search_results,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__hybrid_astar_search_results  // resize(index) function pointer
  },
  {
    "optimization_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::TargetTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs::msg::NavOpenspaceDebugInfo, optimization_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__NavOpenspaceDebugInfo__optimization_results,  // size() function pointer
    get_const_function__NavOpenspaceDebugInfo__optimization_results,  // get_const(index) function pointer
    get_function__NavOpenspaceDebugInfo__optimization_results,  // get(index) function pointer
    fetch_function__NavOpenspaceDebugInfo__optimization_results,  // fetch(index, &value) function pointer
    assign_function__NavOpenspaceDebugInfo__optimization_results,  // assign(index, value) function pointer
    resize_function__NavOpenspaceDebugInfo__optimization_results  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers NavOpenspaceDebugInfo_message_members = {
  "deva_planning_msgs::msg",  // message namespace
  "NavOpenspaceDebugInfo",  // message name
  24,  // number of fields
  sizeof(deva_planning_msgs::msg::NavOpenspaceDebugInfo),
  NavOpenspaceDebugInfo_message_member_array,  // message members
  NavOpenspaceDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  NavOpenspaceDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t NavOpenspaceDebugInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &NavOpenspaceDebugInfo_message_members,
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
get_message_type_support_handle<deva_planning_msgs::msg::NavOpenspaceDebugInfo>()
{
  return &::deva_planning_msgs::msg::rosidl_typesupport_introspection_cpp::NavOpenspaceDebugInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs, msg, NavOpenspaceDebugInfo)() {
  return &::deva_planning_msgs::msg::rosidl_typesupport_introspection_cpp::NavOpenspaceDebugInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
