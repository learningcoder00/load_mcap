// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
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
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.h"
#include "deva_map_msgs/msg/detail/channel_lane_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__functions.h"
#include "deva_map_msgs/msg/detail/channel_lane_type__functions.h"
#include "deva_map_msgs/msg/detail/channel_turn_type__functions.h"
// end nested array functions include
bool deva_map_msgs__msg__channel_lane_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_type__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_turn_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_turn_type__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__channel_lane_speed_limitation__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__channel_lane_speed_limitation__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__channel_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("deva_map_msgs.msg._channel_lane_info.ChannelLaneInfo", full_classname_dest, 52) == 0);
  }
  deva_map_msgs__msg__ChannelLaneInfo * ros_message = _ros_message;
  {  // lane_id_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id_vec");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_id_vec'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->lane_id_vec), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->lane_id_vec.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // lanetype_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanetype_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lanetype_vec'");
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
    if (!deva_map_msgs__msg__ChannelLaneType__Sequence__init(&(ros_message->lanetype_vec), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelLaneType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelLaneType * dest = ros_message->lanetype_vec.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_lane_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // turntype_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "turntype_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'turntype_vec'");
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
    if (!deva_map_msgs__msg__ChannelTurnType__Sequence__init(&(ros_message->turntype_vec), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelTurnType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelTurnType * dest = ros_message->turntype_vec.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_turn_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lanespeedlimitation_vec
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanespeedlimitation_vec");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lanespeedlimitation_vec'");
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
    if (!deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence__init(&(ros_message->lanespeedlimitation_vec), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ChannelLaneSpeedLimitation__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ChannelLaneSpeedLimitation * dest = ros_message->lanespeedlimitation_vec.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__channel_lane_speed_limitation__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_map_msgs__msg__channel_lane_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChannelLaneInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._channel_lane_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChannelLaneInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__ChannelLaneInfo * ros_message = (deva_map_msgs__msg__ChannelLaneInfo *)raw_ros_message;
  {  // lane_id_vec
    PyObject * field = NULL;
    size_t size = ros_message->lane_id_vec.size;
    rosidl_runtime_c__String * src = ros_message->lane_id_vec.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanetype_vec
    PyObject * field = NULL;
    size_t size = ros_message->lanetype_vec.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelLaneType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lanetype_vec.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_lane_type__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lanetype_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turntype_vec
    PyObject * field = NULL;
    size_t size = ros_message->turntype_vec.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelTurnType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->turntype_vec.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_turn_type__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "turntype_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanespeedlimitation_vec
    PyObject * field = NULL;
    size_t size = ros_message->lanespeedlimitation_vec.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ChannelLaneSpeedLimitation * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lanespeedlimitation_vec.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__channel_lane_speed_limitation__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lanespeedlimitation_vec", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
