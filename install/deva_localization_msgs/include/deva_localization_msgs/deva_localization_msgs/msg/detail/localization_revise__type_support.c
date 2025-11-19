// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_localization_msgs:msg/LocalizationRevise.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_localization_msgs/msg/detail/localization_revise__rosidl_typesupport_introspection_c.h"
#include "deva_localization_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_localization_msgs/msg/detail/localization_revise__functions.h"
#include "deva_localization_msgs/msg/detail/localization_revise__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `position`
#include "geometry_msgs/msg/point.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_localization_msgs__msg__LocalizationRevise__init(message_memory);
}

void deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_fini_function(void * message_memory)
{
  deva_localization_msgs__msg__LocalizationRevise__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationRevise, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationRevise, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationRevise, orientation),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_localization_msgs__msg__LocalizationRevise, state_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_members = {
  "deva_localization_msgs__msg",  // message namespace
  "LocalizationRevise",  // message name
  4,  // number of fields
  sizeof(deva_localization_msgs__msg__LocalizationRevise),
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_member_array,  // message members
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_type_support_handle = {
  0,
  &deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_localization_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_localization_msgs, msg, LocalizationRevise)() {
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_type_support_handle.typesupport_identifier) {
    deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_localization_msgs__msg__LocalizationRevise__rosidl_typesupport_introspection_c__LocalizationRevise_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
