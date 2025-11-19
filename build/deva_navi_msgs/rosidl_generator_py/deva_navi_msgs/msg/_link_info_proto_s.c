// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/link_info_proto__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
#include "deva_navi_msgs/msg/detail/gantry_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/navi_camera_proto__functions.h"
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"
#include "deva_navi_msgs/msg/detail/turn_info_proto__functions.h"
// end nested array functions include
bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__gantry_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__gantry_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__navi_camera_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__navi_camera_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__road_facility_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__road_facility_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__turn_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__turn_info_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__link_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("deva_navi_msgs.msg._link_info_proto.LinkInfoProto", full_classname_dest, 49) == 0);
  }
  deva_navi_msgs__msg__LinkInfoProto * ros_message = _ros_message;
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
  {  // gantry_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "gantry_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'gantry_infos'");
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
    if (!deva_navi_msgs__msg__GantryInfoProto__Sequence__init(&(ros_message->gantry_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__GantryInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__GantryInfoProto * dest = ros_message->gantry_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__gantry_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cameras
    PyObject * field = PyObject_GetAttrString(_pymsg, "cameras");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cameras'");
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
    if (!deva_navi_msgs__msg__NaviCameraProto__Sequence__init(&(ros_message->cameras), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__NaviCameraProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__NaviCameraProto * dest = ros_message->cameras.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__navi_camera_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
  {  // related_segment_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "related_segment_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->related_segment_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // link_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_index = (int32_t)PyLong_AsLong(field);
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
  {  // travel_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "travel_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->travel_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // static_travel_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "static_travel_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->static_travel_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // road_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->road_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // road_facilities
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_facilities");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_facilities'");
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
    if (!deva_navi_msgs__msg__RoadFacilityProto__Sequence__init(&(ros_message->road_facilities), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__RoadFacilityProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__RoadFacilityProto * dest = ros_message->road_facilities.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__road_facility_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // topo_id_64
    PyObject * field = PyObject_GetAttrString(_pymsg, "topo_id_64");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->topo_id_64 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // urid
    PyObject * field = PyObject_GetAttrString(_pymsg, "urid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->urid = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // link_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_direction = (int32_t)PyLong_AsLong(field);
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
  {  // adcode
    PyObject * field = PyObject_GetAttrString(_pymsg, "adcode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->adcode = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // link_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->link_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // formway
    PyObject * field = PyObject_GetAttrString(_pymsg, "formway");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->formway = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_class = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // ownership
    PyObject * field = PyObject_GetAttrString(_pymsg, "ownership");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ownership = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_toll
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_toll");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_toll = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_over_head
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_over_head");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_over_head = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_parallel_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_parallel_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_parallel_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_multi_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_multi_out");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_multi_out = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_traffic_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_traffic_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_traffic_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // has_mix_fork
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_mix_fork");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_mix_fork = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_at_service
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_at_service");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_at_service = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_restricting
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_restricting");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_restricting = (Py_True == field);
    Py_DECREF(field);
  }
  {  // limit_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "limit_flag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->limit_flag = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // turn_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'turn_infos'");
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
    if (!deva_navi_msgs__msg__TurnInfoProto__Sequence__init(&(ros_message->turn_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__TurnInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__TurnInfoProto * dest = ros_message->turn_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__turn_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // service_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "service_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->service_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // inner_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "inner_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->inner_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_parking_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_parking_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_parking_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // traffic_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->traffic_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__link_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LinkInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._link_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LinkInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__LinkInfoProto * ros_message = (deva_navi_msgs__msg__LinkInfoProto *)raw_ros_message;
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
  {  // gantry_infos
    PyObject * field = NULL;
    size_t size = ros_message->gantry_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__GantryInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->gantry_infos.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__gantry_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "gantry_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cameras
    PyObject * field = NULL;
    size_t size = ros_message->cameras.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__NaviCameraProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cameras.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__navi_camera_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "cameras", field);
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
  {  // related_segment_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->related_segment_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "related_segment_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->link_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_index", field);
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
  {  // static_travel_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->static_travel_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "static_travel_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->road_name.data,
      strlen(ros_message->road_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_facilities
    PyObject * field = NULL;
    size_t size = ros_message->road_facilities.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__RoadFacilityProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_facilities.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__road_facility_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_facilities", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // topo_id_64
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->topo_id_64);
    {
      int rc = PyObject_SetAttrString(_pymessage, "topo_id_64", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // urid
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->urid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "urid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->link_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_direction", field);
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
  {  // adcode
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->adcode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "adcode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->link_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // formway
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->formway);
    {
      int rc = PyObject_SetAttrString(_pymessage, "formway", field);
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
  {  // road_direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->road_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ownership
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ownership);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ownership", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_toll
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_toll ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_toll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_over_head
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_over_head ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_over_head", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_parallel_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_parallel_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_parallel_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_multi_out
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_multi_out ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_multi_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // has_mix_fork
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_mix_fork ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_mix_fork", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_at_service
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_at_service ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_at_service", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_restricting
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_restricting ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_restricting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limit_flag
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->limit_flag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "limit_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_infos
    PyObject * field = NULL;
    size_t size = ros_message->turn_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__TurnInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->turn_infos.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__turn_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "turn_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // service_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->service_name.data,
      strlen(ros_message->service_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "service_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // inner_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->inner_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inner_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_parking_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_parking_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_parking_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->traffic_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
