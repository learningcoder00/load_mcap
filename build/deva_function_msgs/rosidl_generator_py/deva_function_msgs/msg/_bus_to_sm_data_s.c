// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "deva_function_msgs/msg/detail/bus_to_sm_data__struct.h"
#include "deva_function_msgs/msg/detail/bus_to_sm_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__bus_to_sm_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("deva_function_msgs.msg._bus_to_sm_data.BusToSmData", full_classname_dest, 50) == 0);
  }
  deva_function_msgs__msg__BusToSmData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tr_lock_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "tr_lock_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tr_lock_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_drvr_lock_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_drvr_lock_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_drvr_lock_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_pass_lock_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_pass_lock_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_pass_lock_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_le_re_lock_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_le_re_lock_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_le_re_lock_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_ri_re_lock_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_ri_re_lock_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_ri_re_lock_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_sys_sts_brk_sys_capability
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_sys_sts_brk_sys_capability");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_sys_sts_brk_sys_capability = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rev
    PyObject * field = PyObject_GetAttrString(_pymsg, "rev");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 2;
      uint8_t * dest = ros_message->rev;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // calltype_and_sts_ecall_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "calltype_and_sts_ecall_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calltype_and_sts_ecall_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blt_lock_st_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "blt_lock_st_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blt_lock_st_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blt_lock_st_err_sts_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "blt_lock_st_err_sts_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blt_lock_st_err_sts_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_st_esc_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_st_esc_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_st_esc_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prk_lat_lgt_failr
    PyObject * field = PyObject_GetAttrString(_pymsg, "prk_lat_lgt_failr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prk_lat_lgt_failr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_incln_qly
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_incln_qly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_incln_qly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_mtn_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_mtn_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_mtn_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // whl_spd_circuml_frnt_le_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "whl_spd_circuml_frnt_le_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->whl_spd_circuml_frnt_le_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // whl_spd_circuml_frnt_ri_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "whl_spd_circuml_frnt_ri_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->whl_spd_circuml_frnt_ri_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // whl_spd_circuml_re_le_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "whl_spd_circuml_re_le_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->whl_spd_circuml_re_le_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // whl_spd_circuml_re_ri_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "whl_spd_circuml_re_ri_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->whl_spd_circuml_re_ri_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_mov
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_mov");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_mov = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accr_pedl_psd_accr_pedl_psd
    PyObject * field = PyObject_GetAttrString(_pymsg, "accr_pedl_psd_accr_pedl_psd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accr_pedl_psd_accr_pedl_psd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accr_pedl_psd_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "accr_pedl_psd_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accr_pedl_psd_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // typ_ext_req_to_upd_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "typ_ext_req_to_upd_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->typ_ext_req_to_upd_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trsm_park_lockd
    PyObject * field = PyObject_GetAttrString(_pymsg, "trsm_park_lockd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trsm_park_lockd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_drvr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_drvr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_drvr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_le_re_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_le_re_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_le_re_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_pass_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_pass_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_pass_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_ri_re_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_ri_re_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_ri_re_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hood_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hood_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hood_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirr_fold_sts_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirr_fold_sts_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirr_fold_sts_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirr_fold_sts_at_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirr_fold_sts_at_pass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirr_fold_sts_at_pass = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "tr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trlr_prsnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "trlr_prsnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trlr_prsnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_mod_mngt_glb_safe1_car_mod_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_mod_mngt_glb_safe1_car_mod_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_mod_mngt_glb_safe1_car_mod_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_mod_mngt_glb_safe1_usg_mod_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_mod_mngt_glb_safe1_usg_mod_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_mod_mngt_glb_safe1_usg_mod_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_sts_to_park_assi
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_sts_to_park_assi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_sts_to_park_assi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcr_typ_ext_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcr_typ_ext_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcr_typ_ext_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rainfall_amnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rainfall_amnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rainfall_amnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // egy_lvl_elec_mai
    PyObject * field = PyObject_GetAttrString(_pymsg, "egy_lvl_elec_mai");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->egy_lvl_elec_mai = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_p_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_p_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_p_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_p_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_p_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_p_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_p_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_p_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_p_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_p_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_p_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_p_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_lat_shake_hand_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_lat_shake_hand_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_lat_shake_hand_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_lon_shake_hand_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_lon_shake_hand_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_lon_shake_hand_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rcv_ctrl_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcv_ctrl_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rcv_ctrl_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rcv_steertrim_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcv_steertrim_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rcv_steertrim_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rcv_req1_mob_dev_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rcv_req1_mob_dev_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rcv_req1_mob_dev_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dc_dc_actvd
    PyObject * field = PyObject_GetAttrString(_pymsg, "dc_dc_actvd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dc_dc_actvd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_whl_snsr_ag
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_whl_snsr_ag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_whl_snsr_ag = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ble_con_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ble_con_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ble_con_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // twbr_lockd_posn
    PyObject * field = PyObject_GetAttrString(_pymsg, "twbr_lockd_posn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->twbr_lockd_posn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // full_elec_twbr_posn
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_elec_twbr_posn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->full_elec_twbr_posn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vtsd_mode_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "vtsd_mode_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vtsd_mode_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // key_read_sts_to_asm
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_read_sts_to_asm");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 12;
      uint8_t * dest = ros_message->key_read_sts_to_asm;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rspa_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rspa_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rspa_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rpa_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rpa_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rpa_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rpa_out_mode_sub_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rpa_out_mode_sub_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_mob_dev_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_mob_dev_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_mob_dev_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crab_mov_mod_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "crab_mov_mod_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crab_mov_mod_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tank_turn_mod_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "tank_turn_mod_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tank_turn_mod_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pass_seat_sts2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pass_seat_sts2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pass_seat_sts2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_max_ev_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_max_ev_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_max_ev_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // adcu_max_ev_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "adcu_max_ev_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adcu_max_ev_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lamp_req_by_veh_hld
    PyObject * field = PyObject_GetAttrString(_pymsg, "lamp_req_by_veh_hld");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lamp_req_by_veh_hld = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // msg_req_by_hill_dwn_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "msg_req_by_hill_dwn_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->msg_req_by_hill_dwn_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_warn_indcn_req_esc_warn_indcn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_warn_indcn_req_esc_warn_indcn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_warn_indcn_req_esc_warn_indcn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // abs_ctrl_actv_ctrl_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_ctrl_actv_ctrl_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->abs_ctrl_actv_ctrl_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eng_st1_wd_sts_eng_st1_wd_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "eng_st1_wd_sts_eng_st1_wd_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eng_st1_wd_sts_eng_st1_wd_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crs_ctrl_ovrdn
    PyObject * field = PyObject_GetAttrString(_pymsg, "crs_ctrl_ovrdn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crs_ctrl_ovrdn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_steer_whl_hld_qly
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_steer_whl_hld_qly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_steer_whl_hld_qly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_drvr_sts_with_fac_qly_door_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_drvr_sts_with_fac_qly_door_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_drvr_sts_with_fac_qly_door_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_drvr_sts_with_fac_qly_fac_qly
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_drvr_sts_with_fac_qly_fac_qly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_drvr_sts_with_fac_qly_fac_qly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lat_ctrl_mod_cfmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_ctrl_mod_cfmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lat_ctrl_mod_cfmd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // esc_ctrl_indcn
    PyObject * field = PyObject_GetAttrString(_pymsg, "esc_ctrl_indcn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->esc_ctrl_indcn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pt_drvr_setg_drv_mod_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_drvr_setg_drv_mod_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pt_drvr_setg_drv_mod_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // front_four_d_radar_sts_for_dim
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_four_d_radar_sts_for_dim");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_four_d_radar_sts_for_dim = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_prsnt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_prsnt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_prsnt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wipr_actv
    PyObject * field = PyObject_GetAttrString(_pymsg, "wipr_actv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wipr_actv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stand_still_mgr_sts_for_hld
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_still_mgr_sts_for_hld");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stand_still_mgr_sts_for_hld = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pt_drvr_setg
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_drvr_setg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pt_drvr_setg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tptf_status_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "tptf_status_error");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tptf_status_error = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tptf_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "tptf_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tptf_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tptf_time_gap
    PyObject * field = PyObject_GetAttrString(_pymsg, "tptf_time_gap");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tptf_time_gap = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_sod_lan_chg_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_sod_lan_chg_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_sod_lan_chg_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_chg
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_chg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_chg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_indcr_monostable
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_indcr_monostable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_indcr_monostable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_lane_chg_aut_actv_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_lane_chg_aut_actv_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_lane_chg_aut_actv_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_lane_chg_with_navi_sw_onoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_lane_chg_with_navi_sw_onoff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_lane_chg_with_navi_sw_onoff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nop_cofm_of_lan_chag_onoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "nop_cofm_of_lan_chag_onoff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nop_cofm_of_lan_chag_onoff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // wipg_spd_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "wipg_spd_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->wipg_spd_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_safe_stop_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_safe_stop_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_safe_stop_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_sup_end_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_sup_end_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_sup_end_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crash_sts_safe_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "crash_sts_safe_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crash_sts_safe_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_park_not_allow
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_park_not_allow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_park_not_allow = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_seat_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_seat_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_seat_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_seat_snsr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_seat_snsr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_seat_snsr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_l3_lat_ctrl_sts_ad_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_l3_lat_ctrl_sts_ad_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_l3_lat_ctrl_sts_ad_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_l3_lgt_ctrl_sts_ad_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_l3_lgt_ctrl_sts_ad_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_l3_lgt_ctrl_sts_ad_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // accr_pedl_sts_flt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "accr_pedl_sts_flt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->accr_pedl_sts_flt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // amb_t_raw_amb_t_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "amb_t_raw_amb_t_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->amb_t_raw_amb_t_val = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // body_hei
    PyObject * field = PyObject_GetAttrString(_pymsg, "body_hei");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->body_hei = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_batt_lo_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_batt_lo_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_batt_lo_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_fast_lose_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_fast_lose_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_fast_lose_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_msg_old_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_msg_old_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_msg_old_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->le_frnt_tire_msg_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_sys_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_sys_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_sys_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->le_frnt_tire_msg_t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_t_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_t_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_t_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_frnt_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_frnt_tire_msg_tire_fillg_assi_p_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_frnt_tire_msg_tire_fillg_assi_p_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_batt_lo_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_batt_lo_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_batt_lo_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_fast_lose_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_fast_lose_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_fast_lose_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_msg_old_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_msg_old_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_msg_old_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->le_re_tire_msg_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_sys_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_sys_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_sys_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->le_re_tire_msg_t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_t_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_t_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_t_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // le_re_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "le_re_tire_msg_tire_fillg_assi_p_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->le_re_tire_msg_tire_fillg_assi_p_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_batt_lo_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_batt_lo_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_batt_lo_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_fast_lose_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_fast_lose_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_fast_lose_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_msg_old_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_msg_old_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_msg_old_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ri_frnt_tire_msg_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_sys_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_sys_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_sys_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ri_frnt_tire_msg_t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_t_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_t_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_t_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_frnt_tire_msg_tire_fillg_assi_p_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_frnt_tire_msg_tire_fillg_assi_p_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_batt_lo_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_batt_lo_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_batt_lo_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_fast_lose_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_fast_lose_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_fast_lose_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_msg_old_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_msg_old_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_msg_old_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_p
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_p");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ri_re_tire_msg_p = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_sys_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_sys_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_sys_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_t");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ri_re_tire_msg_t = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_t_warn_flg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_t_warn_flg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_t_warn_flg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ri_re_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ri_re_tire_msg_tire_fillg_assi_p_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ri_re_tire_msg_tire_fillg_assi_p_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // occupy_mon_sts_drvr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "occupy_mon_sts_drvr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->occupy_mon_sts_drvr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sun_roof_posn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "sun_roof_posn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sun_roof_posn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_le1_frnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_le1_frnt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->susp_posn_vert_le1_frnt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_le1_frnt_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_le1_frnt_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->susp_posn_vert_le1_frnt_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_le1_re
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_le1_re");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->susp_posn_vert_le1_re = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_le1_re_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_le1_re_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->susp_posn_vert_le1_re_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_ri1_susp_posn_vert_ri_frnt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_re
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_ri1_susp_posn_vert_ri_re");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "susp_posn_vert_ri1_susp_posn_vert_ri_re_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // twli_bri_raw_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "twli_bri_raw_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->twli_bri_raw_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // twli_bri_raw_twli_bri_raw
    PyObject * field = PyObject_GetAttrString(_pymsg, "twli_bri_raw_twli_bri_raw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->twli_bri_raw_twli_bri_raw = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_pass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_pass = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_re_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_re_le");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_re_le = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_re_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_re_ri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_re_ri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_sys_sts_ad_l3_brk_fall_bck
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_sys_sts_ad_l3_brk_fall_bck");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_sys_sts_ad_l3_brk_fall_bck = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_sys_sts_brk_degradation
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_sys_sts_brk_degradation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_sys_sts_brk_degradation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_sys_sts_brk_sys_mod_cfmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_sys_sts_brk_sys_mod_cfmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_sys_sts_brk_sys_mod_cfmd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tank_turn_mod_sts_tank_turn_mod_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "tank_turn_mod_sts_tank_turn_mod_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tank_turn_mod_sts_tank_turn_mod_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sfty_decel_group_safe_asy_sfty_ena_decel
    PyObject * field = PyObject_GetAttrString(_pymsg, "sfty_decel_group_safe_asy_sfty_ena_decel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sfty_decel_group_safe_asy_sfty_ena_decel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_tq_addl_for_ema_steer_tq_addl_for_ema");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // asy_emgy_lane_keep_aid_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_emgy_lane_keep_aid_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_emgy_lane_keep_aid_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lane_keep_aid_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lane_keep_aid_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lane_keep_aid_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rcwm_brk_req_rcwm_brk_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcwm_brk_req_rcwm_brk_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rcwm_brk_req_rcwm_brk_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_a_lgt_sts_asy_a_lgt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_a_lgt_sts_asy_a_lgt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_a_lgt_sts_asy_a_lgt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_a_lat_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_a_lat_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_a_lat_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__bus_to_sm_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of BusToSmData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._bus_to_sm_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "BusToSmData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__BusToSmData * ros_message = (deva_function_msgs__msg__BusToSmData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tr_lock_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tr_lock_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tr_lock_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_drvr_lock_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_drvr_lock_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_drvr_lock_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_pass_lock_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_pass_lock_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_pass_lock_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_le_re_lock_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_le_re_lock_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_le_re_lock_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_ri_re_lock_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_ri_re_lock_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_ri_re_lock_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_sys_sts_brk_sys_capability
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_sys_sts_brk_sys_capability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_sys_sts_brk_sys_capability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rev
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rev");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->rev[0]);
    memcpy(dst, src, 2 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // calltype_and_sts_ecall_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calltype_and_sts_ecall_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calltype_and_sts_ecall_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blt_lock_st_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blt_lock_st_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blt_lock_st_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blt_lock_st_err_sts_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blt_lock_st_err_sts_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blt_lock_st_err_sts_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_st_esc_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_st_esc_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_st_esc_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prk_lat_lgt_failr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prk_lat_lgt_failr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prk_lat_lgt_failr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_incln_qly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_incln_qly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_incln_qly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_mtn_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_mtn_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_mtn_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // whl_spd_circuml_frnt_le_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->whl_spd_circuml_frnt_le_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "whl_spd_circuml_frnt_le_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // whl_spd_circuml_frnt_ri_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->whl_spd_circuml_frnt_ri_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "whl_spd_circuml_frnt_ri_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // whl_spd_circuml_re_le_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->whl_spd_circuml_re_le_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "whl_spd_circuml_re_le_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // whl_spd_circuml_re_ri_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->whl_spd_circuml_re_ri_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "whl_spd_circuml_re_ri_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_mov
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_mov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_mov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accr_pedl_psd_accr_pedl_psd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accr_pedl_psd_accr_pedl_psd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accr_pedl_psd_accr_pedl_psd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accr_pedl_psd_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accr_pedl_psd_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accr_pedl_psd_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // typ_ext_req_to_upd_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->typ_ext_req_to_upd_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "typ_ext_req_to_upd_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trsm_park_lockd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trsm_park_lockd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trsm_park_lockd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_drvr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_drvr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_drvr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_le_re_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_le_re_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_le_re_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_pass_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_pass_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_pass_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_ri_re_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_ri_re_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_ri_re_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hood_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hood_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hood_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirr_fold_sts_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirr_fold_sts_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirr_fold_sts_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirr_fold_sts_at_pass
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirr_fold_sts_at_pass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirr_fold_sts_at_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trlr_prsnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trlr_prsnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trlr_prsnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_mod_mngt_glb_safe1_car_mod_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_mod_mngt_glb_safe1_car_mod_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_mod_mngt_glb_safe1_car_mod_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_mod_mngt_glb_safe1_usg_mod_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_mod_mngt_glb_safe1_usg_mod_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_mod_mngt_glb_safe1_usg_mod_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_sts_to_park_assi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_sts_to_park_assi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_sts_to_park_assi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcr_typ_ext_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcr_typ_ext_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcr_typ_ext_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rainfall_amnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rainfall_amnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rainfall_amnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // egy_lvl_elec_mai
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->egy_lvl_elec_mai);
    {
      int rc = PyObject_SetAttrString(_pymessage, "egy_lvl_elec_mai", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_p_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_p_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_p_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_p_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_p_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_p_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_p_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_p_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_p_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_p_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_p_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_p_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_lat_shake_hand_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_lat_shake_hand_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_lat_shake_hand_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_lon_shake_hand_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_lon_shake_hand_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_lon_shake_hand_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcv_ctrl_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rcv_ctrl_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcv_ctrl_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcv_steertrim_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rcv_steertrim_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcv_steertrim_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rcv_req1_mob_dev_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rcv_req1_mob_dev_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rcv_req1_mob_dev_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dc_dc_actvd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dc_dc_actvd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dc_dc_actvd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_whl_snsr_ag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_whl_snsr_ag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_whl_snsr_ag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ble_con_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ble_con_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ble_con_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twbr_lockd_posn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->twbr_lockd_posn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "twbr_lockd_posn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_elec_twbr_posn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->full_elec_twbr_posn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_elec_twbr_posn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vtsd_mode_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vtsd_mode_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vtsd_mode_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_read_sts_to_asm
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "key_read_sts_to_asm");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->key_read_sts_to_asm[0]);
    memcpy(dst, src, 12 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rspa_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rspa_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rspa_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_rpa_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rpa_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rpa_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_rpa_out_mode_sub_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rpa_out_mode_sub_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_mob_dev_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_mob_dev_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_mob_dev_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crab_mov_mod_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crab_mov_mod_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crab_mov_mod_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tank_turn_mod_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tank_turn_mod_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tank_turn_mod_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pass_seat_sts2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pass_seat_sts2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pass_seat_sts2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_max_ev_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_max_ev_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_max_ev_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // adcu_max_ev_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->adcu_max_ev_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adcu_max_ev_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lamp_req_by_veh_hld
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lamp_req_by_veh_hld);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lamp_req_by_veh_hld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // msg_req_by_hill_dwn_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->msg_req_by_hill_dwn_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "msg_req_by_hill_dwn_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_warn_indcn_req_esc_warn_indcn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_warn_indcn_req_esc_warn_indcn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_warn_indcn_req_esc_warn_indcn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_ctrl_actv_ctrl_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->abs_ctrl_actv_ctrl_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_ctrl_actv_ctrl_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eng_st1_wd_sts_eng_st1_wd_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eng_st1_wd_sts_eng_st1_wd_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eng_st1_wd_sts_eng_st1_wd_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crs_ctrl_ovrdn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crs_ctrl_ovrdn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crs_ctrl_ovrdn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_steer_whl_hld_qly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_steer_whl_hld_qly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_steer_whl_hld_qly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_drvr_sts_with_fac_qly_door_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_drvr_sts_with_fac_qly_door_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_drvr_sts_with_fac_qly_door_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_drvr_sts_with_fac_qly_fac_qly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_drvr_sts_with_fac_qly_fac_qly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_drvr_sts_with_fac_qly_fac_qly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_ctrl_mod_cfmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lat_ctrl_mod_cfmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_ctrl_mod_cfmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // esc_ctrl_indcn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->esc_ctrl_indcn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "esc_ctrl_indcn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_drvr_setg_drv_mod_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pt_drvr_setg_drv_mod_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_drvr_setg_drv_mod_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_four_d_radar_sts_for_dim
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->front_four_d_radar_sts_for_dim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_four_d_radar_sts_for_dim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_prsnt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_prsnt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_prsnt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wipr_actv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wipr_actv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wipr_actv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_still_mgr_sts_for_hld
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stand_still_mgr_sts_for_hld);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_still_mgr_sts_for_hld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_drvr_setg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pt_drvr_setg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_drvr_setg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tptf_status_error
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tptf_status_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tptf_status_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tptf_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tptf_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tptf_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tptf_time_gap
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tptf_time_gap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tptf_time_gap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_sod_lan_chg_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_sod_lan_chg_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_sod_lan_chg_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_chg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_chg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_chg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_indcr_monostable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_indcr_monostable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_indcr_monostable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_lane_chg_aut_actv_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_lane_chg_aut_actv_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_lane_chg_aut_actv_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_lane_chg_with_navi_sw_onoff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_lane_chg_with_navi_sw_onoff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_lane_chg_with_navi_sw_onoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nop_cofm_of_lan_chag_onoff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nop_cofm_of_lan_chag_onoff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nop_cofm_of_lan_chag_onoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wipg_spd_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->wipg_spd_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wipg_spd_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_safe_stop_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_safe_stop_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_safe_stop_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_sup_end_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_sup_end_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_sup_end_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crash_sts_safe_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crash_sts_safe_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crash_sts_safe_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_park_not_allow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear_park_not_allow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_park_not_allow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_seat_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_seat_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_seat_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_seat_snsr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_seat_snsr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_seat_snsr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_l3_lat_ctrl_sts_ad_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_l3_lat_ctrl_sts_ad_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_l3_lat_ctrl_sts_ad_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_l3_lgt_ctrl_sts_ad_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_l3_lgt_ctrl_sts_ad_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_l3_lgt_ctrl_sts_ad_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // accr_pedl_sts_flt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->accr_pedl_sts_flt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "accr_pedl_sts_flt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amb_t_raw_amb_t_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->amb_t_raw_amb_t_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amb_t_raw_amb_t_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // body_hei
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->body_hei);
    {
      int rc = PyObject_SetAttrString(_pymessage, "body_hei", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_batt_lo_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_batt_lo_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_batt_lo_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_fast_lose_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_fast_lose_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_fast_lose_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_msg_old_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_msg_old_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_msg_old_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->le_frnt_tire_msg_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_sys_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_sys_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_sys_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->le_frnt_tire_msg_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_t_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_t_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_t_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_frnt_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_frnt_tire_msg_tire_fillg_assi_p_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_frnt_tire_msg_tire_fillg_assi_p_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_batt_lo_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_batt_lo_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_batt_lo_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_fast_lose_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_fast_lose_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_fast_lose_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_msg_old_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_msg_old_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_msg_old_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->le_re_tire_msg_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_sys_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_sys_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_sys_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->le_re_tire_msg_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_t_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_t_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_t_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // le_re_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->le_re_tire_msg_tire_fillg_assi_p_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "le_re_tire_msg_tire_fillg_assi_p_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_batt_lo_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_batt_lo_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_batt_lo_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_fast_lose_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_fast_lose_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_fast_lose_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_msg_old_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_msg_old_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_msg_old_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ri_frnt_tire_msg_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_sys_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_sys_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_sys_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ri_frnt_tire_msg_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_t_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_t_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_t_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_frnt_tire_msg_tire_fillg_assi_p_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_frnt_tire_msg_tire_fillg_assi_p_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_batt_lo_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_batt_lo_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_batt_lo_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_fast_lose_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_fast_lose_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_fast_lose_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_msg_old_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_msg_old_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_msg_old_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_p
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ri_re_tire_msg_p);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_p", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_sys_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_sys_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_sys_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_t
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ri_re_tire_msg_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_t_warn_flg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_t_warn_flg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_t_warn_flg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ri_re_tire_msg_tire_fillg_assi_p_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ri_re_tire_msg_tire_fillg_assi_p_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ri_re_tire_msg_tire_fillg_assi_p_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // occupy_mon_sts_drvr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->occupy_mon_sts_drvr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "occupy_mon_sts_drvr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sun_roof_posn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sun_roof_posn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sun_roof_posn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_le1_frnt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->susp_posn_vert_le1_frnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_le1_frnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_le1_frnt_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->susp_posn_vert_le1_frnt_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_le1_frnt_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_le1_re
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->susp_posn_vert_le1_re);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_le1_re", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_le1_re_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->susp_posn_vert_le1_re_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_le1_re_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_ri1_susp_posn_vert_ri_frnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_re
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_ri1_susp_posn_vert_ri_re", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "susp_posn_vert_ri1_susp_posn_vert_ri_re_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twli_bri_raw_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->twli_bri_raw_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "twli_bri_raw_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // twli_bri_raw_twli_bri_raw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->twli_bri_raw_twli_bri_raw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "twli_bri_raw_twli_bri_raw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_pass
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_pass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_re_le
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_re_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_re_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_re_ri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_re_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_re_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_sys_sts_ad_l3_brk_fall_bck
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_sys_sts_ad_l3_brk_fall_bck);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_sys_sts_ad_l3_brk_fall_bck", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_sys_sts_brk_degradation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_sys_sts_brk_degradation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_sys_sts_brk_degradation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_sys_sts_brk_sys_mod_cfmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_sys_sts_brk_sys_mod_cfmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_sys_sts_brk_sys_mod_cfmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tank_turn_mod_sts_tank_turn_mod_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tank_turn_mod_sts_tank_turn_mod_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tank_turn_mod_sts_tank_turn_mod_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sfty_decel_group_safe_asy_sfty_ena_decel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sfty_decel_group_safe_asy_sfty_ena_decel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sfty_decel_group_safe_asy_sfty_ena_decel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_tq_addl_for_ema_steer_tq_addl_for_ema", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_emgy_lane_keep_aid_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_emgy_lane_keep_aid_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_emgy_lane_keep_aid_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lane_keep_aid_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lane_keep_aid_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lane_keep_aid_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcwm_brk_req_rcwm_brk_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rcwm_brk_req_rcwm_brk_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcwm_brk_req_rcwm_brk_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_a_lgt_sts_asy_a_lgt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_a_lgt_sts_asy_a_lgt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_a_lgt_sts_asy_a_lgt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_a_lat_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_a_lat_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_a_lat_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
