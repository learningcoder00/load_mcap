// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvLink.idl
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
#include "environment_model_msgs/msg/detail/env_link__struct.h"
#include "environment_model_msgs/msg/detail/env_link__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_link__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._env_link.EnvLink", full_classname_dest, 44) == 0);
  }
  environment_model_msgs__msg__EnvLink * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // parent_link_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_link_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parent_link_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // angle_with_parent
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_with_parent");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_with_parent = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_on_routing
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_on_routing");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_on_routing = (Py_True == field);
    Py_DECREF(field);
  }
  {  // lane_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sub_link_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "sub_link_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sub_link_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__env_link__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvLink */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_link");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvLink");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvLink * ros_message = (environment_model_msgs__msg__EnvLink *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_link_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->parent_link_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_link_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_with_parent
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_with_parent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_with_parent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_on_routing
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_on_routing ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_on_routing", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sub_link_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sub_link_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sub_link_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
