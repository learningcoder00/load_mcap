// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
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
#include "deva_gaode_routing_msgs/msg/detail/link__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/link__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/coordinate__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/feature_point__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/guidance__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__link_attribute__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_attribute__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__coordinate__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__coordinate__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__topology__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__topology__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_curvature__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_curvature__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__guidance__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__guidance__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__feature_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__feature_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__node__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__feature_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__feature_point__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__lane_by_id__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__lane_by_id__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__j6m_intersection_entry_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__j6m_intersection_entry_info__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__link_id_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__link_id_type__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__link__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[39];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._link.Link", full_classname_dest, 38) == 0);
  }
  deva_gaode_routing_msgs__msg__Link * ros_message = _ros_message;
  {  // link_attribute
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_attribute");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_attribute__convert_from_py(field, &ros_message->link_attribute)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // coordinate
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinate");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'coordinate'");
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
    if (!deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(&(ros_message->coordinate), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Coordinate__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Coordinate * dest = ros_message->coordinate.data;
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
  {  // raw_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "raw_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->raw_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // topology
    PyObject * field = PyObject_GetAttrString(_pymsg, "topology");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__topology__convert_from_py(field, &ros_message->topology)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // link_curvature
    PyObject * field = PyObject_GetAttrString(_pymsg, "link_curvature");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__link_curvature__convert_from_py(field, &ros_message->link_curvature)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // guidance
    PyObject * field = PyObject_GetAttrString(_pymsg, "guidance");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'guidance'");
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
    if (!deva_gaode_routing_msgs__msg__Guidance__Sequence__init(&(ros_message->guidance), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__Guidance__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__Guidance * dest = ros_message->guidance.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__guidance__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // start_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(field, &ros_message->start_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "end_id");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__node_id_type__convert_from_py(field, &ros_message->end_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // feature_point_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "feature_point_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'feature_point_ids'");
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
    if (!deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(&(ros_message->feature_point_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__FeatureIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__FeatureIDType * dest = ros_message->feature_point_ids.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__feature_id_type__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // start
    PyObject * field = PyObject_GetAttrString(_pymsg, "start");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__node__convert_from_py(field, &ros_message->start)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // end
    PyObject * field = PyObject_GetAttrString(_pymsg, "end");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__node__convert_from_py(field, &ros_message->end)) {
      Py_DECREF(field);
      return false;
    }
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
    if (!deva_gaode_routing_msgs__msg__FeaturePoint__Sequence__init(&(ros_message->feature_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__FeaturePoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__FeaturePoint * dest = ros_message->feature_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__feature_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
    if (!deva_gaode_routing_msgs__msg__LaneById__Sequence__init(&(ros_message->lanes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LaneById__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LaneById * dest = ros_message->lanes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__lane_by_id__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // j6m_intersection_entry_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6m_intersection_entry_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'j6m_intersection_entry_infos'");
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
    if (!deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence__init(&(ros_message->j6m_intersection_entry_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * dest = ros_message->j6m_intersection_entry_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__j6m_intersection_entry_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // j6m_lane_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6m_lane_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'j6m_lane_ids'");
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
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&(ros_message->j6m_lane_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LinkIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * dest = ros_message->j6m_lane_ids.data;
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
  {  // j6m_link_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "j6m_link_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'j6m_link_ids'");
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
    if (!deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(&(ros_message->j6m_link_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__LinkIDType__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * dest = ros_message->j6m_link_ids.data;
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
PyObject * deva_gaode_routing_msgs__msg__link__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Link */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._link");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Link");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__Link * ros_message = (deva_gaode_routing_msgs__msg__Link *)raw_ros_message;
  {  // link_attribute
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_attribute__convert_to_py(&ros_message->link_attribute);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_attribute", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinate
    PyObject * field = NULL;
    size_t size = ros_message->coordinate.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Coordinate * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->coordinate.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "coordinate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // raw_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->raw_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "raw_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // topology
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__topology__convert_to_py(&ros_message->topology);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "topology", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // link_curvature
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__link_curvature__convert_to_py(&ros_message->link_curvature);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "link_curvature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // guidance
    PyObject * field = NULL;
    size_t size = ros_message->guidance.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__Guidance * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->guidance.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__guidance__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "guidance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(&ros_message->start_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end_id
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__node_id_type__convert_to_py(&ros_message->end_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // feature_point_ids
    PyObject * field = NULL;
    size_t size = ros_message->feature_point_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__FeatureIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->feature_point_ids.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__feature_id_type__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "feature_point_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__node__convert_to_py(&ros_message->start);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "start", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // end
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__node__convert_to_py(&ros_message->end);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "end", field);
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
    deva_gaode_routing_msgs__msg__FeaturePoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->feature_points.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__feature_point__convert_to_py(item);
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
    deva_gaode_routing_msgs__msg__LaneById * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lanes.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__lane_by_id__convert_to_py(item);
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
  {  // j6m_intersection_entry_infos
    PyObject * field = NULL;
    size_t size = ros_message->j6m_intersection_entry_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->j6m_intersection_entry_infos.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__j6m_intersection_entry_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "j6m_intersection_entry_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6m_lane_ids
    PyObject * field = NULL;
    size_t size = ros_message->j6m_lane_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->j6m_lane_ids.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "j6m_lane_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // j6m_link_ids
    PyObject * field = NULL;
    size_t size = ros_message->j6m_link_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__LinkIDType * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->j6m_link_ids.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "j6m_link_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
