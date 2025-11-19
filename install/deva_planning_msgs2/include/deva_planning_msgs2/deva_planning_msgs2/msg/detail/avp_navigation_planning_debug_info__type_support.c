// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_planning_msgs2:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_planning_msgs2/msg/detail/avp_navigation_planning_debug_info__rosidl_typesupport_introspection_c.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_planning_msgs2/msg/detail/avp_navigation_planning_debug_info__functions.h"
#include "deva_planning_msgs2/msg/detail/avp_navigation_planning_debug_info__struct.h"


// Include directives for member types
// Member `header`
// Member `planning_header`
// Member `prediction_header`
// Member `localization_header`
// Member `chassis_header`
// Member `avp_local_map_header`
// Member `perception_map_header`
#include "std_msgs/msg/header.h"
// Member `header`
// Member `planning_header`
// Member `prediction_header`
// Member `localization_header`
// Member `chassis_header`
// Member `avp_local_map_header`
// Member `perception_map_header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `avp_debug_info`
#include "deva_planning_msgs2/msg/avp_debug_info.h"
// Member `avp_debug_info`
#include "deva_planning_msgs2/msg/detail/avp_debug_info__rosidl_typesupport_introspection_c.h"
// Member `nav_openspace_debug_info`
#include "deva_planning_msgs2/msg/nav_openspace_debug_info.h"
// Member `nav_openspace_debug_info`
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__init(message_memory);
}

void deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_fini_function(void * message_memory)
{
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "planning_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, planning_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, prediction_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "localization_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, localization_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "chassis_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, chassis_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avp_local_map_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, avp_local_map_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "perception_map_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, perception_map_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "avp_debug_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, avp_debug_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nav_openspace_debug_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo, nav_openspace_debug_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_members = {
  "deva_planning_msgs2__msg",  // message namespace
  "AvpNavigationPlanningDebugInfo",  // message name
  9,  // number of fields
  sizeof(deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo),
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array,  // message members
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_type_support_handle = {
  0,
  &deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_planning_msgs2
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, AvpNavigationPlanningDebugInfo)() {
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, AvpDebugInfo)();
  deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs2, msg, NavOpenspaceDebugInfo)();
  if (!deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_type_support_handle.typesupport_identifier) {
    deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_planning_msgs2__msg__AvpNavigationPlanningDebugInfo__rosidl_typesupport_introspection_c__AvpNavigationPlanningDebugInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
