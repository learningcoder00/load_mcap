// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_road__struct.h"


// Include directives for member types
// Member `forms`
// Member `next_ids`
// Member `pre_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `geo`
#include "deva_gaode_routing_msgs/msg/center_point.h"
// Member `geo`
#include "deva_gaode_routing_msgs/msg/detail/center_point__rosidl_typesupport_introspection_c.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/sd_pro_lane.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__rosidl_typesupport_introspection_c.h"
// Member `lane_connect`
#include "deva_gaode_routing_msgs/msg/sd_pro_lane_connect.h"
// Member `lane_connect`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__rosidl_typesupport_introspection_c.h"
// Member `trfc_signs`
#include "deva_gaode_routing_msgs/msg/trfc_sign.h"
// Member `trfc_signs`
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__rosidl_typesupport_introspection_c.h"
// Member `road_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `restriction`
#include "deva_gaode_routing_msgs/msg/restriction.h"
// Member `restriction`
#include "deva_gaode_routing_msgs/msg/detail/restriction__rosidl_typesupport_introspection_c.h"
// Member `cross_point`
#include "deva_gaode_routing_msgs/msg/cross_point.h"
// Member `cross_point`
#include "deva_gaode_routing_msgs/msg/detail/cross_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SdProRoad__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SdProRoad__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__forms(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__forms(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__forms(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__forms(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__forms(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__forms(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__forms(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__forms(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__geo(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__CenterPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__CenterPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__geo(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__CenterPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__CenterPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__geo(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__CenterPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__CenterPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__geo(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__CenterPoint * item =
    ((const deva_gaode_routing_msgs__msg__CenterPoint *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__geo(untyped_member, index));
  deva_gaode_routing_msgs__msg__CenterPoint * value =
    (deva_gaode_routing_msgs__msg__CenterPoint *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__geo(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__CenterPoint * item =
    ((deva_gaode_routing_msgs__msg__CenterPoint *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__geo(untyped_member, index));
  const deva_gaode_routing_msgs__msg__CenterPoint * value =
    (const deva_gaode_routing_msgs__msg__CenterPoint *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__geo(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__CenterPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__CenterPoint__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__CenterPoint__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__CenterPoint__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProLane__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLane__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProLane__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProLane__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProLane * item =
    ((const deva_gaode_routing_msgs__msg__SdProLane *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProLane * value =
    (deva_gaode_routing_msgs__msg__SdProLane *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProLane * item =
    ((deva_gaode_routing_msgs__msg__SdProLane *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProLane * value =
    (const deva_gaode_routing_msgs__msg__SdProLane *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProLane__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLane__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProLane__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProLane__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__next_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__next_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__next_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__next_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__next_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__next_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__next_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__next_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__pre_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__pre_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__pre_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__pre_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__pre_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__pre_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__pre_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__pre_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__lane_connect(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lane_connect(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lane_connect(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__lane_connect(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProLaneConnect * item =
    ((const deva_gaode_routing_msgs__msg__SdProLaneConnect *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lane_connect(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProLaneConnect * value =
    (deva_gaode_routing_msgs__msg__SdProLaneConnect *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__lane_connect(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProLaneConnect * item =
    ((deva_gaode_routing_msgs__msg__SdProLaneConnect *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lane_connect(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProLaneConnect * value =
    (const deva_gaode_routing_msgs__msg__SdProLaneConnect *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__lane_connect(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProLaneConnect__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__trfc_signs(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__TrfcSign__Sequence * member =
    (const deva_gaode_routing_msgs__msg__TrfcSign__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__trfc_signs(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__TrfcSign__Sequence * member =
    (const deva_gaode_routing_msgs__msg__TrfcSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__trfc_signs(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence * member =
    (deva_gaode_routing_msgs__msg__TrfcSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__trfc_signs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__TrfcSign * item =
    ((const deva_gaode_routing_msgs__msg__TrfcSign *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__trfc_signs(untyped_member, index));
  deva_gaode_routing_msgs__msg__TrfcSign * value =
    (deva_gaode_routing_msgs__msg__TrfcSign *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__trfc_signs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__TrfcSign * item =
    ((deva_gaode_routing_msgs__msg__TrfcSign *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__trfc_signs(untyped_member, index));
  const deva_gaode_routing_msgs__msg__TrfcSign * value =
    (const deva_gaode_routing_msgs__msg__TrfcSign *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__trfc_signs(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence * member =
    (deva_gaode_routing_msgs__msg__TrfcSign__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__TrfcSign__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__TrfcSign__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__restriction(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Restriction__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Restriction__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__restriction(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Restriction__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Restriction__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__restriction(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Restriction__Sequence * member =
    (deva_gaode_routing_msgs__msg__Restriction__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__restriction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Restriction * item =
    ((const deva_gaode_routing_msgs__msg__Restriction *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__restriction(untyped_member, index));
  deva_gaode_routing_msgs__msg__Restriction * value =
    (deva_gaode_routing_msgs__msg__Restriction *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__restriction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Restriction * item =
    ((deva_gaode_routing_msgs__msg__Restriction *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__restriction(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Restriction * value =
    (const deva_gaode_routing_msgs__msg__Restriction *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__restriction(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Restriction__Sequence * member =
    (deva_gaode_routing_msgs__msg__Restriction__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Restriction__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Restriction__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__cross_point(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__CrossPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__CrossPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__cross_point(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__CrossPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__CrossPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__cross_point(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__CrossPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__cross_point(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__CrossPoint * item =
    ((const deva_gaode_routing_msgs__msg__CrossPoint *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__cross_point(untyped_member, index));
  deva_gaode_routing_msgs__msg__CrossPoint * value =
    (deva_gaode_routing_msgs__msg__CrossPoint *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__cross_point(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__CrossPoint * item =
    ((deva_gaode_routing_msgs__msg__CrossPoint *)
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__cross_point(untyped_member, index));
  const deva_gaode_routing_msgs__msg__CrossPoint * value =
    (const deva_gaode_routing_msgs__msg__CrossPoint *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__cross_point(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__CrossPoint__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__CrossPoint__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__CrossPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[23] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_kind",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, road_kind),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "forms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, forms),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__forms,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__forms,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__forms,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__forms,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__forms,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__forms  // resize(index) function pointer
  },
  {
    "lane_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, lane_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, speed_limit_min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, speed_limit_max),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, start_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, end_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, geo),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__geo,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__geo,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__geo,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__geo,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__geo,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__geo  // resize(index) function pointer
  },
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__lanes  // resize(index) function pointer
  },
  {
    "next_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, next_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__next_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__next_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__next_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__next_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__next_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__next_ids  // resize(index) function pointer
  },
  {
    "pre_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, pre_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__pre_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__pre_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__pre_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__pre_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__pre_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__pre_ids  // resize(index) function pointer
  },
  {
    "product_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, product_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_connect",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, lane_connect),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__lane_connect,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__lane_connect,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__lane_connect,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__lane_connect,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__lane_connect,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__lane_connect  // resize(index) function pointer
  },
  {
    "trfc_signs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, trfc_signs),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__trfc_signs,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__trfc_signs,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__trfc_signs,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__trfc_signs,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__trfc_signs,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__trfc_signs  // resize(index) function pointer
  },
  {
    "s_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, s_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "e_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, e_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, joint_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, road_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restriction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, restriction),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__restriction,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__restriction,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__restriction,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__restriction,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__restriction,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__restriction  // resize(index) function pointer
  },
  {
    "cross_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProRoad, cross_point),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__size_function__SdProRoad__cross_point,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_const_function__SdProRoad__cross_point,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__get_function__SdProRoad__cross_point,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__fetch_function__SdProRoad__cross_point,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__assign_function__SdProRoad__cross_point,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__resize_function__SdProRoad__cross_point  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SdProRoad",  // message name
  23,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SdProRoad),
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProRoad)() {
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, CenterPoint)();
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLane)();
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLaneConnect)();
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, TrfcSign)();
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Restriction)();
  deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_member_array[22].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, CrossPoint)();
  if (!deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SdProRoad__rosidl_typesupport_introspection_c__SdProRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
