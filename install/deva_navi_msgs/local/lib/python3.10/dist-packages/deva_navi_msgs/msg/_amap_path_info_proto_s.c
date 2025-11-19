// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/amap_path_info_proto__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__functions.h"
#include "deva_navi_msgs/msg/detail/group_segment_proto__functions.h"
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__functions.h"
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/segment_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/via_point_info_proto__functions.h"
// end nested array functions include
bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__segment_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__segment_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__line_icon_point_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__line_icon_point_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__via_point_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__via_point_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__charge_station_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__charge_station_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__odd_seg_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__odd_seg_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__group_segment_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__group_segment_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__restriction_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__restriction_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__poi_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__poi_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__tip_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__tip_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__elec_path_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__elec_path_info_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__path_description_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__path_description_info_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__amap_path_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_navi_msgs.msg._amap_path_info_proto.AmapPathInfoProto", full_classname_dest, 58) == 0);
  }
  deva_navi_msgs__msg__AmapPathInfoProto * ros_message = _ros_message;
  {  // all_3d_traffic_lights
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_3d_traffic_lights");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'all_3d_traffic_lights'");
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
    if (!deva_navi_msgs__msg__Coord3DDoubleProto__Sequence__init(&(ros_message->all_3d_traffic_lights), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__Coord3DDoubleProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__Coord3DDoubleProto * dest = ros_message->all_3d_traffic_lights.data;
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
  {  // segment_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "segment_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'segment_infos'");
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
    if (!deva_navi_msgs__msg__SegmentInfoProto__Sequence__init(&(ros_message->segment_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__SegmentInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__SegmentInfoProto * dest = ros_message->segment_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__segment_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // line_icon_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_icon_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'line_icon_points'");
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
    if (!deva_navi_msgs__msg__LineIconPointProto__Sequence__init(&(ros_message->line_icon_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__LineIconPointProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__LineIconPointProto * dest = ros_message->line_icon_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__line_icon_point_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // city_adcode_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "city_adcode_list");
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
      if (!rosidl_runtime_c__int64__Sequence__init(&(ros_message->city_adcode_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int64__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int64_t * dest = ros_message->city_adcode_list.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'city_adcode_list'");
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
      if (!rosidl_runtime_c__int64__Sequence__init(&(ros_message->city_adcode_list), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int64__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int64_t * dest = ros_message->city_adcode_list.data;
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
  {  // via_point_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "via_point_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'via_point_info'");
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
    if (!deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(&(ros_message->via_point_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__ViaPointInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__ViaPointInfoProto * dest = ros_message->via_point_info.data;
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
  {  // charge_station_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_station_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'charge_station_info'");
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
    if (!deva_navi_msgs__msg__ChargeStationInfoProto__Sequence__init(&(ros_message->charge_station_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__ChargeStationInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__ChargeStationInfoProto * dest = ros_message->charge_station_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__charge_station_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // odd_seg_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "odd_seg_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'odd_seg_infos'");
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
    if (!deva_navi_msgs__msg__OddSegInfoProto__Sequence__init(&(ros_message->odd_seg_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__OddSegInfoProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__OddSegInfoProto * dest = ros_message->odd_seg_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__odd_seg_info_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // plan_channel_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "plan_channel_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->plan_channel_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // offline_req_custom_identity_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "offline_req_custom_identity_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->offline_req_custom_identity_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
  {  // path_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->path_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->length = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // strategy
    PyObject * field = PyObject_GetAttrString(_pymsg, "strategy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strategy = PyLong_AsLongLong(field);
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
  {  // toll_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "toll_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->toll_cost = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // navi_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->navi_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_online
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_online");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_online = (Py_True == field);
    Py_DECREF(field);
  }
  {  // group_segments
    PyObject * field = PyObject_GetAttrString(_pymsg, "group_segments");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'group_segments'");
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
    if (!deva_navi_msgs__msg__GroupSegmentProto__Sequence__init(&(ros_message->group_segments), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_navi_msgs__msg__GroupSegmentProto__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_navi_msgs__msg__GroupSegmentProto * dest = ros_message->group_segments.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_navi_msgs__msg__group_segment_proto__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // restriction_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "restriction_info");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__restriction_info_proto__convert_from_py(field, &ros_message->restriction_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_poi
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_poi");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__poi_info_proto__convert_from_py(field, &ros_message->end_poi)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tip
    PyObject * field = PyObject_GetAttrString(_pymsg, "tip");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__tip_info_proto__convert_from_py(field, &ros_message->tip)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->end_direction = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_holiday_free
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_holiday_free");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_holiday_free = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_truck_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_truck_path");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_truck_path = (Py_True == field);
    Py_DECREF(field);
  }
  {  // data_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "data_version");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->data_version = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // normal_plan_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "normal_plan_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->normal_plan_time = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // route_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "route_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->route_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // elec_path_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "elec_path_info");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__elec_path_info_proto__convert_from_py(field, &ros_message->elec_path_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // path_description_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_description_info");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__path_description_info_proto__convert_from_py(field, &ros_message->path_description_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // remain_toll_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "remain_toll_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->remain_toll_cost = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // main_route_remain_toll_cost
    PyObject * field = PyObject_GetAttrString(_pymsg, "main_route_remain_toll_cost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->main_route_remain_toll_cost = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__amap_path_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AmapPathInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._amap_path_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AmapPathInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__AmapPathInfoProto * ros_message = (deva_navi_msgs__msg__AmapPathInfoProto *)raw_ros_message;
  {  // all_3d_traffic_lights
    PyObject * field = NULL;
    size_t size = ros_message->all_3d_traffic_lights.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__Coord3DDoubleProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->all_3d_traffic_lights.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "all_3d_traffic_lights", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // segment_infos
    PyObject * field = NULL;
    size_t size = ros_message->segment_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__SegmentInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->segment_infos.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__segment_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "segment_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_icon_points
    PyObject * field = NULL;
    size_t size = ros_message->line_icon_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__LineIconPointProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->line_icon_points.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__line_icon_point_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "line_icon_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // city_adcode_list
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "city_adcode_list");
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
    if (ros_message->city_adcode_list.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int64_t * src = &(ros_message->city_adcode_list.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->city_adcode_list.size * sizeof(int64_t));
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
  {  // via_point_info
    PyObject * field = NULL;
    size_t size = ros_message->via_point_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__ViaPointInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->via_point_info.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "via_point_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_station_info
    PyObject * field = NULL;
    size_t size = ros_message->charge_station_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__ChargeStationInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->charge_station_info.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__charge_station_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "charge_station_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odd_seg_infos
    PyObject * field = NULL;
    size_t size = ros_message->odd_seg_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__OddSegInfoProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->odd_seg_infos.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__odd_seg_info_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "odd_seg_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // plan_channel_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->plan_channel_id.data,
      strlen(ros_message->plan_channel_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "plan_channel_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offline_req_custom_identity_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->offline_req_custom_identity_id.data,
      strlen(ros_message->offline_req_custom_identity_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "offline_req_custom_identity_id", field);
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
  {  // path_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->path_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strategy
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->strategy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strategy", field);
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
  {  // navi_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->navi_id.data,
      strlen(ros_message->navi_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_online
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_online ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_online", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // group_segments
    PyObject * field = NULL;
    size_t size = ros_message->group_segments.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_navi_msgs__msg__GroupSegmentProto * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->group_segments.data[i]);
      PyObject * pyitem = deva_navi_msgs__msg__group_segment_proto__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "group_segments", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // restriction_info
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__restriction_info_proto__convert_to_py(&ros_message->restriction_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "restriction_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_poi
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__poi_info_proto__convert_to_py(&ros_message->end_poi);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_poi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tip
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__tip_info_proto__convert_to_py(&ros_message->tip);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_direction
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->end_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_holiday_free
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_holiday_free ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_holiday_free", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_truck_path
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_truck_path ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_truck_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // data_version
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->data_version);
    {
      int rc = PyObject_SetAttrString(_pymessage, "data_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // normal_plan_time
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->normal_plan_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "normal_plan_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // route_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->route_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "route_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // elec_path_info
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__elec_path_info_proto__convert_to_py(&ros_message->elec_path_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "elec_path_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_description_info
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__path_description_info_proto__convert_to_py(&ros_message->path_description_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_description_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // remain_toll_cost
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->remain_toll_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "remain_toll_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // main_route_remain_toll_cost
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->main_route_remain_toll_cost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "main_route_remain_toll_cost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
