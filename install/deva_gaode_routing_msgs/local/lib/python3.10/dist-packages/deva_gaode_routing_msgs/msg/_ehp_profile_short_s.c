// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
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
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__ehp_profile_short__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._ehp_profile_short.EhpProfileShort", full_classname_dest, 62) == 0);
  }
  deva_gaode_routing_msgs__msg__EhpProfileShort * ros_message = _ros_message;
  {  // prof_short_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_offset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_msg_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_msg_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_msg_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_path_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_path_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_path_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_cyc_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_cyc_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_cyc_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_update = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_retr
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_retr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_retr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_ctrl_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_ctrl_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_ctrl_point = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_prof_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_prof_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_prof_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_dist1
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_dist1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_dist1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_accur_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_accur_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_accur_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_value0
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_value0");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_value0 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_value1
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_value1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_value1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_relative_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_relative_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_relative_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // prof_short_curve_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_short_curve_road");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_short_curve_road = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__ehp_profile_short__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EhpProfileShort */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._ehp_profile_short");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EhpProfileShort");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__EhpProfileShort * ros_message = (deva_gaode_routing_msgs__msg__EhpProfileShort *)raw_ros_message;
  {  // prof_short_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_msg_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_msg_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_msg_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_path_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_path_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_path_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_cyc_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_cyc_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_cyc_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_retr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_retr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_retr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_ctrl_point
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_ctrl_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_ctrl_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_prof_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_prof_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_prof_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_dist1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_dist1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_dist1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_accur_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_accur_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_accur_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_value0
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_value0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_value0", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_value1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_value1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_value1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_relative_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->prof_short_relative_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_relative_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_short_curve_road
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_short_curve_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_short_curve_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
