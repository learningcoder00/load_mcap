// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/RadarObjectArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/radar_object_array__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/radar_object_array__functions.h"
#include "deva_perception_msgs/msg/detail/radar_object_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `objects`
#include "deva_perception_msgs/msg/radar_object.h"
// Member `objects`
#include "deva_perception_msgs/msg/detail/radar_object__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__RadarObjectArray__init(message_memory);
}

void deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__RadarObjectArray__fini(message_memory);
}

size_t deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__size_function__RadarObjectArray__objects(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__RadarObject__Sequence * member =
    (const deva_perception_msgs__msg__RadarObject__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_const_function__RadarObjectArray__objects(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__RadarObject__Sequence * member =
    (const deva_perception_msgs__msg__RadarObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_function__RadarObjectArray__objects(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__RadarObject__Sequence * member =
    (deva_perception_msgs__msg__RadarObject__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__fetch_function__RadarObjectArray__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__RadarObject * item =
    ((const deva_perception_msgs__msg__RadarObject *)
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_const_function__RadarObjectArray__objects(untyped_member, index));
  deva_perception_msgs__msg__RadarObject * value =
    (deva_perception_msgs__msg__RadarObject *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__assign_function__RadarObjectArray__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__RadarObject * item =
    ((deva_perception_msgs__msg__RadarObject *)
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_function__RadarObjectArray__objects(untyped_member, index));
  const deva_perception_msgs__msg__RadarObject * value =
    (const deva_perception_msgs__msg__RadarObject *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__resize_function__RadarObjectArray__objects(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__RadarObject__Sequence * member =
    (deva_perception_msgs__msg__RadarObject__Sequence *)(untyped_member);
  deva_perception_msgs__msg__RadarObject__Sequence__fini(member);
  return deva_perception_msgs__msg__RadarObject__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RadarObjectArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "objects",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RadarObjectArray, objects),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__size_function__RadarObjectArray__objects,  // size() function pointer
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_const_function__RadarObjectArray__objects,  // get_const(index) function pointer
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__get_function__RadarObjectArray__objects,  // get(index) function pointer
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__fetch_function__RadarObjectArray__objects,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__assign_function__RadarObjectArray__objects,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__resize_function__RadarObjectArray__objects  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "RadarObjectArray",  // message name
  2,  // number of fields
  sizeof(deva_perception_msgs__msg__RadarObjectArray),
  deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_member_array,  // message members
  deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RadarObjectArray)() {
  deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RadarObject)();
  if (!deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__RadarObjectArray__rosidl_typesupport_introspection_c__RadarObjectArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
