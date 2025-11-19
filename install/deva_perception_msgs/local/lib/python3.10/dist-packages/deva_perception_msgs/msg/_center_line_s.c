// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/CenterLine.idl
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
#include "deva_perception_msgs/msg/detail/center_line__struct.h"
#include "deva_perception_msgs/msg/detail/center_line__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_common_msgs/msg/detail/equation_curve__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__equation_curve__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__equation_curve__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__center_line__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._center_line.CenterLine", full_classname_dest, 48) == 0);
  }
  deva_perception_msgs__msg__CenterLine * ros_message = _ros_message;
  {  // center_line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->center_line_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // left_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lane_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lane_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_equalization
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_equalization");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_equalization'");
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
    if (!deva_common_msgs__msg__EquationCurve__Sequence__init(&(ros_message->lane_equalization), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_common_msgs__msg__EquationCurve__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_common_msgs__msg__EquationCurve * dest = ros_message->lane_equalization.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_common_msgs__msg__equation_curve__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_current_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_current_lane");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_current_lane = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_virtual_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_virtual_lane");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_virtual_lane = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__center_line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CenterLine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._center_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CenterLine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__CenterLine * ros_message = (deva_perception_msgs__msg__CenterLine *)raw_ros_message;
  {  // center_line_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->center_line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_lane_id);
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
    field = PyLong_FromLong(ros_message->right_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_equalization
    PyObject * field = NULL;
    size_t size = ros_message->lane_equalization.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_common_msgs__msg__EquationCurve * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lane_equalization.data[i]);
      PyObject * pyitem = deva_common_msgs__msg__equation_curve__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lane_equalization", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_current_lane
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_current_lane ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_current_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_virtual_lane
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_virtual_lane ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_virtual_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
