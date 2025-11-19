// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/StopLine2dArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/stop_line2d_array__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/stop_line2d_array__functions.h"
#include "deva_perception_msgs/msg/detail/stop_line2d_array__struct.h"


// Include directives for member types
// Member `stopline_2ds`
#include "deva_perception_msgs/msg/stop_line2d.h"
// Member `stopline_2ds`
#include "deva_perception_msgs/msg/detail/stop_line2d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__StopLine2dArray__init(message_memory);
}

void deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__StopLine2dArray__fini(message_memory);
}

size_t deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__size_function__StopLine2dArray__stopline_2ds(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__StopLine2d__Sequence * member =
    (const deva_perception_msgs__msg__StopLine2d__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_const_function__StopLine2dArray__stopline_2ds(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__StopLine2d__Sequence * member =
    (const deva_perception_msgs__msg__StopLine2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_function__StopLine2dArray__stopline_2ds(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__StopLine2d__Sequence * member =
    (deva_perception_msgs__msg__StopLine2d__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__fetch_function__StopLine2dArray__stopline_2ds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__StopLine2d * item =
    ((const deva_perception_msgs__msg__StopLine2d *)
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_const_function__StopLine2dArray__stopline_2ds(untyped_member, index));
  deva_perception_msgs__msg__StopLine2d * value =
    (deva_perception_msgs__msg__StopLine2d *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__assign_function__StopLine2dArray__stopline_2ds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__StopLine2d * item =
    ((deva_perception_msgs__msg__StopLine2d *)
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_function__StopLine2dArray__stopline_2ds(untyped_member, index));
  const deva_perception_msgs__msg__StopLine2d * value =
    (const deva_perception_msgs__msg__StopLine2d *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__resize_function__StopLine2dArray__stopline_2ds(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__StopLine2d__Sequence * member =
    (deva_perception_msgs__msg__StopLine2d__Sequence *)(untyped_member);
  deva_perception_msgs__msg__StopLine2d__Sequence__fini(member);
  return deva_perception_msgs__msg__StopLine2d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_member_array[2] = {
  {
    "stopline_2ds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StopLine2dArray, stopline_2ds),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__size_function__StopLine2dArray__stopline_2ds,  // size() function pointer
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_const_function__StopLine2dArray__stopline_2ds,  // get_const(index) function pointer
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__get_function__StopLine2dArray__stopline_2ds,  // get(index) function pointer
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__fetch_function__StopLine2dArray__stopline_2ds,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__assign_function__StopLine2dArray__stopline_2ds,  // assign(index, value) function pointer
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__resize_function__StopLine2dArray__stopline_2ds  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__StopLine2dArray, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "StopLine2dArray",  // message name
  2,  // number of fields
  sizeof(deva_perception_msgs__msg__StopLine2dArray),
  deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_member_array,  // message members
  deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, StopLine2dArray)() {
  deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, StopLine2d)();
  if (!deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__StopLine2dArray__rosidl_typesupport_introspection_c__StopLine2dArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
