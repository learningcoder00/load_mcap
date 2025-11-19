// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFDiagList.idl
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
#include "deva_aeb_msgs/msg/detail/sf_diag_list__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_diag_list__functions.h"

bool deva_aeb_msgs__msg__sf_diag_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_diag_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_diag_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_diag_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_diag_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_diag_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_aeb_msgs.msg._sf_diag_list.SFDiagList", full_classname_dest, 42) == 0);
  }
  deva_aeb_msgs__msg__SFDiagList * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // framenum
    PyObject * field = PyObject_GetAttrString(_pymsg, "framenum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framenum = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // weather
    PyObject * field = PyObject_GetAttrString(_pymsg, "weather");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_info__convert_from_py(field, &ros_message->weather)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // scene
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_info__convert_from_py(field, &ros_message->scene)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rdsuf
    PyObject * field = PyObject_GetAttrString(_pymsg, "rdsuf");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_info__convert_from_py(field, &ros_message->rdsuf)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // light
    PyObject * field = PyObject_GetAttrString(_pymsg, "light");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_info__convert_from_py(field, &ros_message->light)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_info__convert_from_py(field, &ros_message->time)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_diag_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFDiagList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_diag_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFDiagList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFDiagList * ros_message = (deva_aeb_msgs__msg__SFDiagList *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framenum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->framenum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framenum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // weather
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_info__convert_to_py(&ros_message->weather);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "weather", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_info__convert_to_py(&ros_message->scene);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rdsuf
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_info__convert_to_py(&ros_message->rdsuf);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rdsuf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_info__convert_to_py(&ros_message->light);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_info__convert_to_py(&ros_message->time);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
