// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvLane.idl
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
#include "environment_model_msgs/msg/detail/env_lane__struct.h"
#include "environment_model_msgs/msg/detail/env_lane__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "environment_model_msgs/msg/detail/map_ids__functions.h"
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
// end nested array functions include
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._env_lane.EnvLane", full_classname_dest, 44) == 0);
  }
  environment_model_msgs__msg__EnvLane * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coords
    PyObject * field = PyObject_GetAttrString(_pymsg, "coords");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'coords'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->coords), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->coords.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // extends
    PyObject * field = PyObject_GetAttrString(_pymsg, "extends");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'extends'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->extends), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->extends.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->left_boundary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->left_boundary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->right_boundary), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->right_boundary.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // left_neibors
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_neibors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'left_neibors'");
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
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&(ros_message->left_neibors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__MapIds__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__MapIds * dest = ros_message->left_neibors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__map_ids__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // right_neibors
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_neibors");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'right_neibors'");
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
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&(ros_message->right_neibors), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__MapIds__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__MapIds * dest = ros_message->right_neibors.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__map_ids__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * environment_model_msgs__msg__env_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvLane * ros_message = (environment_model_msgs__msg__EnvLane *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coords
    PyObject * field = NULL;
    size_t size = ros_message->coords.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->coords.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "coords", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extends
    PyObject * field = NULL;
    size_t size = ros_message->extends.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->extends.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "extends", field);
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
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->left_boundary.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->right_boundary.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
  {  // left_neibors
    PyObject * field = NULL;
    size_t size = ros_message->left_neibors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__MapIds * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->left_neibors.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__map_ids__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "left_neibors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_neibors
    PyObject * field = NULL;
    size_t size = ros_message->right_neibors.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__MapIds * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->right_neibors.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__map_ids__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "right_neibors", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
