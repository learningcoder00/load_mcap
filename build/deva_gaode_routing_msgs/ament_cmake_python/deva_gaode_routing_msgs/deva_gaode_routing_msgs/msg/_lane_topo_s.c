// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
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
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__lane_cond__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__lane_cond__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__lane_topo__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._lane_topo.LaneTopo", full_classname_dest, 47) == 0);
  }
  deva_gaode_routing_msgs__msg__LaneTopo * ros_message = _ros_message;
  {  // lane_arrow
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_arrow");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_arrow = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_flag = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bus_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bus_flag = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // out_link_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "out_link_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'out_link_ids'");
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
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&(ros_message->out_link_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LinkIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * dest = ros_message->out_link_ids.data;
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
  {  // lane_conds
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_conds");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_conds'");
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
    if (!deva_gaode_routing_msgs__msg__LaneCond__Sequence__init(&(ros_message->lane_conds), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LaneCond__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LaneCond * dest = ros_message->lane_conds.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__lane_cond__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // laneinfo_cond
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneinfo_cond");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laneinfo_cond = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // date
    PyObject * field = PyObject_GetAttrString(_pymsg, "date");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->date, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // vehicles
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicles = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // special_times
    PyObject * field = PyObject_GetAttrString(_pymsg, "special_times");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->special_times = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__lane_topo__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LaneTopo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._lane_topo");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LaneTopo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__LaneTopo * ros_message = (deva_gaode_routing_msgs__msg__LaneTopo *)raw_ros_message;
  {  // lane_arrow
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_arrow);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_arrow", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_flag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bus_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // out_link_ids
    PyObject * field = NULL;
    size_t size = ros_message->out_link_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->out_link_ids.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "out_link_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_conds
    PyObject * field = NULL;
    size_t size = ros_message->lane_conds.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LaneCond * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lane_conds.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__lane_cond__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lane_conds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneinfo_cond
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->laneinfo_cond);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laneinfo_cond", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // date
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->date.data,
      strlen(ros_message->date.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "date", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicles
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // special_times
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->special_times);
    {
      int rc = PyObject_SetAttrString(_pymessage, "special_times", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
