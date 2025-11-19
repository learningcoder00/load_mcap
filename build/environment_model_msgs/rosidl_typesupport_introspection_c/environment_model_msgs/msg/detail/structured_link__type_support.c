// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/structured_link__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/structured_link__functions.h"
#include "environment_model_msgs/msg/detail/structured_link__struct.h"


// Include directives for member types
// Member `prev_ids`
// Member `succ_ids`
// Member `link_kinds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `feature_point_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "environment_model_msgs/msg/vec3d.h"
// Member `points`
#include "environment_model_msgs/msg/detail/vec3d__rosidl_typesupport_introspection_c.h"
// Member `guidances`
#include "deva_gaode_routing_msgs/msg/guidance.h"
// Member `guidances`
#include "deva_gaode_routing_msgs/msg/detail/guidance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__StructuredLink__init(message_memory);
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_fini_function(void * message_memory)
{
  environment_model_msgs__msg__StructuredLink__fini(message_memory);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__prev_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__prev_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__prev_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__prev_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__prev_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__prev_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__prev_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__prev_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__succ_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__succ_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__succ_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__succ_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__succ_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__succ_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__succ_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__succ_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__feature_point_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__feature_point_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__feature_point_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__feature_point_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__feature_point_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__feature_point_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__feature_point_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__feature_point_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__points(
  const void * untyped_member)
{
  const environment_model_msgs__msg__Vec3d__Sequence * member =
    (const environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__points(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__Vec3d__Sequence * member =
    (const environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__points(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__Vec3d__Sequence * member =
    (environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__Vec3d * item =
    ((const environment_model_msgs__msg__Vec3d *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__points(untyped_member, index));
  environment_model_msgs__msg__Vec3d * value =
    (environment_model_msgs__msg__Vec3d *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__Vec3d * item =
    ((environment_model_msgs__msg__Vec3d *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__points(untyped_member, index));
  const environment_model_msgs__msg__Vec3d * value =
    (const environment_model_msgs__msg__Vec3d *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__points(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__Vec3d__Sequence * member =
    (environment_model_msgs__msg__Vec3d__Sequence *)(untyped_member);
  environment_model_msgs__msg__Vec3d__Sequence__fini(member);
  return environment_model_msgs__msg__Vec3d__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__guidances(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__guidances(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__guidances(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__guidances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Guidance * item =
    ((const deva_gaode_routing_msgs__msg__Guidance *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__guidances(untyped_member, index));
  deva_gaode_routing_msgs__msg__Guidance * value =
    (deva_gaode_routing_msgs__msg__Guidance *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__guidances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Guidance * item =
    ((deva_gaode_routing_msgs__msg__Guidance *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__guidances(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Guidance * value =
    (const deva_gaode_routing_msgs__msg__Guidance *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__guidances(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Guidance__Sequence * member =
    (deva_gaode_routing_msgs__msg__Guidance__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Guidance__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Guidance__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__link_kinds(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__link_kinds(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__link_kinds(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__link_kinds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__link_kinds(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__link_kinds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__link_kinds(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__link_kinds(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_member_array[18] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prev_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, prev_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__prev_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__prev_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__prev_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__prev_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__prev_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__prev_ids  // resize(index) function pointer
  },
  {
    "succ_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, succ_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__succ_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__succ_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__succ_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__succ_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__succ_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__succ_ids  // resize(index) function pointer
  },
  {
    "feature_point_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, feature_point_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__feature_point_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__feature_point_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__feature_point_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__feature_point_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__feature_point_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__feature_point_ids  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, points),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__points,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__points,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__points,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__points,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__points,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__points  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, direction),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit_s2e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, speed_limit_s2e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit_e2s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, speed_limit_e2s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coverage_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, coverage_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num_s2e",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, lane_num_s2e),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num_e2s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, lane_num_e2s),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relationship_with_junction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, relationship_with_junction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guidances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, guidances),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__guidances,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__guidances,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__guidances,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__guidances,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__guidances,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__guidances  // resize(index) function pointer
  },
  {
    "is_on_routing",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, is_on_routing),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "need_revert",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, need_revert),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_kinds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredLink, link_kinds),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__size_function__StructuredLink__link_kinds,  // size() function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_const_function__StructuredLink__link_kinds,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__get_function__StructuredLink__link_kinds,  // get(index) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__fetch_function__StructuredLink__link_kinds,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__assign_function__StructuredLink__link_kinds,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__resize_function__StructuredLink__link_kinds  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "StructuredLink",  // message name
  18,  // number of fields
  sizeof(environment_model_msgs__msg__StructuredLink),
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_member_array,  // message members
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, StructuredLink)() {
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec3d)();
  environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Guidance)();
  if (!environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__StructuredLink__rosidl_typesupport_introspection_c__StructuredLink_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
