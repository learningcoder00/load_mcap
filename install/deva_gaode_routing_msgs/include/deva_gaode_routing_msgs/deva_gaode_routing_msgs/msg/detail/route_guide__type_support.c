// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/RouteGuide.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/route_guide__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/route_guide__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/route_guide__struct.h"


// Include directives for member types
// Member `routes`
#include "deva_gaode_routing_msgs/msg/route.h"
// Member `routes`
#include "deva_gaode_routing_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__RouteGuide__init(message_memory);
}

void deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__RouteGuide__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__size_function__RouteGuide__routes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Route__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Route__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_const_function__RouteGuide__routes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Route__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_function__RouteGuide__routes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Route__Sequence * member =
    (deva_gaode_routing_msgs__msg__Route__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__fetch_function__RouteGuide__routes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Route * item =
    ((const deva_gaode_routing_msgs__msg__Route *)
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_const_function__RouteGuide__routes(untyped_member, index));
  deva_gaode_routing_msgs__msg__Route * value =
    (deva_gaode_routing_msgs__msg__Route *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__assign_function__RouteGuide__routes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Route * item =
    ((deva_gaode_routing_msgs__msg__Route *)
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_function__RouteGuide__routes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Route * value =
    (const deva_gaode_routing_msgs__msg__Route *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__resize_function__RouteGuide__routes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Route__Sequence * member =
    (deva_gaode_routing_msgs__msg__Route__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Route__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Route__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_member_array[1] = {
  {
    "routes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RouteGuide, routes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__size_function__RouteGuide__routes,  // size() function pointer
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_const_function__RouteGuide__routes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__get_function__RouteGuide__routes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__fetch_function__RouteGuide__routes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__assign_function__RouteGuide__routes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__resize_function__RouteGuide__routes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "RouteGuide",  // message name
  1,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__RouteGuide),
  deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RouteGuide)() {
  deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Route)();
  if (!deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__RouteGuide__rosidl_typesupport_introspection_c__RouteGuide_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
