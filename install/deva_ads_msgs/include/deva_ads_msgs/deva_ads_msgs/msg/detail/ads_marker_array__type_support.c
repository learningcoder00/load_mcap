// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_ads_msgs/msg/detail/ads_marker_array__rosidl_typesupport_introspection_c.h"
#include "deva_ads_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_ads_msgs/msg/detail/ads_marker_array__functions.h"
#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.h"


// Include directives for member types
// Member `uuid`
// Member `classes`
#include "rosidl_runtime_c/string_functions.h"
// Member `color`
#include "std_msgs/msg/color_rgba.h"
// Member `color`
#include "std_msgs/msg/detail/color_rgba__rosidl_typesupport_introspection_c.h"
// Member `markers`
#include "deva_ads_msgs/msg/ads_marker.h"
// Member `markers`
#include "deva_ads_msgs/msg/detail/ads_marker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_ads_msgs__msg__AdsMarkerArray__init(message_memory);
}

void deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_fini_function(void * message_memory)
{
  deva_ads_msgs__msg__AdsMarkerArray__fini(message_memory);
}

size_t deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__size_function__AdsMarkerArray__markers(
  const void * untyped_member)
{
  const deva_ads_msgs__msg__AdsMarker__Sequence * member =
    (const deva_ads_msgs__msg__AdsMarker__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_const_function__AdsMarkerArray__markers(
  const void * untyped_member, size_t index)
{
  const deva_ads_msgs__msg__AdsMarker__Sequence * member =
    (const deva_ads_msgs__msg__AdsMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_function__AdsMarkerArray__markers(
  void * untyped_member, size_t index)
{
  deva_ads_msgs__msg__AdsMarker__Sequence * member =
    (deva_ads_msgs__msg__AdsMarker__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__fetch_function__AdsMarkerArray__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_ads_msgs__msg__AdsMarker * item =
    ((const deva_ads_msgs__msg__AdsMarker *)
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_const_function__AdsMarkerArray__markers(untyped_member, index));
  deva_ads_msgs__msg__AdsMarker * value =
    (deva_ads_msgs__msg__AdsMarker *)(untyped_value);
  *value = *item;
}

void deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__assign_function__AdsMarkerArray__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_ads_msgs__msg__AdsMarker * item =
    ((deva_ads_msgs__msg__AdsMarker *)
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_function__AdsMarkerArray__markers(untyped_member, index));
  const deva_ads_msgs__msg__AdsMarker * value =
    (const deva_ads_msgs__msg__AdsMarker *)(untyped_value);
  *item = *value;
}

bool deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__resize_function__AdsMarkerArray__markers(
  void * untyped_member, size_t size)
{
  deva_ads_msgs__msg__AdsMarker__Sequence * member =
    (deva_ads_msgs__msg__AdsMarker__Sequence *)(untyped_member);
  deva_ads_msgs__msg__AdsMarker__Sequence__fini(member);
  return deva_ads_msgs__msg__AdsMarker__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_member_array[6] = {
  {
    "uuid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, uuid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, classes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "markers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_ads_msgs__msg__AdsMarkerArray, markers),  // bytes offset in struct
    NULL,  // default value
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__size_function__AdsMarkerArray__markers,  // size() function pointer
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_const_function__AdsMarkerArray__markers,  // get_const(index) function pointer
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__get_function__AdsMarkerArray__markers,  // get(index) function pointer
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__fetch_function__AdsMarkerArray__markers,  // fetch(index, &value) function pointer
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__assign_function__AdsMarkerArray__markers,  // assign(index, value) function pointer
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__resize_function__AdsMarkerArray__markers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_members = {
  "deva_ads_msgs__msg",  // message namespace
  "AdsMarkerArray",  // message name
  6,  // number of fields
  sizeof(deva_ads_msgs__msg__AdsMarkerArray),
  deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_member_array,  // message members
  deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_type_support_handle = {
  0,
  &deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_ads_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_ads_msgs, msg, AdsMarkerArray)() {
  deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, ColorRGBA)();
  deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_ads_msgs, msg, AdsMarker)();
  if (!deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_type_support_handle.typesupport_identifier) {
    deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_ads_msgs__msg__AdsMarkerArray__rosidl_typesupport_introspection_c__AdsMarkerArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
