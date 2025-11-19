// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/UltrasonicRadar.idl
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
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__struct.h"
#include "deva_perception_msgs/msg/detail/ultrasonic_radar__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__ultrasonic_radar__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("deva_perception_msgs.msg._ultrasonic_radar.UltrasonicRadar", full_classname_dest, 58) == 0);
  }
  deva_perception_msgs__msg__UltrasonicRadar * ros_message = _ros_message;
  {  // radar_identify_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_identify_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->radar_identify_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->radar_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // radar_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->radar_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // radar_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_state");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_state = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_tx_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_tx_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_tx_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // radar_rx_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_rx_status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_rx_status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_radar_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_radar_distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_radar_distance = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // radar_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radar_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_distance_vaild
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_distance_vaild");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->radar_distance_vaild = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__ultrasonic_radar__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UltrasonicRadar */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._ultrasonic_radar");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UltrasonicRadar");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__UltrasonicRadar * ros_message = (deva_perception_msgs__msg__UltrasonicRadar *)raw_ros_message;
  {  // radar_identify_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->radar_identify_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_identify_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->radar_name.data,
      strlen(ros_message->radar_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->radar_type.data,
      strlen(ros_message->radar_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_state
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_state ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_tx_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_tx_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_tx_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_rx_status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_rx_status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_rx_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_radar_distance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->max_radar_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_radar_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radar_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_distance_vaild
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->radar_distance_vaild ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_distance_vaild", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
