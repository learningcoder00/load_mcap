// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/StopLine2d.idl
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
#include "deva_perception_msgs/msg/detail/stop_line2d__struct.h"
#include "deva_perception_msgs/msg/detail/stop_line2d__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_common_msgs/msg/detail/point2d__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__point2d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__stop_line2d__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("deva_perception_msgs.msg._stop_line2d.StopLine2d", full_classname_dest, 48) == 0);
  }
  deva_perception_msgs__msg__StopLine2d * ros_message = _ros_message;
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pixel_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pixel_points'");
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
    if (!deva_common_msgs__msg__Point2d__Sequence__init(&(ros_message->pixel_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_common_msgs__msg__Point2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_common_msgs__msg__Point2d * dest = ros_message->pixel_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_common_msgs__msg__point2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // left_point_pos_lgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_point_pos_lgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_point_pos_lgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_point_pos_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_point_pos_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_point_pos_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_point_pos_lgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_point_pos_lgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_point_pos_lgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_point_pos_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_point_pos_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_point_pos_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__stop_line2d__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StopLine2d */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._stop_line2d");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StopLine2d");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__StopLine2d * ros_message = (deva_perception_msgs__msg__StopLine2d *)raw_ros_message;
  {  // lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_points
    PyObject * field = NULL;
    size_t size = ros_message->pixel_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_common_msgs__msg__Point2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pixel_points.data[i]);
      PyObject * pyitem = deva_common_msgs__msg__point2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pixel_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_point_pos_lgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_point_pos_lgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_point_pos_lgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_point_pos_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_point_pos_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_point_pos_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_point_pos_lgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_point_pos_lgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_point_pos_lgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_point_pos_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_point_pos_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_point_pos_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
