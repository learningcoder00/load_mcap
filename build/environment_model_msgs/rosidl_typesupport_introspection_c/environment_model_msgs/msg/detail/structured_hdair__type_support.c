// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/structured_hdair__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/structured_hdair__functions.h"
#include "environment_model_msgs/msg/detail/structured_hdair__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `links`
#include "environment_model_msgs/msg/structured_link.h"
// Member `links`
#include "environment_model_msgs/msg/detail/structured_link__rosidl_typesupport_introspection_c.h"
// Member `feature_points`
#include "environment_model_msgs/msg/structured_feature_point.h"
// Member `feature_points`
#include "environment_model_msgs/msg/detail/structured_feature_point__rosidl_typesupport_introspection_c.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/lane.h"
// Member `lanes`
#include "deva_gaode_routing_msgs/msg/detail/lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__StructuredHdair__init(message_memory);
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_fini_function(void * message_memory)
{
  environment_model_msgs__msg__StructuredHdair__fini(message_memory);
}

size_t environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__links(
  const void * untyped_member)
{
  const environment_model_msgs__msg__StructuredLink__Sequence * member =
    (const environment_model_msgs__msg__StructuredLink__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__links(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__StructuredLink__Sequence * member =
    (const environment_model_msgs__msg__StructuredLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__links(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__StructuredLink__Sequence * member =
    (environment_model_msgs__msg__StructuredLink__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__links(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__StructuredLink * item =
    ((const environment_model_msgs__msg__StructuredLink *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__links(untyped_member, index));
  environment_model_msgs__msg__StructuredLink * value =
    (environment_model_msgs__msg__StructuredLink *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__links(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__StructuredLink * item =
    ((environment_model_msgs__msg__StructuredLink *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__links(untyped_member, index));
  const environment_model_msgs__msg__StructuredLink * value =
    (const environment_model_msgs__msg__StructuredLink *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__links(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__StructuredLink__Sequence * member =
    (environment_model_msgs__msg__StructuredLink__Sequence *)(untyped_member);
  environment_model_msgs__msg__StructuredLink__Sequence__fini(member);
  return environment_model_msgs__msg__StructuredLink__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__feature_points(
  const void * untyped_member)
{
  const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * member =
    (const environment_model_msgs__msg__StructuredFeaturePoint__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__feature_points(
  const void * untyped_member, size_t index)
{
  const environment_model_msgs__msg__StructuredFeaturePoint__Sequence * member =
    (const environment_model_msgs__msg__StructuredFeaturePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__feature_points(
  void * untyped_member, size_t index)
{
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence * member =
    (environment_model_msgs__msg__StructuredFeaturePoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__feature_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const environment_model_msgs__msg__StructuredFeaturePoint * item =
    ((const environment_model_msgs__msg__StructuredFeaturePoint *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__feature_points(untyped_member, index));
  environment_model_msgs__msg__StructuredFeaturePoint * value =
    (environment_model_msgs__msg__StructuredFeaturePoint *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__feature_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  environment_model_msgs__msg__StructuredFeaturePoint * item =
    ((environment_model_msgs__msg__StructuredFeaturePoint *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__feature_points(untyped_member, index));
  const environment_model_msgs__msg__StructuredFeaturePoint * value =
    (const environment_model_msgs__msg__StructuredFeaturePoint *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__feature_points(
  void * untyped_member, size_t size)
{
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence * member =
    (environment_model_msgs__msg__StructuredFeaturePoint__Sequence *)(untyped_member);
  environment_model_msgs__msg__StructuredFeaturePoint__Sequence__fini(member);
  return environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(member, size);
}

size_t environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return member->size;
}

const void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return &member->data[index];
}

void * environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  return &member->data[index];
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LANE * item =
    ((const deva_gaode_routing_msgs__msg__LANE *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__LANE * value =
    (deva_gaode_routing_msgs__msg__LANE *)(untyped_value);
  *value = *item;
}

void environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LANE * item =
    ((deva_gaode_routing_msgs__msg__LANE *)
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LANE * value =
    (const deva_gaode_routing_msgs__msg__LANE *)(untyped_value);
  *item = *value;
}

bool environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LANE__Sequence * member =
    (deva_gaode_routing_msgs__msg__LANE__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LANE__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LANE__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredHdair, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredHdair, current_link_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "links",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredHdair, links),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__links,  // size() function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__links,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__links,  // get(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__links,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__links,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__links  // resize(index) function pointer
  },
  {
    "feature_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredHdair, feature_points),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__feature_points,  // size() function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__feature_points,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__feature_points,  // get(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__feature_points,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__feature_points,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__feature_points  // resize(index) function pointer
  },
  {
    "lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__StructuredHdair, lanes),  // bytes offset in struct
    NULL,  // default value
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__size_function__StructuredHdair__lanes,  // size() function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_const_function__StructuredHdair__lanes,  // get_const(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__get_function__StructuredHdair__lanes,  // get(index) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__fetch_function__StructuredHdair__lanes,  // fetch(index, &value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__assign_function__StructuredHdair__lanes,  // assign(index, value) function pointer
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__resize_function__StructuredHdair__lanes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "StructuredHdair",  // message name
  5,  // number of fields
  sizeof(environment_model_msgs__msg__StructuredHdair),
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array,  // message members
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, StructuredHdair)() {
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, StructuredLink)();
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, StructuredFeaturePoint)();
  environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LANE)();
  if (!environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__StructuredHdair__rosidl_typesupport_introspection_c__StructuredHdair_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
