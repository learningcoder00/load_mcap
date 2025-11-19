// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/VirtualCamInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/virtual_cam_info__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/virtual_cam_info__functions.h"
#include "deva_perception_msgs/msg/detail/virtual_cam_info__struct.h"


// Include directives for member types
// Member `cam_name`
// Member `distort_model`
#include "rosidl_runtime_c/string_functions.h"
// Member `resolution`
// Member `ori_intrinsic`
// Member `vir_intrinsic`
// Member `ori_extrinsic`
// Member `vir_extrinsic`
// Member `mapx`
// Member `mapy`
// Member `pinhole_intrinsic`
// Member `crops`
// Member `input_size`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__VirtualCamInfo__init(message_memory);
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__VirtualCamInfo__fini(message_memory);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__resolution(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__resolution(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__resolution(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__resolution(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__resolution(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__resolution(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__resolution(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__resolution(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__ori_intrinsic(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_intrinsic(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_intrinsic(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__ori_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_intrinsic(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__ori_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_intrinsic(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__ori_intrinsic(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__vir_intrinsic(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_intrinsic(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_intrinsic(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__vir_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_intrinsic(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__vir_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_intrinsic(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__vir_intrinsic(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__ori_extrinsic(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_extrinsic(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_extrinsic(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__ori_extrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_extrinsic(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__ori_extrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_extrinsic(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__ori_extrinsic(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__vir_extrinsic(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_extrinsic(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_extrinsic(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__vir_extrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_extrinsic(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__vir_extrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_extrinsic(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__vir_extrinsic(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__mapx(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapx(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapx(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__mapx(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapx(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__mapx(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapx(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__mapx(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__mapy(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__mapy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapy(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__mapy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapy(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__mapy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__pinhole_intrinsic(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__pinhole_intrinsic(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__pinhole_intrinsic(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__pinhole_intrinsic(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__pinhole_intrinsic(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__pinhole_intrinsic(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__pinhole_intrinsic(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__pinhole_intrinsic(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__crops(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__crops(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__crops(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__crops(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__crops(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__crops(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__crops(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__crops(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__input_size(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__input_size(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__input_size(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__input_size(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__input_size(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__input_size(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__input_size(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__input_size(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_member_array[12] = {
  {
    "cam_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, cam_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, resolution),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__resolution,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__resolution,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__resolution,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__resolution,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__resolution,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__resolution  // resize(index) function pointer
  },
  {
    "distort_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, distort_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ori_intrinsic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, ori_intrinsic),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__ori_intrinsic,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_intrinsic,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_intrinsic,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__ori_intrinsic,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__ori_intrinsic,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__ori_intrinsic  // resize(index) function pointer
  },
  {
    "vir_intrinsic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, vir_intrinsic),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__vir_intrinsic,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_intrinsic,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_intrinsic,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__vir_intrinsic,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__vir_intrinsic,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__vir_intrinsic  // resize(index) function pointer
  },
  {
    "ori_extrinsic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, ori_extrinsic),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__ori_extrinsic,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__ori_extrinsic,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__ori_extrinsic,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__ori_extrinsic,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__ori_extrinsic,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__ori_extrinsic  // resize(index) function pointer
  },
  {
    "vir_extrinsic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, vir_extrinsic),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__vir_extrinsic,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__vir_extrinsic,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__vir_extrinsic,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__vir_extrinsic,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__vir_extrinsic,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__vir_extrinsic  // resize(index) function pointer
  },
  {
    "mapx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, mapx),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__mapx,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapx,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapx,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__mapx,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__mapx,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__mapx  // resize(index) function pointer
  },
  {
    "mapy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, mapy),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__mapy,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__mapy,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__mapy,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__mapy,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__mapy,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__mapy  // resize(index) function pointer
  },
  {
    "pinhole_intrinsic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, pinhole_intrinsic),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__pinhole_intrinsic,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__pinhole_intrinsic,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__pinhole_intrinsic,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__pinhole_intrinsic,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__pinhole_intrinsic,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__pinhole_intrinsic  // resize(index) function pointer
  },
  {
    "crops",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, crops),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__crops,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__crops,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__crops,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__crops,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__crops,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__crops  // resize(index) function pointer
  },
  {
    "input_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__VirtualCamInfo, input_size),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__size_function__VirtualCamInfo__input_size,  // size() function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_const_function__VirtualCamInfo__input_size,  // get_const(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__get_function__VirtualCamInfo__input_size,  // get(index) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__fetch_function__VirtualCamInfo__input_size,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__assign_function__VirtualCamInfo__input_size,  // assign(index, value) function pointer
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__resize_function__VirtualCamInfo__input_size  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "VirtualCamInfo",  // message name
  12,  // number of fields
  sizeof(deva_perception_msgs__msg__VirtualCamInfo),
  deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_member_array,  // message members
  deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, VirtualCamInfo)() {
  if (!deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__VirtualCamInfo__rosidl_typesupport_introspection_c__VirtualCamInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
