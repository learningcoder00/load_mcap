// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_cross_navi_info.WebCrossNaviInfo", full_classname_dest, 65) == 0);
  }
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * ros_message = _ros_message;
  {  // assist_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "assist_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->assist_action = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cross_maneuver_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "cross_maneuver_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cross_maneuver_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_to_segment_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_to_segment_dist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_to_segment_dist = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_to_segment_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_to_segment_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_to_segment_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dest_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "dest_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dest_direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // main_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->main_action = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // maneuver_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->maneuver_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // next_road_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_road_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->next_road_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // out_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "out_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->out_cnt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // path_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // rev
    PyObject * field = PyObject_GetAttrString(_pymsg, "rev");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rev = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // reversed
    PyObject * field = PyObject_GetAttrString(_pymsg, "reversed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reversed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // seg_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_idx = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tunnel_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "tunnel_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tunnel_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // via_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "via_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->via_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebCrossNaviInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_cross_navi_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebCrossNaviInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebCrossNaviInfo * ros_message = (deva_gaode_routing_msgs__msg__WebCrossNaviInfo *)raw_ros_message;
  {  // assist_action
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->assist_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "assist_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cross_maneuver_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cross_maneuver_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cross_maneuver_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_to_segment_dist
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_to_segment_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_to_segment_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_to_segment_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_to_segment_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_to_segment_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dest_direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->dest_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dest_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // main_action
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->main_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->maneuver_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_road_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->next_road_name.data,
      strlen(ros_message->next_road_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "next_road_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // out_cnt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->out_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "out_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->path_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rev
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->rev);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rev", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reversed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reversed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reversed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_idx
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->seg_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tunnel_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tunnel_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tunnel_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // via_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->via_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "via_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
