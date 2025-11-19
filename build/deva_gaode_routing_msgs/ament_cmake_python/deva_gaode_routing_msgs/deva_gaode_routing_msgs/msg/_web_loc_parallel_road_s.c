// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebLocParallelRoad.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_loc_parallel_road__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[70];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_loc_parallel_road.WebLocParallelRoad", full_classname_dest, 69) == 0);
  }
  deva_gaode_routing_msgs__msg__WebLocParallelRoad * ros_message = _ros_message;
  {  // formway
    PyObject * field = PyObject_GetAttrString(_pymsg, "formway");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->formway = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_loc_parallel_road__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebLocParallelRoad */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_loc_parallel_road");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebLocParallelRoad");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebLocParallelRoad * ros_message = (deva_gaode_routing_msgs__msg__WebLocParallelRoad *)raw_ros_message;
  {  // formway
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->formway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "formway", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
