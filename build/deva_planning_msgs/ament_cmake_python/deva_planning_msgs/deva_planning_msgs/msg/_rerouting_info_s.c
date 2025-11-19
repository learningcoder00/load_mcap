// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/ReroutingInfo.idl
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
#include "deva_planning_msgs/msg/detail/rerouting_info__struct.h"
#include "deva_planning_msgs/msg/detail/rerouting_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/obstacle_edge__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_map_msgs__msg__obstacle_edge__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_map_msgs__msg__obstacle_edge__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__rerouting_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs.msg._rerouting_info.ReroutingInfo", full_classname_dest, 52) == 0);
  }
  deva_planning_msgs__msg__ReroutingInfo * ros_message = _ros_message;
  {  // obstacle_edges
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_edges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacle_edges'");
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
    if (!deva_map_msgs__msg__ObstacleEdge__Sequence__init(&(ros_message->obstacle_edges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__ObstacleEdge__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__ObstacleEdge * dest = ros_message->obstacle_edges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__obstacle_edge__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_planning_msgs__msg__rerouting_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReroutingInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._rerouting_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReroutingInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__ReroutingInfo * ros_message = (deva_planning_msgs__msg__ReroutingInfo *)raw_ros_message;
  {  // obstacle_edges
    PyObject * field = NULL;
    size_t size = ros_message->obstacle_edges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__ObstacleEdge * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacle_edges.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__obstacle_edge__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_edges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
