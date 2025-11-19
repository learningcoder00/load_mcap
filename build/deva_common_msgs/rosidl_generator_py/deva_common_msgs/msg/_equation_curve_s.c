// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_common_msgs:msg/EquationCurve.idl
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
#include "deva_common_msgs/msg/detail/equation_curve__struct.h"
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_common_msgs__msg__equation_curve__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("deva_common_msgs.msg._equation_curve.EquationCurve", full_classname_dest, 50) == 0);
  }
  deva_common_msgs__msg__EquationCurve * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // a3
    PyObject * field = PyObject_GetAttrString(_pymsg, "a3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a2
    PyObject * field = PyObject_GetAttrString(_pymsg, "a2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a1
    PyObject * field = PyObject_GetAttrString(_pymsg, "a1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a0
    PyObject * field = PyObject_GetAttrString(_pymsg, "a0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b3
    PyObject * field = PyObject_GetAttrString(_pymsg, "b3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b2
    PyObject * field = PyObject_GetAttrString(_pymsg, "b2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b1
    PyObject * field = PyObject_GetAttrString(_pymsg, "b1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // b0
    PyObject * field = PyObject_GetAttrString(_pymsg, "b0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->b0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c3
    PyObject * field = PyObject_GetAttrString(_pymsg, "c3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c2
    PyObject * field = PyObject_GetAttrString(_pymsg, "c2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c1
    PyObject * field = PyObject_GetAttrString(_pymsg, "c1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c0
    PyObject * field = PyObject_GetAttrString(_pymsg, "c0");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c0 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_start");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_start = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_end");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_end = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_common_msgs__msg__equation_curve__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EquationCurve */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_common_msgs.msg._equation_curve");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EquationCurve");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_common_msgs__msg__EquationCurve * ros_message = (deva_common_msgs__msg__EquationCurve *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // b0
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->b0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "b0", field);
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
  {  // s_start
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_end
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
