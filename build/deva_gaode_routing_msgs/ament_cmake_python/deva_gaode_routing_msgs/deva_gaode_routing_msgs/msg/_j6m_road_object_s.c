// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
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
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__coordinate__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__coordinate__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__j6m_road_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._j6m_road_object.J6mRoadObject", full_classname_dest, 58) == 0);
  }
  deva_gaode_routing_msgs__msg__J6mRoadObject * ros_message = _ros_message;
  {  // road_object_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_object_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(field, &ros_message->road_object_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // road_object_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_object_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_object_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_object_subtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_object_subtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_object_subtype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_object_center_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_object_center_point");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__coordinate__convert_from_py(field, &ros_message->road_object_center_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // road_object_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_object_heading");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_object_heading = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_attributes
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_attributes");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->road_attributes, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "confidence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confidence = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->offset = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coordinates
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinates");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'coordinates'");
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
    if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&(ros_message->coordinates), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Coordinate__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Coordinate * dest = ros_message->coordinates.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // referenced_lane_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "referenced_lane_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'referenced_lane_ids'");
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
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&(ros_message->referenced_lane_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LinkIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * dest = ros_message->referenced_lane_ids.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_gaode_routing_msgs__msg__j6m_road_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of J6mRoadObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._j6m_road_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "J6mRoadObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__J6mRoadObject * ros_message = (deva_gaode_routing_msgs__msg__J6mRoadObject *)raw_ros_message;
  {  // road_object_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(&ros_message->road_object_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_object_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_object_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_object_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_object_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_object_subtype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_object_subtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_object_subtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_object_center_point
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__coordinate__convert_to_py(&ros_message->road_object_center_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_object_center_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_object_heading
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->road_object_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_object_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_attributes
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->road_attributes.data,
      strlen(ros_message->road_attributes.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_attributes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confidence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinates
    PyObject * field = NULL;
    size_t size = ros_message->coordinates.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Coordinate * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->coordinates.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__coordinate__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "coordinates", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // referenced_lane_ids
    PyObject * field = NULL;
    size_t size = ros_message->referenced_lane_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->referenced_lane_ids.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "referenced_lane_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
