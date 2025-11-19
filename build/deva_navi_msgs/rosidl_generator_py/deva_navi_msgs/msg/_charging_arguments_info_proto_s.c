// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__charging_arguments_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[77];
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
    assert(strncmp("deva_navi_msgs.msg._charging_arguments_info_proto.ChargingArgumentsInfoProto", full_classname_dest, 76) == 0);
  }
  deva_navi_msgs__msg__ChargingArgumentsInfoProto * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // min_arrival_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_arrival_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->min_arrival_percent = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // power
    PyObject * field = PyObject_GetAttrString(_pymsg, "power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // voltage
    PyObject * field = PyObject_GetAttrString(_pymsg, "voltage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voltage = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // amperage
    PyObject * field = PyObject_GetAttrString(_pymsg, "amperage");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->amperage = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__charging_arguments_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargingArgumentsInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._charging_arguments_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargingArgumentsInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__ChargingArgumentsInfoProto * ros_message = (deva_navi_msgs__msg__ChargingArgumentsInfoProto *)raw_ros_message;
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
  {  // min_arrival_percent
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->min_arrival_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_arrival_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voltage
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->voltage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voltage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // amperage
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->amperage);
    {
      int rc = PyObject_SetAttrString(_pymessage, "amperage", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
