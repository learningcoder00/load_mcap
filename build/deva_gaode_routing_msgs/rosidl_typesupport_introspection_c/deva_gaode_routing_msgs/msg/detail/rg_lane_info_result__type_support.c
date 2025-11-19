// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.h"


// Include directives for member types
// Member `arrow`
// Member `flag`
// Member `rg_lane_result_property`
// Member `recommend`
// Member `lane_info_raw_link_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `active_time`
#include "rosidl_runtime_c/string_functions.h"
// Member `additional_lane_info`
#include "deva_gaode_routing_msgs/msg/rg_additional_lane_info.h"
// Member `additional_lane_info`
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__rosidl_typesupport_introspection_c.h"
// Member `pos`
#include "deva_gaode_routing_msgs/msg/route_pos.h"
// Member `pos`
#include "deva_gaode_routing_msgs/msg/detail/route_pos__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__init(message_memory);
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__arrow(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__arrow(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__arrow(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__arrow(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__arrow(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__arrow(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__arrow(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__arrow(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__flag(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__flag(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__flag(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__flag(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__flag(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__flag(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__flag(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__flag(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__rg_lane_result_property(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__rg_lane_result_property(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__rg_lane_result_property(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__rg_lane_result_property(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__rg_lane_result_property(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__rg_lane_result_property(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__rg_lane_result_property(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__rg_lane_result_property(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__recommend(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__recommend(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__recommend(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__recommend(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__recommend(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__recommend(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__recommend(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__recommend(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__additional_lane_info(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__additional_lane_info(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__additional_lane_info(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__additional_lane_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * item =
    ((const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__additional_lane_info(untyped_member, index));
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * value =
    (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__additional_lane_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * item =
    ((deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__additional_lane_info(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo * value =
    (const deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__additional_lane_info(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RGAdditionalLaneInfo__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__lane_info_raw_link_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__lane_info_raw_link_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__lane_info_raw_link_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__lane_info_raw_link_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__lane_info_raw_link_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__lane_info_raw_link_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__lane_info_raw_link_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__lane_info_raw_link_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_member_array[9] = {
  {
    "raw_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, raw_link_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, arrow),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__arrow,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__arrow,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__arrow,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__arrow,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__arrow,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__arrow  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, flag),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__flag,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__flag,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__flag,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__flag,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__flag,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__flag  // resize(index) function pointer
  },
  {
    "rg_lane_result_property",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, rg_lane_result_property),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__rg_lane_result_property,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__rg_lane_result_property,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__rg_lane_result_property,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__rg_lane_result_property,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__rg_lane_result_property,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__rg_lane_result_property  // resize(index) function pointer
  },
  {
    "recommend",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, recommend),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__recommend,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__recommend,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__recommend,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__recommend,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__recommend,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__recommend  // resize(index) function pointer
  },
  {
    "active_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, active_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_lane_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, additional_lane_info),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__additional_lane_info,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__additional_lane_info,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__additional_lane_info,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__additional_lane_info,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__additional_lane_info,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__additional_lane_info  // resize(index) function pointer
  },
  {
    "lane_info_raw_link_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, lane_info_raw_link_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__size_function__RGLaneInfoResult__lane_info_raw_link_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_const_function__RGLaneInfoResult__lane_info_raw_link_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__get_function__RGLaneInfoResult__lane_info_raw_link_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__fetch_function__RGLaneInfoResult__lane_info_raw_link_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__assign_function__RGLaneInfoResult__lane_info_raw_link_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__resize_function__RGLaneInfoResult__lane_info_raw_link_ids  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RGLaneInfoResult, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "RGLaneInfoResult",  // message name
  9,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__RGLaneInfoResult),
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGLaneInfoResult)() {
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RGAdditionalLaneInfo)();
  deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RoutePos)();
  if (!deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__RGLaneInfoResult__rosidl_typesupport_introspection_c__RGLaneInfoResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
