// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.h"


// Include directives for member types
// Member `id`
// Member `feature_point_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `id`
// Member `feature_point_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `lane_group_id_type`
#include "deva_gaode_routing_msgs/msg/lane_group_id_type.h"
// Member `lane_group_id_type`
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__rosidl_typesupport_introspection_c.h"
// Member `lane_type`
// Member `left_border_types`
// Member `right_border_types`
// Member `left_border_colors`
// Member `right_border_colors`
// Member `arrows`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lane_restricts`
#include "deva_gaode_routing_msgs/msg/lane_restriction.h"
// Member `lane_restricts`
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__LANE__init(message_memory);
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__LANE__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__feature_point_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__feature_point_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__feature_point_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__feature_point_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__feature_point_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__feature_point_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__feature_point_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__feature_point_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__lane_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__lane_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__lane_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__lane_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__left_border_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__left_border_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__left_border_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__left_border_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__right_border_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__right_border_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__right_border_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__right_border_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__left_border_colors(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_colors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_colors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__left_border_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_colors(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__left_border_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_colors(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__left_border_colors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__right_border_colors(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_colors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_colors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__right_border_colors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_colors(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__right_border_colors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_colors(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__right_border_colors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__previous_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__previous_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__previous_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__previous_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__previous_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__previous_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__previous_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__previous_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__next_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__next_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__next_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__next_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__next_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__next_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__next_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__next_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__arrows(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__arrows(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__arrows(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__arrows(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__arrows(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__arrows(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__lane_restricts(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_restricts(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_restricts(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__lane_restricts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LaneRestriction * item =
    ((const deva_gaode_routing_msgs__msg__LaneRestriction *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_restricts(untyped_member, index));
  deva_gaode_routing_msgs__msg__LaneRestriction * value =
    (deva_gaode_routing_msgs__msg__LaneRestriction *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__lane_restricts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LaneRestriction * item =
    ((deva_gaode_routing_msgs__msg__LaneRestriction *)
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_restricts(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LaneRestriction * value =
    (const deva_gaode_routing_msgs__msg__LaneRestriction *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__lane_restricts(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneRestriction__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LaneRestriction__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[19] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_group_id_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_group_id_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feature_point_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, feature_point_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__feature_point_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__feature_point_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__feature_point_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__feature_point_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__feature_point_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__feature_point_id_s  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_type),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__lane_type,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_type,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_type,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__lane_type,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__lane_type,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__lane_type  // resize(index) function pointer
  },
  {
    "left_border_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, left_border_types),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__left_border_types,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_types,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_types,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__left_border_types,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__left_border_types,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__left_border_types  // resize(index) function pointer
  },
  {
    "right_border_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, right_border_types),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__right_border_types,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_types,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_types,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__right_border_types,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__right_border_types,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__right_border_types  // resize(index) function pointer
  },
  {
    "left_border_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, left_border_colors),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__left_border_colors,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__left_border_colors,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__left_border_colors,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__left_border_colors,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__left_border_colors,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__left_border_colors  // resize(index) function pointer
  },
  {
    "right_border_colors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, right_border_colors),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__right_border_colors,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__right_border_colors,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__right_border_colors,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__right_border_colors,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__right_border_colors,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__right_border_colors  // resize(index) function pointer
  },
  {
    "change_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, change_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_start_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_start_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_end_width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_end_width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, seq_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "previous_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, previous_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__previous_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__previous_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__previous_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__previous_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__previous_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__previous_id_s  // resize(index) function pointer
  },
  {
    "next_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, next_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__next_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__next_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__next_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__next_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__next_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__next_id_s  // resize(index) function pointer
  },
  {
    "lsl_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lsl_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arrows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, arrows),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__arrows,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__arrows,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__arrows,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__arrows,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__arrows,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__arrows  // resize(index) function pointer
  },
  {
    "lane_restricts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LANE, lane_restricts),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__size_function__LANE__lane_restricts,  // size() function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_const_function__LANE__lane_restricts,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__get_function__LANE__lane_restricts,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__fetch_function__LANE__lane_restricts,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__assign_function__LANE__lane_restricts,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__resize_function__LANE__lane_restricts  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "LANE",  // message name
  19,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__LANE),
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LANE)() {
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneGroupIDType)();
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneRestriction)();
  if (!deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__LANE__rosidl_typesupport_introspection_c__LANE_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
