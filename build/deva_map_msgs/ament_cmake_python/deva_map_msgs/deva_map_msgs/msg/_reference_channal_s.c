// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
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
#include "deva_map_msgs/msg/detail/reference_channal__struct.h"
#include "deva_map_msgs/msg/detail/reference_channal__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/channel_object_info__functions.h"
// end nested array functions include
bool deva_map_msgs__msg__channel_lane_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_line__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_marking__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_marking__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_object_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_object_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__reference_channal__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_map_msgs.msg._reference_channal.ReferenceChannal", full_classname_dest, 53) == 0);
  }
  deva_map_msgs__msg__ReferenceChannal * ros_message = _ros_message;
  {  // available
    PyObject * field = PyObject_GetAttrString(_pymsg, "available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // confidence_coefficient
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence_coefficient");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence_coefficient = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // channel_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "channel_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->channel_idx = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // middle_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "middle_line");
    if (!field) {
      return false;
    }
    if (!deva_map_msgs__msg__channel_lane_line__convert_from_py(field, &ros_message->middle_line)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_marking
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_marking");
    if (!field) {
      return false;
    }
    if (!deva_map_msgs__msg__channel_lane_marking__convert_from_py(field, &ros_message->left_marking)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_marking
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_marking");
    if (!field) {
      return false;
    }
    if (!deva_map_msgs__msg__channel_lane_marking__convert_from_py(field, &ros_message->right_marking)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // object_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'object_infos'");
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
    if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(&(ros_message->object_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelObjectInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelObjectInfo * dest = ros_message->object_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_object_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_map_msgs__msg__reference_channal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReferenceChannal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._reference_channal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReferenceChannal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__ReferenceChannal * ros_message = (deva_map_msgs__msg__ReferenceChannal *)raw_ros_message;
  {  // available
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->available ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "available", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence_coefficient
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence_coefficient);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence_coefficient", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channel_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->channel_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "channel_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // middle_line
    PyObject * field = NULL;
    field = deva_map_msgs__msg__channel_lane_line__convert_to_py(&ros_message->middle_line);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "middle_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_marking
    PyObject * field = NULL;
    field = deva_map_msgs__msg__channel_lane_marking__convert_to_py(&ros_message->left_marking);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_marking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_marking
    PyObject * field = NULL;
    field = deva_map_msgs__msg__channel_lane_marking__convert_to_py(&ros_message->right_marking);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_marking", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_infos
    PyObject * field = NULL;
    size_t size = ros_message->object_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelObjectInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->object_infos.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_object_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "object_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
