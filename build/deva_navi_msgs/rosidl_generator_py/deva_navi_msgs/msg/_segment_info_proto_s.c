// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
#include "deva_navi_msgs/msg/detail/icon_road_proto__functions.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"
// end nested array functions include
bool deva_navi_msgs__msg__link_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__link_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__icon_road_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__icon_road_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__segment_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("deva_navi_msgs.msg._segment_info_proto.SegmentInfoProto", full_classname_dest, 55) == 0);
  }
  deva_navi_msgs__msg__SegmentInfoProto * ros_message = _ros_message;
  {  // link_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'link_infos'");
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
    if (!deva_navi_msgs__msg__LinkInfoProto__Sequence__init(&(ros_message->link_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__LinkInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__LinkInfoProto * dest = ros_message->link_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__link_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
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
    if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__Coord3DDoubleProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__Coord3DDoubleProto * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // related_path_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "related_path_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->related_path_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // segment_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "segment_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->segment_index = (int32_t)PyLong_AsLong(field);
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
  {  // assistant_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "assistant_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->assistant_action = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "slope");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slope = (int32_t)PyLong_AsLong(field);
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
  {  // toll_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "toll_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->toll_cost = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // toll_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "toll_dist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->toll_dist = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // travel_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "travel_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->travel_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // traffic_light_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_light_num = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // is_end_of_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_end_of_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_end_of_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // toll_road_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "toll_road_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->toll_road_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // guideboard_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "guideboard_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->guideboard_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // exit_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->exit_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // crossing_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "crossing_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->crossing_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // maneuver_icons
    PyObject * field = PyObject_GetAttrString(_pymsg, "maneuver_icons");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'maneuver_icons'");
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
    if (!deva_navi_msgs__msg__IconRoadProto__Sequence__init(&(ros_message->maneuver_icons), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__IconRoadProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__IconRoadProto * dest = ros_message->maneuver_icons.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__icon_road_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // uturn_and_arrivedest
    PyObject * field = PyObject_GetAttrString(_pymsg, "uturn_and_arrivedest");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->uturn_and_arrivedest = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__segment_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SegmentInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._segment_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SegmentInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__SegmentInfoProto * ros_message = (deva_navi_msgs__msg__SegmentInfoProto *)raw_ros_message;
  {  // link_infos
    PyObject * field = NULL;
    size_t size = ros_message->link_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__LinkInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->link_infos.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__link_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "link_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    size_t size = ros_message->points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__Coord3DDoubleProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // related_path_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->related_path_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "related_path_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // segment_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->segment_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "segment_index", field);
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
  {  // assistant_action
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->assistant_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "assistant_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slope
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slope", field);
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
  {  // toll_cost
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->toll_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "toll_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // toll_dist
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->toll_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "toll_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // travel_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->travel_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "travel_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_light_num
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->traffic_light_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_end_of_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_end_of_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_end_of_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // toll_road_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->toll_road_name.data,
      strlen(ros_message->toll_road_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "toll_road_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // guideboard_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->guideboard_name.data,
      strlen(ros_message->guideboard_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "guideboard_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->exit_name.data,
      strlen(ros_message->exit_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crossing_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->crossing_name.data,
      strlen(ros_message->crossing_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "crossing_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // maneuver_icons
    PyObject * field = NULL;
    size_t size = ros_message->maneuver_icons.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__IconRoadProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->maneuver_icons.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__icon_road_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "maneuver_icons", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // uturn_and_arrivedest
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->uturn_and_arrivedest);
    {
      int rc = PyObject_SetAttrString(_pymessage, "uturn_and_arrivedest", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
