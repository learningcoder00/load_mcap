// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
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
#include "deva_function_msgs/msg/detail/mach_button_control__struct.h"
#include "deva_function_msgs/msg/detail/mach_button_control__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__mach_button_control__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("deva_function_msgs.msg._mach_button_control.MachButtonControl", full_classname_dest, 61) == 0);
  }
  deva_function_msgs__msg__MachButtonControl * ros_message = _ros_message;
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
  {  // asy_a_lgt_sts_asy_a_lgt_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_a_lgt_sts_asy_a_lgt_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_a_lgt_sts_asy_a_lgt_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_cnoa_crs_lat_offs_anima_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_cnoa_crs_lat_offs_anima_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_cnoa_crs_lat_offs_anima_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_eyes_off_warn_rqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_eyes_off_warn_rqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_eyes_off_warn_rqrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_eyes_off_warn_rqrd_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_eyes_off_warn_rqrd_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_eyes_off_warn_rqrd_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_first_ti_actvn
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_first_ti_actvn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_first_ti_actvn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_actv_suggest_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_actv_suggest_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_actv_suggest_sound = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_lat_deg_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lat_deg_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lat_deg_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_inform_for_drvr_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_inform_for_drvr_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_inform_for_drvr_sound = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_noa_distan_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_distan_msg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_distan_msg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_distan_msg_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_distan_msg_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_distan_msg_sound = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_steer_apply_rqrd_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_steer_apply_rqrd_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_steer_apply_rqrd_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_drvg_avl_sound
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drvg_avl_sound");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drvg_avl_sound = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_lan_chg_color_dsp
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lan_chg_color_dsp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lan_chg_color_dsp = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // asy_lan_chg_sod
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_lan_chg_sod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_lan_chg_sod = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cllsn_threat
    PyObject * field = PyObject_GetAttrString(_pymsg, "cllsn_threat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cllsn_threat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__mach_button_control__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachButtonControl */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._mach_button_control");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachButtonControl");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__MachButtonControl * ros_message = (deva_function_msgs__msg__MachButtonControl *)raw_ros_message;
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
  {  // asy_cnoa_crs_lat_offs_anima_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_cnoa_crs_lat_offs_anima_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_cnoa_crs_lat_offs_anima_sts", field);
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
  {  // asy_eyes_off_warn_rqrd_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_eyes_off_warn_rqrd_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_eyes_off_warn_rqrd_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_first_ti_actvn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_first_ti_actvn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_first_ti_actvn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_actv_suggest_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_actv_suggest_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_actv_suggest_sound", field);
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
  {  // asy_inform_for_drvr_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_inform_for_drvr_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_inform_for_drvr_sound", field);
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
  {  // asy_noa_distan_msg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_distan_msg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_distan_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_distan_msg_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_distan_msg_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_distan_msg_sound", field);
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
  {  // asy_steer_apply_rqrd_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_steer_apply_rqrd_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_steer_apply_rqrd_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_drvg_avl_sound
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_drvg_avl_sound);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_drvg_avl_sound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_lan_chg_color_dsp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lan_chg_color_dsp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lan_chg_color_dsp", field);
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
  {  // asy_lan_chg_sod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_lan_chg_sod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_lan_chg_sod", field);
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
  {  // brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cllsn_threat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cllsn_threat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cllsn_threat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
