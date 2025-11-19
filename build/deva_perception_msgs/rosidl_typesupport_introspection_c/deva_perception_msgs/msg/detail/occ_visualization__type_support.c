// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/OCCVisualization.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/occ_visualization__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/occ_visualization__functions.h"
#include "deva_perception_msgs/msg/detail/occ_visualization__struct.h"


// Include directives for member types
// Member `header`
// Member `lidar_header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
// Member `lidar_header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `points_type`
// Member `image_points_contours`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__OCCVisualization__init(message_memory);
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__OCCVisualization__fini(message_memory);
}

size_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__points_type(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__points_type(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__points_type(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__points_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__points_type(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__points_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__points_type(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__resize_function__OCCVisualization__points_type(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__voxel_pc_params(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__voxel_pc_params(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__voxel_pc_params(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__voxel_pc_params(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__voxel_pc_params(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__voxel_pc_params(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__voxel_pc_params(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__image_points_contours(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__image_points_contours(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__image_points_contours(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__image_points_contours(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__image_points_contours(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__image_points_contours(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__image_points_contours(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__resize_function__OCCVisualization__image_points_contours(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__rfu_pixel_matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_pixel_matrix(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_pixel_matrix(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__rfu_pixel_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_pixel_matrix(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__rfu_pixel_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_pixel_matrix(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__rfu_utm_matrix(
  const void * untyped_member)
{
  (void)untyped_member;
  return 16;
}

const void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_utm_matrix(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_utm_matrix(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__rfu_utm_matrix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_utm_matrix(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__rfu_utm_matrix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_utm_matrix(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lidar_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, lidar_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, points_type),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__points_type,  // size() function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__points_type,  // get_const(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__points_type,  // get(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__points_type,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__points_type,  // assign(index, value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__resize_function__OCCVisualization__points_type  // resize(index) function pointer
  },
  {
    "voxel_pc_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, voxel_pc_params),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__voxel_pc_params,  // size() function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__voxel_pc_params,  // get_const(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__voxel_pc_params,  // get(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__voxel_pc_params,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__voxel_pc_params,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_points_contours",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, image_points_contours),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__image_points_contours,  // size() function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__image_points_contours,  // get_const(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__image_points_contours,  // get(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__image_points_contours,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__image_points_contours,  // assign(index, value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__resize_function__OCCVisualization__image_points_contours  // resize(index) function pointer
  },
  {
    "rfu_pixel_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, rfu_pixel_matrix),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__rfu_pixel_matrix,  // size() function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_pixel_matrix,  // get_const(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_pixel_matrix,  // get(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__rfu_pixel_matrix,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__rfu_pixel_matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfu_utm_matrix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    16,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__OCCVisualization, rfu_utm_matrix),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__size_function__OCCVisualization__rfu_utm_matrix,  // size() function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_const_function__OCCVisualization__rfu_utm_matrix,  // get_const(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__get_function__OCCVisualization__rfu_utm_matrix,  // get(index) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__fetch_function__OCCVisualization__rfu_utm_matrix,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__assign_function__OCCVisualization__rfu_utm_matrix,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "OCCVisualization",  // message name
  7,  // number of fields
  sizeof(deva_perception_msgs__msg__OCCVisualization),
  deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_member_array,  // message members
  deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, OCCVisualization)() {
  deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  if (!deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__OCCVisualization__rosidl_typesupport_introspection_c__OCCVisualization_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
