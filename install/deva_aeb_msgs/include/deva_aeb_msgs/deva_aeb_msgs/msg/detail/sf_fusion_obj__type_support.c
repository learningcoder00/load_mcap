// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionObj.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_obj__struct.h"


// Include directives for member types
// Member `estimn`
#include "deva_aeb_msgs/msg/sf_obj_estimn.h"
// Member `estimn`
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__rosidl_typesupport_introspection_c.h"
// Member `info`
#include "deva_aeb_msgs/msg/sf_obj_info.h"
// Member `info`
#include "deva_aeb_msgs/msg/detail/sf_obj_info__rosidl_typesupport_introspection_c.h"
// Member `ppty`
#include "deva_aeb_msgs/msg/sf_obj_ppty.h"
// Member `ppty`
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__rosidl_typesupport_introspection_c.h"
// Member `visinfo`
#include "deva_aeb_msgs/msg/sf_vision_info.h"
// Member `visinfo`
#include "deva_aeb_msgs/msg/detail/sf_vision_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFFusionObj__init(message_memory);
}

void deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFFusionObj__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array[4] = {
  {
    "estimn",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionObj, estimn),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionObj, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ppty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionObj, ppty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "visinfo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFFusionObj, visinfo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFFusionObj",  // message name
  4,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFFusionObj),
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array,  // message members
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionObj)() {
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFObjEstimn)();
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFObjInfo)();
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFObjPpty)();
  deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFVisionInfo)();
  if (!deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFFusionObj__rosidl_typesupport_introspection_c__SFFusionObj_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
