// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
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
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("deva_perception_msgs.msg._e2e_adb_traffic_sign.E2eAdbTrafficSign", full_classname_dest, 64) == 0);
  }
  deva_perception_msgs__msg__E2eAdbTrafficSign * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_trk_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_trk_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_sign_for_adb_adb_trk_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_abs_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_abs_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_abs_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_vert_ag_bot
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_vert_ag_bot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_vert_ag_bot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_vert_ag_top
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_vert_ag_top");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_vert_ag_top = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_hozl_ag_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_hozl_ag_le");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_hozl_ag_le = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_hozl_ag_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_hozl_ag_ri");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_hozl_ag_ri = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // traffic_sign_for_adb_adb_detd_qly
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_sign_for_adb_adb_detd_qly");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->traffic_sign_for_adb_adb_detd_qly = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of E2eAdbTrafficSign */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._e2e_adb_traffic_sign");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "E2eAdbTrafficSign");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__E2eAdbTrafficSign * ros_message = (deva_perception_msgs__msg__E2eAdbTrafficSign *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
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
  {  // traffic_sign_for_adb_adb_trk_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->traffic_sign_for_adb_adb_trk_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_trk_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_abs_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_abs_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_abs_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_vert_ag_bot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_vert_ag_bot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_vert_ag_bot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_vert_ag_top
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_vert_ag_top);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_vert_ag_top", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_hozl_ag_le
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_hozl_ag_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_hozl_ag_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_hozl_ag_ri
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_hozl_ag_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_hozl_ag_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_sign_for_adb_adb_detd_qly
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->traffic_sign_for_adb_adb_detd_qly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_sign_for_adb_adb_detd_qly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
