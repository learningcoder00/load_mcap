// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
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
#include "environment_model_msgs/msg/detail/structured_hdair__struct.h"
#include "environment_model_msgs/msg/detail/structured_hdair__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"
#include "environment_model_msgs/msg/detail/structured_feature_point__functions.h"
#include "environment_model_msgs/msg/detail/structured_link__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__structured_link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__structured_link__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__structured_feature_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__structured_feature_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_gaode_routing_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_gaode_routing_msgs__msg__lane__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__structured_hdair__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("environment_model_msgs.msg._structured_hdair.StructuredHdair", full_classname_dest, 60) == 0);
  }
  environment_model_msgs__msg__StructuredHdair * ros_message = _ros_message;
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
  {  // current_link_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_link_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_link_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // links
    PyObject * field = PyObject_GetAttrString(_pymsg, "links");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'links'");
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
    if (!environment_model_msgs__msg__StructuredLink__Sequence__init(&(ros_message->links), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__StructuredLink__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__StructuredLink * dest = ros_message->links.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__structured_link__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // feature_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "feature_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'feature_points'");
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
    if (!environment_model_msgs__msg__StructuredFeaturePoint__Sequence__init(&(ros_message->feature_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__StructuredFeaturePoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__StructuredFeaturePoint * dest = ros_message->feature_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__structured_feature_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lanes'");
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
    if (!deva_gaode_routing_msgs__msg__LANE__Sequence__init(&(ros_message->lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LANE__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LANE * dest = ros_message->lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * environment_model_msgs__msg__structured_hdair__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StructuredHdair */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._structured_hdair");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StructuredHdair");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__StructuredHdair * ros_message = (environment_model_msgs__msg__StructuredHdair *)raw_ros_message;
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
  {  // current_link_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->current_link_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_link_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // links
    PyObject * field = NULL;
    size_t size = ros_message->links.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__StructuredLink * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->links.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__structured_link__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "links", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feature_points
    PyObject * field = NULL;
    size_t size = ros_message->feature_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__StructuredFeaturePoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->feature_points.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__structured_feature_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "feature_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanes
    PyObject * field = NULL;
    size_t size = ros_message->lanes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LANE * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lanes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
