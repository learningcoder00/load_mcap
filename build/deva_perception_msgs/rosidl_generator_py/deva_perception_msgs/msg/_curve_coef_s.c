// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/CurveCoef.idl
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
#include "deva_perception_msgs/msg/detail/curve_coef__struct.h"
#include "deva_perception_msgs/msg/detail/curve_coef__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__curve_coef__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._curve_coef.CurveCoef", full_classname_dest, 46) == 0);
  }
  deva_perception_msgs__msg__CurveCoef * ros_message = _ros_message;
  {  // c0
    PyObject * field = PyObject_GetAttrString(_pymsg, "c0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c0 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c1
    PyObject * field = PyObject_GetAttrString(_pymsg, "c1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c2
    PyObject * field = PyObject_GetAttrString(_pymsg, "c2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c3
    PyObject * field = PyObject_GetAttrString(_pymsg, "c3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // startpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "startpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->startpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "endpoint");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endpoint = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__curve_coef__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CurveCoef */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._curve_coef");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CurveCoef");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__CurveCoef * ros_message = (deva_perception_msgs__msg__CurveCoef *)raw_ros_message;
  {  // c0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->startpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endpoint
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endpoint);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
