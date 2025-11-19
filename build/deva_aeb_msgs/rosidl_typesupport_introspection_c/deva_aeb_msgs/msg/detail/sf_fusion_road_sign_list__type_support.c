// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.h"


// Include directives for member types
// Member `sllist`
#include "deva_aeb_msgs/msg/sf_stopline.h"
// Member `sllist`
#include "deva_aeb_msgs/msg/detail/sf_stopline__rosidl_typesupport_introspection_c.h"
// Member `cwlist`
#include "deva_aeb_msgs/msg/sf_crosswalk.h"
// Member `cwlist`
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__rosidl_typesupport_introspection_c.h"
// Member `ralist`
#include "deva_aeb_msgs/msg/sf_road_arrow.h"
// Member `ralist`
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFFusionRoadSignList__init(message_memory);
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFFusionRoadSignList__fini(message_memory);
}

size_t deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__sllist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__sllist(
  const void * untyped_member, size_t index)
{
  const deva_aeb_msgs__msg__SFStopline * member =
    (const deva_aeb_msgs__msg__SFStopline *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__sllist(
  void * untyped_member, size_t index)
{
  deva_aeb_msgs__msg__SFStopline * member =
    (deva_aeb_msgs__msg__SFStopline *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__sllist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_aeb_msgs__msg__SFStopline * item =
    ((const deva_aeb_msgs__msg__SFStopline *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__sllist(untyped_member, index));
  deva_aeb_msgs__msg__SFStopline * value =
    (deva_aeb_msgs__msg__SFStopline *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__sllist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_aeb_msgs__msg__SFStopline * item =
    ((deva_aeb_msgs__msg__SFStopline *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__sllist(untyped_member, index));
  const deva_aeb_msgs__msg__SFStopline * value =
    (const deva_aeb_msgs__msg__SFStopline *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__cwlist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__cwlist(
  const void * untyped_member, size_t index)
{
  const deva_aeb_msgs__msg__SFCrosswalk * member =
    (const deva_aeb_msgs__msg__SFCrosswalk *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__cwlist(
  void * untyped_member, size_t index)
{
  deva_aeb_msgs__msg__SFCrosswalk * member =
    (deva_aeb_msgs__msg__SFCrosswalk *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__cwlist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_aeb_msgs__msg__SFCrosswalk * item =
    ((const deva_aeb_msgs__msg__SFCrosswalk *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__cwlist(untyped_member, index));
  deva_aeb_msgs__msg__SFCrosswalk * value =
    (deva_aeb_msgs__msg__SFCrosswalk *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__cwlist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_aeb_msgs__msg__SFCrosswalk * item =
    ((deva_aeb_msgs__msg__SFCrosswalk *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__cwlist(untyped_member, index));
  const deva_aeb_msgs__msg__SFCrosswalk * value =
    (const deva_aeb_msgs__msg__SFCrosswalk *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__ralist(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__ralist(
  const void * untyped_member, size_t index)
{
  const deva_aeb_msgs__msg__SFRoadArrow * member =
    (const deva_aeb_msgs__msg__SFRoadArrow *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__ralist(
  void * untyped_member, size_t index)
{
  deva_aeb_msgs__msg__SFRoadArrow * member =
    (deva_aeb_msgs__msg__SFRoadArrow *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__ralist(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_aeb_msgs__msg__SFRoadArrow * item =
    ((const deva_aeb_msgs__msg__SFRoadArrow *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__ralist(untyped_member, index));
  deva_aeb_msgs__msg__SFRoadArrow * value =
    (deva_aeb_msgs__msg__SFRoadArrow *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__ralist(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_aeb_msgs__msg__SFRoadArrow * item =
    ((deva_aeb_msgs__msg__SFRoadArrow *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__ralist(untyped_member, index));
  const deva_aeb_msgs__msg__SFRoadArrow * value =
    (const deva_aeb_msgs__msg__SFRoadArrow *)(untyped_value);
  *item = *value;
}

size_t deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__reserved(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__reserved(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__reserved(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__reserved(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_member_array[11] = {
  {
    "sllist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, sllist),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__sllist,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__sllist,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__sllist,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__sllist,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__sllist,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cwlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, cwlist),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__cwlist,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__cwlist,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__cwlist,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__cwlist,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__cwlist,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ralist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, ralist),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__ralist,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__ralist,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__ralist,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__ralist,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__ralist,  // assign(index, value) function pointer
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
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, timestamp),  // bytes offset in struct
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
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, framenum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cwcount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, cwcount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "racount",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, racount),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slvalidsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, slvalidsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cwvalidsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, cwvalidsize),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ravalidsize",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, ravalidsize),  // bytes offset in struct
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
    3,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionRoadSignList, reserved),  // bytes offset in struct
    NULL,  // default value
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__size_function__SFFusionRoadSignList__reserved,  // size() function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_const_function__SFFusionRoadSignList__reserved,  // get_const(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__get_function__SFFusionRoadSignList__reserved,  // get(index) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__fetch_function__SFFusionRoadSignList__reserved,  // fetch(index, &value) function pointer
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__assign_function__SFFusionRoadSignList__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFFusionRoadSignList",  // message name
  11,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFFusionRoadSignList),
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_member_array,  // message members
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionRoadSignList)() {
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFStopline)();
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFCrosswalk)();
  deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFRoadArrow)();
  if (!deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFFusionRoadSignList__rosidl_typesupport_introspection_c__SFFusionRoadSignList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
