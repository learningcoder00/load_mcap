// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/RoadInfo.idl
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
#include "deva_aeb_msgs/msg/detail/road_info__struct.h"
#include "deva_aeb_msgs/msg/detail/road_info__functions.h"

bool deva_aeb_msgs__msg__sf_road_edge_estimn__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_road_edge_estimn__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_front_line_ppty__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_front_line_ppty__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_road_edge_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_road_edge_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("deva_aeb_msgs.msg._road_info.RoadInfo", full_classname_dest, 37) == 0);
  }
  deva_aeb_msgs__msg__RoadInfo * ros_message = _ros_message;
  {  // estimn
    PyObject * field = PyObject_GetAttrString(_pymsg, "estimn");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_road_edge_estimn__convert_from_py(field, &ros_message->estimn)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ppty
    PyObject * field = PyObject_GetAttrString(_pymsg, "ppty");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_front_line_ppty__convert_from_py(field, &ros_message->ppty)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // info
    PyObject * field = PyObject_GetAttrString(_pymsg, "info");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_road_edge_info__convert_from_py(field, &ros_message->info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__road_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoadInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._road_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoadInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__RoadInfo * ros_message = (deva_aeb_msgs__msg__RoadInfo *)raw_ros_message;
  {  // estimn
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_road_edge_estimn__convert_to_py(&ros_message->estimn);
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
  {  // ppty
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_front_line_ppty__convert_to_py(&ros_message->ppty);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ppty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // info
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_road_edge_info__convert_to_py(&ros_message->info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
