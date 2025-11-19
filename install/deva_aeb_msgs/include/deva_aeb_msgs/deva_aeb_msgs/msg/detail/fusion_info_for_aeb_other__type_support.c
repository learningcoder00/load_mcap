// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEBOther.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__rosidl_typesupport_introspection_c.h"
#include "deva_aeb_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__functions.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb_other__struct.h"


// Include directives for member types
// Member `roadppty`
#include "deva_aeb_msgs/msg/sf_road_ppty.h"
// Member `roadppty`
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__rosidl_typesupport_introspection_c.h"
// Member `vehself`
#include "deva_aeb_msgs/msg/sf_veh_self.h"
// Member `vehself`
#include "deva_aeb_msgs/msg/detail/sf_veh_self__rosidl_typesupport_introspection_c.h"
// Member `fusiontslist`
#include "deva_aeb_msgs/msg/sf_fusion_ts_list.h"
// Member `fusiontslist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_ts_list__rosidl_typesupport_introspection_c.h"
// Member `fusiontfllist`
#include "deva_aeb_msgs/msg/sf_fusion_tfl_list.h"
// Member `fusiontfllist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl_list__rosidl_typesupport_introspection_c.h"
// Member `fusionroadsignlist`
#include "deva_aeb_msgs/msg/sf_fusion_road_sign_list.h"
// Member `fusionroadsignlist`
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__rosidl_typesupport_introspection_c.h"
// Member `fusiondiaglist`
#include "deva_aeb_msgs/msg/sf_diag_list.h"
// Member `fusiondiaglist`
#include "deva_aeb_msgs/msg/detail/sf_diag_list__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_aeb_msgs__msg__FusionInfoForAEBOther__init(message_memory);
}

void deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_fini_function(void * message_memory)
{
  deva_aeb_msgs__msg__FusionInfoForAEBOther__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[6] = {
  {
    "roadppty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, roadppty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehself",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, vehself),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusiontslist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, fusiontslist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusiontfllist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, fusiontfllist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusionroadsignlist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, fusionroadsignlist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fusiondiaglist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_aeb_msgs__msg__FusionInfoForAEBOther, fusiondiaglist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_members = {
  "deva_aeb_msgs__msg",  // message namespace
  "FusionInfoForAEBOther",  // message name
  6,  // number of fields
  sizeof(deva_aeb_msgs__msg__FusionInfoForAEBOther),
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array,  // message members
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_type_support_handle = {
  0,
  &deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_aeb_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, FusionInfoForAEBOther)() {
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFRoadPpty)();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFVehSelf)();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionTSList)();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionTFLList)();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFFusionRoadSignList)();
  deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_aeb_msgs, msg, SFDiagList)();
  if (!deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_type_support_handle.typesupport_identifier) {
    deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_aeb_msgs__msg__FusionInfoForAEBOther__rosidl_typesupport_introspection_c__FusionInfoForAEBOther_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
