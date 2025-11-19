// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"
// end nested array functions include
bool deva_navi_msgs__msg__via_point_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__via_point_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__energy_consume_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__energy_consume_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__elec_path_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[59];
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
    assert(strncmp("deva_navi_msgs.msg._elec_path_info_proto.ElecPathInfoProto", full_classname_dest, 58) == 0);
  }
  deva_navi_msgs__msg__ElecPathInfoProto * ros_message = _ros_message;
  {  // m_is_elec_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_is_elec_route");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->m_is_elec_route = (Py_True == field);
    Py_DECREF(field);
  }
  {  // m_link_consume_size_word
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_link_consume_size_word");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->m_link_consume_size_word = (Py_True == field);
    Py_DECREF(field);
  }
  {  // m_traffic_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_traffic_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_traffic_info = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_energy_unit
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_energy_unit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_energy_unit = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_path_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_path_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_path_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_energy_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_energy_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_energy_sum = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_link_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_link_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->m_link_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // m_link_consume
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_link_consume");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->m_link_consume), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->m_link_consume.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'm_link_consume'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->m_link_consume), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->m_link_consume.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // m_link_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_link_distance");
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
      Py_ssize_t size = view.len / sizeof(int64_t);
      if (!rosidl_runtime_c__int64__Sequence__init(&(ros_message->m_link_distance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int64__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int64_t * dest = ros_message->m_link_distance.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'm_link_distance'");
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
      if (!rosidl_runtime_c__int64__Sequence__init(&(ros_message->m_link_distance), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int64__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int64_t * dest = ros_message->m_link_distance.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int64_t tmp = PyLong_AsLongLong(item);
        memcpy(&dest[i], &tmp, sizeof(int64_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // m_via_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_via_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'm_via_info'");
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
    if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&(ros_message->m_via_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__ViaPointInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__ViaPointInfoProto * dest = ros_message->m_via_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__via_point_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // m_energy_consume
    PyObject * field = PyObject_GetAttrString(_pymsg, "m_energy_consume");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__energy_consume_proto__convert_from_py(field, &ros_message->m_energy_consume)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__elec_path_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ElecPathInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._elec_path_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ElecPathInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__ElecPathInfoProto * ros_message = (deva_navi_msgs__msg__ElecPathInfoProto *)raw_ros_message;
  {  // m_is_elec_route
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->m_is_elec_route ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_is_elec_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_link_consume_size_word
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->m_link_consume_size_word ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_link_consume_size_word", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_traffic_info
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->m_traffic_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_traffic_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_energy_unit
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->m_energy_unit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_energy_unit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_path_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->m_path_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_path_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_energy_sum
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->m_energy_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_energy_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_link_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->m_link_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_link_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_link_consume
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "m_link_consume");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->m_link_consume.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->m_link_consume.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->m_link_consume.size * sizeof(int32_t));
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
  {  // m_link_distance
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "m_link_distance");
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
    if (itemsize != sizeof(int64_t)) {
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
    if (ros_message->m_link_distance.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int64_t * src = &(ros_message->m_link_distance.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->m_link_distance.size * sizeof(int64_t));
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
  {  // m_via_info
    PyObject * field = NULL;
    size_t size = ros_message->m_via_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__ViaPointInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->m_via_info.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__via_point_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "m_via_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // m_energy_consume
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__energy_consume_proto__convert_to_py(&ros_message->m_energy_consume);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "m_energy_consume", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
