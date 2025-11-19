// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_localization_msgs:msg/Ins.idl
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
#include "deva_localization_msgs/msg/detail/ins__struct.h"
#include "deva_localization_msgs/msg/detail/ins__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_localization_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_localization_msgs__msg__pose__convert_to_py(void * raw_ros_message);
bool deva_localization_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_localization_msgs__msg__pose__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_localization_msgs__msg__ins__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("deva_localization_msgs.msg._ins.Ins", full_classname_dest, 35) == 0);
  }
  deva_localization_msgs__msg__Ins * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ins_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->ins_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // localization
    PyObject * field = PyObject_GetAttrString(_pymsg, "localization");
    if (!field) {
      return false;
    }
    if (!deva_localization_msgs__msg__pose__convert_from_py(field, &ros_message->localization)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // gcj_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcj_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gcj_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gcj_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcj_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->gcj_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gcj_localization
    PyObject * field = PyObject_GetAttrString(_pymsg, "gcj_localization");
    if (!field) {
      return false;
    }
    if (!deva_localization_msgs__msg__pose__convert_from_py(field, &ros_message->gcj_localization)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // true_north_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "true_north_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->true_north_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_localization_msgs__msg__ins__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Ins */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_localization_msgs.msg._ins");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Ins");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_localization_msgs__msg__Ins * ros_message = (deva_localization_msgs__msg__Ins *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->ins_status.data,
      strlen(ros_message->ins_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // localization
    PyObject * field = NULL;
    field = deva_localization_msgs__msg__pose__convert_to_py(&ros_message->localization);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "localization", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcj_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gcj_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcj_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcj_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->gcj_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcj_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gcj_localization
    PyObject * field = NULL;
    field = deva_localization_msgs__msg__pose__convert_to_py(&ros_message->gcj_localization);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gcj_localization", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // true_north_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->true_north_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "true_north_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
