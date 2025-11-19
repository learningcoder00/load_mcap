// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
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
#include "deva_map_msgs/msg/detail/avp_local_map__struct.h"
#include "deva_map_msgs/msg/detail/avp_local_map__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_map_msgs/msg/detail/avp_boundary__functions.h"
#include "deva_map_msgs/msg/detail/path_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__path_point__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__avp_boundary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__avp_boundary__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__path_point__convert_to_py(void * raw_ros_message);
bool deva_map_msgs__msg__avp_sub_map__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_map_msgs__msg__avp_sub_map__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_map_msgs__msg__avp_local_map__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("deva_map_msgs.msg._avp_local_map.AvpLocalMap", full_classname_dest, 44) == 0);
  }
  deva_map_msgs__msg__AvpLocalMap * ros_message = _ros_message;
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
  {  // ref_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ref_line'");
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
    if (!deva_map_msgs__msg__PathPoint__Sequence__init(&(ros_message->ref_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__PathPoint * dest = ros_message->ref_line.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__path_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // drivable_boundary
    PyObject * field = PyObject_GetAttrString(_pymsg, "drivable_boundary");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'drivable_boundary'");
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
    if (!deva_map_msgs__msg__AvpBoundary__Sequence__init(&(ros_message->drivable_boundary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__AvpBoundary__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__AvpBoundary * dest = ros_message->drivable_boundary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__avp_boundary__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // expand_lane_center_border
    PyObject * field = PyObject_GetAttrString(_pymsg, "expand_lane_center_border");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'expand_lane_center_border'");
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
    if (!deva_map_msgs__msg__PathPoint__Sequence__init(&(ros_message->expand_lane_center_border), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_map_msgs__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_map_msgs__msg__PathPoint * dest = ros_message->expand_lane_center_border.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_map_msgs__msg__path_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // avp_sub_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "avp_sub_map");
    if (!field) {
      return false;
    }
    if (!deva_map_msgs__msg__avp_sub_map__convert_from_py(field, &ros_message->avp_sub_map)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_map_msgs__msg__avp_local_map__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AvpLocalMap */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_map_msgs.msg._avp_local_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AvpLocalMap");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_map_msgs__msg__AvpLocalMap * ros_message = (deva_map_msgs__msg__AvpLocalMap *)raw_ros_message;
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
  {  // ref_line
    PyObject * field = NULL;
    size_t size = ros_message->ref_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ref_line.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__path_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ref_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drivable_boundary
    PyObject * field = NULL;
    size_t size = ros_message->drivable_boundary.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__AvpBoundary * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->drivable_boundary.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__avp_boundary__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "drivable_boundary", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // expand_lane_center_border
    PyObject * field = NULL;
    size_t size = ros_message->expand_lane_center_border.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_map_msgs__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->expand_lane_center_border.data[i]);
      PyObject * pyitem = deva_map_msgs__msg__path_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "expand_lane_center_border", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avp_sub_map
    PyObject * field = NULL;
    field = deva_map_msgs__msg__avp_sub_map__convert_to_py(&ros_message->avp_sub_map);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "avp_sub_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
