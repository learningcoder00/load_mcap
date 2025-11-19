// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/local_map__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/local_map__functions.h"
#include "deva_map_msgs/msg/detail/local_map__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `map_version`
// Member `error_message`
#include "rosidl_runtime_c/string_functions.h"
// Member `st_map`
#include "deva_map_msgs/msg/st_local_map.h"
// Member `st_map`
#include "deva_map_msgs/msg/detail/st_local_map__rosidl_typesupport_introspection_c.h"
// Member `ust_map`
#include "deva_perception_msgs/msg/ust_boundary.h"
// Member `ust_map`
#include "deva_perception_msgs/msg/detail/ust_boundary__rosidl_typesupport_introspection_c.h"
// Member `avp_map`
#include "deva_map_msgs/msg/avp_local_map.h"
// Member `avp_map`
#include "deva_map_msgs/msg/detail/avp_local_map__rosidl_typesupport_introspection_c.h"
// Member `sensor_header`
#include "deva_map_msgs/msg/local_map_header.h"
// Member `sensor_header`
#include "deva_map_msgs/msg/detail/local_map_header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__LocalMap__init(message_memory);
}

void deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_fini_function(void * message_memory)
{
  deva_map_msgs__msg__LocalMap__fini(message_memory);
}

size_t deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__size_function__LocalMap__ust_map(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (const deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_const_function__LocalMap__ust_map(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (const deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_function__LocalMap__ust_map(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__fetch_function__LocalMap__ust_map(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__USTBoundary * item =
    ((const deva_perception_msgs__msg__USTBoundary *)
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_const_function__LocalMap__ust_map(untyped_member, index));
  deva_perception_msgs__msg__USTBoundary * value =
    (deva_perception_msgs__msg__USTBoundary *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__assign_function__LocalMap__ust_map(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__USTBoundary * item =
    ((deva_perception_msgs__msg__USTBoundary *)
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_function__LocalMap__ust_map(untyped_member, index));
  const deva_perception_msgs__msg__USTBoundary * value =
    (const deva_perception_msgs__msg__USTBoundary *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__resize_function__LocalMap__ust_map(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  deva_perception_msgs__msg__USTBoundary__Sequence__fini(member);
  return deva_perception_msgs__msg__USTBoundary__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, map_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, error_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, map_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_localization_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, is_localization_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, st_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ust_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, ust_map),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__size_function__LocalMap__ust_map,  // size() function pointer
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_const_function__LocalMap__ust_map,  // get_const(index) function pointer
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__get_function__LocalMap__ust_map,  // get(index) function pointer
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__fetch_function__LocalMap__ust_map,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__assign_function__LocalMap__ust_map,  // assign(index, value) function pointer
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__resize_function__LocalMap__ust_map  // resize(index) function pointer
  },
  {
    "avp_map",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, avp_map),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMap, sensor_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "LocalMap",  // message name
  10,  // number of fields
  sizeof(deva_map_msgs__msg__LocalMap),
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array,  // message members
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, LocalMap)() {
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, STLocalMap)();
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, USTBoundary)();
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, AvpLocalMap)();
  deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, LocalMapHeader)();
  if (!deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__LocalMap__rosidl_typesupport_introspection_c__LocalMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
