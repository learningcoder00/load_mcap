// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_mdriver_msgs:msg/MeanVariance.idl
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
#include "deva_mdriver_msgs/msg/detail/mean_variance__struct.h"
#include "deva_mdriver_msgs/msg/detail/mean_variance__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_mdriver_msgs__msg__mean_variance__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("deva_mdriver_msgs.msg._mean_variance.MeanVariance", full_classname_dest, 49) == 0);
  }
  deva_mdriver_msgs__msg__MeanVariance * ros_message = _ros_message;
  {  // mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mean = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // variance
    PyObject * field = PyObject_GetAttrString(_pymsg, "variance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->variance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_mdriver_msgs__msg__mean_variance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MeanVariance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_mdriver_msgs.msg._mean_variance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MeanVariance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_mdriver_msgs__msg__MeanVariance * ros_message = (deva_mdriver_msgs__msg__MeanVariance *)raw_ros_message;
  {  // mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // variance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->variance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "variance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
