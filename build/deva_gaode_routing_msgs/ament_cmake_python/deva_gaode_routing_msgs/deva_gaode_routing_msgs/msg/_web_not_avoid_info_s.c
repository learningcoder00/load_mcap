// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebNotAvoidInfo.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__functions.h"

bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_not_avoid_info.WebNotAvoidInfo", full_classname_dest, 63) == 0);
  }
  deva_gaode_routing_msgs__msg__WebNotAvoidInfo * ros_message = _ros_message;
  {  // coord_2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "coord_2d");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_point__convert_from_py(field, &ros_message->coord_2d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dist_to_car
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_to_car");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dist_to_car = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // forbid_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "forbid_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->forbid_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->valid = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebNotAvoidInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_not_avoid_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebNotAvoidInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebNotAvoidInfo * ros_message = (deva_gaode_routing_msgs__msg__WebNotAvoidInfo *)raw_ros_message;
  {  // coord_2d
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_point__convert_to_py(&ros_message->coord_2d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "coord_2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_to_car
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dist_to_car);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_to_car", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forbid_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->forbid_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forbid_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
