// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_road__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_intersection__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_intersection__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_road__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_road.WebRoad", full_classname_dest, 45) == 0);
  }
  deva_gaode_routing_msgs__msg__WebRoad * ros_message = _ros_message;
  {  // has_traffic_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_traffic_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_traffic_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // time
    PyObject * field = PyObject_GetAttrString(_pymsg, "time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->time = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // road_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_class = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // specific_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "specific_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->specific_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_direction = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // link_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_direction = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coord_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "coord_list");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'coord_list'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&(ros_message->coord_list), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__WebPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__WebPoint * dest = ros_message->coord_list.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__web_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traffic_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // intersection_msg
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_msg");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intersection_msg'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__WebIntersection__Sequence__init(&(ros_message->intersection_msg), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__WebIntersection__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__WebIntersection * dest = ros_message->intersection_msg.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__web_intersection__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lane_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_road__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebRoad */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_road");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebRoad");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebRoad * ros_message = (deva_gaode_routing_msgs__msg__WebRoad *)raw_ros_message;
  {  // has_traffic_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_traffic_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_traffic_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time", field);
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
  {  // specific_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->specific_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "specific_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->link_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coord_list
    PyObject * field = NULL;
    size_t size = ros_message->coord_list.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__WebPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->coord_list.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__web_point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "coord_list", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->traffic_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_msg
    PyObject * field = NULL;
    size_t size = ros_message->intersection_msg.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__WebIntersection * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intersection_msg.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__web_intersection__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "intersection_msg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
