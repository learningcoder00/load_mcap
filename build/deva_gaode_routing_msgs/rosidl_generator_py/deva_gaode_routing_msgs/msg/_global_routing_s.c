// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
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
#include "deva_gaode_routing_msgs/msg/detail/global_routing__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/global_routing__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/web_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_step__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_step__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_step__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_step__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_call_back__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_call_back__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__global_path_msg__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__global_path_msg__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__global_routing__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._global_routing.GlobalRouting", full_classname_dest, 57) == 0);
  }
  deva_gaode_routing_msgs__msg__GlobalRouting * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // version
    PyObject * field = PyObject_GetAttrString(_pymsg, "version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status = (Py_True == field);
    Py_DECREF(field);
  }
  {  // md5
    PyObject * field = PyObject_GetAttrString(_pymsg, "md5");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->md5, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // start_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_point");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_point__convert_from_py(field, &ros_message->start_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // way_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "way_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'way_points'");
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
    if (!deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(&(ros_message->way_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__WebPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__WebPoint * dest = ros_message->way_points.data;
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
  {  // end_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_point");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_point__convert_from_py(field, &ros_message->end_point)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // step_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // locate_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "locate_step");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_step__convert_from_py(field, &ros_message->locate_step)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // forward_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_step");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_step__convert_from_py(field, &ros_message->forward_step)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // traffic_light_count
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_count");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_light_count = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // call_back
    PyObject * field = PyObject_GetAttrString(_pymsg, "call_back");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_call_back__convert_from_py(field, &ros_message->call_back)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vocal_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "vocal_info");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_from_py(field, &ros_message->vocal_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // global_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "global_path");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__global_path_msg__convert_from_py(field, &ros_message->global_path)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cur_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_point");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_point__convert_from_py(field, &ros_message->cur_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // orientation
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__global_routing__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GlobalRouting */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._global_routing");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GlobalRouting");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__GlobalRouting * ros_message = (deva_gaode_routing_msgs__msg__GlobalRouting *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->version.data,
      strlen(ros_message->version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // md5
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->md5.data,
      strlen(ros_message->md5.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "md5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_point
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_point__convert_to_py(&ros_message->start_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // way_points
    PyObject * field = NULL;
    size_t size = ros_message->way_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__WebPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->way_points.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "way_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_point
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_point__convert_to_py(&ros_message->end_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_point", field);
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
  {  // step_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->step_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locate_step
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_step__convert_to_py(&ros_message->locate_step);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "locate_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_step
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_step__convert_to_py(&ros_message->forward_step);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_light_count
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->traffic_light_count);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_count", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // call_back
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_call_back__convert_to_py(&ros_message->call_back);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "call_back", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vocal_info
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_vocal_rec_msg__convert_to_py(&ros_message->vocal_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vocal_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // global_path
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__global_path_msg__convert_to_py(&ros_message->global_path);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "global_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_point
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_point__convert_to_py(&ros_message->cur_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
