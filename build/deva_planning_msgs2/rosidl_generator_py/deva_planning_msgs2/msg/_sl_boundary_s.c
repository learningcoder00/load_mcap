// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs2:msg/SLBoundary.idl
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
#include "deva_planning_msgs2/msg/detail/sl_boundary__struct.h"
#include "deva_planning_msgs2/msg/detail/sl_boundary__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs2__msg__sl_boundary__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs2.msg._sl_boundary.SLBoundary", full_classname_dest, 47) == 0);
  }
  deva_planning_msgs2__msg__SLBoundary * ros_message = _ros_message;
  {  // start_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // start_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // end_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->end_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs2__msg__sl_boundary__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SLBoundary */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs2.msg._sl_boundary");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SLBoundary");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs2__msg__SLBoundary * ros_message = (deva_planning_msgs2__msg__SLBoundary *)raw_ros_message;
  {  // start_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->end_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
