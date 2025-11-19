// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
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
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool environment_model_msgs__msg__pair_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_int__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_double__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_double__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__virtual_line_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._virtual_line_info.VirtualLineInfo", full_classname_dest, 61) == 0);
  }
  environment_model_msgs__msg__VirtualLineInfo * ros_message = _ros_message;
  {  // enum_vlane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_vlane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_vlane_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // virtual_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->virtual_score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ori_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "ori_ids");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__pair_int__convert_from_py(field, &ros_message->ori_ids)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // e2e_pair
    PyObject * field = PyObject_GetAttrString(_pymsg, "e2e_pair");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__pair_double__convert_from_py(field, &ros_message->e2e_pair)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // exit_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->exit_lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // exit_seq_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_seq_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exit_seq_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__virtual_line_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VirtualLineInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._virtual_line_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VirtualLineInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__VirtualLineInfo * ros_message = (environment_model_msgs__msg__VirtualLineInfo *)raw_ros_message;
  {  // enum_vlane_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_vlane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_vlane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->virtual_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "virtual_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ori_ids
    PyObject * field = NULL;
    field = environment_model_msgs__msg__pair_int__convert_to_py(&ros_message->ori_ids);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ori_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e2e_pair
    PyObject * field = NULL;
    field = environment_model_msgs__msg__pair_double__convert_to_py(&ros_message->e2e_pair);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "e2e_pair", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->exit_lane_id.data,
      strlen(ros_message->exit_lane_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_seq_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->exit_seq_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_seq_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
