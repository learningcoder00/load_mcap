// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
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
#include "deva_perception_msgs/msg/detail/radar_status__struct.h"
#include "deva_perception_msgs/msg/detail/radar_status__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__radar_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._radar_status.RadarStatus", full_classname_dest, 50) == 0);
  }
  deva_perception_msgs__msg__RadarStatus * ros_message = _ros_message;
  {  // num_detection
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_detection");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_detection = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_object
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_object");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_object = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_enable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_enable = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_faulty
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_faulty");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_faulty = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_latency");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_latency = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status_safety_fault
    PyObject * field = PyObject_GetAttrString(_pymsg, "status_safety_fault");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status_safety_fault = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // timestamp_h
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_h");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp_h = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdy_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdy_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdy_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdy_yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdy_yawrate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdy_yawrate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vdy_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "vdy_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vdy_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__radar_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._radar_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RadarStatus * ros_message = (deva_perception_msgs__msg__RadarStatus *)raw_ros_message;
  {  // num_detection
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_detection);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_detection", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_object
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_object);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_object", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_enable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_enable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_faulty
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_faulty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_faulty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_latency
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status_safety_fault
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status_safety_fault);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status_safety_fault", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_h
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp_h);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_h", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdy_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdy_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdy_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdy_yawrate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdy_yawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdy_yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vdy_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vdy_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vdy_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
