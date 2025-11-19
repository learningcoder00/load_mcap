// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/AdbTrafficSign.idl
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
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__struct.h"
#include "deva_perception_msgs/msg/detail/adb_traffic_sign__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"
// end nested array functions include
bool deva_perception_msgs__msg__extra_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__extra_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__adb_traffic_sign__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("deva_perception_msgs.msg._adb_traffic_sign.AdbTrafficSign", full_classname_dest, 57) == 0);
  }
  deva_perception_msgs__msg__AdbTrafficSign * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "conf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->conf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // parsing_conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "parsing_conf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parsing_conf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // track_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // life_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "life_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->life_time = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizon_left_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizon_left_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizon_left_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizon_right_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizon_right_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizon_right_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_bottom_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_bottom_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_bottom_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_top_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_top_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_top_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // extra_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "extra_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'extra_infos'");
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
    if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&(ros_message->extra_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__ExtraInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__ExtraInfo * dest = ros_message->extra_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__extra_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_perception_msgs__msg__adb_traffic_sign__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdbTrafficSign */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._adb_traffic_sign");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdbTrafficSign");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__AdbTrafficSign * ros_message = (deva_perception_msgs__msg__AdbTrafficSign *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // conf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->conf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parsing_conf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parsing_conf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parsing_conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // life_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->life_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "life_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizon_left_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizon_left_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizon_left_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizon_right_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizon_right_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizon_right_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_bottom_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_bottom_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_bottom_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_top_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_top_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_top_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extra_infos
    PyObject * field = NULL;
    size_t size = ros_message->extra_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__ExtraInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->extra_infos.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__extra_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "extra_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
