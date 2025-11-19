// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
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
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__coordinate__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__k_warning_sign__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._k_warning_sign.KWarningSign", full_classname_dest, 56) == 0);
  }
  deva_gaode_routing_msgs__msg__KWarningSign * ros_message = _ros_message;
  {  // in_link_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_link_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(field, &ros_message->in_link_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(field, &ros_message->node_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pass_link_id_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "pass_link_id_s");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(field, &ros_message->pass_link_id_s)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // trc_kind
    PyObject * field = PyObject_GetAttrString(_pymsg, "trc_kind");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trc_kind = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // forcetold_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "forcetold_dist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->forcetold_dist = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // control_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_dist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_dist = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // link_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // descript
    PyObject * field = PyObject_GetAttrString(_pymsg, "descript");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->descript, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // coordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinate");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__coordinate__convert_from_py(field, &ros_message->coordinate)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__k_warning_sign__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KWarningSign */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._k_warning_sign");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KWarningSign");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__KWarningSign * ros_message = (deva_gaode_routing_msgs__msg__KWarningSign *)raw_ros_message;
  {  // in_link_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(&ros_message->in_link_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_link_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(&ros_message->node_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pass_link_id_s
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(&ros_message->pass_link_id_s);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pass_link_id_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trc_kind
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trc_kind);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trc_kind", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forcetold_dist
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->forcetold_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forcetold_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_dist
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->link_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // descript
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->descript.data,
      strlen(ros_message->descript.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "descript", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinate
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__coordinate__convert_to_py(&ros_message->coordinate);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
