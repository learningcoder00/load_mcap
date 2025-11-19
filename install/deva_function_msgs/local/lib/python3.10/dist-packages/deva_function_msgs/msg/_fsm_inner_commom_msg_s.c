// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
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
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__struct.h"
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__fsm_inner_commom_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("deva_function_msgs.msg._fsm_inner_commom_msg.FsmInnerCommomMsg", full_classname_dest, 62) == 0);
  }
  deva_function_msgs__msg__FsmInnerCommomMsg * ros_message = _ros_message;
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
  {  // asy_cnoa_crs_lan_chg_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_lan_chg_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_lan_chg_msg = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_spd_for_crs_ctrl_fct_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_spd_for_crs_ctrl_fct_active");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->set_spd_for_crs_ctrl_fct_active = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // asy_lane_chg_assist_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lane_chg_assist_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lane_chg_assist_sts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcr_sts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_takeover_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_takeover_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_takeover_sod = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_pilot
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_pilot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_pilot = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_crs_ctrl_fct_actv_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_crs_ctrl_fct_actv_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_crs_ctrl_fct_actv_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_algt_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_algt_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_algt_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ti_gap_set_for_lgt_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "ti_gap_set_for_lgt_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ti_gap_set_for_lgt_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drv_mod_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_mod_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drv_mod_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drv_off_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_off_warn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drv_off_warn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_alat_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_alat_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_alat_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lgt_ctrl_take_over_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lgt_ctrl_take_over_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lgt_ctrl_take_over_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ovrd_wrn_for_fst_actv
    PyObject * field = PyObject_GetAttrString(_pymsg, "ovrd_wrn_for_fst_actv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ovrd_wrn_for_fst_actv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_inform_for_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_inform_for_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_inform_for_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cncl_warn_lgt_for_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "cncl_warn_lgt_for_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cncl_warn_lgt_for_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_steer_apply_rqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_steer_apply_rqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_steer_apply_rqrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lan_chg_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lan_chg_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lan_chg_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_safe_stop_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_safe_stop_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_safe_stop_sts = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_eyes_off_warn_rqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_eyes_off_warn_rqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_eyes_off_warn_rqrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_remind_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_remind_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_remind_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_takeover_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_takeover_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_takeover_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_drvg_avl
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drvg_avl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drvg_avl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_actv_suggest
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_actv_suggest");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_actv_suggest = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cncl_warn_for_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "cncl_warn_for_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cncl_warn_for_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lat_deg_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lat_deg_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lat_deg_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_icc_max_warn_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_icc_max_warn_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_icc_max_warn_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_takeover_warn_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_takeover_warn_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_takeover_warn_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_cross_intsec_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_cross_intsec_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_cross_intsec_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_avl_rmn
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_avl_rmn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_avl_rmn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_distan_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_distan_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_distan_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_strt_to_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_strt_to_end");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_strt_to_end = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_deactvd_reasn_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_deactvd_reasn_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_deactvd_reasn_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_emgy_steer_actv
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_emgy_steer_actv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_emgy_steer_actv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_etc_distan_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_etc_distan_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_etc_distan_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_remind_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_remind_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_remind_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disp_tsi_info_for_lgt_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "disp_tsi_info_for_lgt_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->disp_tsi_info_for_lgt_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // disp_spd_set_for_lgt_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "disp_spd_set_for_lgt_ctrl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->disp_spd_set_for_lgt_ctrl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ad_dim_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_dim_light");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_dim_light = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_crs_dim_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_crs_dim_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_crs_dim_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_drv_ctrl_typ_dim_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drv_ctrl_typ_dim_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drv_ctrl_typ_dim_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ihu_set_disp_ad
    PyObject * field = PyObject_GetAttrString(_pymsg, "ihu_set_disp_ad");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ihu_set_disp_ad = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // ad_ctrl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_ctrl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_ctrl_mode = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // cam_status0
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_status0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_status0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frnt_side_cam_le_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "frnt_side_cam_le_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frnt_side_cam_le_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frnt_side_cam_ri_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "frnt_side_cam_ri_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frnt_side_cam_ri_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // re_side_cam_le_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "re_side_cam_le_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->re_side_cam_le_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // re_side_cam_ri_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "re_side_cam_ri_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->re_side_cam_ri_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_re_cam_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_re_cam_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_re_cam_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_algt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_algt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_algt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_auto_lane_chg_style
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_auto_lane_chg_style");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_auto_lane_chg_style = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trfc_jam_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "trfc_jam_warn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trfc_jam_warn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__fsm_inner_commom_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FsmInnerCommomMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._fsm_inner_commom_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FsmInnerCommomMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__FsmInnerCommomMsg * ros_message = (deva_function_msgs__msg__FsmInnerCommomMsg *)raw_ros_message;
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
  {  // asy_cnoa_crs_lan_chg_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_lan_chg_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_lan_chg_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_spd_for_crs_ctrl_fct_active
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->set_spd_for_crs_ctrl_fct_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_spd_for_crs_ctrl_fct_active", field);
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
  {  // asy_noa_takeover_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_takeover_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_takeover_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_pilot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_pilot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_pilot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_crs_ctrl_fct_actv_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_crs_ctrl_fct_actv_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_crs_ctrl_fct_actv_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_algt_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_algt_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_algt_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ti_gap_set_for_lgt_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ti_gap_set_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ti_gap_set_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drv_mod_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drv_mod_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_mod_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drv_off_warn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drv_off_warn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_off_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_alat_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_alat_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_alat_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lgt_ctrl_take_over_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lgt_ctrl_take_over_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lgt_ctrl_take_over_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ovrd_wrn_for_fst_actv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ovrd_wrn_for_fst_actv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ovrd_wrn_for_fst_actv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_inform_for_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_inform_for_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_inform_for_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cncl_warn_lgt_for_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cncl_warn_lgt_for_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cncl_warn_lgt_for_aut_drv", field);
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
  {  // asy_steer_apply_rqrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_steer_apply_rqrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_steer_apply_rqrd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lan_chg_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lan_chg_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lan_chg_mesg", field);
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
  {  // asy_eyes_off_warn_rqrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_eyes_off_warn_rqrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_eyes_off_warn_rqrd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_remind_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_remind_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_remind_mesg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_takeover_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_takeover_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_takeover_mesg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_drvg_avl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_drvg_avl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_drvg_avl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_actv_suggest
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_actv_suggest);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_actv_suggest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cncl_warn_for_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cncl_warn_for_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cncl_warn_for_aut_drv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lat_deg_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lat_deg_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lat_deg_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_icc_max_warn_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_icc_max_warn_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_icc_max_warn_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_takeover_warn_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_takeover_warn_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_takeover_warn_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_cross_intsec_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_cross_intsec_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_cross_intsec_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_avl_rmn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_avl_rmn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_avl_rmn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_distan_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_distan_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_distan_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_strt_to_end
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_strt_to_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_strt_to_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_deactvd_reasn_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_deactvd_reasn_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_deactvd_reasn_mesg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_emgy_steer_actv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_emgy_steer_actv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_emgy_steer_actv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_etc_distan_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_etc_distan_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_etc_distan_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_remind_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_remind_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_remind_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disp_tsi_info_for_lgt_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->disp_tsi_info_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disp_tsi_info_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // disp_spd_set_for_lgt_ctrl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->disp_spd_set_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disp_spd_set_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_dim_light
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_dim_light);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_dim_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_crs_dim_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_crs_dim_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_crs_dim_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_drv_ctrl_typ_dim_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_drv_ctrl_typ_dim_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_drv_ctrl_typ_dim_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ihu_set_disp_ad
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ihu_set_disp_ad);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ihu_set_disp_ad", field);
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
  {  // cam_status0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_status0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_status0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frnt_side_cam_le_sts0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frnt_side_cam_le_sts0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frnt_side_cam_le_sts0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frnt_side_cam_ri_sts0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frnt_side_cam_ri_sts0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frnt_side_cam_ri_sts0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // re_side_cam_le_sts0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->re_side_cam_le_sts0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "re_side_cam_le_sts0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // re_side_cam_ri_sts0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->re_side_cam_ri_sts0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "re_side_cam_ri_sts0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_re_cam_sts0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_re_cam_sts0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_re_cam_sts0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_algt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_algt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_algt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_auto_lane_chg_style
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_auto_lane_chg_style);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_auto_lane_chg_style", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trfc_jam_warn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trfc_jam_warn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trfc_jam_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
