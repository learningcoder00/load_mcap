// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace deva_aeb_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MachFusionFrame_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) deva_aeb_msgs::msg::MachFusionFrame(_init);
}

void MachFusionFrame_fini_function(void * message_memory)
{
  auto typed_message = static_cast<deva_aeb_msgs::msg::MachFusionFrame *>(message_memory);
  typed_message->~MachFusionFrame();
}

size_t size_function__MachFusionFrame__rfu2camera_pose(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__ego2camera_pose(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__ego2camera_pose(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__ego2camera_pose(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__ego2camera_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__ego2camera_pose(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__ego2camera_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__ego2camera_pose(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu_ego_pose_matirx(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__MachFusionFrame__rfu_ego_pose_matirx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu_ego_pose_matirx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu_ego_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu_ego_pose_matirx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu_ego_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu_ego_pose_matirx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu_imu_pose_matirx(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__MachFusionFrame__rfu_imu_pose_matirx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu_imu_pose_matirx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu_imu_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu_imu_pose_matirx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu_imu_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu_imu_pose_matirx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__ego_world_pose_matirx(const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * get_const_function__MachFusionFrame__ego_world_pose_matirx(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__ego_world_pose_matirx(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 16> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__ego_world_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__ego_world_pose_matirx(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__ego_world_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__ego_world_pose_matirx(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__camera_k_matrix(const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * get_const_function__MachFusionFrame__camera_k_matrix(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__camera_k_matrix(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 9> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__camera_k_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__camera_k_matrix(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__camera_k_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__camera_k_matrix(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__imu_world_translation(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__MachFusionFrame__imu_world_translation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__imu_world_translation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__imu_world_translation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__imu_world_translation(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__imu_world_translation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__imu_world_translation(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__imu_world_rotation(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MachFusionFrame__imu_world_rotation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__imu_world_rotation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__imu_world_rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__imu_world_rotation(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__imu_world_rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__imu_world_rotation(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_front(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_front(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_front(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_front(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_front(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_front(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_front(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_front_left(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_front_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_front_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_front_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_front_left(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_front_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_front_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_front_right(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_front_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_front_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_front_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_front_right(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_front_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_front_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_back(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_back(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_back(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_back(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_back(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_back(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_back(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_back_left(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_back_left(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_back_left(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_back_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_back_left(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_back_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_back_left(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__MachFusionFrame__rfu2camera_pose_back_right(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__MachFusionFrame__rfu2camera_pose_back_right(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__MachFusionFrame__rfu2camera_pose_back_right(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void fetch_function__MachFusionFrame__rfu2camera_pose_back_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MachFusionFrame__rfu2camera_pose_back_right(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MachFusionFrame__rfu2camera_pose_back_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MachFusionFrame__rfu2camera_pose_back_right(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MachFusionFrame_message_member_array[33] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<deva_common_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rv_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rv_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bev_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, bev_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_radar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, front_radar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_right_radar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, front_right_radar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "front_left_radar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, front_left_radar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "back_left_radar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, back_left_radar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "back_right_radar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, back_right_radar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lidar_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, lidar_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ins_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, ins_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego2camera_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, ego2camera_pose),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__ego2camera_pose,  // size() function pointer
    get_const_function__MachFusionFrame__ego2camera_pose,  // get_const(index) function pointer
    get_function__MachFusionFrame__ego2camera_pose,  // get(index) function pointer
    fetch_function__MachFusionFrame__ego2camera_pose,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__ego2camera_pose,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu_ego_pose_matirx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu_ego_pose_matirx),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu_ego_pose_matirx,  // size() function pointer
    get_const_function__MachFusionFrame__rfu_ego_pose_matirx,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu_ego_pose_matirx,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu_ego_pose_matirx,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu_ego_pose_matirx,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu_imu_pose_matirx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu_imu_pose_matirx),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu_imu_pose_matirx,  // size() function pointer
    get_const_function__MachFusionFrame__rfu_imu_pose_matirx,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu_imu_pose_matirx,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu_imu_pose_matirx,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu_imu_pose_matirx,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ego_world_pose_matirx",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, ego_world_pose_matirx),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__ego_world_pose_matirx,  // size() function pointer
    get_const_function__MachFusionFrame__ego_world_pose_matirx,  // get_const(index) function pointer
    get_function__MachFusionFrame__ego_world_pose_matirx,  // get(index) function pointer
    fetch_function__MachFusionFrame__ego_world_pose_matirx,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__ego_world_pose_matirx,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_k_matrix",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, camera_k_matrix),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__camera_k_matrix,  // size() function pointer
    get_const_function__MachFusionFrame__camera_k_matrix,  // get_const(index) function pointer
    get_function__MachFusionFrame__camera_k_matrix,  // get(index) function pointer
    fetch_function__MachFusionFrame__camera_k_matrix,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__camera_k_matrix,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_world_translation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, imu_world_translation),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__imu_world_translation,  // size() function pointer
    get_const_function__MachFusionFrame__imu_world_translation,  // get_const(index) function pointer
    get_function__MachFusionFrame__imu_world_translation,  // get(index) function pointer
    fetch_function__MachFusionFrame__imu_world_translation,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__imu_world_translation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "imu_world_rotation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, imu_world_rotation),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__imu_world_rotation,  // size() function pointer
    get_const_function__MachFusionFrame__imu_world_rotation,  // get_const(index) function pointer
    get_function__MachFusionFrame__imu_world_rotation,  // get(index) function pointer
    fetch_function__MachFusionFrame__imu_world_rotation,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__imu_world_rotation,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_front),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_front,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_front,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_front,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_front,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_front,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_front_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_front_left,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_front_left,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_front_left,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_front_left,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_front_left,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_front_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_front_right,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_front_right,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_front_right,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_front_right,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_front_right,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_back),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_back,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_back,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_back,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_back,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_back,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back_left",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_back_left),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_back_left,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_back_left,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_back_left,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_back_left,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_back_left,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, rfu2camera_pose_back_right),  // bytes offset in struct
    nullptr,  // default value
    size_function__MachFusionFrame__rfu2camera_pose_back_right,  // size() function pointer
    get_const_function__MachFusionFrame__rfu2camera_pose_back_right,  // get_const(index) function pointer
    get_function__MachFusionFrame__rfu2camera_pose_back_right,  // get(index) function pointer
    fetch_function__MachFusionFrame__rfu2camera_pose_back_right,  // fetch(index, &value) function pointer
    assign_function__MachFusionFrame__rfu2camera_pose_back_right,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vehile_report_time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, vehile_report_time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve4",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve4),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve5",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve5),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve6",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve6),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reserve7",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs::msg::MachFusionFrame, reserve7),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MachFusionFrame_message_members = {
  "deva_aeb_msgs::msg",  // message namespace
  "MachFusionFrame",  // message name
  33,  // number of fields
  sizeof(deva_aeb_msgs::msg::MachFusionFrame),
  MachFusionFrame_message_member_array,  // message members
  MachFusionFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  MachFusionFrame_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MachFusionFrame_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MachFusionFrame_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace deva_aeb_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_aeb_msgs::msg::MachFusionFrame>()
{
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::MachFusionFrame_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, deva_aeb_msgs, msg, MachFusionFrame)() {
  return &::deva_aeb_msgs::msg::rosidl_typesupport_introspection_cpp::MachFusionFrame_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
