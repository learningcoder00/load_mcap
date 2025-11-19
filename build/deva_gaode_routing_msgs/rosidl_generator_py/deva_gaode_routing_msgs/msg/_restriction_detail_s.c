// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
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
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__restriction_detail__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._restriction_detail.RestrictionDetail", full_classname_dest, 65) == 0);
  }
  deva_gaode_routing_msgs__msg__RestrictionDetail * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_limit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_limit = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // period_approx
    PyObject * field = PyObject_GetAttrString(_pymsg, "period_approx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->period_approx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // valid_period
    PyObject * field = PyObject_GetAttrString(_pymsg, "valid_period");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->valid_period, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // time_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__restriction_detail__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RestrictionDetail */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._restriction_detail");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RestrictionDetail");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__RestrictionDetail * ros_message = (deva_gaode_routing_msgs__msg__RestrictionDetail *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_limit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // period_approx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->period_approx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "period_approx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // valid_period
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->valid_period.data,
      strlen(ros_message->valid_period.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "valid_period", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
