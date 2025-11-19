// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/env_line__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/env_line__functions.h"
#include "environment_model_msgs/msg/detail/env_line__struct.h"


// Include directives for member types
// Member `env_points`
#include "environment_model_msgs/msg/env_point.h"
// Member `env_points`
#include "environment_model_msgs/msg/detail/env_point__rosidl_typesupport_introspection_c.h"
// Member `last_ids`
// Member `perception_ids`
// Member `channel_id`
#include "environment_model_msgs/msg/pair_int.h"
// Member `last_ids`
// Member `perception_ids`
// Member `channel_id`
#include "environment_model_msgs/msg/detail/pair_int__rosidl_typesupport_introspection_c.h"
// Member `merge_lines`
// Member `split_lines`
// Member `lk_lines`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `merge_pos`
#include "environment_model_msgs/msg/pair_double_int.h"
// Member `merge_pos`
#include "environment_model_msgs/msg/detail/pair_double_int__rosidl_typesupport_introspection_c.h"
// Member `left_ids_map`
// Member `right_ids_map`
// Member `overwide_pairs`
#include "environment_model_msgs/msg/map_ids.h"
// Member `left_ids_map`
// Member `right_ids_map`
// Member `overwide_pairs`
#include "environment_model_msgs/msg/detail/map_ids__rosidl_typesupport_introspection_c.h"
// Member `road_struct_type`
#include "environment_model_msgs/msg/road_struct_type.h"
// Member `road_struct_type`
#include "environment_model_msgs/msg/detail/road_struct_type__rosidl_typesupport_introspection_c.h"
// Member `signal_infos`
#include "environment_model_msgs/msg/pair_string.h"
// Member `signal_infos`
#include "environment_model_msgs/msg/detail/pair_string__rosidl_typesupport_introspection_c.h"
// Member `object_infos`
#include "environment_model_msgs/msg/pair_string_double.h"
// Member `object_infos`
#include "environment_model_msgs/msg/detail/pair_string_double__rosidl_typesupport_introspection_c.h"
// Member `navi_score`
#include "environment_model_msgs/msg/navi_score.h"
// Member `navi_score`
#include "environment_model_msgs/msg/detail/navi_score__rosidl_typesupport_introspection_c.h"
// Member `virtual_line_infos`
#include "environment_model_msgs/msg/virtual_line_info.h"
// Member `virtual_line_infos`
#include "environment_model_msgs/msg/detail/virtual_line_info__rosidl_typesupport_introspection_c.h"
// Member `left_road_bound_line`
// Member `right_road_bound_line`
#include "environment_model_msgs/msg/vec2d.h"
// Member `left_road_bound_line`
// Member `right_road_bound_line`
#include "environment_model_msgs/msg/detail/vec2d__rosidl_typesupport_introspection_c.h"
// Member `lane_id`
// Member `lane_sequence`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__EnvLine__init(message_memory);
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_fini_function(void * message_memory)
{
  environment_model_msgs__msg__EnvLine__fini(message_memory);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__env_points(
  const void * untyped_member)
{
  const environment_model_msgs__msg__EnvPoint__Sequence * member =
    (const environment_model_msgs__msg__EnvPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__env_points(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__EnvPoint__Sequence * member =
    (const environment_model_msgs__msg__EnvPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__env_points(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__EnvPoint__Sequence * member =
    (environment_model_msgs__msg__EnvPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__env_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__EnvPoint * item =
    ((const environment_model_msgs__msg__EnvPoint *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__env_points(untyped_member, index));
  environment_model_msgs__msg__EnvPoint * value =
    (environment_model_msgs__msg__EnvPoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__env_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__EnvPoint * item =
    ((environment_model_msgs__msg__EnvPoint *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__env_points(untyped_member, index));
  const environment_model_msgs__msg__EnvPoint * value =
    (const environment_model_msgs__msg__EnvPoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__env_points(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__EnvPoint__Sequence * member =
    (environment_model_msgs__msg__EnvPoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__EnvPoint__Sequence__fini(member);
  return environment_model_msgs__msg__EnvPoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__last_ids(
  const void * untyped_member)
{
  const environment_model_msgs__msg__PairInt__Sequence * member =
    (const environment_model_msgs__msg__PairInt__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__last_ids(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__PairInt__Sequence * member =
    (const environment_model_msgs__msg__PairInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__last_ids(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__PairInt__Sequence * member =
    (environment_model_msgs__msg__PairInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__last_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__PairInt * item =
    ((const environment_model_msgs__msg__PairInt *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__last_ids(untyped_member, index));
  environment_model_msgs__msg__PairInt * value =
    (environment_model_msgs__msg__PairInt *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__last_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__PairInt * item =
    ((environment_model_msgs__msg__PairInt *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__last_ids(untyped_member, index));
  const environment_model_msgs__msg__PairInt * value =
    (const environment_model_msgs__msg__PairInt *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__last_ids(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__PairInt__Sequence * member =
    (environment_model_msgs__msg__PairInt__Sequence *)(untyped_member);
  environment_model_msgs__msg__PairInt__Sequence__fini(member);
  return environment_model_msgs__msg__PairInt__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__merge_lines(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_lines(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_lines(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__merge_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_lines(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__merge_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_lines(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__merge_lines(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__split_lines(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__split_lines(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__split_lines(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__split_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__split_lines(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__split_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__split_lines(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__split_lines(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__merge_pos(
  const void * untyped_member)
{
  const environment_model_msgs__msg__PairDoubleInt__Sequence * member =
    (const environment_model_msgs__msg__PairDoubleInt__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_pos(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__PairDoubleInt__Sequence * member =
    (const environment_model_msgs__msg__PairDoubleInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_pos(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__PairDoubleInt__Sequence * member =
    (environment_model_msgs__msg__PairDoubleInt__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__merge_pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__PairDoubleInt * item =
    ((const environment_model_msgs__msg__PairDoubleInt *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_pos(untyped_member, index));
  environment_model_msgs__msg__PairDoubleInt * value =
    (environment_model_msgs__msg__PairDoubleInt *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__merge_pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__PairDoubleInt * item =
    ((environment_model_msgs__msg__PairDoubleInt *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_pos(untyped_member, index));
  const environment_model_msgs__msg__PairDoubleInt * value =
    (const environment_model_msgs__msg__PairDoubleInt *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__merge_pos(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__PairDoubleInt__Sequence * member =
    (environment_model_msgs__msg__PairDoubleInt__Sequence *)(untyped_member);
  environment_model_msgs__msg__PairDoubleInt__Sequence__fini(member);
  return environment_model_msgs__msg__PairDoubleInt__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__lk_lines(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lk_lines(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lk_lines(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__lk_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lk_lines(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__lk_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lk_lines(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__lk_lines(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__left_ids_map(
  const void * untyped_member)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_ids_map(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_ids_map(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__left_ids_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__MapIds * item =
    ((const environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_ids_map(untyped_member, index));
  environment_model_msgs__msg__MapIds * value =
    (environment_model_msgs__msg__MapIds *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__left_ids_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__MapIds * item =
    ((environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_ids_map(untyped_member, index));
  const environment_model_msgs__msg__MapIds * value =
    (const environment_model_msgs__msg__MapIds *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__left_ids_map(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  environment_model_msgs__msg__MapIds__Sequence__fini(member);
  return environment_model_msgs__msg__MapIds__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__right_ids_map(
  const void * untyped_member)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_ids_map(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_ids_map(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__right_ids_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__MapIds * item =
    ((const environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_ids_map(untyped_member, index));
  environment_model_msgs__msg__MapIds * value =
    (environment_model_msgs__msg__MapIds *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__right_ids_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__MapIds * item =
    ((environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_ids_map(untyped_member, index));
  const environment_model_msgs__msg__MapIds * value =
    (const environment_model_msgs__msg__MapIds *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__right_ids_map(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  environment_model_msgs__msg__MapIds__Sequence__fini(member);
  return environment_model_msgs__msg__MapIds__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__signal_infos(
  const void * untyped_member)
{
  const environment_model_msgs__msg__PairString__Sequence * member =
    (const environment_model_msgs__msg__PairString__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__signal_infos(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__PairString__Sequence * member =
    (const environment_model_msgs__msg__PairString__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__signal_infos(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__PairString__Sequence * member =
    (environment_model_msgs__msg__PairString__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__signal_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__PairString * item =
    ((const environment_model_msgs__msg__PairString *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__signal_infos(untyped_member, index));
  environment_model_msgs__msg__PairString * value =
    (environment_model_msgs__msg__PairString *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__signal_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__PairString * item =
    ((environment_model_msgs__msg__PairString *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__signal_infos(untyped_member, index));
  const environment_model_msgs__msg__PairString * value =
    (const environment_model_msgs__msg__PairString *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__signal_infos(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__PairString__Sequence * member =
    (environment_model_msgs__msg__PairString__Sequence *)(untyped_member);
  environment_model_msgs__msg__PairString__Sequence__fini(member);
  return environment_model_msgs__msg__PairString__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__object_infos(
  const void * untyped_member)
{
  const environment_model_msgs__msg__PairStringDouble__Sequence * member =
    (const environment_model_msgs__msg__PairStringDouble__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__object_infos(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__PairStringDouble__Sequence * member =
    (const environment_model_msgs__msg__PairStringDouble__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__object_infos(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__PairStringDouble__Sequence * member =
    (environment_model_msgs__msg__PairStringDouble__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__object_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__PairStringDouble * item =
    ((const environment_model_msgs__msg__PairStringDouble *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__object_infos(untyped_member, index));
  environment_model_msgs__msg__PairStringDouble * value =
    (environment_model_msgs__msg__PairStringDouble *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__object_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__PairStringDouble * item =
    ((environment_model_msgs__msg__PairStringDouble *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__object_infos(untyped_member, index));
  const environment_model_msgs__msg__PairStringDouble * value =
    (const environment_model_msgs__msg__PairStringDouble *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__object_infos(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__PairStringDouble__Sequence * member =
    (environment_model_msgs__msg__PairStringDouble__Sequence *)(untyped_member);
  environment_model_msgs__msg__PairStringDouble__Sequence__fini(member);
  return environment_model_msgs__msg__PairStringDouble__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__virtual_line_infos(
  const void * untyped_member)
{
  const environment_model_msgs__msg__VirtualLineInfo__Sequence * member =
    (const environment_model_msgs__msg__VirtualLineInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__virtual_line_infos(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__VirtualLineInfo__Sequence * member =
    (const environment_model_msgs__msg__VirtualLineInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__virtual_line_infos(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__VirtualLineInfo__Sequence * member =
    (environment_model_msgs__msg__VirtualLineInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__virtual_line_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__VirtualLineInfo * item =
    ((const environment_model_msgs__msg__VirtualLineInfo *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__virtual_line_infos(untyped_member, index));
  environment_model_msgs__msg__VirtualLineInfo * value =
    (environment_model_msgs__msg__VirtualLineInfo *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__virtual_line_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__VirtualLineInfo * item =
    ((environment_model_msgs__msg__VirtualLineInfo *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__virtual_line_infos(untyped_member, index));
  const environment_model_msgs__msg__VirtualLineInfo * value =
    (const environment_model_msgs__msg__VirtualLineInfo *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__virtual_line_infos(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__VirtualLineInfo__Sequence * member =
    (environment_model_msgs__msg__VirtualLineInfo__Sequence *)(untyped_member);
  environment_model_msgs__msg__VirtualLineInfo__Sequence__fini(member);
  return environment_model_msgs__msg__VirtualLineInfo__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__left_road_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_road_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_road_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__left_road_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_road_bound_line(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__left_road_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_road_bound_line(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__left_road_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__right_road_bound_line(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_road_bound_line(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec2d__Sequence * member =
    (const environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_road_bound_line(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__right_road_bound_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec2d * item =
    ((const environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_road_bound_line(untyped_member, index));
  environment_model_msgs__msg__Vec2d * value =
    (environment_model_msgs__msg__Vec2d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__right_road_bound_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec2d * item =
    ((environment_model_msgs__msg__Vec2d *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_road_bound_line(untyped_member, index));
  const environment_model_msgs__msg__Vec2d * value =
    (const environment_model_msgs__msg__Vec2d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__right_road_bound_line(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec2d__Sequence * member =
    (environment_model_msgs__msg__Vec2d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec2d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec2d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__lane_sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lane_sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lane_sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__lane_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lane_sequence(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__lane_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lane_sequence(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__lane_sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__overwide_pairs(
  const void * untyped_member)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__overwide_pairs(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__MapIds__Sequence * member =
    (const environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__overwide_pairs(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__overwide_pairs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__MapIds * item =
    ((const environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__overwide_pairs(untyped_member, index));
  environment_model_msgs__msg__MapIds * value =
    (environment_model_msgs__msg__MapIds *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__overwide_pairs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__MapIds * item =
    ((environment_model_msgs__msg__MapIds *)
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__overwide_pairs(untyped_member, index));
  const environment_model_msgs__msg__MapIds * value =
    (const environment_model_msgs__msg__MapIds *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__overwide_pairs(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__MapIds__Sequence * member =
    (environment_model_msgs__msg__MapIds__Sequence *)(untyped_member);
  environment_model_msgs__msg__MapIds__Sequence__fini(member);
  return environment_model_msgs__msg__MapIds__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[33] = {
  {
    "env_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, env_points),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__env_points,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__env_points,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__env_points,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__env_points,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__env_points,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__env_points  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, last_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__last_ids,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__last_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__last_ids,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__last_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__last_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__last_ids  // resize(index) function pointer
  },
  {
    "perception_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, perception_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, ego_s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ego_l",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, ego_l),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_on_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, is_on_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "routing_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, routing_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_reverse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, is_reverse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enum_turn_scenario",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, enum_turn_scenario),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "merge_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, merge_lines),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__merge_lines,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_lines,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_lines,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__merge_lines,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__merge_lines,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__merge_lines  // resize(index) function pointer
  },
  {
    "split_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, split_lines),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__split_lines,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__split_lines,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__split_lines,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__split_lines,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__split_lines,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__split_lines  // resize(index) function pointer
  },
  {
    "merge_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, merge_pos),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__merge_pos,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__merge_pos,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__merge_pos,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__merge_pos,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__merge_pos,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__merge_pos  // resize(index) function pointer
  },
  {
    "lk_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, lk_lines),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__lk_lines,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lk_lines,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lk_lines,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__lk_lines,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__lk_lines,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__lk_lines  // resize(index) function pointer
  },
  {
    "left_ids_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, left_ids_map),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__left_ids_map,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_ids_map,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_ids_map,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__left_ids_map,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__left_ids_map,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__left_ids_map  // resize(index) function pointer
  },
  {
    "right_ids_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, right_ids_map),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__right_ids_map,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_ids_map,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_ids_map,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__right_ids_map,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__right_ids_map,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__right_ids_map  // resize(index) function pointer
  },
  {
    "enum_road_struct_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, enum_road_struct_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_struct_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, road_struct_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, signal_infos),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__signal_infos,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__signal_infos,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__signal_infos,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__signal_infos,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__signal_infos,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__signal_infos  // resize(index) function pointer
  },
  {
    "object_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, object_infos),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__object_infos,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__object_infos,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__object_infos,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__object_infos,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__object_infos,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__object_infos  // resize(index) function pointer
  },
  {
    "navi_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, navi_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "virtual_line_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, virtual_line_infos),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__virtual_line_infos,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__virtual_line_infos,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__virtual_line_infos,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__virtual_line_infos,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__virtual_line_infos,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__virtual_line_infos  // resize(index) function pointer
  },
  {
    "left_road_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, left_road_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__left_road_bound_line,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__left_road_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__left_road_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__left_road_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__left_road_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__left_road_bound_line  // resize(index) function pointer
  },
  {
    "right_road_bound_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, right_road_bound_line),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__right_road_bound_line,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__right_road_bound_line,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__right_road_bound_line,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__right_road_bound_line,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__right_road_bound_line,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__right_road_bound_line  // resize(index) function pointer
  },
  {
    "lane_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, lane_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, lane_sequence),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__lane_sequence,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__lane_sequence,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__lane_sequence,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__lane_sequence,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__lane_sequence,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__lane_sequence  // resize(index) function pointer
  },
  {
    "lane_seq_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, lane_seq_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, channel_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "virtual_line_to",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, virtual_line_to),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "midd_line_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, midd_line_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "overwide_pairs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, overwide_pairs),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__size_function__EnvLine__overwide_pairs,  // size() function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_const_function__EnvLine__overwide_pairs,  // get_const(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__get_function__EnvLine__overwide_pairs,  // get(index) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__fetch_function__EnvLine__overwide_pairs,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__assign_function__EnvLine__overwide_pairs,  // assign(index, value) function pointer
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__resize_function__EnvLine__overwide_pairs  // resize(index) function pointer
  },
  {
    "usemdriver",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__EnvLine, usemdriver),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "EnvLine",  // message name
  33,  // number of fields
  sizeof(environment_model_msgs__msg__EnvLine),
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array,  // message members
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvLine)() {
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, EnvPoint)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairInt)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairInt)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairDoubleInt)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, MapIds)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, MapIds)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, RoadStructType)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairString)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairStringDouble)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, NaviScore)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, VirtualLineInfo)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[23].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec2d)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[28].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairInt)();
  environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_member_array[31].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, MapIds)();
  if (!environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__EnvLine__rosidl_typesupport_introspection_c__EnvLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
