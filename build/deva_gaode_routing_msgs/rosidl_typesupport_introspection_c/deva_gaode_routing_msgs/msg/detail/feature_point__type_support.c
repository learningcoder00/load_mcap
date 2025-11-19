// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/feature_point__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.h"


// Include directives for member types
// Member `feature_point_id_s`
// Member `feature_point_id_s_by_link_id`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `feature_point_id_s`
// Member `feature_point_id_s_by_link_id`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `feature_point_id_by_id`
#include "deva_gaode_routing_msgs/msg/feature_point_by_id.h"
// Member `feature_point_id_by_id`
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__FeaturePoint__init(message_memory);
}

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__FeaturePoint__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__size_function__FeaturePoint__feature_point_id_s(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__fetch_function__FeaturePoint__feature_point_id_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__assign_function__FeaturePoint__feature_point_id_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__resize_function__FeaturePoint__feature_point_id_s(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__size_function__FeaturePoint__feature_point_id_s_by_link_id(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s_by_link_id(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s_by_link_id(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__fetch_function__FeaturePoint__feature_point_id_s_by_link_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s_by_link_id(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__assign_function__FeaturePoint__feature_point_id_s_by_link_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s_by_link_id(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__resize_function__FeaturePoint__feature_point_id_s_by_link_id(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_member_array[3] = {
  {
    "feature_point_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePoint, feature_point_id_s),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__size_function__FeaturePoint__feature_point_id_s,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__fetch_function__FeaturePoint__feature_point_id_s,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__assign_function__FeaturePoint__feature_point_id_s,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__resize_function__FeaturePoint__feature_point_id_s  // resize(index) function pointer
  },
  {
    "feature_point_id_s_by_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePoint, feature_point_id_s_by_link_id),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__size_function__FeaturePoint__feature_point_id_s_by_link_id,  // size() function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_const_function__FeaturePoint__feature_point_id_s_by_link_id,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__get_function__FeaturePoint__feature_point_id_s_by_link_id,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__fetch_function__FeaturePoint__feature_point_id_s_by_link_id,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__assign_function__FeaturePoint__feature_point_id_s_by_link_id,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__resize_function__FeaturePoint__feature_point_id_s_by_link_id  // resize(index) function pointer
  },
  {
    "feature_point_id_by_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__FeaturePoint, feature_point_id_by_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "FeaturePoint",  // message name
  3,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__FeaturePoint),
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeaturePoint)() {
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeaturePointById)();
  if (!deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__FeaturePoint__rosidl_typesupport_introspection_c__FeaturePoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
