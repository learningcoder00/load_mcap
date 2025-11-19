// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
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
#include "deva_function_msgs/msg/detail/mach_function_control__struct.h"
#include "deva_function_msgs/msg/detail/mach_function_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__mach_function_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("deva_function_msgs.msg._mach_function_control.MachFunctionControl", full_classname_dest, 65) == 0);
  }
  deva_function_msgs__msg__MachFunctionControl * ros_message = _ros_message;
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
  {  // asy_aut_drvg_avl
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drvg_avl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drvg_avl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lat_offst_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lat_offst_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lat_offst_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_degrade_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_degrade_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_degrade_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_chg_aut_info_for_asy_hi_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_chg_aut_info_for_asy_hi_way");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_chg_aut_info_for_asy_hi_way = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_chg_aut_sts_for_asy_hi_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_chg_aut_sts_for_asy_hi_way");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_chg_aut_sts_for_asy_hi_way = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_lgt_ctrl_take_over_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lgt_ctrl_take_over_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lgt_ctrl_take_over_req = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // strt_req_of_lgt_ctrl_for_prpsn
    PyObject * field = PyObject_GetAttrString(_pymsg, "strt_req_of_lgt_ctrl_for_prpsn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strt_req_of_lgt_ctrl_for_prpsn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_deactvd_reasn_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_deactvd_reasn_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_deactvd_reasn_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_high_beam_flash_warn_rqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_high_beam_flash_warn_rqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_high_beam_flash_warn_rqrd = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_fast_lane_swt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_fast_lane_swt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_fast_lane_swt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_auto_lane_chg_style
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_auto_lane_chg_style");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_auto_lane_chg_style = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_actv_faild_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_actv_faild_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_actv_faild_msg = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_finshd_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_finshd_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_finshd_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_ind_ti_gap_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_ind_ti_gap_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_ind_ti_gap_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_actv_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_actv_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_actv_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_off_odddistan
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_off_odddistan");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_off_odddistan = PyLong_AsUnsignedLong(field);
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
  {  // asy_cnoa_game_fail_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_game_fail_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_game_fail_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_game_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_game_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_game_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_sts_csd_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_sts_csd_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_sts_csd_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_swt_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_swt_on_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_swt_on_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_swt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_swt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_swt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_data_download_faild_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_data_download_faild_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_data_download_faild_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_offs_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_offs_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_offs_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_rmn_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_rmn_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_rmn_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_sod_lane_chg_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_sod_lane_chg_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_sod_lane_chg_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lrng_prmpt_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lrng_prmpt_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lrng_prmpt_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lrng_swt_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lrng_swt_on_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lrng_swt_on_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lrng_swt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lrng_swt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lrng_swt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_cnoa_turn_fail_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_turn_fail_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_turn_fail_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_turn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_turn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_turn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_tar_spd_offs
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_tar_spd_offs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_tar_spd_offs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_avl_rmn
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_avl_rmn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_avl_rmn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_lane_chg_swt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_lane_chg_swt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_lane_chg_swt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // ad_theme_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_theme_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_theme_disp = (uint8_t)PyLong_AsUnsignedLong(field);
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
    assert(PyLong_Check(field));
    ros_message->disp_spd_set_for_lgt_ctrl = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_nop_cofm_of_lan_chag
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_nop_cofm_of_lan_chag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_nop_cofm_of_lan_chag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_lane_chg_for_e2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_lane_chg_for_e2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_lane_chg_for_e2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hwa_leading_point_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hwa_leading_point_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hwa_leading_point_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hwa_leading_point_center_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "hwa_leading_point_center_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hwa_leading_point_center_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hwa_leading_point_center_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "hwa_leading_point_center_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hwa_leading_point_center_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ad4_turn_indic_req_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_turn_indic_req_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_turn_indic_req_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_unavl_sts_for_e2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_unavl_sts_for_e2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_unavl_sts_for_e2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_warn_sts_for_e2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_warn_sts_for_e2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_warn_sts_for_e2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_win_open_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_win_open_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_win_open_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_ctrl_mode_ad_ctrl_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_ctrl_mode_ad_ctrl_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_ctrl_mode_ad_ctrl_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_drv_off_req_for_lgt_ctrl_drv_off_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_drv_off_req_for_lgt_ctrl_drv_off_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_dece_remind
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_dece_remind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_dece_remind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lat_offs_swt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lat_offs_swt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lat_offs_swt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_undertak_on_off_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_undertak_on_off_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_undertak_on_off_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_undertak_rmind
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_undertak_rmind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_undertak_rmind = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_warn_mesg_for_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_warn_mesg_for_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_warn_mesg_for_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lgt_fusn_trfc_sgn
    PyObject * field = PyObject_GetAttrString(_pymsg, "lgt_fusn_trfc_sgn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lgt_fusn_trfc_sgn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvg_ast_on_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvg_ast_on_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvg_ast_on_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_d2d_deactvd_reasn_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_deactvd_reasn_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_deactvd_reasn_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_etc_traffic_sw_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_etc_traffic_sw_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_etc_traffic_sw_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_safe_stop_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_safe_stop_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_safe_stop_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sod_lane_chg_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sod_lane_chg_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sod_lane_chg_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // avl_sts_for_long_aut_drv_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "avl_sts_for_long_aut_drv_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->avl_sts_for_long_aut_drv_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sod_pilot_cfirm
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sod_pilot_cfirm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sod_pilot_cfirm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cncl_warn_for_aut_drv_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "cncl_warn_for_aut_drv_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cncl_warn_for_aut_drv_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cncl_warn_lgt_for_aut_drv_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "cncl_warn_lgt_for_aut_drv_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cncl_warn_lgt_for_aut_drv_sound = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // hmi_lane_chg_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_lane_chg_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_lane_chg_info = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // ad4_frt_lamp_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_frt_lamp_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_frt_lamp_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_rear_fog_lamp_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_rear_fog_lamp_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_rear_fog_lamp_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_res_req_for_e2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_res_req_for_e2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_res_req_for_e2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_trunk_ctrl_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_trunk_ctrl_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_trunk_ctrl_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acc_fusn_trfc_sgn
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_fusn_trfc_sgn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_fusn_trfc_sgn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edraccfct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edraccfct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edraccfct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edracsfb1_fct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edracsfb1_fct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edracsfb2_fct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edracsfb2_fct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edracsfc_fct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edracsfc_fct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edracsfc_fct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edracsfd_fct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edracsfd_fct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edracsfd_fct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_sfty_fct_sts_to_edracsfe_fct_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_fct_sts_to_edracsfe_fct_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_fct_sts_to_edracsfe_fct_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_csd_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_csd_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_csd_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_hud_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_hud_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_hud_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_emgy_manoeuvre_aid_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_emgy_manoeuvre_aid_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_emgy_manoeuvre_aid_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_fctn_ihbt_by_trlr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_fctn_ihbt_by_trlr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_fctn_ihbt_by_trlr = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_sfty_hwl_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_sfty_hwl_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_sfty_hwl_req = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // cllsn_aid_post_ema
    PyObject * field = PyObject_GetAttrString(_pymsg, "cllsn_aid_post_ema");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cllsn_aid_post_ema = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_chg_aut_actv_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_chg_aut_actv_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_chg_aut_actv_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_cam_frnt_cal_not_cmpl
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_cam_frnt_cal_not_cmpl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_cam_frnt_cal_not_cmpl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lane_chg_assist_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lane_chg_assist_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lane_chg_assist_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lane_chg_fail_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lane_chg_fail_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lane_chg_fail_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_cnoa_lane_chg_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_cnoa_lane_chg_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_cnoa_lane_chg_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_req_lane_chg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_req_lane_chg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_req_lane_chg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__mach_function_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachFunctionControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._mach_function_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachFunctionControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__MachFunctionControl * ros_message = (deva_function_msgs__msg__MachFunctionControl *)raw_ros_message;
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
  {  // asy_lat_offst_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lat_offst_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lat_offst_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_degrade_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_degrade_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_degrade_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_chg_aut_info_for_asy_hi_way
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_chg_aut_info_for_asy_hi_way);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_chg_aut_info_for_asy_hi_way", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_chg_aut_sts_for_asy_hi_way
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_chg_aut_sts_for_asy_hi_way);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_chg_aut_sts_for_asy_hi_way", field);
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
  {  // asy_noa_deactvd_reasn_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_deactvd_reasn_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_deactvd_reasn_mesg", field);
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
  {  // asy_high_beam_flash_warn_rqrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_high_beam_flash_warn_rqrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_high_beam_flash_warn_rqrd", field);
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
  {  // asy_fast_lane_swt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_fast_lane_swt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_fast_lane_swt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_auto_lane_chg_style
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_auto_lane_chg_style);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_auto_lane_chg_style", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_actv_faild_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_actv_faild_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_actv_faild_msg", field);
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
  {  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_finshd_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_finshd_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_finshd_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_ind_ti_gap_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_ind_ti_gap_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_ind_ti_gap_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_actv_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_actv_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_actv_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_off_odddistan
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_off_odddistan);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_off_odddistan", field);
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
  {  // asy_cnoa_game_fail_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_game_fail_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_game_fail_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_game_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_game_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_game_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_sts_csd_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_sts_csd_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_sts_csd_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_swt_on_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_swt_on_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_swt_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_swt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_swt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_swt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_data_download_faild_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_data_download_faild_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_data_download_faild_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_offs_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_offs_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_offs_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_rmn_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_rmn_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_rmn_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_sod_lane_chg_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_sod_lane_chg_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_sod_lane_chg_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lrng_prmpt_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lrng_prmpt_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lrng_prmpt_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lrng_swt_on_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lrng_swt_on_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lrng_swt_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lrng_swt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lrng_swt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lrng_swt_sts", field);
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
  {  // asy_cnoa_turn_fail_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_turn_fail_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_turn_fail_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_turn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_turn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_turn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_tar_spd_offs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_tar_spd_offs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_tar_spd_offs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_avl_rmn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_avl_rmn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_avl_rmn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_lane_chg_swt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_lane_chg_swt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_lane_chg_swt_sts", field);
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
  {  // ad_theme_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_theme_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_theme_disp", field);
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
    field = PyLong_FromUnsignedLong(ros_message->disp_spd_set_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "disp_spd_set_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_nop_cofm_of_lan_chag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_nop_cofm_of_lan_chag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_nop_cofm_of_lan_chag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_lane_chg_for_e2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_lane_chg_for_e2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_lane_chg_for_e2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hwa_leading_point_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hwa_leading_point_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hwa_leading_point_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hwa_leading_point_center_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hwa_leading_point_center_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hwa_leading_point_center_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hwa_leading_point_center_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hwa_leading_point_center_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hwa_leading_point_center_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_turn_indic_req_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_turn_indic_req_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_turn_indic_req_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_unavl_sts_for_e2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_unavl_sts_for_e2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_unavl_sts_for_e2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_warn_sts_for_e2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_warn_sts_for_e2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_warn_sts_for_e2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_win_open_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_win_open_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_win_open_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_ctrl_mode_ad_ctrl_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_ctrl_mode_ad_ctrl_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_ctrl_mode_ad_ctrl_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_drv_off_req_for_lgt_ctrl_drv_off_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_drv_off_req_for_lgt_ctrl_drv_off_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_dece_remind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_dece_remind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_dece_remind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lat_offs_swt_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lat_offs_swt_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lat_offs_swt_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_undertak_on_off_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_undertak_on_off_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_undertak_on_off_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_undertak_rmind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_undertak_rmind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_undertak_rmind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_warn_mesg_for_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_warn_mesg_for_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_warn_mesg_for_aut_drv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lgt_fusn_trfc_sgn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lgt_fusn_trfc_sgn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lgt_fusn_trfc_sgn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvg_ast_on_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvg_ast_on_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvg_ast_on_sys_sts", field);
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
  {  // asy_etc_traffic_sw_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_etc_traffic_sw_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_etc_traffic_sw_sts", field);
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
  {  // asy_sod_lane_chg_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sod_lane_chg_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sod_lane_chg_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avl_sts_for_long_aut_drv_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->avl_sts_for_long_aut_drv_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avl_sts_for_long_aut_drv_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sod_pilot_cfirm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sod_pilot_cfirm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sod_pilot_cfirm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cncl_warn_for_aut_drv_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cncl_warn_for_aut_drv_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cncl_warn_for_aut_drv_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cncl_warn_lgt_for_aut_drv_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cncl_warn_lgt_for_aut_drv_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cncl_warn_lgt_for_aut_drv_sound", field);
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
  {  // hmi_lane_chg_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_lane_chg_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_lane_chg_info", field);
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
  {  // ad4_frt_lamp_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_frt_lamp_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_frt_lamp_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_rear_fog_lamp_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_rear_fog_lamp_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_rear_fog_lamp_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_res_req_for_e2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_res_req_for_e2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_res_req_for_e2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_trunk_ctrl_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_trunk_ctrl_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_trunk_ctrl_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_fusn_trfc_sgn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acc_fusn_trfc_sgn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_fusn_trfc_sgn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edraccfct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edraccfct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edraccfct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edracsfb1_fct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edracsfb1_fct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edracsfb2_fct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edracsfb2_fct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edracsfc_fct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edracsfc_fct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edracsfc_fct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edracsfd_fct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edracsfd_fct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edracsfd_fct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_sfty_fct_sts_to_edracsfe_fct_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_fct_sts_to_edracsfe_fct_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_fct_sts_to_edracsfe_fct_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_csd_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_csd_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_csd_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_hud_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_hud_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_hud_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_emgy_manoeuvre_aid_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_emgy_manoeuvre_aid_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_emgy_manoeuvre_aid_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_fctn_ihbt_by_trlr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_fctn_ihbt_by_trlr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_fctn_ihbt_by_trlr", field);
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
  {  // asy_sfty_hwl_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_sfty_hwl_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_sfty_hwl_req", field);
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
  {  // cllsn_aid_post_ema
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cllsn_aid_post_ema);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cllsn_aid_post_ema", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_chg_aut_actv_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_chg_aut_actv_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_chg_aut_actv_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_cam_frnt_cal_not_cmpl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_cam_frnt_cal_not_cmpl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_cam_frnt_cal_not_cmpl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lane_chg_assist_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lane_chg_assist_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lane_chg_assist_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lane_chg_fail_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lane_chg_fail_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lane_chg_fail_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_cnoa_lane_chg_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_cnoa_lane_chg_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_cnoa_lane_chg_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_req_lane_chg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_req_lane_chg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_req_lane_chg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
