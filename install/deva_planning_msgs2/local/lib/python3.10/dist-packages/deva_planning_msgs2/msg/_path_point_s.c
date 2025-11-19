// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs2:msg/PathPoint.idl
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
#include "deva_planning_msgs2/msg/detail/path_point__struct.h"
#include "deva_planning_msgs2/msg/detail/path_point__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs2__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("deva_planning_msgs2.msg._path_point.PathPoint", full_classname_dest, 45) == 0);
  }
  deva_planning_msgs2__msg__PathPoint * ros_message = _ros_message;
  {  // pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->pos)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta = PyFloat_AS_DOUBLE(field);
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
  {  // s
    PyObject * field = PyObject_GetAttrString(_pymsg, "s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dkappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "dkappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dkappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ddkappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "ddkappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ddkappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // x_derivative
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_derivative");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_derivative = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_derivative
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_derivative");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_derivative = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_width
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_junction");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_junction = (Py_True == field);
    Py_DECREF(field);
  }
  {  // distance2obs
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance2obs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance2obs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs2__msg__path_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PathPoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs2.msg._path_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PathPoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs2__msg__PathPoint * ros_message = (deva_planning_msgs2__msg__PathPoint *)raw_ros_message;
  {  // pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos", field);
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
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta", field);
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
  {  // dkappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dkappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dkappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ddkappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ddkappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ddkappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lane_id.data,
      strlen(ros_message->lane_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_derivative
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_derivative);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_derivative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_derivative
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_derivative);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_derivative", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_junction
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_junction ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance2obs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance2obs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance2obs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
