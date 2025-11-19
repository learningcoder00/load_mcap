// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/channel_lane_info__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__functions.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.h"


// Include directives for member types
// Member `lane_id_vec`
#include "rosidl_runtime_c/string_functions.h"
// Member `lanetype_vec`
#include "deva_map_msgs/msg/channel_lane_type.h"
// Member `lanetype_vec`
#include "deva_map_msgs/msg/detail/channel_lane_type__rosidl_typesupport_introspection_c.h"
// Member `turntype_vec`
#include "deva_map_msgs/msg/channel_turn_type.h"
// Member `turntype_vec`
#include "deva_map_msgs/msg/detail/channel_turn_type__rosidl_typesupport_introspection_c.h"
// Member `lanespeedlimitation_vec`
#include "deva_map_msgs/msg/channel_lane_speed_limitation.h"
// Member `lanespeedlimitation_vec`
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__ChannelLaneInfo__init(message_memory);
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_fini_function(void * message_memory)
{
  deva_map_msgs__msg__ChannelLaneInfo__fini(message_memory);
}

size_t deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lane_id_vec(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lane_id_vec(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lane_id_vec(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lane_id_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lane_id_vec(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lane_id_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lane_id_vec(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lane_id_vec(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lanetype_vec(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelLaneType__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanetype_vec(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelLaneType__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanetype_vec(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelLaneType__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lanetype_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelLaneType * item =
    ((const deva_map_msgs__msg__ChannelLaneType *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanetype_vec(untyped_member, index));
  deva_map_msgs__msg__ChannelLaneType * value =
    (deva_map_msgs__msg__ChannelLaneType *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lanetype_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelLaneType * item =
    ((deva_map_msgs__msg__ChannelLaneType *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanetype_vec(untyped_member, index));
  const deva_map_msgs__msg__ChannelLaneType * value =
    (const deva_map_msgs__msg__ChannelLaneType *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lanetype_vec(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelLaneType__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneType__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelLaneType__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelLaneType__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__turntype_vec(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelTurnType__Sequence * member =
    (const deva_map_msgs__msg__ChannelTurnType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__turntype_vec(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelTurnType__Sequence * member =
    (const deva_map_msgs__msg__ChannelTurnType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__turntype_vec(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelTurnType__Sequence * member =
    (deva_map_msgs__msg__ChannelTurnType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__turntype_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelTurnType * item =
    ((const deva_map_msgs__msg__ChannelTurnType *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__turntype_vec(untyped_member, index));
  deva_map_msgs__msg__ChannelTurnType * value =
    (deva_map_msgs__msg__ChannelTurnType *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__turntype_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelTurnType * item =
    ((deva_map_msgs__msg__ChannelTurnType *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__turntype_vec(untyped_member, index));
  const deva_map_msgs__msg__ChannelTurnType * value =
    (const deva_map_msgs__msg__ChannelTurnType *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__turntype_vec(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelTurnType__Sequence * member =
    (deva_map_msgs__msg__ChannelTurnType__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelTurnType__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelTurnType__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lanespeedlimitation_vec(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanespeedlimitation_vec(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * member =
    (const deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanespeedlimitation_vec(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lanespeedlimitation_vec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation * item =
    ((const deva_map_msgs__msg__ChannelLaneSpeedLimitation *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanespeedlimitation_vec(untyped_member, index));
  deva_map_msgs__msg__ChannelLaneSpeedLimitation * value =
    (deva_map_msgs__msg__ChannelLaneSpeedLimitation *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lanespeedlimitation_vec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ChannelLaneSpeedLimitation * item =
    ((deva_map_msgs__msg__ChannelLaneSpeedLimitation *)
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanespeedlimitation_vec(untyped_member, index));
  const deva_map_msgs__msg__ChannelLaneSpeedLimitation * value =
    (const deva_map_msgs__msg__ChannelLaneSpeedLimitation *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lanespeedlimitation_vec(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence * member =
    (deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence *)(untyped_member);
  deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__fini(member);
  return deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_member_array[4] = {
  {
    "lane_id_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneInfo, lane_id_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lane_id_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lane_id_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lane_id_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lane_id_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lane_id_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lane_id_vec  // resize(index) function pointer
  },
  {
    "lanetype_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneInfo, lanetype_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lanetype_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanetype_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanetype_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lanetype_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lanetype_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lanetype_vec  // resize(index) function pointer
  },
  {
    "turntype_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneInfo, turntype_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__turntype_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__turntype_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__turntype_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__turntype_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__turntype_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__turntype_vec  // resize(index) function pointer
  },
  {
    "lanespeedlimitation_vec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__ChannelLaneInfo, lanespeedlimitation_vec),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__size_function__ChannelLaneInfo__lanespeedlimitation_vec,  // size() function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_const_function__ChannelLaneInfo__lanespeedlimitation_vec,  // get_const(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__get_function__ChannelLaneInfo__lanespeedlimitation_vec,  // get(index) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__fetch_function__ChannelLaneInfo__lanespeedlimitation_vec,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__assign_function__ChannelLaneInfo__lanespeedlimitation_vec,  // assign(index, value) function pointer
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__resize_function__ChannelLaneInfo__lanespeedlimitation_vec  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "ChannelLaneInfo",  // message name
  4,  // number of fields
  sizeof(deva_map_msgs__msg__ChannelLaneInfo),
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_member_array,  // message members
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneInfo)() {
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneType)();
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelTurnType)();
  deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ChannelLaneSpeedLimitation)();
  if (!deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__ChannelLaneInfo__rosidl_typesupport_introspection_c__ChannelLaneInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
