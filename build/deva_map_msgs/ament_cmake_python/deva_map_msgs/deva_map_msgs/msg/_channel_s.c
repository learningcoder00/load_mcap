// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/Channel.idl
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
#include "deva_map_msgs/msg/detail/channel__struct.h"
#include "deva_map_msgs/msg/detail/channel__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/channel_lane_line__functions.h"
#include "deva_map_msgs/msg/detail/channel_object_info__functions.h"
#include "deva_map_msgs/msg/detail/channel_signal_info__functions.h"
// end nested array functions include
bool deva_map_msgs__msg__channel_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_info__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_line__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_line__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_marking__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_marking__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_marking__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_object_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_object_info__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_signal_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_signal_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__channel__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[35];
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
    assert(strncmp("deva_map_msgs.msg._channel.Channel", full_classname_dest, 34) == 0);
  }
  deva_map_msgs__msg__Channel * ros_message = _ros_message;
  {  // available
    PyObject * field = PyObject_GetAttrString(_pymsg, "available");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->available = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_on_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_on_route");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_on_route = (Py_True == field);
    Py_DECREF(field);
  }
  {  // errcode
    PyObject * field = PyObject_GetAttrString(_pymsg, "errcode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->errcode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->current_lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
  {  // lane_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // laneinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneinfo");
    if (!field) {
      return false;
    }
    if (!deva_map_msgs__msg__channel_lane_info__convert_from_py(field, &ros_message->laneinfo)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // reference_line_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_line_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'reference_line_vec'");
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
    if (!deva_map_msgs__msg__ChannelLaneLine__Sequence__init(&(ros_message->reference_line_vec), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelLaneLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelLaneLine * dest = ros_message->reference_line_vec.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_lane_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
  {  // left_channel_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_channel_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_channel_idx = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_channel_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_channel_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_channel_idx = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // object_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'object_info'");
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
    if (!deva_map_msgs__msg__ChannelObjectInfo__Sequence__init(&(ros_message->object_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelObjectInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelObjectInfo * dest = ros_message->object_info.data;
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
  {  // signal_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'signal_info'");
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
    if (!deva_map_msgs__msg__ChannelSignalInfo__Sequence__init(&(ros_message->signal_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelSignalInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelSignalInfo * dest = ros_message->signal_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_signal_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_map_msgs__msg__channel__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Channel */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._channel");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Channel");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__Channel * ros_message = (deva_map_msgs__msg__Channel *)raw_ros_message;
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
  {  // is_on_route
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_on_route ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_on_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // errcode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->errcode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "errcode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->current_lane_id.data,
      strlen(ros_message->current_lane_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_lane_id", field);
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
  {  // lane_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneinfo
    PyObject * field = NULL;
    field = deva_map_msgs__msg__channel_lane_info__convert_to_py(&ros_message->laneinfo);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "laneinfo", field);
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
  {  // reference_line_vec
    PyObject * field = NULL;
    size_t size = ros_message->reference_line_vec.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelLaneLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->reference_line_vec.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_lane_line__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "reference_line_vec", field);
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
  {  // left_channel_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_channel_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_channel_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_channel_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_channel_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_channel_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_info
    PyObject * field = NULL;
    size_t size = ros_message->object_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelObjectInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->object_info.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "object_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_info
    PyObject * field = NULL;
    size_t size = ros_message->signal_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelSignalInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->signal_info.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_signal_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "signal_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
