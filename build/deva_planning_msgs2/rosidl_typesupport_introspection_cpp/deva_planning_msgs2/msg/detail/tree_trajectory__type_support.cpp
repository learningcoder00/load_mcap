// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.hpp"
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

void TreeTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_planning_msgs2::msg::TreeTrajectory(_init);
}

void TreeTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_planning_msgs2::msg::TreeTrajectory *>(message_memory);
  typed_message->~TreeTrajectory();
}

size_t size_function__TreeTrajectory__trajectory_points(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::TrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TreeTrajectory__trajectory_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__TreeTrajectory__trajectory_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__TreeTrajectory__trajectory_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::TrajectoryPoint *>(
    get_const_function__TreeTrajectory__trajectory_points(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::TrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__TreeTrajectory__trajectory_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::TrajectoryPoint *>(
    get_function__TreeTrajectory__trajectory_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::TrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__TreeTrajectory__trajectory_points(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::TrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__TreeTrajectory__traj_score(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__TreeTrajectory__traj_score(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void * get_function__TreeTrajectory__traj_score(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  return &member[index];
}

void fetch_function__TreeTrajectory__traj_score(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(
    get_const_function__TreeTrajectory__traj_score(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(untyped_value);
  value = item;
}

void assign_function__TreeTrajectory__traj_score(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs2::msg::String2Double *>(
    get_function__TreeTrajectory__traj_score(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs2::msg::String2Double *>(untyped_value);
  item = value;
}

void resize_function__TreeTrajectory__traj_score(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs2::msg::String2Double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TreeTrajectory_message_member_array[4] = {
  {
    "obs_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::TreeTrajectory, obs_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "confidence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::TreeTrajectory, confidence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::TrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::TreeTrajectory, trajectory_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__TreeTrajectory__trajectory_points,  // size() function pointer
    get_const_function__TreeTrajectory__trajectory_points,  // get_const(index) function pointer
    get_function__TreeTrajectory__trajectory_points,  // get(index) function pointer
    fetch_function__TreeTrajectory__trajectory_points,  // fetch(index, &value) function pointer
    assign_function__TreeTrajectory__trajectory_points,  // assign(index, value) function pointer
    resize_function__TreeTrajectory__trajectory_points  // resize(index) function pointer
  },
  {
    "traj_score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs2::msg::String2Double>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2::msg::TreeTrajectory, traj_score),  // bytes offset in struct
    nullptr,  // default value
    size_function__TreeTrajectory__traj_score,  // size() function pointer
    get_const_function__TreeTrajectory__traj_score,  // get_const(index) function pointer
    get_function__TreeTrajectory__traj_score,  // get(index) function pointer
    fetch_function__TreeTrajectory__traj_score,  // fetch(index, &value) function pointer
    assign_function__TreeTrajectory__traj_score,  // assign(index, value) function pointer
    resize_function__TreeTrajectory__traj_score  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TreeTrajectory_message_members = {
  "deva_planning_msgs2::msg",  // message namespace
  "TreeTrajectory",  // message name
  4,  // number of fields
  sizeof(deva_planning_msgs2::msg::TreeTrajectory),
  TreeTrajectory_message_member_array,  // message members
  TreeTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  TreeTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TreeTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TreeTrajectory_message_members,
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
get_message_type_support_handle<deva_planning_msgs2::msg::TreeTrajectory>()
{
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::TreeTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_planning_msgs2, msg, TreeTrajectory)() {
  return &::deva_planning_msgs2::msg::rosidl_typesupport_introspection_cpp::TreeTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
