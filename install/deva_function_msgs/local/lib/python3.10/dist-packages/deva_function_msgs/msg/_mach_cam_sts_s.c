// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/MachCamSts.idl
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
#include "deva_function_msgs/msg/detail/mach_cam_sts__struct.h"
#include "deva_function_msgs/msg/detail/mach_cam_sts__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__mach_cam_sts__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("deva_function_msgs.msg._mach_cam_sts.MachCamSts", full_classname_dest, 47) == 0);
  }
  deva_function_msgs__msg__MachCamSts * ros_message = _ros_message;
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
  {  // trip_reset_sync_req_msg_asdm
    PyObject * field = PyObject_GetAttrString(_pymsg, "trip_reset_sync_req_msg_asdm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trip_reset_sync_req_msg_asdm = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_cam_heatr_actv
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_cam_heatr_actv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_cam_heatr_actv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd3
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd4
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd4 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd5
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd5 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd6
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd6 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd7
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd7 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_blkd8
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_blkd8");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_blkd8 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_frnt_cal_not_strtd
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_frnt_cal_not_strtd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_frnt_cal_not_strtd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_sts_cam_miss_com
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_sts_cam_miss_com");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_sts_cam_miss_com = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // hmi_re_cam_sts0
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_re_cam_sts0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_re_cam_sts0 = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__mach_cam_sts__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachCamSts */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._mach_cam_sts");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachCamSts");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__MachCamSts * ros_message = (deva_function_msgs__msg__MachCamSts *)raw_ros_message;
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
  {  // trip_reset_sync_req_msg_asdm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trip_reset_sync_req_msg_asdm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trip_reset_sync_req_msg_asdm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_cam_heatr_actv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_cam_heatr_actv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_cam_heatr_actv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd5
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd6
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd7
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_blkd8
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_blkd8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_blkd8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_frnt_cal_not_strtd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_frnt_cal_not_strtd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_frnt_cal_not_strtd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_sts_cam_miss_com
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_sts_cam_miss_com);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_sts_cam_miss_com", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
