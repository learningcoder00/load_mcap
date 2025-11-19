// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RvLaneResult.idl
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
#include "deva_perception_msgs/msg/detail/rv_lane_result__struct.h"
#include "deva_perception_msgs/msg/detail/rv_lane_result__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/crosswalk2d_array__functions.h"
#include "deva_perception_msgs/msg/detail/lane_line2d_array__functions.h"
#include "deva_perception_msgs/msg/detail/stop_line2d_array__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__lane_line2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__lane_line2d_array__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__stop_line2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__stop_line2d_array__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__crosswalk2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__crosswalk2d_array__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__rv_lane_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._rv_lane_result.RvLaneResult", full_classname_dest, 53) == 0);
  }
  deva_perception_msgs__msg__RvLaneResult * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // laneline_2d_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneline_2d_array");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'laneline_2d_array'");
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
    if (!deva_perception_msgs__msg__LaneLine2dArray__Sequence__init(&(ros_message->laneline_2d_array), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__LaneLine2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__LaneLine2dArray * dest = ros_message->laneline_2d_array.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__lane_line2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // stopline_2d_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "stopline_2d_array");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'stopline_2d_array'");
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
    if (!deva_perception_msgs__msg__StopLine2dArray__Sequence__init(&(ros_message->stopline_2d_array), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__StopLine2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__StopLine2dArray * dest = ros_message->stopline_2d_array.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__stop_line2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // crosswalk_2d_array
    PyObject * field = PyObject_GetAttrString(_pymsg, "crosswalk_2d_array");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'crosswalk_2d_array'");
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
    if (!deva_perception_msgs__msg__Crosswalk2dArray__Sequence__init(&(ros_message->crosswalk_2d_array), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__Crosswalk2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__Crosswalk2dArray * dest = ros_message->crosswalk_2d_array.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__crosswalk2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_perception_msgs__msg__rv_lane_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RvLaneResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._rv_lane_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RvLaneResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RvLaneResult * ros_message = (deva_perception_msgs__msg__RvLaneResult *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneline_2d_array
    PyObject * field = NULL;
    size_t size = ros_message->laneline_2d_array.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__LaneLine2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->laneline_2d_array.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__lane_line2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "laneline_2d_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stopline_2d_array
    PyObject * field = NULL;
    size_t size = ros_message->stopline_2d_array.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__StopLine2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->stopline_2d_array.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__stop_line2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "stopline_2d_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crosswalk_2d_array
    PyObject * field = NULL;
    size_t size = ros_message->crosswalk_2d_array.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__Crosswalk2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->crosswalk_2d_array.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__crosswalk2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "crosswalk_2d_array", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
