// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
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
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__coordinate__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__j6m_lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._j6m_lane_marking.J6mLaneMarking", full_classname_dest, 60) == 0);
  }
  deva_gaode_routing_msgs__msg__J6mLaneMarking * ros_message = _ros_message;
  {  // lane_marking_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(field, &ros_message->lane_marking_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_marking_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_length = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_order_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_order_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_order_number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_offset = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_marking_confidence = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_marking_coordinates
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_marking_coordinates");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_marking_coordinates'");
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
    if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&(ros_message->lane_marking_coordinates), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Coordinate__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Coordinate * dest = ros_message->lane_marking_coordinates.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__j6m_lane_marking__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of J6mLaneMarking */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._j6m_lane_marking");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "J6mLaneMarking");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__J6mLaneMarking * ros_message = (deva_gaode_routing_msgs__msg__J6mLaneMarking *)raw_ros_message;
  {  // lane_marking_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(&ros_message->lane_marking_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_length
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_order_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_order_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_order_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_marking_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_marking_coordinates
    PyObject * field = NULL;
    size_t size = ros_message->lane_marking_coordinates.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Coordinate * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lane_marking_coordinates.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__coordinate__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lane_marking_coordinates", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
