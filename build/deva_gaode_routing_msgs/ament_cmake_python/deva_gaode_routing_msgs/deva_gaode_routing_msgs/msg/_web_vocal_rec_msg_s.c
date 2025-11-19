// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_vocal_rec_msg.WebVocalRecMsg", full_classname_dest, 61) == 0);
  }
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * ros_message = _ros_message;
  {  // sequence_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "sequence_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sequence_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // conor_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "conor_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->conor_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distance = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // voice_content
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_content");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->voice_content, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebVocalRecMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_vocal_rec_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebVocalRecMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebVocalRecMsg * ros_message = (deva_gaode_routing_msgs__msg__WebVocalRecMsg *)raw_ros_message;
  {  // sequence_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sequence_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sequence_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // conor_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->conor_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conor_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_content
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->voice_content.data,
      strlen(ros_message->voice_content.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_content", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
