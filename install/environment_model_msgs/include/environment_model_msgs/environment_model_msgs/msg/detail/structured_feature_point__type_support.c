// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/structured_feature_point__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/structured_feature_point__functions.h"
#include "environment_model_msgs/msg/detail/structured_feature_point__struct.h"


// Include directives for member types
// Member `id`
// Member `prev_ids`
// Member `next_ids`
// Member `lane_ids`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `id`
// Member `prev_ids`
// Member `next_ids`
// Member `lane_ids`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `position`
#include "environment_model_msgs/msg/vec3d.h"
// Member `position`
#include "environment_model_msgs/msg/detail/vec3d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__StructuredFeaturePoint__init(message_memory);
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_fini_function(void * message_memory)
{
  environment_model_msgs__msg__StructuredFeaturePoint__fini(message_memory);
}

size_t environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__prev_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__prev_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__prev_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__prev_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__prev_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__prev_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__prev_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__prev_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__next_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__next_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__next_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__next_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__next_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__next_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__next_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__next_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__lane_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__lane_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__lane_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__lane_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__lane_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__lane_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__lane_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__lane_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[9] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, link_id),  // bytes offset in struct
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
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, types),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__types,  // size() function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__types,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__types,  // get(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__types,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__types,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__types  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, position),  // bytes offset in struct
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
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, project_percent),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, prev_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__prev_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__prev_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__prev_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__prev_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__prev_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__prev_ids  // resize(index) function pointer
  },
  {
    "next_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, next_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__next_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__next_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__next_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__next_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__next_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__next_ids  // resize(index) function pointer
  },
  {
    "lane_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredFeaturePoint, lane_ids),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__size_function__StructuredFeaturePoint__lane_ids,  // size() function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_const_function__StructuredFeaturePoint__lane_ids,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__get_function__StructuredFeaturePoint__lane_ids,  // get(index) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__fetch_function__StructuredFeaturePoint__lane_ids,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__assign_function__StructuredFeaturePoint__lane_ids,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__resize_function__StructuredFeaturePoint__lane_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "StructuredFeaturePoint",  // message name
  9,  // number of fields
  sizeof(environment_model_msgs__msg__StructuredFeaturePoint),
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array,  // message members
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, StructuredFeaturePoint)() {
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, Vec3d)();
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  if (!environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__StructuredFeaturePoint__rosidl_typesupport_introspection_c__StructuredFeaturePoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
