// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
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
#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.h"
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
#include "deva_planning_msgs2/msg/detail/trajectory_point__functions.h"
// end nested array functions include
bool deva_planning_msgs2__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__string2_double__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__string2_double__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs2__msg__tree_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("deva_planning_msgs2.msg._tree_trajectory.TreeTrajectory", full_classname_dest, 55) == 0);
  }
  deva_planning_msgs2__msg__TreeTrajectory * ros_message = _ros_message;
  {  // obs_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "obs_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->obs_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->confidence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_points'");
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
    if (!deva_planning_msgs2__msg__TrajectoryPoint__Sequence__init(&(ros_message->trajectory_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__TrajectoryPoint * dest = ros_message->trajectory_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traj_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "traj_score");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'traj_score'");
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
    if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&(ros_message->traj_score), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__String2Double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__String2Double * dest = ros_message->traj_score.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__string2_double__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_planning_msgs2__msg__tree_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TreeTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs2.msg._tree_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TreeTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs2__msg__TreeTrajectory * ros_message = (deva_planning_msgs2__msg__TreeTrajectory *)raw_ros_message;
  {  // obs_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->obs_id.data,
      strlen(ros_message->obs_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs_id", field);
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
  {  // trajectory_points
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_points.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traj_score
    PyObject * field = NULL;
    size_t size = ros_message->traj_score.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__String2Double * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->traj_score.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__string2_double__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "traj_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
