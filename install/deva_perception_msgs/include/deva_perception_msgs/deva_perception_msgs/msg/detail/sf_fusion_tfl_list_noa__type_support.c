// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__functions.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `tfllist`
// Member `tfllist_all`
#include "deva_perception_msgs/msg/sf_fusion_tflnoa.h"
// Member `tfllist`
// Member `tfllist_all`
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__rosidl_typesupport_introspection_c.h"
// Member `pop_tfllist`
#include "deva_perception_msgs/msg/po_ptflnoa.h"
// Member `pop_tfllist`
#include "deva_perception_msgs/msg/detail/po_ptflnoa__rosidl_typesupport_introspection_c.h"
// Member `pop_fs_tfllist`
#include "deva_perception_msgs/msg/po_p_fusion_tflnoa.h"
// Member `pop_fs_tfllist`
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__rosidl_typesupport_introspection_c.h"
// Member `e2e_traffic_det_maps`
#include "deva_perception_msgs/msg/e2e_traffic_det_pair.h"
// Member `e2e_traffic_det_maps`
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__rosidl_typesupport_introspection_c.h"
// Member `tracked_traffic_e2e_stable_maps`
#include "deva_perception_msgs/msg/traffic_e2e_stable_pair.h"
// Member `tracked_traffic_e2e_stable_maps`
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__rosidl_typesupport_introspection_c.h"
// Member `rount_info`
#include "deva_perception_msgs/msg/traffic_rount.h"
// Member `rount_info`
#include "deva_perception_msgs/msg/detail/traffic_rount__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__SFFusionTFLListNOA__init(message_memory);
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__SFFusionTFLListNOA__fini(message_memory);
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__reserved(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__reserved(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__reserved(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__reserved(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tfllist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SFFusionTFLNOA * member =
    (const deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SFFusionTFLNOA * member =
    (deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SFFusionTFLNOA * item =
    ((const deva_perception_msgs__msg__SFFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist(untyped_member, index));
  deva_perception_msgs__msg__SFFusionTFLNOA * value =
    (deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SFFusionTFLNOA * item =
    ((deva_perception_msgs__msg__SFFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist(untyped_member, index));
  const deva_perception_msgs__msg__SFFusionTFLNOA * value =
    (const deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tfllist_all(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * member =
    (const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist_all(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * member =
    (const deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist_all(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * member =
    (deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tfllist_all(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SFFusionTFLNOA * item =
    ((const deva_perception_msgs__msg__SFFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist_all(untyped_member, index));
  deva_perception_msgs__msg__SFFusionTFLNOA * value =
    (deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tfllist_all(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SFFusionTFLNOA * item =
    ((deva_perception_msgs__msg__SFFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist_all(untyped_member, index));
  const deva_perception_msgs__msg__SFFusionTFLNOA * value =
    (const deva_perception_msgs__msg__SFFusionTFLNOA *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__tfllist_all(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence * member =
    (deva_perception_msgs__msg__SFFusionTFLNOA__Sequence *)(untyped_member);
  deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__fini(member);
  return deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__pop_tfllist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_tfllist(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__PoPTFLNOA * member =
    (const deva_perception_msgs__msg__PoPTFLNOA *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_tfllist(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__PoPTFLNOA * member =
    (deva_perception_msgs__msg__PoPTFLNOA *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__pop_tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__PoPTFLNOA * item =
    ((const deva_perception_msgs__msg__PoPTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_tfllist(untyped_member, index));
  deva_perception_msgs__msg__PoPTFLNOA * value =
    (deva_perception_msgs__msg__PoPTFLNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__pop_tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__PoPTFLNOA * item =
    ((deva_perception_msgs__msg__PoPTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_tfllist(untyped_member, index));
  const deva_perception_msgs__msg__PoPTFLNOA * value =
    (const deva_perception_msgs__msg__PoPTFLNOA *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__pop_fs_tfllist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_fs_tfllist(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__PoPFusionTFLNOA * member =
    (const deva_perception_msgs__msg__PoPFusionTFLNOA *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_fs_tfllist(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__PoPFusionTFLNOA * member =
    (deva_perception_msgs__msg__PoPFusionTFLNOA *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__pop_fs_tfllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__PoPFusionTFLNOA * item =
    ((const deva_perception_msgs__msg__PoPFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_fs_tfllist(untyped_member, index));
  deva_perception_msgs__msg__PoPFusionTFLNOA * value =
    (deva_perception_msgs__msg__PoPFusionTFLNOA *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__pop_fs_tfllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__PoPFusionTFLNOA * item =
    ((deva_perception_msgs__msg__PoPFusionTFLNOA *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_fs_tfllist(untyped_member, index));
  const deva_perception_msgs__msg__PoPFusionTFLNOA * value =
    (const deva_perception_msgs__msg__PoPFusionTFLNOA *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * member =
    (const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * member =
    (const deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * member =
    (deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__E2eTrafficDetPair * item =
    ((const deva_perception_msgs__msg__E2eTrafficDetPair *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps(untyped_member, index));
  deva_perception_msgs__msg__E2eTrafficDetPair * value =
    (deva_perception_msgs__msg__E2eTrafficDetPair *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__E2eTrafficDetPair * item =
    ((deva_perception_msgs__msg__E2eTrafficDetPair *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__e2e_traffic_det_maps(untyped_member, index));
  const deva_perception_msgs__msg__E2eTrafficDetPair * value =
    (const deva_perception_msgs__msg__E2eTrafficDetPair *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__e2e_traffic_det_maps(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence * member =
    (deva_perception_msgs__msg__E2eTrafficDetPair__Sequence *)(untyped_member);
  deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__fini(member);
  return deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__TrafficE2eStablePair__Sequence * member =
    (const deva_perception_msgs__msg__TrafficE2eStablePair__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__TrafficE2eStablePair__Sequence * member =
    (const deva_perception_msgs__msg__TrafficE2eStablePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__TrafficE2eStablePair__Sequence * member =
    (deva_perception_msgs__msg__TrafficE2eStablePair__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__TrafficE2eStablePair * item =
    ((const deva_perception_msgs__msg__TrafficE2eStablePair *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(untyped_member, index));
  deva_perception_msgs__msg__TrafficE2eStablePair * value =
    (deva_perception_msgs__msg__TrafficE2eStablePair *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__TrafficE2eStablePair * item =
    ((deva_perception_msgs__msg__TrafficE2eStablePair *)
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(untyped_member, index));
  const deva_perception_msgs__msg__TrafficE2eStablePair * value =
    (const deva_perception_msgs__msg__TrafficE2eStablePair *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__TrafficE2eStablePair__Sequence * member =
    (deva_perception_msgs__msg__TrafficE2eStablePair__Sequence *)(untyped_member);
  deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__fini(member);
  return deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[18] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "framenum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, framenum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tflcount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tflcount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reserved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, reserved),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__reserved,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__reserved,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__reserved,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__reserved,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tfllist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tfllist),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tfllist,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tfllist,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tfllist,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "validsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, validsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tfllist_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tfllist_all),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tfllist_all,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tfllist_all,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tfllist_all,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tfllist_all,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tfllist_all,  // assign(index, value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__tfllist_all  // resize(index) function pointer
  },
  {
    "all_validsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, all_validsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pop_tfllist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, pop_tfllist),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__pop_tfllist,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_tfllist,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_tfllist,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__pop_tfllist,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__pop_tfllist,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pop_lightnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, pop_lightnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pop_fs_tfllist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, pop_fs_tfllist),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__pop_fs_tfllist,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__pop_fs_tfllist,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__pop_fs_tfllist,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__pop_fs_tfllist,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__pop_fs_tfllist,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pop_fs_lightnum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, pop_fs_lightnum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "e2e_traffic_det_maps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, e2e_traffic_det_maps),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__e2e_traffic_det_maps,  // assign(index, value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__e2e_traffic_det_maps  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2e_stable_maps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tracked_traffic_e2e_stable_maps),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__size_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // size() function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_const_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // get_const(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__get_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // get(index) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__fetch_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__assign_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps,  // assign(index, value) function pointer
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__resize_function__SFFusionTFLListNOA__tracked_traffic_e2e_stable_maps  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2ebc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tracked_traffic_e2ebc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracked_traffic_e2ebc_stable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, tracked_traffic_e2ebc_stable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rount_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__SFFusionTFLListNOA, rount_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "SFFusionTFLListNOA",  // message name
  18,  // number of fields
  sizeof(deva_perception_msgs__msg__SFFusionTFLListNOA),
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array,  // message members
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTFLListNOA)() {
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTFLNOA)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SFFusionTFLNOA)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PoPTFLNOA)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PoPFusionTFLNOA)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eTrafficDetPair)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficE2eStablePair)();
  deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficRount)();
  if (!deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__SFFusionTFLListNOA__rosidl_typesupport_introspection_c__SFFusionTFLListNOA_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
