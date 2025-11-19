// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/sf_diag_list__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/sf_diag_list__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.h"


// Include directives for member types
// Member `weather`
// Member `scene`
// Member `rdsuf`
// Member `light`
// Member `time`
#include "deva_aeb_msgs/msg/sf_diag_info.h"
// Member `weather`
// Member `scene`
// Member `rdsuf`
// Member `light`
// Member `time`
#include "deva_aeb_msgs/msg/detail/sf_diag_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__SFDiagList__init(message_memory);
}

void deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__SFDiagList__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, timestamp),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, framenum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "weather",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, weather),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scene",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, scene),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rdsuf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, rdsuf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__SFDiagList, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "SFDiagList",  // message name
  7,  // number of fields
  sizeof(deva_aeb_msgs__msg__SFDiagList),
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array,  // message members
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagList)() {
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagInfo)();
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagInfo)();
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagInfo)();
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagInfo)();
  deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagInfo)();
  if (!deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__SFDiagList__rosidl_typesupport_introspection_c__SFDiagList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
