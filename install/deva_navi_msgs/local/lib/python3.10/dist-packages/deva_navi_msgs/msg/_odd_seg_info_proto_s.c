// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__odd_seg_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("deva_navi_msgs.msg._odd_seg_info_proto.OddSegInfoProto", full_classname_dest, 54) == 0);
  }
  deva_navi_msgs__msg__OddSegInfoProto * ros_message = _ros_message;
  {  // m_odd_len
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_odd_len");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_odd_len = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // m_start_seg_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_start_seg_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_start_seg_idx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // m_start_link_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_start_link_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_start_link_idx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // m_start_off_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_start_off_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m_start_off_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // m_end_seg_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_end_seg_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_end_seg_idx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // m_end_link_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_end_link_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_end_link_idx = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // m_end_off_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_end_off_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->m_end_off_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__odd_seg_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of OddSegInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._odd_seg_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "OddSegInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__OddSegInfoProto * ros_message = (deva_navi_msgs__msg__OddSegInfoProto *)raw_ros_message;
  {  // m_odd_len
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->m_odd_len);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_odd_len", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_start_seg_idx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->m_start_seg_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_start_seg_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_start_link_idx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->m_start_link_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_start_link_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_start_off_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m_start_off_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_start_off_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_end_seg_idx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->m_end_seg_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_end_seg_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_end_link_idx
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->m_end_link_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_end_link_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_end_off_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->m_end_off_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_end_off_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
