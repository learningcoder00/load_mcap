// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__charge_station_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[69];
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
    assert(strncmp("deva_navi_msgs.msg._charge_station_info_proto.ChargeStationInfoProto", full_classname_dest, 68) == 0);
  }
  deva_navi_msgs__msg__ChargeStationInfoProto * ros_message = _ros_message;
  {  // segment_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "segment_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->segment_idx = (int32_t)PyLong_AsLong(field);
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
  {  // show
    PyObject * field = PyObject_GetAttrString(_pymsg, "show");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(field, &ros_message->show)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // projective
    PyObject * field = PyObject_GetAttrString(_pymsg, "projective");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(field, &ros_message->projective)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // poi_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "poi_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->poi_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // brand_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "brand_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->brand_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // max_power
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_power");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->max_power = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // charge_percent
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_percent");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charge_percent = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // charge_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->charge_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // remaining_capacity
    PyObject * field = PyObject_GetAttrString(_pymsg, "remaining_capacity");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remaining_capacity = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__charge_station_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ChargeStationInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._charge_station_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ChargeStationInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__ChargeStationInfoProto * ros_message = (deva_navi_msgs__msg__ChargeStationInfoProto *)raw_ros_message;
  {  // segment_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->segment_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "segment_idx", field);
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
  {  // show
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(&ros_message->show);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "show", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // projective
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(&ros_message->projective);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "projective", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poi_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->poi_id.data,
      strlen(ros_message->poi_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "poi_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brand_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->brand_name.data,
      strlen(ros_message->brand_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "brand_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_power
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->max_power);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_power", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_percent
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->charge_percent);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_percent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->charge_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remaining_capacity
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->remaining_capacity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remaining_capacity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
