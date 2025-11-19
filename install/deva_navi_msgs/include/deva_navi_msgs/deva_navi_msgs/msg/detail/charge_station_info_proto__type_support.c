// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.h"


// Include directives for member types
// Member `show`
// Member `projective`
#include "deva_navi_msgs/msg/coord3_d_double_proto.h"
// Member `show`
// Member `projective`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__rosidl_typesupport_introspection_c.h"
// Member `poi_id`
// Member `name`
// Member `brand_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__ChargeStationInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__ChargeStationInfoProto__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_member_array[11] = {
  {
    "segment_idx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, segment_idx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "show",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, show),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "projective",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, projective),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poi_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, poi_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brand_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, brand_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, max_power),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charge_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, charge_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charge_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, charge_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_capacity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ChargeStationInfoProto, remaining_capacity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "ChargeStationInfoProto",  // message name
  11,  // number of fields
  sizeof(deva_navi_msgs__msg__ChargeStationInfoProto),
  deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ChargeStationInfoProto)() {
  deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  if (!deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__ChargeStationInfoProto__rosidl_typesupport_introspection_c__ChargeStationInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
