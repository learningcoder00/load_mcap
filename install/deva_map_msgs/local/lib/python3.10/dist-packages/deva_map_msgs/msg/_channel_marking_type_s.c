// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/ChannelMarkingType.idl
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
#include "deva_map_msgs/msg/detail/channel_marking_type__struct.h"
#include "deva_map_msgs/msg/detail/channel_marking_type__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__channel_marking_type__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_map_msgs.msg._channel_marking_type.ChannelMarkingType", full_classname_dest, 58) == 0);
  }
  deva_map_msgs__msg__ChannelMarkingType * ros_message = _ros_message;
  {  // s_start
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_start");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_start = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "s_end");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s_end = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // markingtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "markingtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->markingtype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // markingcolor
    PyObject * field = PyObject_GetAttrString(_pymsg, "markingcolor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->markingcolor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_map_msgs__msg__channel_marking_type__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChannelMarkingType */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._channel_marking_type");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChannelMarkingType");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__ChannelMarkingType * ros_message = (deva_map_msgs__msg__ChannelMarkingType *)raw_ros_message;
  {  // s_start
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_start);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s_end
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s_end);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // markingtype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->markingtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "markingtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // markingcolor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->markingcolor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "markingcolor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
