// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/String2SLBoundary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_sl_boundary__struct.h"


// Include directives for member types
// Member `obs_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `sl_boundary`
#include "deva_planning_msgs2/msg/sl_boundary.h"
// Member `sl_boundary`
#include "deva_planning_msgs2/msg/detail/sl_boundary__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__String2SLBoundary__init(message_memory);
}

void deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__String2SLBoundary__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_member_array[2] = {
  {
    "obs_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__String2SLBoundary, obs_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sl_boundary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__String2SLBoundary, sl_boundary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "String2SLBoundary",  // message name
  2,  // number of fields
  sizeof(deva_planning_msgs2__msg__String2SLBoundary),
  deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_member_array,  // message members
  deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, String2SLBoundary)() {
  deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, SLBoundary)();
  if (!deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__String2SLBoundary__rosidl_typesupport_introspection_c__String2SLBoundary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
