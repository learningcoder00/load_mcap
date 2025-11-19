// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/StateMachineData.idl
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
#include "deva_function_msgs/msg/detail/state_machine_data__struct.h"
#include "deva_function_msgs/msg/detail/state_machine_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__state_machine_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("deva_function_msgs.msg._state_machine_data.StateMachineData", full_classname_dest, 59) == 0);
  }
  deva_function_msgs__msg__StateMachineData * ros_message = _ros_message;
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
  {  // three_d_angle_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "three_d_angle_req");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->three_d_angle_req = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tsm_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "tsm_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tsm_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // apa_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "apa_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apa_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // avm_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "avm_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avm_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_assc_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_assc_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_assc_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // apa_sub_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "apa_sub_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apa_sub_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_prk_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_prk_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_prk_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // monr_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "monr_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->monr_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstcl_trig_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstcl_trig_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstcl_trig_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pla_mod_sts_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "pla_mod_sts_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pla_mod_sts_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // swt_disp_on_and_off_sts_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "swt_disp_on_and_off_sts_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swt_disp_on_and_off_sts_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // thr_d_touring_view_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "thr_d_touring_view_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->thr_d_touring_view_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_entry_ag_wide_vis_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_entry_ag_wide_vis_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_entry_ag_wide_vis_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_mdl_clr_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_mdl_clr_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_mdl_clr_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // visn_ag_extn_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "visn_ag_extn_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->visn_ag_extn_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // visn_img_disp_mod_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "visn_img_disp_mod_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->visn_img_disp_mod_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_assc_sys_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_assc_sys_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_assc_sys_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_aux_info_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_aux_info_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_aux_info_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_back_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_back_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_back_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_btn_sts_disp_group_cancel
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_btn_sts_disp_group_cancel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_btn_sts_disp_group_cancel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_btn_sts_disp_group_prkg_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_btn_sts_disp_group_prkg_in");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_btn_sts_disp_group_prkg_in = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_btn_sts_disp_group_prkg_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_btn_sts_disp_group_prkg_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_btn_sts_disp_group_prkg_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fct_di_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fct_di_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_fct_di_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fct_di_mod_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fct_di_mod_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_fct_di_mod_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_progs_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_progs_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_progs_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_stop_aud_warn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_stop_aud_warn_req");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->prkg_stop_aud_warn_req = (Py_True == field);
    Py_DECREF(field);
  }
  {  // back_push_apa_info_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_push_apa_info_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_push_apa_info_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voice_prompt_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_prompt_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voice_prompt_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_img_disp_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_img_disp_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_img_disp_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // park_in_or_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_in_or_out");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->park_in_or_out = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shakehand_rq
    PyObject * field = PyObject_GetAttrString(_pymsg, "shakehand_rq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shakehand_rq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // park_enter_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_enter_req");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->park_enter_req = (Py_True == field);
    Py_DECREF(field);
  }
  {  // park_exit_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_exit_req");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->park_exit_req = (Py_True == field);
    Py_DECREF(field);
  }
  {  // park_function
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_function");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->park_function = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fct_vmm_mod_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fct_vmm_mod_req");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->prkg_fct_vmm_mod_req = (Py_True == field);
    Py_DECREF(field);
  }
  {  // eng_runng_req_by_park_assi1
    PyObject * field = PyObject_GetAttrString(_pymsg, "eng_runng_req_by_park_assi1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eng_runng_req_by_park_assi1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // apa_sts_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "apa_sts_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apa_sts_flag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_actv_prkg_fct_swt_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_actv_prkg_fct_swt_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_actv_prkg_fct_swt_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_voice_swt_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_voice_swt_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_voice_swt_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_voice_typ_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_voice_typ_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_voice_typ_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // img_sn_sr_cal_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "img_sn_sr_cal_sts");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->img_sn_sr_cal_sts = (Py_True == field);
    Py_DECREF(field);
  }
  {  // prkg_dock_dis_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_dock_dis_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_dock_dis_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pdc_ctrl_rsn
    PyObject * field = PyObject_GetAttrString(_pymsg, "pdc_ctrl_rsn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pdc_ctrl_rsn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // system_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "system_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->system_fault = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_lock_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_lock_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_lock_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirr_open_cls_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirr_open_cls_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirr_open_cls_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_mod_incln
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_mod_incln");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_mod_incln = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_assi_sys_rem_prkg_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_assi_sys_rem_prkg_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_assi_sys_rem_prkg_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_win_sun_roof_cls_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_win_sun_roof_cls_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_win_sun_roof_cls_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_prkg_lock_theft_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_prkg_lock_theft_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_prkg_lock_theft_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rpa_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpa_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rpa_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_usg_drv_mod_tran_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_usg_drv_mod_tran_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_usg_drv_mod_tran_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_sts_uint8
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_sts_uint8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_sts_uint8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_proc_dst_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_proc_dst_disp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->prkg_proc_dst_disp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rem_straight_prkg_assi_seln_req_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rem_straight_prkg_assi_seln_req_resp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rem_straight_prkg_assi_seln_req_resp = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rem_str_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "rem_str_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rem_str_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tsm_req_rpa_on
    PyObject * field = PyObject_GetAttrString(_pymsg, "tsm_req_rpa_on");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tsm_req_rpa_on = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_parkg_type_con_rq
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_parkg_type_con_rq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_parkg_type_con_rq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // forward_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forward_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // backward_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "backward_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->backward_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // apa_self_park_or_out_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "apa_self_park_or_out_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apa_self_park_or_out_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // plan_first_sucs
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_first_sucs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->plan_first_sucs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disp_interface_chg_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "disp_interface_chg_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->disp_interface_chg_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fcts_swt_sts_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fcts_swt_sts_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_fcts_swt_sts_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // avm_drvr_assc_sys_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "avm_drvr_assc_sys_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avm_drvr_assc_sys_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // avm_prkg_fct_di_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "avm_prkg_fct_di_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avm_prkg_fct_di_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_btn_sts_dispset
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_btn_sts_dispset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_btn_sts_dispset = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_assc_sys_disp_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_assc_sys_disp_list");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_assc_sys_disp_list = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fct_test_pnd_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fct_test_pnd_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_fct_test_pnd_req = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_state_ind
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_state_ind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_state_ind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_req_apa
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_req_apa");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_req_apa = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_proc_prompt_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_proc_prompt_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_proc_prompt_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_quit_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_quit_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_quit_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valt_prkg_failr_notif
    PyObject * field = PyObject_GetAttrString(_pymsg, "valt_prkg_failr_notif");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valt_prkg_failr_notif = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // home_prkg_voice_prompt_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "home_prkg_voice_prompt_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->home_prkg_voice_prompt_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // valt_prkg_reminder
    PyObject * field = PyObject_GetAttrString(_pymsg, "valt_prkg_reminder");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->valt_prkg_reminder = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_home_prkg_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_home_prkg_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_home_prkg_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_amb_li_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_amb_li_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_amb_li_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_prkg_to_horn
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_prkg_to_horn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_prkg_to_horn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_accr_ovrdn_ctrl_reqgrp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_accr_ovrdn_ctrl_reqgrp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_accr_ovrdn_ctrl_reqgrp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hpa_st_code_to_sm
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpa_st_code_to_sm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hpa_st_code_to_sm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lo_spd_and_trk_bck_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "lo_spd_and_trk_bck_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lo_spd_and_trk_bck_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_rem_ctrl_veh_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_rem_ctrl_veh_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_rem_ctrl_veh_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_rem_str_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_rem_str_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_rem_str_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_rcv_mod_incln
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_rcv_mod_incln");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_rcv_mod_incln = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_mob_dev_rcv_req_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_mob_dev_rcv_req_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_mob_dev_rcv_req_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_mob_dev_rcv_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_mob_dev_rcv_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_mob_dev_rcv_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_rcv_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_rcv_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_rcv_version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lgt_control_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "lgt_control_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lgt_control_request = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lat_control_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_control_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lat_control_request = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mai_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mai_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mai_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_emgy_brk_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_emgy_brk_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_emgy_brk_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_btn_sts_disp_float
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_btn_sts_disp_float");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_btn_sts_disp_float = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_active_push
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_active_push");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_active_push = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_fct_di_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_fct_di_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_fct_di_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // no_touching_for_avm_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "no_touching_for_avm_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->no_touching_for_avm_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_in_btn_sts_from_rpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_in_btn_sts_from_rpa");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_in_btn_sts_from_rpa = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_stand_still_req_for_cmft
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_stand_still_req_for_cmft");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_stand_still_req_for_cmft = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drv_off_req_for_lgt_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_off_req_for_lgt_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drv_off_req_for_lgt_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stop_req_of_lgt_ctrl_for_prpsn
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_req_of_lgt_ctrl_for_prpsn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_req_of_lgt_ctrl_for_prpsn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // strt_req_of_lgt_ctrl_for_prpsn
    PyObject * field = PyObject_GetAttrString(_pymsg, "strt_req_of_lgt_ctrl_for_prpsn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strt_req_of_lgt_ctrl_for_prpsn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // avl_sts_for_long_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "avl_sts_for_long_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avl_sts_for_long_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hwa_lat_ctrl_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hwa_lat_ctrl_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hwa_lat_ctrl_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_ctrl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_ctrl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_ctrl_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lane_chg_assist_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lane_chg_assist_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lane_chg_assist_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_lane_chg_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_lane_chg_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_lane_chg_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_req_lane_chg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_req_lane_chg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_req_lane_chg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // function_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "function_status");
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
      Py_ssize_t size = 32;
      uint8_t * dest = ros_message->function_status;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // hwa_odd_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "hwa_odd_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hwa_odd_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // smfault_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "smfault_level");
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
      Py_ssize_t size = 32;
      uint8_t * dest = ros_message->smfault_level;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // prkg_camera_store_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_camera_store_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_camera_store_resp = (uint8_t)PyLong_AsUnsignedLong(field);
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
      Py_ssize_t size = 8;
      uint8_t * dest = ros_message->rev;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // dpa_mode_broadcast
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpa_mode_broadcast");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dpa_mode_broadcast = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dpa_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "dpa_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dpa_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_fct_err_code2_hmi
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_fct_err_code2_hmi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_fct_err_code2_hmi = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // view_layout_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "view_layout_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->view_layout_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cust_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // exit_cust_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_cust_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exit_cust_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frnt_and_re_prkg_in_btn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "frnt_and_re_prkg_in_btn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frnt_and_re_prkg_in_btn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mai_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "mai_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mai_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // peb_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "peb_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->peb_version = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lo_spd_and_trk_bck_sub_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "lo_spd_and_trk_bck_sub_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lo_spd_and_trk_bck_sub_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fill_light_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "fill_light_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fill_light_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__state_machine_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateMachineData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._state_machine_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateMachineData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__StateMachineData * ros_message = (deva_function_msgs__msg__StateMachineData *)raw_ros_message;
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
  {  // three_d_angle_req
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->three_d_angle_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "three_d_angle_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tsm_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tsm_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tsm_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apa_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->apa_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apa_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avm_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avm_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avm_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_assc_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_assc_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_assc_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apa_sub_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->apa_sub_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apa_sub_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_prk_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_prk_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_prk_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monr_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->monr_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monr_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstcl_trig_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstcl_trig_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstcl_trig_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pla_mod_sts_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pla_mod_sts_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pla_mod_sts_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swt_disp_on_and_off_sts_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swt_disp_on_and_off_sts_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swt_disp_on_and_off_sts_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thr_d_touring_view_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->thr_d_touring_view_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thr_d_touring_view_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_entry_ag_wide_vis_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_entry_ag_wide_vis_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_entry_ag_wide_vis_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_mdl_clr_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_mdl_clr_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_mdl_clr_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visn_ag_extn_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->visn_ag_extn_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visn_ag_extn_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visn_img_disp_mod_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->visn_img_disp_mod_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visn_img_disp_mod_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_assc_sys_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_assc_sys_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_assc_sys_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_aux_info_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_aux_info_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_aux_info_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_back_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_back_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_back_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_btn_sts_disp_group_cancel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_btn_sts_disp_group_cancel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_btn_sts_disp_group_cancel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_btn_sts_disp_group_prkg_in
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_btn_sts_disp_group_prkg_in);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_btn_sts_disp_group_prkg_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_btn_sts_disp_group_prkg_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_btn_sts_disp_group_prkg_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_btn_sts_disp_group_prkg_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fct_di_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_fct_di_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fct_di_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fct_di_mod_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_fct_di_mod_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fct_di_mod_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_progs_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_progs_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_progs_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_stop_aud_warn_req
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->prkg_stop_aud_warn_req ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_stop_aud_warn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_push_apa_info_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->back_push_apa_info_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_push_apa_info_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_prompt_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voice_prompt_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_prompt_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_img_disp_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_img_disp_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_img_disp_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_in_or_out
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->park_in_or_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_in_or_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shakehand_rq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shakehand_rq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shakehand_rq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_enter_req
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->park_enter_req ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_enter_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_exit_req
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->park_exit_req ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_exit_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_function
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->park_function);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_function", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fct_vmm_mod_req
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->prkg_fct_vmm_mod_req ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fct_vmm_mod_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eng_runng_req_by_park_assi1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eng_runng_req_by_park_assi1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eng_runng_req_by_park_assi1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apa_sts_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->apa_sts_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apa_sts_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_actv_prkg_fct_swt_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_actv_prkg_fct_swt_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_actv_prkg_fct_swt_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_voice_swt_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_voice_swt_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_voice_swt_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_voice_typ_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_voice_typ_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_voice_typ_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // img_sn_sr_cal_sts
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->img_sn_sr_cal_sts ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "img_sn_sr_cal_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_dock_dis_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_dock_dis_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_dock_dis_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pdc_ctrl_rsn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pdc_ctrl_rsn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pdc_ctrl_rsn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // system_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->system_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "system_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_lock_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_lock_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_lock_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirr_open_cls_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirr_open_cls_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirr_open_cls_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_mod_incln
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_mod_incln);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_mod_incln", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_assi_sys_rem_prkg_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_assi_sys_rem_prkg_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_assi_sys_rem_prkg_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_win_sun_roof_cls_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_win_sun_roof_cls_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_win_sun_roof_cls_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_prkg_lock_theft_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_prkg_lock_theft_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_prkg_lock_theft_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpa_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rpa_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpa_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_usg_drv_mod_tran_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_usg_drv_mod_tran_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_usg_drv_mod_tran_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_sts_uint8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_sts_uint8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_sts_uint8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_proc_dst_disp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->prkg_proc_dst_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_proc_dst_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rem_straight_prkg_assi_seln_req_resp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rem_straight_prkg_assi_seln_req_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rem_straight_prkg_assi_seln_req_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rem_str_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rem_str_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rem_str_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tsm_req_rpa_on
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tsm_req_rpa_on);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tsm_req_rpa_on", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_parkg_type_con_rq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->last_parkg_type_con_rq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_parkg_type_con_rq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forward_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // backward_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->backward_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "backward_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apa_self_park_or_out_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->apa_self_park_or_out_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apa_self_park_or_out_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_first_sucs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->plan_first_sucs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_first_sucs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disp_interface_chg_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->disp_interface_chg_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disp_interface_chg_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fcts_swt_sts_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_fcts_swt_sts_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fcts_swt_sts_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avm_drvr_assc_sys_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avm_drvr_assc_sys_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avm_drvr_assc_sys_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avm_prkg_fct_di_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avm_prkg_fct_di_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avm_prkg_fct_di_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_btn_sts_dispset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_btn_sts_dispset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_btn_sts_dispset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_assc_sys_disp_list
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_assc_sys_disp_list);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_assc_sys_disp_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fct_test_pnd_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_fct_test_pnd_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fct_test_pnd_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_state_ind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_state_ind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_state_ind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_req_apa
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_req_apa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_req_apa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_proc_prompt_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_proc_prompt_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_proc_prompt_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_quit_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_quit_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_quit_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valt_prkg_failr_notif
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->valt_prkg_failr_notif);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valt_prkg_failr_notif", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // home_prkg_voice_prompt_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->home_prkg_voice_prompt_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "home_prkg_voice_prompt_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valt_prkg_reminder
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->valt_prkg_reminder);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valt_prkg_reminder", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_home_prkg_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_home_prkg_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_home_prkg_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_amb_li_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_amb_li_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_amb_li_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_prkg_to_horn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_prkg_to_horn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_prkg_to_horn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_accr_ovrdn_ctrl_reqgrp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_accr_ovrdn_ctrl_reqgrp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_accr_ovrdn_ctrl_reqgrp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpa_st_code_to_sm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hpa_st_code_to_sm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpa_st_code_to_sm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lo_spd_and_trk_bck_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lo_spd_and_trk_bck_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lo_spd_and_trk_bck_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_rem_ctrl_veh_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_rem_ctrl_veh_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_rem_ctrl_veh_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_rem_str_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_rem_str_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_rem_str_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_rcv_mod_incln
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_rcv_mod_incln);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_rcv_mod_incln", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_mob_dev_rcv_req_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_mob_dev_rcv_req_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_mob_dev_rcv_req_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_mob_dev_rcv_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_mob_dev_rcv_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_mob_dev_rcv_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_rcv_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_rcv_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_rcv_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lgt_control_request
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lgt_control_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lgt_control_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_control_request
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lat_control_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_control_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mai_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mai_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mai_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_emgy_brk_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_emgy_brk_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_emgy_brk_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_btn_sts_disp_float
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_btn_sts_disp_float);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_btn_sts_disp_float", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_active_push
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_active_push);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_active_push", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_fct_di_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_fct_di_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_fct_di_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // no_touching_for_avm_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->no_touching_for_avm_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "no_touching_for_avm_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_in_btn_sts_from_rpa
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_in_btn_sts_from_rpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_in_btn_sts_from_rpa", field);
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
  {  // asy_stand_still_req_for_cmft
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_stand_still_req_for_cmft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_stand_still_req_for_cmft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drv_off_req_for_lgt_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drv_off_req_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_off_req_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_req_of_lgt_ctrl_for_prpsn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_req_of_lgt_ctrl_for_prpsn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_req_of_lgt_ctrl_for_prpsn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strt_req_of_lgt_ctrl_for_prpsn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->strt_req_of_lgt_ctrl_for_prpsn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strt_req_of_lgt_ctrl_for_prpsn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avl_sts_for_long_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avl_sts_for_long_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avl_sts_for_long_aut_drv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hwa_lat_ctrl_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hwa_lat_ctrl_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hwa_lat_ctrl_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_ctrl_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_ctrl_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_ctrl_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lane_chg_assist_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lane_chg_assist_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lane_chg_assist_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_lane_chg_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_lane_chg_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_lane_chg_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_req_lane_chg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_req_lane_chg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_req_lane_chg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // function_status
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "function_status");
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
    uint8_t * src = &(ros_message->function_status[0]);
    memcpy(dst, src, 32 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // hwa_odd_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hwa_odd_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hwa_odd_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smfault_level
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "smfault_level");
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
    uint8_t * src = &(ros_message->smfault_level[0]);
    memcpy(dst, src, 32 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // prkg_camera_store_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_camera_store_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_camera_store_resp", field);
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
    memcpy(dst, src, 8 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // dpa_mode_broadcast
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dpa_mode_broadcast);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpa_mode_broadcast", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dpa_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dpa_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dpa_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_fct_err_code2_hmi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_fct_err_code2_hmi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_fct_err_code2_hmi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // view_layout_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->view_layout_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "view_layout_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cust_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_cust_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exit_cust_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_cust_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frnt_and_re_prkg_in_btn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frnt_and_re_prkg_in_btn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frnt_and_re_prkg_in_btn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mai_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mai_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mai_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // peb_version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->peb_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "peb_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lo_spd_and_trk_bck_sub_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lo_spd_and_trk_bck_sub_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lo_spd_and_trk_bck_sub_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fill_light_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fill_light_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fill_light_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
