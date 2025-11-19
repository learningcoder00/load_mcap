// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
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
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__link_attribute__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._link_attribute.LinkAttribute", full_classname_dest, 57) == 0);
  }
  deva_gaode_routing_msgs__msg__LinkAttribute * ros_message = _ros_message;
  {  // link_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(field, &ros_message->link_id)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // link_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_num_sum
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num_sum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num_sum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_num_s2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num_s2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num_s2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lane_num_e2s
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_num_e2s");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_num_e2s = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_limit_s2e
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit_s2e");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_limit_s2e = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_limit_e2s
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_limit_e2s");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_limit_e2s = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_class = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // toll_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "toll_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->toll_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_kinds
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_kinds");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->road_kinds), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->road_kinds.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_kinds'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->road_kinds), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->road_kinds.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // coverage_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "coverage_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coverage_status = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // function_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "function_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->function_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // construction_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "construction_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->construction_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // condition_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "condition_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->condition_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // admin_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "admin_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->admin_code = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_types
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_types");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->vehicle_types), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->vehicle_types.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'vehicle_types'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->vehicle_types), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->vehicle_types.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // compacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "compacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->compacity = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_special
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_special");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_special = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_in_city
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_in_city");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_in_city = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_cross_tile
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_cross_tile");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_cross_tile = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__link_attribute__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LinkAttribute */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._link_attribute");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LinkAttribute");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__LinkAttribute * ros_message = (deva_gaode_routing_msgs__msg__LinkAttribute *)raw_ros_message;
  {  // link_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(&ros_message->link_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_id", field);
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
  {  // lane_num_sum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_num_sum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num_sum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_num_s2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_num_s2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num_s2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_num_e2s
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_num_e2s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_num_e2s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit_s2e
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed_limit_s2e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit_s2e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_limit_e2s
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed_limit_e2s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_limit_e2s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_class
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // toll_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->toll_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "toll_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_kinds
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "road_kinds");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->road_kinds.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->road_kinds.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->road_kinds.size * sizeof(uint8_t));
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
  {  // coverage_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coverage_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coverage_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // function_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->function_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "function_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // construction_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->construction_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "construction_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // condition_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->condition_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "condition_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->speed_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // admin_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->admin_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "admin_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_types
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "vehicle_types");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->vehicle_types.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->vehicle_types.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->vehicle_types.size * sizeof(uint8_t));
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
  {  // compacity
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->compacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "compacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_special
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_special ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_special", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_in_city
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_in_city ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_in_city", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_cross_tile
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_cross_tile ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_cross_tile", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
