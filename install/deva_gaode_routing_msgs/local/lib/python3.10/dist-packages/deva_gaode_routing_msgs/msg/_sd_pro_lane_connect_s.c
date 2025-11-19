// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
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
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__restriction_detail__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__restriction_detail__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__sd_pro_lane_connect__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._sd_pro_lane_connect.SdProLaneConnect", full_classname_dest, 65) == 0);
  }
  deva_gaode_routing_msgs__msg__SdProLaneConnect * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // out_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "out_road");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->out_road = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // pass_road_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "pass_road_ids");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(uint64_t);
      if (!rosidl_runtime_c__uint64__Sequence__init(&(ros_message->pass_road_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint64__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint64_t * dest = ros_message->pass_road_ids.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pass_road_ids'");
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
      if (!rosidl_runtime_c__uint64__Sequence__init(&(ros_message->pass_road_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint64__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint64_t * dest = ros_message->pass_road_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint64_t tmp = PyLong_AsUnsignedLongLong(item);
        memcpy(&dest[i], &tmp, sizeof(uint64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // arrow_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "arrow_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->arrow_info = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_info = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // bus_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "bus_lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bus_lane = (int32_t)PyLong_AsLong(field);
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
  {  // lane_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_left");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_left = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lane_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_right");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_right = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // node_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->node_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // limit_lane
    PyObject * field = PyObject_GetAttrString(_pymsg, "limit_lane");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->limit_lane = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // connect_restriction
    PyObject * field = PyObject_GetAttrString(_pymsg, "connect_restriction");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'connect_restriction'");
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
    if (!deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__init(&(ros_message->connect_restriction), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__RestrictionDetail * dest = ros_message->connect_restriction.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__restriction_detail__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__sd_pro_lane_connect__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SdProLaneConnect */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._sd_pro_lane_connect");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SdProLaneConnect");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__SdProLaneConnect * ros_message = (deva_gaode_routing_msgs__msg__SdProLaneConnect *)raw_ros_message;
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
  {  // out_road
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->out_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "out_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pass_road_ids
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "pass_road_ids");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(uint64_t)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->pass_road_ids.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint64_t * src = &(ros_message->pass_road_ids.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->pass_road_ids.size * sizeof(uint64_t));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // arrow_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->arrow_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "arrow_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_info
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bus_lane
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->bus_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bus_lane", field);
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
  {  // lane_left
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_left);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_right
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_right);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->node_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limit_lane
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->limit_lane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "limit_lane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // connect_restriction
    PyObject * field = NULL;
    size_t size = ros_message->connect_restriction.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__RestrictionDetail * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->connect_restriction.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__restriction_detail__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "connect_restriction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
