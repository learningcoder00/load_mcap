// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFLaneEstimn.idl
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
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_lane_estimn__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_lane_estimn__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_aeb_msgs.msg._sf_lane_estimn.SFLaneEstimn", full_classname_dest, 46) == 0);
  }
  deva_aeb_msgs__msg__SFLaneEstimn * ros_message = _ros_message;
  {  // constcoeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "constcoeff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->constcoeff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // firstordercoeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "firstordercoeff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->firstordercoeff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // secondordercoeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "secondordercoeff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->secondordercoeff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // thirdordercoeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "thirdordercoeff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->thirdordercoeff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // startpointposx
    PyObject * field = PyObject_GetAttrString(_pymsg, "startpointposx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->startpointposx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // startpointposy
    PyObject * field = PyObject_GetAttrString(_pymsg, "startpointposy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->startpointposy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endpointposx
    PyObject * field = PyObject_GetAttrString(_pymsg, "endpointposx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endpointposx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // endpointposy
    PyObject * field = PyObject_GetAttrString(_pymsg, "endpointposy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->endpointposy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dstlgttoend
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlgttoend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dstlgttoend = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_lane_estimn__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFLaneEstimn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_lane_estimn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFLaneEstimn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFLaneEstimn * ros_message = (deva_aeb_msgs__msg__SFLaneEstimn *)raw_ros_message;
  {  // constcoeff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->constcoeff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "constcoeff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // firstordercoeff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->firstordercoeff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "firstordercoeff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secondordercoeff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->secondordercoeff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "secondordercoeff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thirdordercoeff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->thirdordercoeff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "thirdordercoeff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startpointposx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->startpointposx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startpointposx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // startpointposy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->startpointposy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "startpointposy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endpointposx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endpointposx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endpointposx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // endpointposy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->endpointposy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "endpointposy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dstlgttoend
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dstlgttoend);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dstlgttoend", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
