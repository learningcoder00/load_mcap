// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
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
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.h"
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__quadrangle_vcs__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("deva_perception_msgs.msg._quadrangle_vcs.QuadrangleVcs", full_classname_dest, 54) == 0);
  }
  deva_perception_msgs__msg__QuadrangleVcs * ros_message = _ros_message;
  {  // leftuppointx
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftuppointx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftuppointx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftuppointy
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftuppointy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftuppointy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftuppointz
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftuppointz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftuppointz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightuppointx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightuppointx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightuppointx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightuppointy
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightuppointy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightuppointy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightuppointz
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightuppointz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightuppointz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightdownpointx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightdownpointx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightdownpointx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightdownpointy
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightdownpointy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightdownpointy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightdownpointz
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightdownpointz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightdownpointz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftdownpointx
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftdownpointx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftdownpointx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftdownpointy
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftdownpointy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftdownpointy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftdownpointz
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftdownpointz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftdownpointz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__quadrangle_vcs__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QuadrangleVcs */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._quadrangle_vcs");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QuadrangleVcs");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__QuadrangleVcs * ros_message = (deva_perception_msgs__msg__QuadrangleVcs *)raw_ros_message;
  {  // leftuppointx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftuppointx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftuppointx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftuppointy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftuppointy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftuppointy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftuppointz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftuppointz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftuppointz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightuppointx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightuppointx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightuppointx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightuppointy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightuppointy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightuppointy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightuppointz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightuppointz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightuppointz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightdownpointx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightdownpointx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightdownpointx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightdownpointy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightdownpointy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightdownpointy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightdownpointz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightdownpointz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightdownpointz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftdownpointx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftdownpointx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftdownpointx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftdownpointy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftdownpointy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftdownpointy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftdownpointz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftdownpointz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftdownpointz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
