// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__functions.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__MachFusionFrame__init(message_memory);
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__MachFusionFrame__fini(message_memory);
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__ego2camera_pose(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego2camera_pose(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego2camera_pose(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__ego2camera_pose(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego2camera_pose(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__ego2camera_pose(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego2camera_pose(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu_ego_pose_matirx(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_ego_pose_matirx(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_ego_pose_matirx(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu_ego_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_ego_pose_matirx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu_ego_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_ego_pose_matirx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu_imu_pose_matirx(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_imu_pose_matirx(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_imu_pose_matirx(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu_imu_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_imu_pose_matirx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu_imu_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_imu_pose_matirx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__ego_world_pose_matirx(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego_world_pose_matirx(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego_world_pose_matirx(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__ego_world_pose_matirx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego_world_pose_matirx(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__ego_world_pose_matirx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego_world_pose_matirx(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__camera_k_matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 9;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__camera_k_matrix(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__camera_k_matrix(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__camera_k_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__camera_k_matrix(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__camera_k_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__camera_k_matrix(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__imu_world_translation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_translation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_translation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__imu_world_translation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_translation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__imu_world_translation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_translation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__imu_world_rotation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_rotation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_rotation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__imu_world_rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_rotation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__imu_world_rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_rotation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front_left(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_left(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_left(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_left(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_left(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front_right(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_right(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_right(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_right(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_right(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back_left(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_left(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_left(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back_left(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_left(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back_left(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_left(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back_right(
  const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_right(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_right(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back_right(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_right(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back_right(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_right(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_member_array[33] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rv_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rv_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bev_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, bev_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_radar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, front_radar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_right_radar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, front_right_radar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "front_left_radar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, front_left_radar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_left_radar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, back_left_radar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "back_right_radar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, back_right_radar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lidar_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, lidar_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ins_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, ins_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego2camera_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, ego2camera_pose),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__ego2camera_pose,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego2camera_pose,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego2camera_pose,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__ego2camera_pose,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__ego2camera_pose,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu_ego_pose_matirx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu_ego_pose_matirx),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu_ego_pose_matirx,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_ego_pose_matirx,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_ego_pose_matirx,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu_ego_pose_matirx,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu_ego_pose_matirx,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu_imu_pose_matirx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu_imu_pose_matirx),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu_imu_pose_matirx,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu_imu_pose_matirx,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu_imu_pose_matirx,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu_imu_pose_matirx,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu_imu_pose_matirx,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_world_pose_matirx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, ego_world_pose_matirx),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__ego_world_pose_matirx,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__ego_world_pose_matirx,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__ego_world_pose_matirx,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__ego_world_pose_matirx,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__ego_world_pose_matirx,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_k_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    9,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, camera_k_matrix),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__camera_k_matrix,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__camera_k_matrix,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__camera_k_matrix,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__camera_k_matrix,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__camera_k_matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_world_translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, imu_world_translation),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__imu_world_translation,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_translation,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_translation,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__imu_world_translation,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__imu_world_translation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_world_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, imu_world_rotation),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__imu_world_rotation,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__imu_world_rotation,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__imu_world_rotation,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__imu_world_rotation,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__imu_world_rotation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_front),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_front_left),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front_left,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_left,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_left,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front_left,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front_left,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_front_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_front_right),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_front_right,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_front_right,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_front_right,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_front_right,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_front_right,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_back),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_back_left),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back_left,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_left,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_left,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back_left,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back_left,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu2camera_pose_back_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, rfu2camera_pose_back_right),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__size_function__MachFusionFrame__rfu2camera_pose_back_right,  // size() function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_const_function__MachFusionFrame__rfu2camera_pose_back_right,  // get_const(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__get_function__MachFusionFrame__rfu2camera_pose_back_right,  // get(index) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__fetch_function__MachFusionFrame__rfu2camera_pose_back_right,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__assign_function__MachFusionFrame__rfu2camera_pose_back_right,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehile_report_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, vehile_report_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve6",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve6),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserve7",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__MachFusionFrame, reserve7),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "MachFusionFrame",  // message name
  33,  // number of fields
  sizeof(deva_aeb_msgs__msg__MachFusionFrame),
  deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_member_array,  // message members
  deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, MachFusionFrame)() {
  deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  if (!deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__MachFusionFrame__rosidl_typesupport_introspection_c__MachFusionFrame_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
