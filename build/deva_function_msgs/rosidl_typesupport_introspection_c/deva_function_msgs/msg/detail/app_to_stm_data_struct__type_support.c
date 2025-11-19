// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__rosidl_typesupport_introspection_c.h"
#include "deva_function_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_function_msgs__msg__APPToStmDataStruct__init(message_memory);
}

void deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_fini_function(void * message_memory)
{
  deva_function_msgs__msg__APPToStmDataStruct__fini(message_memory);
}

size_t deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__size_function__APPToStmDataStruct__rev(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_const_function__APPToStmDataStruct__rev(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_function__APPToStmDataStruct__rev(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__fetch_function__APPToStmDataStruct__rev(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_const_function__APPToStmDataStruct__rev(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__assign_function__APPToStmDataStruct__rev(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_function__APPToStmDataStruct__rev(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_member_array[16] = {
  {
    "app_to_hpa_ctrl_cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, app_to_hpa_ctrl_cmd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mob_dev_avp_req",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, mob_dev_avp_req),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "on_bd_chrgr_hndl_sts1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, on_bd_chrgr_hndl_sts1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dc_chrgn_hndl_sts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, dc_chrgn_hndl_sts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "occupy_mon_sts_drvr_sts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, occupy_mon_sts_drvr_sts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alrm_sts_alrm_failr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, alrm_sts_alrm_failr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alrm_sts_alrm_st",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, alrm_sts_alrm_st),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alrm_sts_alrm_trg_src",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, alrm_sts_alrm_trg_src),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alrm_sts_snsr_incln_failr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, alrm_sts_snsr_incln_failr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alrm_sts_snsr_intr_scanr_failr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, alrm_sts_snsr_intr_scanr_failr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "telephone_sts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, telephone_sts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tr_lock_sts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, tr_lock_sts),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trsm_park_lockd_trsm_park_lockd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, trsm_park_lockd_trsm_park_lockd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twli_bri_raw_qf",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, twli_bri_raw_qf),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "twli_bri_raw_twli_bri_raw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, twli_bri_raw_twli_bri_raw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rev",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__APPToStmDataStruct, rev),  // bytes offset in struct
    NULL,  // default value
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__size_function__APPToStmDataStruct__rev,  // size() function pointer
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_const_function__APPToStmDataStruct__rev,  // get_const(index) function pointer
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__get_function__APPToStmDataStruct__rev,  // get(index) function pointer
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__fetch_function__APPToStmDataStruct__rev,  // fetch(index, &value) function pointer
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__assign_function__APPToStmDataStruct__rev,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_members = {
  "deva_function_msgs__msg",  // message namespace
  "APPToStmDataStruct",  // message name
  16,  // number of fields
  sizeof(deva_function_msgs__msg__APPToStmDataStruct),
  deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_member_array,  // message members
  deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_type_support_handle = {
  0,
  &deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_function_msgs, msg, APPToStmDataStruct)() {
  if (!deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_type_support_handle.typesupport_identifier) {
    deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_function_msgs__msg__APPToStmDataStruct__rosidl_typesupport_introspection_c__APPToStmDataStruct_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
