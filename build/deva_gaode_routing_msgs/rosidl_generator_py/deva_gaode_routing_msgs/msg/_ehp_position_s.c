// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
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
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__ehp_position__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._ehp_position.EhpPosition", full_classname_dest, 53) == 0);
  }
  deva_gaode_routing_msgs__msg__EhpPosition * ros_message = _ros_message;
  {  // posn_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_offset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_msg_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_msg_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_msg_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_path_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_path_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_path_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_cyc_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_cyc_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_cyc_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_age = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_pos_probb
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_pos_probb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posn_pos_probb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posn_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_spd
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_spd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posn_spd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posn_cur_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_cur_lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_cur_lane = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_pos_confdc
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_pos_confdc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->posn_pos_confdc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posn_rehead
    PyObject * field = PyObject_GetAttrString(_pymsg, "posn_rehead");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posn_rehead = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__ehp_position__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EhpPosition */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._ehp_position");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EhpPosition");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__EhpPosition * ros_message = (deva_gaode_routing_msgs__msg__EhpPosition *)raw_ros_message;
  {  // posn_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_msg_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_msg_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_msg_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_path_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_path_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_path_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_cyc_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_cyc_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_cyc_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_pos_probb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posn_pos_probb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_pos_probb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_spd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posn_spd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_spd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_cur_lane
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_cur_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_cur_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_pos_confdc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->posn_pos_confdc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_pos_confdc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posn_rehead
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posn_rehead);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posn_rehead", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
