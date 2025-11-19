// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
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
#include "deva_map_msgs/msg/detail/ego_trajectory__struct.h"
#include "deva_map_msgs/msg/detail/ego_trajectory__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/ego_trajectory_point__functions.h"
// end nested array functions include
bool deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__ego_trajectory_point__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__ego_trajectory_point__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__ego_trajectory_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__ego_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_map_msgs.msg._ego_trajectory.EgoTrajectory", full_classname_dest, 47) == 0);
  }
  deva_map_msgs__msg__EgoTrajectory * ros_message = _ros_message;
  {  // trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory'");
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
    if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&(ros_message->trajectory), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__EgoTrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * dest = ros_message->trajectory.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // left_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'left_boundary'");
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
    if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&(ros_message->left_boundary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__EgoTrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * dest = ros_message->left_boundary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // right_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'right_boundary'");
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
    if (!deva_map_msgs__msg__EgoTrajectoryPoint__Sequence__init(&(ros_message->right_boundary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__EgoTrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * dest = ros_message->right_boundary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__ego_trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_map_msgs__msg__ego_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EgoTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._ego_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EgoTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__EgoTrajectory * ros_message = (deva_map_msgs__msg__EgoTrajectory *)raw_ros_message;
  {  // trajectory
    PyObject * field = NULL;
    size_t size = ros_message->trajectory.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__ego_trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_boundary
    PyObject * field = NULL;
    size_t size = ros_message->left_boundary.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->left_boundary.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__ego_trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary
    PyObject * field = NULL;
    size_t size = ros_message->right_boundary.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__EgoTrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->right_boundary.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__ego_trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
