// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/e2e_adb_array__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__functions.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `e2e_adb_veh_obj`
#include "deva_perception_msgs/msg/e2e_adb.h"
// Member `e2e_adb_veh_obj`
#include "deva_perception_msgs/msg/detail/e2e_adb__rosidl_typesupport_introspection_c.h"
// Member `e2e_adb_traffic_sign`
#include "deva_perception_msgs/msg/e2e_adb_traffic_sign.h"
// Member `e2e_adb_traffic_sign`
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__E2eAdbArray__init(message_memory);
}

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__E2eAdbArray__fini(message_memory);
}

size_t deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__size_function__E2eAdbArray__e2e_adb_veh_obj(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__E2eAdb__Sequence * member =
    (const deva_perception_msgs__msg__E2eAdb__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_veh_obj(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__E2eAdb__Sequence * member =
    (const deva_perception_msgs__msg__E2eAdb__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_veh_obj(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__E2eAdb__Sequence * member =
    (deva_perception_msgs__msg__E2eAdb__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__fetch_function__E2eAdbArray__e2e_adb_veh_obj(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__E2eAdb * item =
    ((const deva_perception_msgs__msg__E2eAdb *)
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_veh_obj(untyped_member, index));
  deva_perception_msgs__msg__E2eAdb * value =
    (deva_perception_msgs__msg__E2eAdb *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__assign_function__E2eAdbArray__e2e_adb_veh_obj(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__E2eAdb * item =
    ((deva_perception_msgs__msg__E2eAdb *)
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_veh_obj(untyped_member, index));
  const deva_perception_msgs__msg__E2eAdb * value =
    (const deva_perception_msgs__msg__E2eAdb *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__resize_function__E2eAdbArray__e2e_adb_veh_obj(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__E2eAdb__Sequence * member =
    (deva_perception_msgs__msg__E2eAdb__Sequence *)(untyped_member);
  deva_perception_msgs__msg__E2eAdb__Sequence__fini(member);
  return deva_perception_msgs__msg__E2eAdb__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__size_function__E2eAdbArray__e2e_adb_traffic_sign(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * member =
    (const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_traffic_sign(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * member =
    (const deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_traffic_sign(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * member =
    (deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__fetch_function__E2eAdbArray__e2e_adb_traffic_sign(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__E2eAdbTrafficSign * item =
    ((const deva_perception_msgs__msg__E2eAdbTrafficSign *)
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_traffic_sign(untyped_member, index));
  deva_perception_msgs__msg__E2eAdbTrafficSign * value =
    (deva_perception_msgs__msg__E2eAdbTrafficSign *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__assign_function__E2eAdbArray__e2e_adb_traffic_sign(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__E2eAdbTrafficSign * item =
    ((deva_perception_msgs__msg__E2eAdbTrafficSign *)
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_traffic_sign(untyped_member, index));
  const deva_perception_msgs__msg__E2eAdbTrafficSign * value =
    (const deva_perception_msgs__msg__E2eAdbTrafficSign *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__resize_function__E2eAdbArray__e2e_adb_traffic_sign(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence * member =
    (deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence *)(untyped_member);
  deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__fini(member);
  return deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_closing_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, pre_crash_front_data_closing_velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_object_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, pre_crash_front_data_object_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_overlap",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, pre_crash_front_data_overlap),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pre_crash_front_data_time_to_impact",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, pre_crash_front_data_time_to_impact),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lit_area",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, lit_area),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_sts_for_ahbc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, camera_sts_for_ahbc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "too_many_cars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, too_many_cars),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "e2e_adb_veh_obj",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, e2e_adb_veh_obj),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__size_function__E2eAdbArray__e2e_adb_veh_obj,  // size() function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_veh_obj,  // get_const(index) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_veh_obj,  // get(index) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__fetch_function__E2eAdbArray__e2e_adb_veh_obj,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__assign_function__E2eAdbArray__e2e_adb_veh_obj,  // assign(index, value) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__resize_function__E2eAdbArray__e2e_adb_veh_obj  // resize(index) function pointer
  },
  {
    "e2e_adb_traffic_sign",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__E2eAdbArray, e2e_adb_traffic_sign),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__size_function__E2eAdbArray__e2e_adb_traffic_sign,  // size() function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_const_function__E2eAdbArray__e2e_adb_traffic_sign,  // get_const(index) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__get_function__E2eAdbArray__e2e_adb_traffic_sign,  // get(index) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__fetch_function__E2eAdbArray__e2e_adb_traffic_sign,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__assign_function__E2eAdbArray__e2e_adb_traffic_sign,  // assign(index, value) function pointer
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__resize_function__E2eAdbArray__e2e_adb_traffic_sign  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "E2eAdbArray",  // message name
  10,  // number of fields
  sizeof(deva_perception_msgs__msg__E2eAdbArray),
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_member_array,  // message members
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eAdbArray)() {
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eAdb)();
  deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, E2eAdbTrafficSign)();
  if (!deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__E2eAdbArray__rosidl_typesupport_introspection_c__E2eAdbArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
