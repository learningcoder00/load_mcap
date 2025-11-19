// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProMap.idl
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
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_map__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/sd_node__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_link__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_merge__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_path_split__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__nav_route__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__nav_route__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_pro_path__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_path__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_pro_link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_link__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_pro_path_split__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_path_split__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_pro_path_merge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_path_merge__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_node__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__sd_pro_map__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._sd_pro_map.SdProMap", full_classname_dest, 48) == 0);
  }
  deva_gaode_routing_msgs__msg__SdProMap * ros_message = _ros_message;
  {  // version
    PyObject * field = PyObject_GetAttrString(_pymsg, "version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->version = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // city_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "city_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->city_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // navi_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_route");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__nav_route__convert_from_py(field, &ros_message->navi_route)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // paths
    PyObject * field = PyObject_GetAttrString(_pymsg, "paths");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'paths'");
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
    if (!deva_gaode_routing_msgs__msg__SdProPath__Sequence__init(&(ros_message->paths), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProPath__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProPath * dest = ros_message->paths.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_path__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
    if (!deva_gaode_routing_msgs__msg__SdProLink__Sequence__init(&(ros_message->links), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProLink__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProLink * dest = ros_message->links.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_link__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // path_splits
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_splits");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'path_splits'");
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
    if (!deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence__init(&(ros_message->path_splits), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProPathSplit__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProPathSplit * dest = ros_message->path_splits.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_path_split__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // path_merges
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_merges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'path_merges'");
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
    if (!deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence__init(&(ros_message->path_merges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProPathMerge__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProPathMerge * dest = ros_message->path_merges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_path_merge__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // sd_nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "sd_nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sd_nodes'");
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
    if (!deva_gaode_routing_msgs__msg__SDNode__Sequence__init(&(ros_message->sd_nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SDNode__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SDNode * dest = ros_message->sd_nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_gaode_routing_msgs__msg__sd_pro_map__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SdProMap */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._sd_pro_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SdProMap");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__SdProMap * ros_message = (deva_gaode_routing_msgs__msg__SdProMap *)raw_ros_message;
  {  // version
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // city_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->city_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "city_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navi_route
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__nav_route__convert_to_py(&ros_message->navi_route);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // paths
    PyObject * field = NULL;
    size_t size = ros_message->paths.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SdProPath * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->paths.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_path__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "paths", field);
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
    deva_gaode_routing_msgs__msg__SdProLink * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->links.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_link__convert_to_py(item);
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
  {  // path_splits
    PyObject * field = NULL;
    size_t size = ros_message->path_splits.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SdProPathSplit * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->path_splits.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_path_split__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "path_splits", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_merges
    PyObject * field = NULL;
    size_t size = ros_message->path_merges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SdProPathMerge * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->path_merges.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_path_merge__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "path_merges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sd_nodes
    PyObject * field = NULL;
    size_t size = ros_message->sd_nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SDNode * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sd_nodes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_node__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sd_nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
