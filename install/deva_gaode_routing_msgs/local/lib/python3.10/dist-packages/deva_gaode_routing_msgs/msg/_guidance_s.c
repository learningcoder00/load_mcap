// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
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
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__k_warning_sign__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__k_warning_sign__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__k_lane_meta_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__k_lane_meta_info__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__k_lsl__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__k_lsl__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__guidance__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._guidance.Guidance", full_classname_dest, 46) == 0);
  }
  deva_gaode_routing_msgs__msg__Guidance * ros_message = _ros_message;
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
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pass_link_id_s'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&(ros_message->pass_link_id_s), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LinkIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * dest = ros_message->pass_link_id_s.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // k_warning_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_warning_sign");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__k_warning_sign__convert_from_py(field, &ros_message->k_warning_sign)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // k_lane_meta_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_lane_meta_info");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__k_lane_meta_info__convert_from_py(field, &ros_message->k_lane_meta_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // k_lsl
    PyObject * field = PyObject_GetAttrString(_pymsg, "k_lsl");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__k_lsl__convert_from_py(field, &ros_message->k_lsl)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__guidance__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Guidance */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._guidance");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Guidance");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__Guidance * ros_message = (deva_gaode_routing_msgs__msg__Guidance *)raw_ros_message;
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
    size_t size = ros_message->pass_link_id_s.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pass_link_id_s.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "pass_link_id_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_warning_sign
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__k_warning_sign__convert_to_py(&ros_message->k_warning_sign);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_warning_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_lane_meta_info
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__k_lane_meta_info__convert_to_py(&ros_message->k_lane_meta_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_lane_meta_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // k_lsl
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__k_lsl__convert_to_py(&ros_message->k_lsl);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "k_lsl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
