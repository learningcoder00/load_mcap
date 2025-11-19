// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_control_msgs:msg/VehicleReportPedal.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__rosidl_typesupport_introspection_c.h"
#include "deva_control_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__functions.h"
#include "deva_control_msgs/msg/detail/vehicle_report_pedal__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_control_msgs__msg__VehicleReportPedal__init(message_memory);
}

void deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_fini_function(void * message_memory)
{
  deva_control_msgs__msg__VehicleReportPedal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_member_array[2] = {
  {
    "acc_pedal_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportPedal, acc_pedal_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "brk_pedal_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_control_msgs__msg__VehicleReportPedal, brk_pedal_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_members = {
  "deva_control_msgs__msg",  // message namespace
  "VehicleReportPedal",  // message name
  2,  // number of fields
  sizeof(deva_control_msgs__msg__VehicleReportPedal),
  deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_member_array,  // message members
  deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_type_support_handle = {
  0,
  &deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_control_msgs, msg, VehicleReportPedal)() {
  if (!deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_type_support_handle.typesupport_identifier) {
    deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_control_msgs__msg__VehicleReportPedal__rosidl_typesupport_introspection_c__VehicleReportPedal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
