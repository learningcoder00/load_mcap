// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_localization_msgs:msg/LocalizationEstimate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_localization_msgs/msg/detail/localization_estimate__rosidl_typesupport_introspection_c.h"
#include "deva_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_localization_msgs/msg/detail/localization_estimate__functions.h"
#include "deva_localization_msgs/msg/detail/localization_estimate__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
// Member `global_pose`
#include "deva_localization_msgs/msg/pose.h"
// Member `pose`
// Member `global_pose`
#include "deva_localization_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `state_message`
// Member `global_pose_state_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_localization_msgs__msg__LocalizationEstimate__init(message_memory);
}

void deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_fini_function(void * message_memory)
{
  deva_localization_msgs__msg__LocalizationEstimate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, global_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measurement_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, measurement_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, state_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_pose_state_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationEstimate, global_pose_state_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_members = {
  "deva_localization_msgs__msg",  // message namespace
  "LocalizationEstimate",  // message name
  6,  // number of fields
  sizeof(deva_localization_msgs__msg__LocalizationEstimate),
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_member_array,  // message members
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_type_support_handle = {
  0,
  &deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_localization_msgs, msg, LocalizationEstimate)() {
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_localization_msgs, msg, Pose)();
  deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_localization_msgs, msg, Pose)();
  if (!deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_type_support_handle.typesupport_identifier) {
    deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_localization_msgs__msg__LocalizationEstimate__rosidl_typesupport_introspection_c__LocalizationEstimate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
