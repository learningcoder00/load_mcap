// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/traffic_detect_data__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__functions.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `f120trafficobjects`
// Member `f30trafficobjects`
#include "deva_perception_msgs/msg/traffic_object.h"
// Member `f120trafficobjects`
// Member `f30trafficobjects`
#include "deva_perception_msgs/msg/detail/traffic_object__rosidl_typesupport_introspection_c.h"
// Member `e2eobjects`
#include "deva_perception_msgs/msg/e2e_result.h"
// Member `e2eobjects`
#include "deva_perception_msgs/msg/detail/e2e_result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__TrafficDetectData__init(message_memory);
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__TrafficDetectData__fini(message_memory);
}

size_t deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__f120trafficobjects(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f120trafficobjects(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__TrafficObject * member =
    (const deva_perception_msgs__msg__TrafficObject *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f120trafficobjects(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__TrafficObject * member =
    (deva_perception_msgs__msg__TrafficObject *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__f120trafficobjects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__TrafficObject * item =
    ((const deva_perception_msgs__msg__TrafficObject *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f120trafficobjects(untyped_member, index));
  deva_perception_msgs__msg__TrafficObject * value =
    (deva_perception_msgs__msg__TrafficObject *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__f120trafficobjects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__TrafficObject * item =
    ((deva_perception_msgs__msg__TrafficObject *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f120trafficobjects(untyped_member, index));
  const deva_perception_msgs__msg__TrafficObject * value =
    (const deva_perception_msgs__msg__TrafficObject *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__f30trafficobjects(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f30trafficobjects(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__TrafficObject * member =
    (const deva_perception_msgs__msg__TrafficObject *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f30trafficobjects(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__TrafficObject * member =
    (deva_perception_msgs__msg__TrafficObject *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__f30trafficobjects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__TrafficObject * item =
    ((const deva_perception_msgs__msg__TrafficObject *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f30trafficobjects(untyped_member, index));
  deva_perception_msgs__msg__TrafficObject * value =
    (deva_perception_msgs__msg__TrafficObject *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__f30trafficobjects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__TrafficObject * item =
    ((deva_perception_msgs__msg__TrafficObject *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f30trafficobjects(untyped_member, index));
  const deva_perception_msgs__msg__TrafficObject * value =
    (const deva_perception_msgs__msg__TrafficObject *)(untyped_value);
  *item = *value;
}

size_t deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__reserved(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__reserved(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__reserved(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__reserved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__reserved(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__reserved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__reserved(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array[14] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, header),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, framenum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(deva_perception_msgs__msg__TrafficDetectData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "abs_vel_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, abs_vel_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "abs_acc_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, abs_acc_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, vel_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, acc_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f120_object_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, f120_object_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f30_object_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, f30_object_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f120trafficobjects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, f120trafficobjects),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__f120trafficobjects,  // size() function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f120trafficobjects,  // get_const(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f120trafficobjects,  // get(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__f120trafficobjects,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__f120trafficobjects,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "f30trafficobjects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, f30trafficobjects),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__f30trafficobjects,  // size() function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__f30trafficobjects,  // get_const(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__f30trafficobjects,  // get(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__f30trafficobjects,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__f30trafficobjects,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "e2eobjects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, e2eobjects),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_of_day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, time_of_day),  // bytes offset in struct
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
    2,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__TrafficDetectData, reserved),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__size_function__TrafficDetectData__reserved,  // size() function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_const_function__TrafficDetectData__reserved,  // get_const(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__get_function__TrafficDetectData__reserved,  // get(index) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__fetch_function__TrafficDetectData__reserved,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__assign_function__TrafficDetectData__reserved,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "TrafficDetectData",  // message name
  14,  // number of fields
  sizeof(deva_perception_msgs__msg__TrafficDetectData),
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array,  // message members
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficDetectData)() {
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficObject)();
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficObject)();
  deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eResult)();
  if (!deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__TrafficDetectData__rosidl_typesupport_introspection_c__TrafficDetectData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
