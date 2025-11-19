// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/avp_local_map__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/avp_local_map__functions.h"
#include "deva_map_msgs/msg/detail/avp_local_map__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `ref_line`
// Member `expand_lane_center_border`
#include "deva_map_msgs/msg/path_point.h"
// Member `ref_line`
// Member `expand_lane_center_border`
#include "deva_map_msgs/msg/detail/path_point__rosidl_typesupport_introspection_c.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/avp_boundary.h"
// Member `drivable_boundary`
#include "deva_map_msgs/msg/detail/avp_boundary__rosidl_typesupport_introspection_c.h"
// Member `avp_sub_map`
#include "deva_map_msgs/msg/avp_sub_map.h"
// Member `avp_sub_map`
#include "deva_map_msgs/msg/detail/avp_sub_map__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__AvpLocalMap__init(message_memory);
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_fini_function(void * message_memory)
{
  deva_map_msgs__msg__AvpLocalMap__fini(message_memory);
}

size_t deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__ref_line(
  const void * untyped_member)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__ref_line(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__ref_line(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__ref_line(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__PathPoint * item =
    ((const deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__ref_line(untyped_member, index));
  deva_map_msgs__msg__PathPoint * value =
    (deva_map_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__ref_line(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__PathPoint * item =
    ((deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__ref_line(untyped_member, index));
  const deva_map_msgs__msg__PathPoint * value =
    (const deva_map_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__ref_line(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_map_msgs__msg__PathPoint__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__drivable_boundary(
  const void * untyped_member)
{
  const deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (const deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__drivable_boundary(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (const deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__drivable_boundary(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__drivable_boundary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__AvpBoundary * item =
    ((const deva_map_msgs__msg__AvpBoundary *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__drivable_boundary(untyped_member, index));
  deva_map_msgs__msg__AvpBoundary * value =
    (deva_map_msgs__msg__AvpBoundary *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__drivable_boundary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__AvpBoundary * item =
    ((deva_map_msgs__msg__AvpBoundary *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__drivable_boundary(untyped_member, index));
  const deva_map_msgs__msg__AvpBoundary * value =
    (const deva_map_msgs__msg__AvpBoundary *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__drivable_boundary(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__AvpBoundary__Sequence * member =
    (deva_map_msgs__msg__AvpBoundary__Sequence *)(untyped_member);
  deva_map_msgs__msg__AvpBoundary__Sequence__fini(member);
  return deva_map_msgs__msg__AvpBoundary__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__expand_lane_center_border(
  const void * untyped_member)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__expand_lane_center_border(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__PathPoint__Sequence * member =
    (const deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__expand_lane_center_border(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__expand_lane_center_border(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__PathPoint * item =
    ((const deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__expand_lane_center_border(untyped_member, index));
  deva_map_msgs__msg__PathPoint * value =
    (deva_map_msgs__msg__PathPoint *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__expand_lane_center_border(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__PathPoint * item =
    ((deva_map_msgs__msg__PathPoint *)
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__expand_lane_center_border(untyped_member, index));
  const deva_map_msgs__msg__PathPoint * value =
    (const deva_map_msgs__msg__PathPoint *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__expand_lane_center_border(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__PathPoint__Sequence * member =
    (deva_map_msgs__msg__PathPoint__Sequence *)(untyped_member);
  deva_map_msgs__msg__PathPoint__Sequence__fini(member);
  return deva_map_msgs__msg__PathPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpLocalMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_line",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpLocalMap, ref_line),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__ref_line,  // size() function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__ref_line,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__ref_line,  // get(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__ref_line,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__ref_line,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__ref_line  // resize(index) function pointer
  },
  {
    "drivable_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpLocalMap, drivable_boundary),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__drivable_boundary,  // size() function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__drivable_boundary,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__drivable_boundary,  // get(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__drivable_boundary,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__drivable_boundary,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__drivable_boundary  // resize(index) function pointer
  },
  {
    "expand_lane_center_border",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpLocalMap, expand_lane_center_border),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__size_function__AvpLocalMap__expand_lane_center_border,  // size() function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_const_function__AvpLocalMap__expand_lane_center_border,  // get_const(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__get_function__AvpLocalMap__expand_lane_center_border,  // get(index) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__fetch_function__AvpLocalMap__expand_lane_center_border,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__assign_function__AvpLocalMap__expand_lane_center_border,  // assign(index, value) function pointer
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__resize_function__AvpLocalMap__expand_lane_center_border  // resize(index) function pointer
  },
  {
    "avp_sub_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__AvpLocalMap, avp_sub_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "AvpLocalMap",  // message name
  5,  // number of fields
  sizeof(deva_map_msgs__msg__AvpLocalMap),
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array,  // message members
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpLocalMap)() {
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, PathPoint)();
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpBoundary)();
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, PathPoint)();
  deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpSubMap)();
  if (!deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__AvpLocalMap__rosidl_typesupport_introspection_c__AvpLocalMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
