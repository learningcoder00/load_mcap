// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvSignal.idl
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
#include "environment_model_msgs/msg/detail/env_signal__struct.h"
#include "environment_model_msgs/msg/detail/env_signal__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "environment_model_msgs/msg/detail/vec3d__functions.h"
// end nested array functions include
bool environment_model_msgs__msg__vec3d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec3d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec3d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec3d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_signal__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._env_signal.EnvSignal", full_classname_dest, 48) == 0);
  }
  environment_model_msgs__msg__EnvSignal * ros_message = _ros_message;
  {  // enum_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // remain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->remain_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // enum_shape_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_shape_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_shape_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // polygen
    PyObject * field = PyObject_GetAttrString(_pymsg, "polygen");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'polygen'");
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
    if (!environment_model_msgs__msg__Vec3d__Sequence__init(&(ros_message->polygen), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec3d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec3d * dest = ros_message->polygen.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec3d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // virtual_brake_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_brake_point");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'virtual_brake_point'");
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
    if (!environment_model_msgs__msg__Vec3d__Sequence__init(&(ros_message->virtual_brake_point), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec3d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec3d * dest = ros_message->virtual_brake_point.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec3d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // blink
    PyObject * field = PyObject_GetAttrString(_pymsg, "blink");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->blink = (Py_True == field);
    Py_DECREF(field);
  }
  {  // block
    PyObject * field = PyObject_GetAttrString(_pymsg, "block");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->block = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__env_signal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvSignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_signal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvSignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvSignal * ros_message = (environment_model_msgs__msg__EnvSignal *)raw_ros_message;
  {  // enum_color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->remain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->id.data,
      strlen(ros_message->id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enum_shape_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_shape_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_shape_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // polygen
    PyObject * field = NULL;
    size_t size = ros_message->polygen.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec3d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->polygen.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec3d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "polygen", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_brake_point
    PyObject * field = NULL;
    size_t size = ros_message->virtual_brake_point.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec3d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->virtual_brake_point.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec3d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "virtual_brake_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // blink
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->blink ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blink", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // block
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->block);
    {
      int rc = PyObject_SetAttrString(_pymessage, "block", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
