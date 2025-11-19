// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/Lane.idl
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
#include "deva_perception_msgs/msg/detail/lane__struct.h"
#include "deva_perception_msgs/msg/detail/lane__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_common_msgs/msg/detail/point2d__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__point2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__point2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__line2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__line2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__line2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__line2d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[36];
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
    assert(strncmp("deva_perception_msgs.msg._lane.Lane", full_classname_dest, 35) == 0);
  }
  deva_perception_msgs__msg__Lane * ros_message = _ros_message;
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fork_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "fork_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fork_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imagepoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "imagepoints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'imagepoints'");
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
    if (!deva_common_msgs__msg__Point2d__Sequence__init(&(ros_message->imagepoints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_common_msgs__msg__Point2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_common_msgs__msg__Point2d * dest = ros_message->imagepoints.data;
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
  {  // v_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_min");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->v_min = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // v_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "v_max");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->v_max = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // waypoints
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'waypoints'");
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
    if (!geometry_msgs__msg__Point__Sequence__init(&(ros_message->waypoints), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Point * dest = ros_message->waypoints.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // x_min
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_min = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_max = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // waypoints_extend
    PyObject * field = PyObject_GetAttrString(_pymsg, "waypoints_extend");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'waypoints_extend'");
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
    if (!geometry_msgs__msg__Point__Sequence__init(&(ros_message->waypoints_extend), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Point * dest = ros_message->waypoints_extend.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // x_min_extend
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_min_extend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_min_extend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_max_extend
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_max_extend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_max_extend = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_property = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fork_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "fork_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fork_property = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rv_fork_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "rv_fork_point");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__point2d__convert_from_py(field, &ros_message->rv_fork_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bev_fork_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "bev_fork_point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->bev_fork_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_xy
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_xy");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__line2d__convert_from_py(field, &ros_message->lane_xy)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lane_xz
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_xz");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__line2d__convert_from_py(field, &ros_message->lane_xz)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Lane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Lane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__Lane * ros_message = (deva_perception_msgs__msg__Lane *)raw_ros_message;
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
  {  // left_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fork_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fork_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fork_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imagepoints
    PyObject * field = NULL;
    size_t size = ros_message->imagepoints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_common_msgs__msg__Point2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->imagepoints.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "imagepoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_min
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->v_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // v_max
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->v_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "v_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints
    PyObject * field = NULL;
    size_t size = ros_message->waypoints.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->waypoints.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "waypoints", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_min
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_min);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // waypoints_extend
    PyObject * field = NULL;
    size_t size = ros_message->waypoints_extend.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->waypoints_extend.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "waypoints_extend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_min_extend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_min_extend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_min_extend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_max_extend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_max_extend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_max_extend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_property
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_property);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_property", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fork_property
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fork_property);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fork_property", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rv_fork_point
    PyObject * field = NULL;
    field = deva_common_msgs__msg__point2d__convert_to_py(&ros_message->rv_fork_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rv_fork_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bev_fork_point
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->bev_fork_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bev_fork_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_xy
    PyObject * field = NULL;
    field = deva_common_msgs__msg__line2d__convert_to_py(&ros_message->lane_xy);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_xy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_xz
    PyObject * field = NULL;
    field = deva_common_msgs__msg__line2d__convert_to_py(&ros_message->lane_xz);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_xz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
