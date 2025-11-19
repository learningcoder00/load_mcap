// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_mdriver_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MPredictionObstacle_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_mdriver_msgs::msg::MPredictionObstacle(_init);
}

void MPredictionObstacle_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_mdriver_msgs::msg::MPredictionObstacle *>(message_memory);
  typed_message->~MPredictionObstacle();
}

size_t size_function__MPredictionObstacle__trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_planning_msgs::msg::TrajectoryPoint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPredictionObstacle__trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_planning_msgs::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void * get_function__MPredictionObstacle__trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_planning_msgs::msg::TrajectoryPoint> *>(untyped_member);
  return &member[index];
}

void fetch_function__MPredictionObstacle__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_planning_msgs::msg::TrajectoryPoint *>(
    get_const_function__MPredictionObstacle__trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<deva_planning_msgs::msg::TrajectoryPoint *>(untyped_value);
  value = item;
}

void assign_function__MPredictionObstacle__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_planning_msgs::msg::TrajectoryPoint *>(
    get_function__MPredictionObstacle__trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_planning_msgs::msg::TrajectoryPoint *>(untyped_value);
  item = value;
}

void resize_function__MPredictionObstacle__trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_planning_msgs::msg::TrajectoryPoint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MPredictionObstacle__decision(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPredictionObstacle__decision(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MPredictionObstacle__decision(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MPredictionObstacle__decision(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__MPredictionObstacle__decision(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__MPredictionObstacle__decision(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__MPredictionObstacle__decision(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

void resize_function__MPredictionObstacle__decision(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint8_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MPredictionObstacle__cov(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPredictionObstacle__cov(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MPredictionObstacle__cov(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MPredictionObstacle__cov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MPredictionObstacle__cov(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MPredictionObstacle__cov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MPredictionObstacle__cov(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MPredictionObstacle__cov(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MPredictionObstacle__acc_heading_steering_stats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPredictionObstacle__acc_heading_steering_stats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats> *>(untyped_member);
  return &member[index];
}

void * get_function__MPredictionObstacle__acc_heading_steering_stats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats> *>(untyped_member);
  return &member[index];
}

void fetch_function__MPredictionObstacle__acc_heading_steering_stats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_mdriver_msgs::msg::AccHeadingSteeringStats *>(
    get_const_function__MPredictionObstacle__acc_heading_steering_stats(untyped_member, index));
  auto & value = *reinterpret_cast<deva_mdriver_msgs::msg::AccHeadingSteeringStats *>(untyped_value);
  value = item;
}

void assign_function__MPredictionObstacle__acc_heading_steering_stats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_mdriver_msgs::msg::AccHeadingSteeringStats *>(
    get_function__MPredictionObstacle__acc_heading_steering_stats(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_mdriver_msgs::msg::AccHeadingSteeringStats *>(untyped_value);
  item = value;
}

void resize_function__MPredictionObstacle__acc_heading_steering_stats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MPredictionObstacle__prediction_debug_info(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::DebugInfo> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MPredictionObstacle__prediction_debug_info(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<deva_mdriver_msgs::msg::DebugInfo> *>(untyped_member);
  return &member[index];
}

void * get_function__MPredictionObstacle__prediction_debug_info(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<deva_mdriver_msgs::msg::DebugInfo> *>(untyped_member);
  return &member[index];
}

void fetch_function__MPredictionObstacle__prediction_debug_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const deva_mdriver_msgs::msg::DebugInfo *>(
    get_const_function__MPredictionObstacle__prediction_debug_info(untyped_member, index));
  auto & value = *reinterpret_cast<deva_mdriver_msgs::msg::DebugInfo *>(untyped_value);
  value = item;
}

void assign_function__MPredictionObstacle__prediction_debug_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<deva_mdriver_msgs::msg::DebugInfo *>(
    get_function__MPredictionObstacle__prediction_debug_info(untyped_member, index));
  const auto & value = *reinterpret_cast<const deva_mdriver_msgs::msg::DebugInfo *>(untyped_value);
  item = value;
}

void resize_function__MPredictionObstacle__prediction_debug_info(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<deva_mdriver_msgs::msg::DebugInfo> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MPredictionObstacle_message_member_array[9] = {
  {
    "perception_obstacle",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_perception_msgs::msg::MovingObstacle>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, perception_obstacle),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_planning_msgs::msg::TrajectoryPoint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPredictionObstacle__trajectory,  // size() function pointer
    get_const_function__MPredictionObstacle__trajectory,  // get_const(index) function pointer
    get_function__MPredictionObstacle__trajectory,  // get(index) function pointer
    fetch_function__MPredictionObstacle__trajectory,  // fetch(index, &value) function pointer
    assign_function__MPredictionObstacle__trajectory,  // assign(index, value) function pointer
    resize_function__MPredictionObstacle__trajectory  // resize(index) function pointer
  },
  {
    "decision",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, decision),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPredictionObstacle__decision,  // size() function pointer
    get_const_function__MPredictionObstacle__decision,  // get_const(index) function pointer
    get_function__MPredictionObstacle__decision,  // get(index) function pointer
    fetch_function__MPredictionObstacle__decision,  // fetch(index, &value) function pointer
    assign_function__MPredictionObstacle__decision,  // assign(index, value) function pointer
    resize_function__MPredictionObstacle__decision  // resize(index) function pointer
  },
  {
    "obs_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, obs_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "score",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, score),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, cov),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPredictionObstacle__cov,  // size() function pointer
    get_const_function__MPredictionObstacle__cov,  // get_const(index) function pointer
    get_function__MPredictionObstacle__cov,  // get(index) function pointer
    fetch_function__MPredictionObstacle__cov,  // fetch(index, &value) function pointer
    assign_function__MPredictionObstacle__cov,  // assign(index, value) function pointer
    resize_function__MPredictionObstacle__cov  // resize(index) function pointer
  },
  {
    "is_static",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, is_static),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "acc_heading_steering_stats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::AccHeadingSteeringStats>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, acc_heading_steering_stats),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPredictionObstacle__acc_heading_steering_stats,  // size() function pointer
    get_const_function__MPredictionObstacle__acc_heading_steering_stats,  // get_const(index) function pointer
    get_function__MPredictionObstacle__acc_heading_steering_stats,  // get(index) function pointer
    fetch_function__MPredictionObstacle__acc_heading_steering_stats,  // fetch(index, &value) function pointer
    assign_function__MPredictionObstacle__acc_heading_steering_stats,  // assign(index, value) function pointer
    resize_function__MPredictionObstacle__acc_heading_steering_stats  // resize(index) function pointer
  },
  {
    "prediction_debug_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_mdriver_msgs::msg::DebugInfo>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_mdriver_msgs::msg::MPredictionObstacle, prediction_debug_info),  // bytes offset in struct
    nullptr,  // default value
    size_function__MPredictionObstacle__prediction_debug_info,  // size() function pointer
    get_const_function__MPredictionObstacle__prediction_debug_info,  // get_const(index) function pointer
    get_function__MPredictionObstacle__prediction_debug_info,  // get(index) function pointer
    fetch_function__MPredictionObstacle__prediction_debug_info,  // fetch(index, &value) function pointer
    assign_function__MPredictionObstacle__prediction_debug_info,  // assign(index, value) function pointer
    resize_function__MPredictionObstacle__prediction_debug_info  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MPredictionObstacle_message_members = {
  "deva_mdriver_msgs::msg",  // message namespace
  "MPredictionObstacle",  // message name
  9,  // number of fields
  sizeof(deva_mdriver_msgs::msg::MPredictionObstacle),
  MPredictionObstacle_message_member_array,  // message members
  MPredictionObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  MPredictionObstacle_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MPredictionObstacle_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MPredictionObstacle_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_mdriver_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_mdriver_msgs::msg::MPredictionObstacle>()
{
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MPredictionObstacle_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_mdriver_msgs, msg, MPredictionObstacle)() {
  return &::deva_mdriver_msgs::msg::rosidl_typesupport_introspection_cpp::MPredictionObstacle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
