// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFLaneTwoSegEstimn.idl
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
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_lane_two_seg_estimn__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_lane_two_seg_estimn__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_aeb_msgs.msg._sf_lane_two_seg_estimn.SFLaneTwoSegEstimn", full_classname_dest, 60) == 0);
  }
  deva_aeb_msgs__msg__SFLaneTwoSegEstimn * ros_message = _ros_message;
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
  {  // dstlgttoend
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlgttoend");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dstlgttoend = (float)PyFloat_AS_DOUBLE(field);
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
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // parseconfi
    PyObject * field = PyObject_GetAttrString(_pymsg, "parseconfi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parseconfi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rmse
    PyObject * field = PyObject_GetAttrString(_pymsg, "rmse");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rmse = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacleflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacleflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obstacleflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trackstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "trackstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trackstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // poslat
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslat = (float)PyFloat_AS_DOUBLE(field);
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
  {  // extendendpointposx
    PyObject * field = PyObject_GetAttrString(_pymsg, "extendendpointposx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->extendendpointposx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // extendendpointposy
    PyObject * field = PyObject_GetAttrString(_pymsg, "extendendpointposy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->extendendpointposy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // secondsegpointdistance
    PyObject * field = PyObject_GetAttrString(_pymsg, "secondsegpointdistance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->secondsegpointdistance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // secondsegthirdordercoeff
    PyObject * field = PyObject_GetAttrString(_pymsg, "secondsegthirdordercoeff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->secondsegthirdordercoeff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_lane_two_seg_estimn__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFLaneTwoSegEstimn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_lane_two_seg_estimn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFLaneTwoSegEstimn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFLaneTwoSegEstimn * ros_message = (deva_aeb_msgs__msg__SFLaneTwoSegEstimn *)raw_ros_message;
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
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parseconfi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parseconfi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parseconfi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rmse
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rmse);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rmse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacleflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obstacleflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacleflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trackstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trackstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trackstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslat", field);
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
  {  // extendendpointposx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->extendendpointposx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extendendpointposx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extendendpointposy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->extendendpointposy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extendendpointposy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secondsegpointdistance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->secondsegpointdistance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "secondsegpointdistance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secondsegthirdordercoeff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->secondsegthirdordercoeff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "secondsegthirdordercoeff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
