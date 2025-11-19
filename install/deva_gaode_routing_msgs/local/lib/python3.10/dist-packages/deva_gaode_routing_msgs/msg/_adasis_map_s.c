// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
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
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/adasis_map__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/lane__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/node__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/stop_line__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_position__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_position__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_meta_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_meta_data__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_segment__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_segment__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_stub__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_stub__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_profile_short__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_profile_short__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__ehp_profile_long__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__ehp_profile_long__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__feature_point_by_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__feature_point_by_id__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__lane__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__stop_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__stop_line__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__intersection_road_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__intersection_road_node__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__intersection_road__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__intersection_road__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__position_match_link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__position_match_link__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__heterogeneous_match_link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__heterogeneous_match_link__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__route_guide_response__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__route_guide_response__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__j6m_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__j6m_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__adasis_map__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._adasis_map.AdasisMap", full_classname_dest, 49) == 0);
  }
  deva_gaode_routing_msgs__msg__AdasisMap * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_update_ehp_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_position");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_position = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_position
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_position");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__ehp_position__convert_from_py(field, &ros_message->ehp_position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_update_ehp_meta_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_meta_data");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_meta_data = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_meta_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_meta_data");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__ehp_meta_data__convert_from_py(field, &ros_message->ehp_meta_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // is_update_ehp_segments
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_segments");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_segments = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_segments
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_segments");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ehp_segments'");
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
    if (!deva_gaode_routing_msgs__msg__EhpSegment__Sequence__init(&(ros_message->ehp_segments), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__EhpSegment__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__EhpSegment * dest = ros_message->ehp_segments.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__ehp_segment__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_update_ehp_stubs
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_stubs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_stubs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_stubs
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_stubs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ehp_stubs'");
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
    if (!deva_gaode_routing_msgs__msg__EhpStub__Sequence__init(&(ros_message->ehp_stubs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__EhpStub__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__EhpStub * dest = ros_message->ehp_stubs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__ehp_stub__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_update_ehp_profile_shorts
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_profile_shorts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_profile_shorts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_profile_shorts
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_profile_shorts");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ehp_profile_shorts'");
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
    if (!deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence__init(&(ros_message->ehp_profile_shorts), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__EhpProfileShort__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__EhpProfileShort * dest = ros_message->ehp_profile_shorts.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__ehp_profile_short__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // is_update_ehp_profile_longs
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_update_ehp_profile_longs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->is_update_ehp_profile_longs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ehp_profile_longs
    PyObject * field = PyObject_GetAttrString(_pymsg, "ehp_profile_longs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ehp_profile_longs'");
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
    if (!deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence__init(&(ros_message->ehp_profile_longs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__EhpProfileLong__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__EhpProfileLong * dest = ros_message->ehp_profile_longs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__ehp_profile_long__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // link
    PyObject * field = PyObject_GetAttrString(_pymsg, "link");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'link'");
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
    if (!deva_gaode_routing_msgs__msg__Link__Sequence__init(&(ros_message->link), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Link__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Link * dest = ros_message->link.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__link__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // node
    PyObject * field = PyObject_GetAttrString(_pymsg, "node");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'node'");
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
    if (!deva_gaode_routing_msgs__msg__Node__Sequence__init(&(ros_message->node), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Node__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Node * dest = ros_message->node.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // feature_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "feature_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'feature_points'");
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
    if (!deva_gaode_routing_msgs__msg__FeaturePointById__Sequence__init(&(ros_message->feature_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__FeaturePointById__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__FeaturePointById * dest = ros_message->feature_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__feature_point_by_id__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lanes
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lanes'");
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
    if (!deva_gaode_routing_msgs__msg__LANE__Sequence__init(&(ros_message->lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LANE__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LANE * dest = ros_message->lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__lane__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // stoplines
    PyObject * field = PyObject_GetAttrString(_pymsg, "stoplines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'stoplines'");
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
    if (!deva_gaode_routing_msgs__msg__StopLine__Sequence__init(&(ros_message->stoplines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__StopLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__StopLine * dest = ros_message->stoplines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__stop_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // intersection_road_nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_road_nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intersection_road_nodes'");
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
    if (!deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence__init(&(ros_message->intersection_road_nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__IntersectionRoadNode__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__IntersectionRoadNode * dest = ros_message->intersection_road_nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__intersection_road_node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // intersection_roads
    PyObject * field = PyObject_GetAttrString(_pymsg, "intersection_roads");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'intersection_roads'");
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
    if (!deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence__init(&(ros_message->intersection_roads), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__IntersectionRoad__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__IntersectionRoad * dest = ros_message->intersection_roads.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__intersection_road__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // position_match_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_match_link");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__position_match_link__convert_from_py(field, &ros_message->position_match_link)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // heterogeneous_match_link
    PyObject * field = PyObject_GetAttrString(_pymsg, "heterogeneous_match_link");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__heterogeneous_match_link__convert_from_py(field, &ros_message->heterogeneous_match_link)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // route_guide_response
    PyObject * field = PyObject_GetAttrString(_pymsg, "route_guide_response");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__route_guide_response__convert_from_py(field, &ros_message->route_guide_response)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // j6m_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6m_data");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__j6m_data__convert_from_py(field, &ros_message->j6m_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__adasis_map__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AdasisMap */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._adasis_map");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AdasisMap");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__AdasisMap * ros_message = (deva_gaode_routing_msgs__msg__AdasisMap *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
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
  {  // is_update_ehp_position
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_position);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_position
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__ehp_position__convert_to_py(&ros_message->ehp_position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ehp_position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_update_ehp_meta_data
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_meta_data);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_meta_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_meta_data
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__ehp_meta_data__convert_to_py(&ros_message->ehp_meta_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ehp_meta_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_update_ehp_segments
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_segments);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_segments", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_segments
    PyObject * field = NULL;
    size_t size = ros_message->ehp_segments.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__EhpSegment * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ehp_segments.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__ehp_segment__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ehp_segments", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_update_ehp_stubs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_stubs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_stubs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_stubs
    PyObject * field = NULL;
    size_t size = ros_message->ehp_stubs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__EhpStub * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ehp_stubs.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__ehp_stub__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ehp_stubs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_update_ehp_profile_shorts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_profile_shorts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_profile_shorts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_profile_shorts
    PyObject * field = NULL;
    size_t size = ros_message->ehp_profile_shorts.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__EhpProfileShort * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ehp_profile_shorts.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__ehp_profile_short__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ehp_profile_shorts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_update_ehp_profile_longs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->is_update_ehp_profile_longs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_update_ehp_profile_longs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ehp_profile_longs
    PyObject * field = NULL;
    size_t size = ros_message->ehp_profile_longs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__EhpProfileLong * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ehp_profile_longs.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__ehp_profile_long__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ehp_profile_longs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link
    PyObject * field = NULL;
    size_t size = ros_message->link.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Link * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->link.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__link__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // node
    PyObject * field = NULL;
    size_t size = ros_message->node.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Node * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->node.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__node__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "node", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feature_points
    PyObject * field = NULL;
    size_t size = ros_message->feature_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__FeaturePointById * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->feature_points.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__feature_point_by_id__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "feature_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanes
    PyObject * field = NULL;
    size_t size = ros_message->lanes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LANE * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lanes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__lane__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lanes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stoplines
    PyObject * field = NULL;
    size_t size = ros_message->stoplines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__StopLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->stoplines.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__stop_line__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "stoplines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_road_nodes
    PyObject * field = NULL;
    size_t size = ros_message->intersection_road_nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__IntersectionRoadNode * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intersection_road_nodes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__intersection_road_node__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "intersection_road_nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // intersection_roads
    PyObject * field = NULL;
    size_t size = ros_message->intersection_roads.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__IntersectionRoad * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->intersection_roads.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__intersection_road__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "intersection_roads", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_match_link
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__position_match_link__convert_to_py(&ros_message->position_match_link);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_match_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heterogeneous_match_link
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__heterogeneous_match_link__convert_to_py(&ros_message->heterogeneous_match_link);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "heterogeneous_match_link", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // route_guide_response
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__route_guide_response__convert_to_py(&ros_message->route_guide_response);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "route_guide_response", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6m_data
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__j6m_data__convert_to_py(&ros_message->j6m_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "j6m_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
