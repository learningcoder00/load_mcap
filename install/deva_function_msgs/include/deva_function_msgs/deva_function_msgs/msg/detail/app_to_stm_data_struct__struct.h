// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/APPToStmDataStruct in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__APPToStmDataStruct
{
  uint8_t app_to_hpa_ctrl_cmd;
  uint8_t mob_dev_avp_req;
  uint8_t on_bd_chrgr_hndl_sts1;
  uint8_t dc_chrgn_hndl_sts;
  uint8_t occupy_mon_sts_drvr_sts;
  uint8_t alrm_sts_alrm_failr;
  uint8_t alrm_sts_alrm_st;
  uint8_t alrm_sts_alrm_trg_src;
  uint8_t alrm_sts_snsr_incln_failr;
  uint8_t alrm_sts_snsr_intr_scanr_failr;
  uint8_t telephone_sts;
  uint8_t tr_lock_sts;
  uint8_t trsm_park_lockd_trsm_park_lockd;
  uint8_t twli_bri_raw_qf;
  uint16_t twli_bri_raw_twli_bri_raw;
  uint8_t rev[8];
} deva_function_msgs__msg__APPToStmDataStruct;

// Struct for a sequence of deva_function_msgs__msg__APPToStmDataStruct.
typedef struct deva_function_msgs__msg__APPToStmDataStruct__Sequence
{
  deva_function_msgs__msg__APPToStmDataStruct * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__APPToStmDataStruct__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_H_
