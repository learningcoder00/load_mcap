// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/StitchData.idl
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
#include "deva_planning_msgs/msg/detail/stitch_data__struct.h"
#include "deva_planning_msgs/msg/detail/stitch_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__stitch_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs.msg._stitch_data.StitchData", full_classname_dest, 46) == 0);
  }
  deva_planning_msgs__msg__StitchData * ros_message = _ros_message;
  {  // stitch_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stitch_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // planner_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "planner_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->planner_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // actual_planner_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_planner_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->actual_planner_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // current_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_alpha
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_alpha");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_alpha = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_v = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stitch_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stitch_steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs__msg__stitch_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StitchData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._stitch_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StitchData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__StitchData * ros_message = (deva_planning_msgs__msg__StitchData *)raw_ros_message;
  {  // stitch_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stitch_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planner_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->planner_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planner_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_planner_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->actual_planner_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_planner_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_alpha
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_alpha);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_alpha", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stitch_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
