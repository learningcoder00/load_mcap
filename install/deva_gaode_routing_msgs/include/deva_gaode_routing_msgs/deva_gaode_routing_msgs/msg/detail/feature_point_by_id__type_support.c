// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.h"


// Include directives for member types
// Member `id`
// Member `lane_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `id`
// Member `lane_id_s`
// Member `previous_id_s`
// Member `next_id_s`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/coordinate.h"
// Member `coordinate`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__rosidl_typesupport_introspection_c.h"
// Member `link_id`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__FeaturePointById__init(message_memory);
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__FeaturePointById__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__lane_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__lane_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__lane_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__lane_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__lane_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__lane_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__lane_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__lane_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__previous_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__previous_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__previous_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__previous_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__previous_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__previous_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__previous_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__previous_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__next_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__next_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__next_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__next_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__next_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__next_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__next_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__next_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, types),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__types,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__types,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__types,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__types,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__types,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__types  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, coordinate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, link_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "project_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, project_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, lane_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__lane_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__lane_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__lane_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__lane_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__lane_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__lane_id_s  // resize(index) function pointer
  },
  {
    "previous_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, previous_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__previous_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__previous_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__previous_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__previous_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__previous_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__previous_id_s  // resize(index) function pointer
  },
  {
    "next_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePointById, next_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__size_function__FeaturePointById__next_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_const_function__FeaturePointById__next_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__get_function__FeaturePointById__next_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__fetch_function__FeaturePointById__next_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__assign_function__FeaturePointById__next_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__resize_function__FeaturePointById__next_id_s  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "FeaturePointById",  // message name
  9,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__FeaturePointById),
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeaturePointById)() {
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Coordinate)();
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  if (!deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__FeaturePointById__rosidl_typesupport_introspection_c__FeaturePointById_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
