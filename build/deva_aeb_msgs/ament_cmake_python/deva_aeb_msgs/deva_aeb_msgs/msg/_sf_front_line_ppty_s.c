// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFFrontLinePpty.idl
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
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_front_line_ppty__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_front_line_ppty__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_front_line_ppty.SFFrontLinePpty", full_classname_dest, 53) == 0);
  }
  deva_aeb_msgs__msg__SFFrontLinePpty * ros_message = _ros_message;
  {  // drvrpfmncmonqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvrpfmncmonqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvrpfmncmonqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanekeepaidqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanekeepaidqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanekeepaidqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trfcjamassiqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "trfcjamassiqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trfcjamassiqly = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // tunqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "tunqly");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tunqly = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lifetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifetime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lifetime = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_front_line_ppty__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFrontLinePpty */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_front_line_ppty");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFrontLinePpty");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFFrontLinePpty * ros_message = (deva_aeb_msgs__msg__SFFrontLinePpty *)raw_ros_message;
  {  // drvrpfmncmonqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvrpfmncmonqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvrpfmncmonqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanekeepaidqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanekeepaidqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanekeepaidqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trfcjamassiqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trfcjamassiqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trfcjamassiqly", field);
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
  {  // tunqly
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tunqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tunqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lifetime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lifetime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
