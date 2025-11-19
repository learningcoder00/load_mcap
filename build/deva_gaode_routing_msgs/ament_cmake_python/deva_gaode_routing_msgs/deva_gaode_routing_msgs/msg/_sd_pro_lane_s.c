// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
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
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__sd_pro_lane__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._sd_pro_lane.SdProLane", full_classname_dest, 50) == 0);
  }
  deva_gaode_routing_msgs__msg__SdProLane * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // lane_arrow_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_arrow_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_arrow_type = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // category_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "category_location");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->category_location = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // category_vehicle
    PyObject * field = PyObject_GetAttrString(_pymsg, "category_vehicle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->category_vehicle = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // category_special
    PyObject * field = PyObject_GetAttrString(_pymsg, "category_special");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->category_special = PyLong_AsUnsignedLong(field);
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
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // next_lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_lanes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'next_lanes'");
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
    if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(&(ros_message->next_lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProLaneTopo * dest = ros_message->next_lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pre_lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_lanes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pre_lanes'");
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
    if (!deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(&(ros_message->pre_lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__SdProLaneTopo * dest = ros_message->pre_lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // transition
    PyObject * field = PyObject_GetAttrString(_pymsg, "transition");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->transition = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__sd_pro_lane__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SdProLane */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._sd_pro_lane");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SdProLane");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__SdProLane * ros_message = (deva_gaode_routing_msgs__msg__SdProLane *)raw_ros_message;
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
  {  // lane_arrow_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_arrow_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_arrow_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // category_location
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->category_location);
    {
      int rc = PyObject_SetAttrString(_pymessage, "category_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // category_vehicle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->category_vehicle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "category_vehicle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // category_special
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->category_special);
    {
      int rc = PyObject_SetAttrString(_pymessage, "category_special", field);
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
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_lanes
    PyObject * field = NULL;
    size_t size = ros_message->next_lanes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SdProLaneTopo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->next_lanes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "next_lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_lanes
    PyObject * field = NULL;
    size_t size = ros_message->pre_lanes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__SdProLaneTopo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pre_lanes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__sd_pro_lane_topo__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pre_lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // transition
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->transition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "transition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
