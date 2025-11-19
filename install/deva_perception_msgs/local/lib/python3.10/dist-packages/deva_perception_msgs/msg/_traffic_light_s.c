// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/TrafficLight.idl
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
#include "deva_perception_msgs/msg/detail/traffic_light__struct.h"
#include "deva_perception_msgs/msg/detail/traffic_light__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool deva_perception_msgs__msg__obstacle_common__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__obstacle_common__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__traffic_light__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("deva_perception_msgs.msg._traffic_light.TrafficLight", full_classname_dest, 52) == 0);
  }
  deva_perception_msgs__msg__TrafficLight * ros_message = _ros_message;
  {  // perception_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "perception_obstacle");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__obstacle_common__convert_from_py(field, &ros_message->perception_obstacle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // color_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "color_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // shape_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "shape_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->shape_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // blink
    PyObject * field = PyObject_GetAttrString(_pymsg, "blink");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blink = (Py_True == field);
    Py_DECREF(field);
  }
  {  // remaining_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remaining_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bind_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "bind_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bind_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__traffic_light__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficLight */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._traffic_light");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficLight");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__TrafficLight * ros_message = (deva_perception_msgs__msg__TrafficLight *)raw_ros_message;
  {  // perception_obstacle
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__obstacle_common__convert_to_py(&ros_message->perception_obstacle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "perception_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // color_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // shape_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->shape_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "shape_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blink
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blink ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blink", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remaining_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bind_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bind_id.data,
      strlen(ros_message->bind_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bind_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
