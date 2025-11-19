// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_control_msgs/msg/detail/vehicle_report_common__rosidl_typesupport_introspection_c.h"
#include "deva_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_control_msgs/msg/detail/vehicle_report_common__functions.h"
#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `protocol_version`
// Member `bywire_exit_reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `pedal`
#include "deva_control_msgs/msg/vehicle_report_pedal.h"
// Member `pedal`
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__rosidl_typesupport_introspection_c.h"
// Member `wheelspeed_rc`
#include "deva_control_msgs/msg/wheel_speed.h"
// Member `wheelspeed_rc`
#include "deva_control_msgs/msg/detail/wheel_speed__rosidl_typesupport_introspection_c.h"
// Member `belt`
#include "deva_control_msgs/msg/vehicle_report_belt.h"
// Member `belt`
#include "deva_control_msgs/msg/detail/vehicle_report_belt__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_control_msgs__msg__VehicleReportCommon__init(message_memory);
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_fini_function(void * message_memory)
{
  deva_control_msgs__msg__VehicleReportCommon__fini(message_memory);
}

size_t deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed_valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed_valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed_valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed_dir(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_dir(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_dir(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed_dir(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_dir(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed_dir(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_dir(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__door_open_state(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__door_open_state(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__door_open_state(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__door_open_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__door_open_state(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__door_open_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__door_open_state(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array[54] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "protocol_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, protocol_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unix_ts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, unix_ts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, speed_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_directivity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, speed_directivity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_directivity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed_directivity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed_valid),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed_valid,  // size() function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_valid,  // get_const(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_valid,  // get(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed_valid,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed_valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_dir",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed_dir),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed_dir,  // size() function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed_dir,  // get_const(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed_dir,  // get(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed_dir,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed_dir,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__wheelspeed,  // size() function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__wheelspeed,  // get_const(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__wheelspeed,  // get(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__wheelspeed,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__wheelspeed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, gear_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, gear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epb_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, epb_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "epb_flt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, epb_flt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, late_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_driveover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, late_driveover),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_angle_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_angle_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_angle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_angle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_rotate_angle_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_rotate_angle_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_torque_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_torque_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "steer_rotate_torque_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, steer_rotate_torque_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_flt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, late_flt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_enable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_enable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_driveover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_driveover),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_torque_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_torque_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_torque",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_torque),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_acc_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_acc_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longit_flt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, longit_flt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_lamp_lever_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, turn_lamp_lever_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_lamp_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, turn_lamp_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "turn_lamp_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, turn_lamp_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hazard_lamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, hazard_lamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wiper_front",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wiper_front),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_open_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, door_open_state),  // bytes offset in struct
    NULL,  // default value
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__size_function__VehicleReportCommon__door_open_state,  // size() function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_const_function__VehicleReportCommon__door_open_state,  // get_const(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__get_function__VehicleReportCommon__door_open_state,  // get(index) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__fetch_function__VehicleReportCommon__door_open_state,  // fetch(index, &value) function pointer
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__assign_function__VehicleReportCommon__door_open_state,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "late_acc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, late_acc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, yaw_rate),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "slope",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, slope),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "standstill",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, standstill),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pedal_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, pedal_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pedal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, pedal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_rc_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed_rc_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheelspeed_rc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, wheelspeed_rc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "belt_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, belt_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "belt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, belt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bywire_exit_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, bywire_exit_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_cancel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, request_cancel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_brake",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, action_brake),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, action_throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action_steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, action_steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "heavy_action_steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, heavy_action_steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sustain_action_throttle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, sustain_action_throttle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sustain_action_steer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportCommon, sustain_action_steer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_members = {
  "deva_control_msgs__msg",  // message namespace
  "VehicleReportCommon",  // message name
  54,  // number of fields
  sizeof(deva_control_msgs__msg__VehicleReportCommon),
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array,  // message members
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_type_support_handle = {
  0,
  &deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, VehicleReportCommon)() {
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array[41].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, VehicleReportPedal)();
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array[43].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, WheelSpeed)();
  deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_member_array[45].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, VehicleReportBelt)();
  if (!deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_type_support_handle.typesupport_identifier) {
    deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_control_msgs__msg__VehicleReportCommon__rosidl_typesupport_introspection_c__VehicleReportCommon_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
