// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
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
#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.h"
#include "deva_control_msgs/msg/detail/vehicle_report_belt__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__vehicle_report_belt__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_control_msgs.msg._vehicle_report_belt.VehicleReportBelt", full_classname_dest, 60) == 0);
  }
  deva_control_msgs__msg__VehicleReportBelt * ros_message = _ros_message;
  {  // drv_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_belt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->drv_belt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pass_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "pass_belt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pass_belt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rl_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rl_belt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rl_belt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rm_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rm_belt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rm_belt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rr_belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "rr_belt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->rr_belt = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__vehicle_report_belt__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleReportBelt */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._vehicle_report_belt");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleReportBelt");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__VehicleReportBelt * ros_message = (deva_control_msgs__msg__VehicleReportBelt *)raw_ros_message;
  {  // drv_belt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->drv_belt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pass_belt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pass_belt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pass_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rl_belt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rl_belt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rl_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rm_belt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rm_belt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rm_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rr_belt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->rr_belt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rr_belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
