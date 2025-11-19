// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
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
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.h"
#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__app_to_stm_data_struct__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_function_msgs.msg._app_to_stm_data_struct.APPToStmDataStruct", full_classname_dest, 65) == 0);
  }
  deva_function_msgs__msg__APPToStmDataStruct * ros_message = _ros_message;
  {  // app_to_hpa_ctrl_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "app_to_hpa_ctrl_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->app_to_hpa_ctrl_cmd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_avp_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_avp_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_avp_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // on_bd_chrgr_hndl_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "on_bd_chrgr_hndl_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->on_bd_chrgr_hndl_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dc_chrgn_hndl_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "dc_chrgn_hndl_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dc_chrgn_hndl_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // alrm_sts_alrm_failr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alrm_sts_alrm_failr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alrm_sts_alrm_failr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alrm_sts_alrm_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "alrm_sts_alrm_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alrm_sts_alrm_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alrm_sts_alrm_trg_src
    PyObject * field = PyObject_GetAttrString(_pymsg, "alrm_sts_alrm_trg_src");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alrm_sts_alrm_trg_src = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alrm_sts_snsr_incln_failr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alrm_sts_snsr_incln_failr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alrm_sts_snsr_incln_failr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // alrm_sts_snsr_intr_scanr_failr
    PyObject * field = PyObject_GetAttrString(_pymsg, "alrm_sts_snsr_intr_scanr_failr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->alrm_sts_snsr_intr_scanr_failr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // telephone_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "telephone_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->telephone_sts = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // trsm_park_lockd_trsm_park_lockd
    PyObject * field = PyObject_GetAttrString(_pymsg, "trsm_park_lockd_trsm_park_lockd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trsm_park_lockd_trsm_park_lockd = (uint8_t)PyLong_AsUnsignedLong(field);
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
    ros_message->twli_bri_raw_twli_bri_raw = (uint16_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__app_to_stm_data_struct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of APPToStmDataStruct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._app_to_stm_data_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "APPToStmDataStruct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__APPToStmDataStruct * ros_message = (deva_function_msgs__msg__APPToStmDataStruct *)raw_ros_message;
  {  // app_to_hpa_ctrl_cmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->app_to_hpa_ctrl_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "app_to_hpa_ctrl_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_avp_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_avp_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_avp_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // on_bd_chrgr_hndl_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->on_bd_chrgr_hndl_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "on_bd_chrgr_hndl_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dc_chrgn_hndl_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dc_chrgn_hndl_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dc_chrgn_hndl_sts", field);
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
  {  // alrm_sts_alrm_failr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alrm_sts_alrm_failr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alrm_sts_alrm_failr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alrm_sts_alrm_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alrm_sts_alrm_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alrm_sts_alrm_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alrm_sts_alrm_trg_src
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alrm_sts_alrm_trg_src);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alrm_sts_alrm_trg_src", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alrm_sts_snsr_incln_failr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alrm_sts_snsr_incln_failr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alrm_sts_snsr_incln_failr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alrm_sts_snsr_intr_scanr_failr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->alrm_sts_snsr_intr_scanr_failr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alrm_sts_snsr_intr_scanr_failr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // telephone_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->telephone_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "telephone_sts", field);
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
  {  // trsm_park_lockd_trsm_park_lockd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trsm_park_lockd_trsm_park_lockd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trsm_park_lockd_trsm_park_lockd", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
