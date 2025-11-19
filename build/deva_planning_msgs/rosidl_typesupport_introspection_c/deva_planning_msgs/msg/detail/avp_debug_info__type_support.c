// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs/msg/detail/avp_debug_info__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs/msg/detail/avp_debug_info__functions.h"
#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.h"


// Include directives for member types
// Member `origin_ref_line`
#include "deva_planning_msgs/msg/avp_ref_line.h"
// Member `origin_ref_line`
#include "deva_planning_msgs/msg/detail/avp_ref_line__rosidl_typesupport_introspection_c.h"
// Member `smooth_line`
// Member `used_ref_line_tree`
// Member `driver_path`
#include "deva_planning_msgs/msg/avp_ref_line_tree_point_vec.h"
// Member `smooth_line`
// Member `used_ref_line_tree`
// Member `driver_path`
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point_vec__rosidl_typesupport_introspection_c.h"
// Member `now_mpc_data`
// Member `now_path_data`
// Member `past_path_data`
#include "deva_planning_msgs/msg/mpc_path_data.h"
// Member `now_mpc_data`
// Member `now_path_data`
// Member `past_path_data`
#include "deva_planning_msgs/msg/detail/mpc_path_data__rosidl_typesupport_introspection_c.h"
// Member `boundary_poses`
// Member `obstacle_poses`
#include "deva_planning_msgs/msg/path_point.h"
// Member `boundary_poses`
// Member `obstacle_poses`
#include "deva_planning_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `stitch_data`
#include "deva_planning_msgs/msg/stitch_data.h"
// Member `stitch_data`
#include "deva_planning_msgs/msg/detail/stitch_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs__msg__AvpDebugInfo__init(message_memory);
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_fini_function(void * message_memory)
{
  deva_planning_msgs__msg__AvpDebugInfo__fini(message_memory);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__origin_ref_line(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__AvpRefLine__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__origin_ref_line(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__AvpRefLine__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__origin_ref_line(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__AvpRefLine__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__origin_ref_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__AvpRefLine * item =
    ((const deva_planning_msgs__msg__AvpRefLine *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__origin_ref_line(untyped_member, index));
  deva_planning_msgs__msg__AvpRefLine * value =
    (deva_planning_msgs__msg__AvpRefLine *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__origin_ref_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__AvpRefLine * item =
    ((deva_planning_msgs__msg__AvpRefLine *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__origin_ref_line(untyped_member, index));
  const deva_planning_msgs__msg__AvpRefLine * value =
    (const deva_planning_msgs__msg__AvpRefLine *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__origin_ref_line(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__AvpRefLine__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLine__Sequence *)(untyped_member);
  deva_planning_msgs__msg__AvpRefLine__Sequence__fini(member);
  return deva_planning_msgs__msg__AvpRefLine__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__used_ref_line_tree(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__used_ref_line_tree(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__used_ref_line_tree(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__used_ref_line_tree(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec * item =
    ((const deva_planning_msgs__msg__AvpRefLineTreePointVec *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__used_ref_line_tree(untyped_member, index));
  deva_planning_msgs__msg__AvpRefLineTreePointVec * value =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__used_ref_line_tree(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec * item =
    ((deva_planning_msgs__msg__AvpRefLineTreePointVec *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__used_ref_line_tree(untyped_member, index));
  const deva_planning_msgs__msg__AvpRefLineTreePointVec * value =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__used_ref_line_tree(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__fini(member);
  return deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__driver_path(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__driver_path(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__driver_path(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__driver_path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__AvpRefLineTreePointVec * item =
    ((const deva_planning_msgs__msg__AvpRefLineTreePointVec *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__driver_path(untyped_member, index));
  deva_planning_msgs__msg__AvpRefLineTreePointVec * value =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__driver_path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec * item =
    ((deva_planning_msgs__msg__AvpRefLineTreePointVec *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__driver_path(untyped_member, index));
  const deva_planning_msgs__msg__AvpRefLineTreePointVec * value =
    (const deva_planning_msgs__msg__AvpRefLineTreePointVec *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__driver_path(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence * member =
    (deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence *)(untyped_member);
  deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__fini(member);
  return deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__now_mpc_data(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_mpc_data(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_mpc_data(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__now_mpc_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__MpcPathData * item =
    ((const deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_mpc_data(untyped_member, index));
  deva_planning_msgs__msg__MpcPathData * value =
    (deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__now_mpc_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__MpcPathData * item =
    ((deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_mpc_data(untyped_member, index));
  const deva_planning_msgs__msg__MpcPathData * value =
    (const deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__now_mpc_data(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  deva_planning_msgs__msg__MpcPathData__Sequence__fini(member);
  return deva_planning_msgs__msg__MpcPathData__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__now_path_data(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_path_data(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_path_data(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__now_path_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__MpcPathData * item =
    ((const deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_path_data(untyped_member, index));
  deva_planning_msgs__msg__MpcPathData * value =
    (deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__now_path_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__MpcPathData * item =
    ((deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_path_data(untyped_member, index));
  const deva_planning_msgs__msg__MpcPathData * value =
    (const deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__now_path_data(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  deva_planning_msgs__msg__MpcPathData__Sequence__fini(member);
  return deva_planning_msgs__msg__MpcPathData__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__past_path_data(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__past_path_data(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (const deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__past_path_data(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__past_path_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__MpcPathData * item =
    ((const deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__past_path_data(untyped_member, index));
  deva_planning_msgs__msg__MpcPathData * value =
    (deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__past_path_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__MpcPathData * item =
    ((deva_planning_msgs__msg__MpcPathData *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__past_path_data(untyped_member, index));
  const deva_planning_msgs__msg__MpcPathData * value =
    (const deva_planning_msgs__msg__MpcPathData *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__past_path_data(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__MpcPathData__Sequence * member =
    (deva_planning_msgs__msg__MpcPathData__Sequence *)(untyped_member);
  deva_planning_msgs__msg__MpcPathData__Sequence__fini(member);
  return deva_planning_msgs__msg__MpcPathData__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__boundary_poses(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__boundary_poses(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__boundary_poses(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__boundary_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PathPoint * item =
    ((const deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__boundary_poses(untyped_member, index));
  deva_planning_msgs__msg__PathPoint * value =
    (deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__boundary_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PathPoint * item =
    ((deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__boundary_poses(untyped_member, index));
  const deva_planning_msgs__msg__PathPoint * value =
    (const deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__boundary_poses(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_planning_msgs__msg__PathPoint__Sequence__init(member, size);
}

size_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__obstacle_poses(
  const void * untyped_member)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__obstacle_poses(
  const void * untyped_member, size_t index)
{
  const deva_planning_msgs__msg__PathPoint__Sequence * member =
    (const deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__obstacle_poses(
  void * untyped_member, size_t index)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__obstacle_poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_planning_msgs__msg__PathPoint * item =
    ((const deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__obstacle_poses(untyped_member, index));
  deva_planning_msgs__msg__PathPoint * value =
    (deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__obstacle_poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_planning_msgs__msg__PathPoint * item =
    ((deva_planning_msgs__msg__PathPoint *)
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__obstacle_poses(untyped_member, index));
  const deva_planning_msgs__msg__PathPoint * value =
    (const deva_planning_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__obstacle_poses(
  void * untyped_member, size_t size)
{
  deva_planning_msgs__msg__PathPoint__Sequence * member =
    (deva_planning_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_planning_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_planning_msgs__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[12] = {
  {
    "solve_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, solve_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acados_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, acados_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "origin_ref_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, origin_ref_line),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__origin_ref_line,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__origin_ref_line,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__origin_ref_line,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__origin_ref_line,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__origin_ref_line,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__origin_ref_line  // resize(index) function pointer
  },
  {
    "smooth_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, smooth_line),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "used_ref_line_tree",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, used_ref_line_tree),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__used_ref_line_tree,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__used_ref_line_tree,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__used_ref_line_tree,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__used_ref_line_tree,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__used_ref_line_tree,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__used_ref_line_tree  // resize(index) function pointer
  },
  {
    "driver_path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, driver_path),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__driver_path,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__driver_path,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__driver_path,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__driver_path,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__driver_path,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__driver_path  // resize(index) function pointer
  },
  {
    "now_mpc_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, now_mpc_data),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__now_mpc_data,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_mpc_data,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_mpc_data,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__now_mpc_data,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__now_mpc_data,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__now_mpc_data  // resize(index) function pointer
  },
  {
    "now_path_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, now_path_data),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__now_path_data,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__now_path_data,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__now_path_data,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__now_path_data,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__now_path_data,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__now_path_data  // resize(index) function pointer
  },
  {
    "past_path_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, past_path_data),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__past_path_data,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__past_path_data,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__past_path_data,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__past_path_data,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__past_path_data,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__past_path_data  // resize(index) function pointer
  },
  {
    "boundary_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, boundary_poses),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__boundary_poses,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__boundary_poses,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__boundary_poses,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__boundary_poses,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__boundary_poses,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__boundary_poses  // resize(index) function pointer
  },
  {
    "obstacle_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, obstacle_poses),  // bytes offset in struct
    NULL,  // default value
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__size_function__AvpDebugInfo__obstacle_poses,  // size() function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_const_function__AvpDebugInfo__obstacle_poses,  // get_const(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__get_function__AvpDebugInfo__obstacle_poses,  // get(index) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__fetch_function__AvpDebugInfo__obstacle_poses,  // fetch(index, &value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__assign_function__AvpDebugInfo__obstacle_poses,  // assign(index, value) function pointer
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__resize_function__AvpDebugInfo__obstacle_poses  // resize(index) function pointer
  },
  {
    "stitch_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs__msg__AvpDebugInfo, stitch_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_members = {
  "deva_planning_msgs__msg",  // message namespace
  "AvpDebugInfo",  // message name
  12,  // number of fields
  sizeof(deva_planning_msgs__msg__AvpDebugInfo),
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array,  // message members
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_type_support_handle = {
  0,
  &deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, AvpDebugInfo)() {
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, AvpRefLine)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, AvpRefLineTreePointVec)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, AvpRefLineTreePointVec)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, AvpRefLineTreePointVec)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, MpcPathData)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, MpcPathData)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, MpcPathData)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathPoint)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, PathPoint)();
  deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, StitchData)();
  if (!deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs__msg__AvpDebugInfo__rosidl_typesupport_introspection_c__AvpDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
