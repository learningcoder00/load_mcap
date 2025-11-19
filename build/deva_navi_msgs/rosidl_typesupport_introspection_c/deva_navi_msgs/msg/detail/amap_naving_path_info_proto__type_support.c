// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/AmapNavingPathInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/amap_naving_path_info_proto__struct.h"


// Include directives for member types
// Member `amap_path_info`
#include "deva_navi_msgs/msg/amap_path_info_proto.h"
// Member `amap_path_info`
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__AmapNavingPathInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__AmapNavingPathInfoProto__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapNavingPathInfoProto, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "amap_path_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapNavingPathInfoProto, amap_path_info),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__AmapNavingPathInfoProto, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "AmapNavingPathInfoProto",  // message name
  3,  // number of fields
  sizeof(deva_navi_msgs__msg__AmapNavingPathInfoProto),
  deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, AmapNavingPathInfoProto)() {
  deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, AmapPathInfoProto)();
  if (!deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__AmapNavingPathInfoProto__rosidl_typesupport_introspection_c__AmapNavingPathInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
