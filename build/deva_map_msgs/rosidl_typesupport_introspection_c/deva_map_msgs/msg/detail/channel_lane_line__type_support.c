// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/channel_lane_line__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/channel_lane_line__functions.h"
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.h"


// Include directives for member types
// Member `markingequation_vec`
#include "deva_common_msgs/msg/equation_curve.h"
// Member `markingequation_vec`
#include "deva_common_msgs/msg/detail/equation_curve__rosidl_typesupport_introspection_c.h"
// Member `markingpoint_vec`
#include "deva_common_msgs/msg/point2d.h"
// Member `markingpoint_vec`
#include "deva_common_msgs/msg/detail/point2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__ChannelLaneLine__init(message_memory);
}

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_fini_function(void * message_memory)
{
  deva_map_msgs__msg__ChannelLaneLine__fini(message_memory);
}

size_t deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__size_function__ChannelLaneLine__markingequation_vec(
  const void * untyped_member)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingequation_vec(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__EquationCurve__Sequence * member =
    (const deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingequation_vec(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneLine__markingequation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__EquationCurve * item =
    ((const deva_common_msgs__msg__EquationCurve *)
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingequation_vec(untyped_member, index));
  deva_common_msgs__msg__EquationCurve * value =
    (deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__assign_function__ChannelLaneLine__markingequation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__EquationCurve * item =
    ((deva_common_msgs__msg__EquationCurve *)
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingequation_vec(untyped_member, index));
  const deva_common_msgs__msg__EquationCurve * value =
    (const deva_common_msgs__msg__EquationCurve *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__resize_function__ChannelLaneLine__markingequation_vec(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__EquationCurve__Sequence * member =
    (deva_common_msgs__msg__EquationCurve__Sequence *)(untyped_member);
  deva_common_msgs__msg__EquationCurve__Sequence__fini(member);
  return deva_common_msgs__msg__EquationCurve__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__size_function__ChannelLaneLine__markingpoint_vec(
  const void * untyped_member)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingpoint_vec(
  const void * untyped_member, size_t index)
{
  const deva_common_msgs__msg__Point2d__Sequence * member =
    (const deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingpoint_vec(
  void * untyped_member, size_t index)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneLine__markingpoint_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_common_msgs__msg__Point2d * item =
    ((const deva_common_msgs__msg__Point2d *)
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingpoint_vec(untyped_member, index));
  deva_common_msgs__msg__Point2d * value =
    (deva_common_msgs__msg__Point2d *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__assign_function__ChannelLaneLine__markingpoint_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_common_msgs__msg__Point2d * item =
    ((deva_common_msgs__msg__Point2d *)
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingpoint_vec(untyped_member, index));
  const deva_common_msgs__msg__Point2d * value =
    (const deva_common_msgs__msg__Point2d *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__resize_function__ChannelLaneLine__markingpoint_vec(
  void * untyped_member, size_t size)
{
  deva_common_msgs__msg__Point2d__Sequence * member =
    (deva_common_msgs__msg__Point2d__Sequence *)(untyped_member);
  deva_common_msgs__msg__Point2d__Sequence__fini(member);
  return deva_common_msgs__msg__Point2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_member_array[3] = {
  {
    "available",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneLine, available),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markingequation_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneLine, markingequation_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__size_function__ChannelLaneLine__markingequation_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingequation_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingequation_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneLine__markingequation_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__assign_function__ChannelLaneLine__markingequation_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__resize_function__ChannelLaneLine__markingequation_vec  // resize(index) function pointer
  },
  {
    "markingpoint_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneLine, markingpoint_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__size_function__ChannelLaneLine__markingpoint_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneLine__markingpoint_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__get_function__ChannelLaneLine__markingpoint_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneLine__markingpoint_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__assign_function__ChannelLaneLine__markingpoint_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__resize_function__ChannelLaneLine__markingpoint_vec  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "ChannelLaneLine",  // message name
  3,  // number of fields
  sizeof(deva_map_msgs__msg__ChannelLaneLine),
  deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_member_array,  // message members
  deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneLine)() {
  deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, EquationCurve)();
  deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Point2d)();
  if (!deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__ChannelLaneLine__rosidl_typesupport_introspection_c__ChannelLaneLine_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
