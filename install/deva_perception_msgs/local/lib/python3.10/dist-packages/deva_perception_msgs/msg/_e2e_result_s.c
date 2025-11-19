// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/E2eResult.idl
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
#include "deva_perception_msgs/msg/detail/e2e_result__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_result__functions.h"

bool deva_perception_msgs__msg__e2e_decode_broad_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_decode_broad_result__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_decode_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_decode_result__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_decode_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_decode_result__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_decode_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_decode_result__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_decode_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_decode_result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__e2e_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("deva_perception_msgs.msg._e2e_result.E2eResult", full_classname_dest, 46) == 0);
  }
  deva_perception_msgs__msg__E2eResult * ros_message = _ros_message;
  {  // broadcategory
    PyObject * field = PyObject_GetAttrString(_pymsg, "broadcategory");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_decode_broad_result__convert_from_py(field, &ros_message->broadcategory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // turn_around
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_around");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_decode_result__convert_from_py(field, &ros_message->turn_around)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left
    PyObject * field = PyObject_GetAttrString(_pymsg, "left");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_decode_result__convert_from_py(field, &ros_message->left)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // straight
    PyObject * field = PyObject_GetAttrString(_pymsg, "straight");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_decode_result__convert_from_py(field, &ros_message->straight)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right
    PyObject * field = PyObject_GetAttrString(_pymsg, "right");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_decode_result__convert_from_py(field, &ros_message->right)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__e2e_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of E2eResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._e2e_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "E2eResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__E2eResult * ros_message = (deva_perception_msgs__msg__E2eResult *)raw_ros_message;
  {  // broadcategory
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_decode_broad_result__convert_to_py(&ros_message->broadcategory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "broadcategory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_around
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_decode_result__convert_to_py(&ros_message->turn_around);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_around", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_decode_result__convert_to_py(&ros_message->left);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // straight
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_decode_result__convert_to_py(&ros_message->straight);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "straight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_decode_result__convert_to_py(&ros_message->right);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
