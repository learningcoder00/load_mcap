// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_ads_msgs:msg/AdsMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_ads_msgs/msg/detail/ads_marker__rosidl_typesupport_introspection_c.h"
#include "deva_ads_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_ads_msgs/msg/detail/ads_marker__functions.h"
#include "deva_ads_msgs/msg/detail/ads_marker__struct.h"


// Include directives for member types
// Member `points`
#include "geometry_msgs/msg/point.h"
// Member `points`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `text`
#include "rosidl_runtime_c/string_functions.h"
// Member `detail`
#include "deva_ads_msgs/msg/ads_info.h"
// Member `detail`
#include "deva_ads_msgs/msg/detail/ads_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_ads_msgs__msg__AdsMarker__init(message_memory);
}

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_fini_function(void * message_memory)
{
  deva_ads_msgs__msg__AdsMarker__fini(message_memory);
}

size_t deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__size_function__AdsMarker__points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__fetch_function__AdsMarker__points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__points(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__assign_function__AdsMarker__points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__points(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__resize_function__AdsMarker__points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

size_t deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__size_function__AdsMarker__detail(
  const void * untyped_member)
{
  const deva_ads_msgs__msg__AdsInfo__Sequence * member =
    (const deva_ads_msgs__msg__AdsInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__detail(
  const void * untyped_member, size_t index)
{
  const deva_ads_msgs__msg__AdsInfo__Sequence * member =
    (const deva_ads_msgs__msg__AdsInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__detail(
  void * untyped_member, size_t index)
{
  deva_ads_msgs__msg__AdsInfo__Sequence * member =
    (deva_ads_msgs__msg__AdsInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__fetch_function__AdsMarker__detail(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_ads_msgs__msg__AdsInfo * item =
    ((const deva_ads_msgs__msg__AdsInfo *)
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__detail(untyped_member, index));
  deva_ads_msgs__msg__AdsInfo * value =
    (deva_ads_msgs__msg__AdsInfo *)(untyped_value);
  *value = *item;
}

void deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__assign_function__AdsMarker__detail(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_ads_msgs__msg__AdsInfo * item =
    ((deva_ads_msgs__msg__AdsInfo *)
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__detail(untyped_member, index));
  const deva_ads_msgs__msg__AdsInfo * value =
    (const deva_ads_msgs__msg__AdsInfo *)(untyped_value);
  *item = *value;
}

bool deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__resize_function__AdsMarker__detail(
  void * untyped_member, size_t size)
{
  deva_ads_msgs__msg__AdsInfo__Sequence * member =
    (deva_ads_msgs__msg__AdsInfo__Sequence *)(untyped_member);
  deva_ads_msgs__msg__AdsInfo__Sequence__fini(member);
  return deva_ads_msgs__msg__AdsInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_member_array[4] = {
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarker, points),  // bytes offset in struct
    NULL,  // default value
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__size_function__AdsMarker__points,  // size() function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__points,  // get_const(index) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__points,  // get(index) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__fetch_function__AdsMarker__points,  // fetch(index, &value) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__assign_function__AdsMarker__points,  // assign(index, value) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__resize_function__AdsMarker__points  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarker, text),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clickable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarker, clickable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarker, detail),  // bytes offset in struct
    NULL,  // default value
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__size_function__AdsMarker__detail,  // size() function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_const_function__AdsMarker__detail,  // get_const(index) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__get_function__AdsMarker__detail,  // get(index) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__fetch_function__AdsMarker__detail,  // fetch(index, &value) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__assign_function__AdsMarker__detail,  // assign(index, value) function pointer
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__resize_function__AdsMarker__detail  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_members = {
  "deva_ads_msgs__msg",  // message namespace
  "AdsMarker",  // message name
  4,  // number of fields
  sizeof(deva_ads_msgs__msg__AdsMarker),
  deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_member_array,  // message members
  deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_type_support_handle = {
  0,
  &deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_ads_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_ads_msgs, msg, AdsMarker)() {
  deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_ads_msgs, msg, AdsInfo)();
  if (!deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_type_support_handle.typesupport_identifier) {
    deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_ads_msgs__msg__AdsMarker__rosidl_typesupport_introspection_c__AdsMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
