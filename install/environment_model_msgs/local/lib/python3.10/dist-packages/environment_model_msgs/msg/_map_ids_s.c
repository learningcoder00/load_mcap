// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/MapIds.idl
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
#include "environment_model_msgs/msg/detail/map_ids__struct.h"
#include "environment_model_msgs/msg/detail/map_ids__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("environment_model_msgs.msg._map_ids.MapIds", full_classname_dest, 42) == 0);
  }
  environment_model_msgs__msg__MapIds * ros_message = _ros_message;
  {  // key
    PyObject * field = PyObject_GetAttrString(_pymsg, "key");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->key = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // value1
    PyObject * field = PyObject_GetAttrString(_pymsg, "value1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // value2
    PyObject * field = PyObject_GetAttrString(_pymsg, "value2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MapIds */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._map_ids");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MapIds");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__MapIds * ros_message = (environment_model_msgs__msg__MapIds *)raw_ros_message;
  {  // key
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->key);
    {
      int rc = PyObject_SetAttrString(_pymessage, "key", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
