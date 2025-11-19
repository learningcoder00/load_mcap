// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvPoint.idl
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
#include "environment_model_msgs/msg/detail/env_point__struct.h"
#include "environment_model_msgs/msg/detail/env_point__functions.h"

bool environment_model_msgs__msg__bound_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__bound_point__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__bound_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__bound_point__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__bound_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__bound_point__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__bound_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__bound_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._env_point.EnvPoint", full_classname_dest, 46) == 0);
  }
  environment_model_msgs__msg__EnvPoint * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // s
    PyObject * field = PyObject_GetAttrString(_pymsg, "s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "kappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_lan_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lan_bound");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__bound_point__convert_from_py(field, &ros_message->left_lan_bound)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_lane_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_bound");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__bound_point__convert_from_py(field, &ros_message->right_lane_bound)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // left_road_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_road_bound");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__bound_point__convert_from_py(field, &ros_message->left_road_bound)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // right_road_bound
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_road_bound");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__bound_point__convert_from_py(field, &ros_message->right_road_bound)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // speed_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_limit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // enum_lane_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_lane_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_lane_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // enum_road_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_road_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_road_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__env_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvPoint * ros_message = (environment_model_msgs__msg__EnvPoint *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lan_bound
    PyObject * field = NULL;
    field = environment_model_msgs__msg__bound_point__convert_to_py(&ros_message->left_lan_bound);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lan_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_bound
    PyObject * field = NULL;
    field = environment_model_msgs__msg__bound_point__convert_to_py(&ros_message->right_lane_bound);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_road_bound
    PyObject * field = NULL;
    field = environment_model_msgs__msg__bound_point__convert_to_py(&ros_message->left_road_bound);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_road_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_road_bound
    PyObject * field = NULL;
    field = environment_model_msgs__msg__bound_point__convert_to_py(&ros_message->right_road_bound);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_road_bound", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_limit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enum_lane_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_lane_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_lane_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enum_road_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_road_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_road_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
