// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/MachRemind.idl
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
#include "deva_function_msgs/msg/detail/mach_remind__struct.h"
#include "deva_function_msgs/msg/detail/mach_remind__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__mach_remind__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("deva_function_msgs.msg._mach_remind.MachRemind", full_classname_dest, 46) == 0);
  }
  deva_function_msgs__msg__MachRemind * ros_message = _ros_message;
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
  {  // asy_cnoa_crs_actv_faild_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_actv_faild_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_actv_faild_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_cross_intsec_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_cross_intsec_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_cross_intsec_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_actv_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_actv_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_actv_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_deactvd_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_deactvd_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_deactvd_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_finshd_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_finshd_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_finshd_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_offs_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_offs_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_offs_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_rmn_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_rmn_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_rmn_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_hands_off_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_hands_off_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_hands_off_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_lrng_abort_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_lrng_abort_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_lrng_abort_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_avl_rmn_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_avl_rmn_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_avl_rmn_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_takeover_warn_voice
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_takeover_warn_voice");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_takeover_warn_voice = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_dece_remind_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_dece_remind_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_dece_remind_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_drvr_sod_cfirm_cnoa_main_page
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_drvr_sod_cfirm_cnoa_main_page");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_drvr_sod_cfirm_cnoa_main_page = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_undertak_rmind_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_undertak_rmind_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_undertak_rmind_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_warn_sod_for_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_warn_sod_for_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_warn_sod_for_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // too_many_cars
    PyObject * field = PyObject_GetAttrString(_pymsg, "too_many_cars");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->too_many_cars = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // ad4_horn_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_horn_warn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_horn_warn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_auto_lane_chg_sts_for_asy_ai_asist_audio");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drv_off_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_off_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drv_off_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_horn_warn_rqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_horn_warn_rqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_horn_warn_rqrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_avl_prompt
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_avl_prompt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_avl_prompt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_crs_sts_swil_indcr
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_crs_sts_swil_indcr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_crs_sts_swil_indcr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_avl_rmn_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_avl_rmn_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_avl_rmn_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_deactvd_reasn_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_deactvd_reasn_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_deactvd_reasn_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_etc_distan_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_etc_distan_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_etc_distan_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_distan_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_distan_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_distan_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_strt_to_end_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_strt_to_end_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_strt_to_end_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_d2d_remind_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_d2d_remind_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_d2d_remind_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lane_chg_fail_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lane_chg_fail_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lane_chg_fail_type = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_noa_deactvd_reasn_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_deactvd_reasn_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_deactvd_reasn_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_remind_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_remind_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_remind_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_drvr_belt_warn
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_drvr_belt_warn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_drvr_belt_warn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_takeover_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_takeover_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_takeover_sod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_drvr_belt_warn_for_bkp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_drvr_belt_warn_for_bkp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_drvr_belt_warn_for_bkp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lan_chg_sod_sec
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lan_chg_sod_sec");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lan_chg_sod_sec = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad4_camera_heating_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_camera_heating_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_camera_heating_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_takeover_req_group_ad_takeover_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_takeover_req_group_ad_takeover_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_takeover_req_group_ad_takeover_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_takeover_req_group_ad_takeover_audio
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_takeover_req_group_ad_takeover_audio");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_takeover_req_group_ad_takeover_audio = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ad_wipr_ctrl_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad_wipr_ctrl_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad_wipr_ctrl_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_blt_fastn
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_blt_fastn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_blt_fastn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_indic_req_by_alca
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_indic_req_by_alca");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_indic_req_by_alca = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // ad4_camera_heating_req_zcu
    PyObject * field = PyObject_GetAttrString(_pymsg, "ad4_camera_heating_req_zcu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ad4_camera_heating_req_zcu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_fct_lrng_mesg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_fct_lrng_mesg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_fct_lrng_mesg = (uint8_t)PyLong_AsUnsignedLong(field);
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
PyObject * deva_function_msgs__msg__mach_remind__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachRemind */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._mach_remind");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachRemind");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__MachRemind * ros_message = (deva_function_msgs__msg__MachRemind *)raw_ros_message;
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
  {  // asy_cnoa_crs_actv_faild_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_actv_faild_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_actv_faild_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_cross_intsec_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_cross_intsec_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_cross_intsec_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_actv_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_actv_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_actv_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_deactvd_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_deactvd_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_deactvd_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_finshd_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_finshd_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_finshd_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_offs_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_offs_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_offs_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_rmn_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_rmn_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_rmn_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_hands_off_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_hands_off_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_hands_off_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_lrng_abort_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_lrng_abort_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_lrng_abort_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_avl_rmn_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_avl_rmn_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_avl_rmn_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_takeover_warn_voice
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_takeover_warn_voice);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_takeover_warn_voice", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_dece_remind_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_dece_remind_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_dece_remind_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_drvr_sod_cfirm_cnoa_main_page
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_drvr_sod_cfirm_cnoa_main_page);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_drvr_sod_cfirm_cnoa_main_page", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_undertak_rmind_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_undertak_rmind_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_undertak_rmind_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_warn_sod_for_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_warn_sod_for_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_warn_sod_for_aut_drv", field);
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
  {  // too_many_cars
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->too_many_cars);
    {
      int rc = PyObject_SetAttrString(_pymessage, "too_many_cars", field);
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
  {  // ad4_horn_warn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_horn_warn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_horn_warn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_auto_lane_chg_sts_for_asy_ai_asist_audio
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_auto_lane_chg_sts_for_asy_ai_asist_audio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_auto_lane_chg_sts_for_asy_ai_asist_audio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drv_off_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drv_off_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_off_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_horn_warn_rqrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_horn_warn_rqrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_horn_warn_rqrd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_cnoa_crs_avl_prompt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_avl_prompt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_avl_prompt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_crs_sts_swil_indcr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_crs_sts_swil_indcr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_crs_sts_swil_indcr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_avl_rmn_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_avl_rmn_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_avl_rmn_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_deactvd_reasn_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_deactvd_reasn_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_deactvd_reasn_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_etc_distan_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_etc_distan_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_etc_distan_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_distan_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_distan_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_distan_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_strt_to_end_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_strt_to_end_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_strt_to_end_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_d2d_remind_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_d2d_remind_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_d2d_remind_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lane_chg_fail_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lane_chg_fail_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lane_chg_fail_type", field);
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
  {  // asy_noa_deactvd_reasn_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_deactvd_reasn_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_deactvd_reasn_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_remind_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_remind_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_remind_sod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_drvr_belt_warn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_drvr_belt_warn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_drvr_belt_warn", field);
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
  {  // ad4_drvr_belt_warn_for_bkp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_drvr_belt_warn_for_bkp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_drvr_belt_warn_for_bkp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lan_chg_sod_sec
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lan_chg_sod_sec);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lan_chg_sod_sec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad4_camera_heating_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_camera_heating_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_camera_heating_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_takeover_req_group_ad_takeover_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_takeover_req_group_ad_takeover_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_takeover_req_group_ad_takeover_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_takeover_req_group_ad_takeover_audio
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_takeover_req_group_ad_takeover_audio);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_takeover_req_group_ad_takeover_audio", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ad_wipr_ctrl_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad_wipr_ctrl_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad_wipr_ctrl_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_blt_fastn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_blt_fastn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_blt_fastn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_indic_req_by_alca
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_indic_req_by_alca);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_indic_req_by_alca", field);
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
  {  // ad4_camera_heating_req_zcu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ad4_camera_heating_req_zcu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ad4_camera_heating_req_zcu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_fct_lrng_mesg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_fct_lrng_mesg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_fct_lrng_mesg", field);
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
