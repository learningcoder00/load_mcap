// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFCurveFunctionExtra.idl
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
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_curve_function_extra__functions.h"

bool deva_aeb_msgs__msg__sf_lane_estimn__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_lane_estimn__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_curve_function_extra__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_curve_function_extra.SFCurveFunctionExtra", full_classname_dest, 63) == 0);
  }
  deva_aeb_msgs__msg__SFCurveFunctionExtra * ros_message = _ros_message;
  {  // poslgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // poslat
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // estimn
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimn");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_lane_estimn__convert_from_py(field, &ros_message->estimn)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // extrapointtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "extrapointtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extrapointtype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanemkrtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanemkrtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanemkrtype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confi
    PyObject * field = PyObject_GetAttrString(_pymsg, "confi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_curve_function_extra__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFCurveFunctionExtra */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_curve_function_extra");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFCurveFunctionExtra");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFCurveFunctionExtra * ros_message = (deva_aeb_msgs__msg__SFCurveFunctionExtra *)raw_ros_message;
  {  // poslgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estimn
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_lane_estimn__convert_to_py(&ros_message->estimn);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "estimn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extrapointtype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extrapointtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extrapointtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanemkrtype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanemkrtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanemkrtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
