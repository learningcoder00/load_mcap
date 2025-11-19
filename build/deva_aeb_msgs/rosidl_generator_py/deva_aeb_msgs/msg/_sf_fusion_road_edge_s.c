// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionRoadEdge.idl
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
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_edge__functions.h"

bool deva_aeb_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__road_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__road_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__road_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__road_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_fusion_road_edge__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_fusion_road_edge.SFFusionRoadEdge", full_classname_dest, 55) == 0);
  }
  deva_aeb_msgs__msg__SFFusionRoadEdge * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // framenum
    PyObject * field = PyObject_GetAttrString(_pymsg, "framenum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framenum = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frontleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "frontleft");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__road_info__convert_from_py(field, &ros_message->frontleft)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // frontright
    PyObject * field = PyObject_GetAttrString(_pymsg, "frontright");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__road_info__convert_from_py(field, &ros_message->frontright)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearleft");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__road_info__convert_from_py(field, &ros_message->rearleft)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearright
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearright");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__road_info__convert_from_py(field, &ros_message->rearright)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_fusion_road_edge__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionRoadEdge */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_fusion_road_edge");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionRoadEdge");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFFusionRoadEdge * ros_message = (deva_aeb_msgs__msg__SFFusionRoadEdge *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framenum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->framenum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framenum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frontleft
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__road_info__convert_to_py(&ros_message->frontleft);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frontleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frontright
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__road_info__convert_to_py(&ros_message->frontright);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "frontright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearleft
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__road_info__convert_to_py(&ros_message->rearleft);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearright
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__road_info__convert_to_py(&ros_message->rearright);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
