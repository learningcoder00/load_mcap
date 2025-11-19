// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
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
#include "deva_perception_msgs/msg/detail/road_info__struct.h"
#include "deva_perception_msgs/msg/detail/road_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__road_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._road_info.RoadInfo", full_classname_dest, 44) == 0);
  }
  deva_perception_msgs__msg__RoadInfo * ros_message = _ros_message;
  {  // has_traffic_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_traffic_light");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->has_traffic_light = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__road_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RoadInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._road_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RoadInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RoadInfo * ros_message = (deva_perception_msgs__msg__RoadInfo *)raw_ros_message;
  {  // has_traffic_light
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->has_traffic_light);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_traffic_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
