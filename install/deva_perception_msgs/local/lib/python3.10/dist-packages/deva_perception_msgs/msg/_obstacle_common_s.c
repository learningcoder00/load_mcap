// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/ObstacleCommon.idl
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
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.h"
#include "deva_perception_msgs/msg/detail/obstacle_common__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_common_msgs/msg/detail/point2d__functions.h"
#include "deva_perception_msgs/msg/detail/associated_info__functions.h"
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_localization_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_localization_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__associated_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__associated_info__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__extra_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__extra_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__point2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__point2d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__obstacle_common__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("deva_perception_msgs.msg._obstacle_common.ObstacleCommon", full_classname_dest, 56) == 0);
  }
  deva_perception_msgs__msg__ObstacleCommon * ros_message = _ros_message;
  {  // obs_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "obs_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->obs_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
    if (!geometry_msgs__msg__Point__Sequence__init(&(ros_message->points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Point__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Point * dest = ros_message->points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // obs_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "obs_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obs_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // dims
    PyObject * field = PyObject_GetAttrString(_pymsg, "dims");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->dims)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!deva_localization_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_length = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // tracking_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tracking_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bounding_box
    PyObject * field = PyObject_GetAttrString(_pymsg, "bounding_box");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box__convert_from_py(field, &ros_message->bounding_box)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // miss_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "miss_length");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->miss_length = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_stable_tracked
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stable_tracked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stable_tracked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // in_parking_slot
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_parking_slot");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_parking_slot = (Py_True == field);
    Py_DECREF(field);
  }
  {  // associated_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "associated_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'associated_infos'");
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
    if (!deva_perception_msgs__msg__AssociatedInfo__Sequence__init(&(ros_message->associated_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__AssociatedInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__AssociatedInfo * dest = ros_message->associated_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__associated_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // extra_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "extra_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'extra_infos'");
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
    if (!deva_perception_msgs__msg__ExtraInfo__Sequence__init(&(ros_message->extra_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__ExtraInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__ExtraInfo * dest = ros_message->extra_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__extra_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pixel_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "pixel_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pixel_points'");
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
    if (!deva_common_msgs__msg__Point2d__Sequence__init(&(ros_message->pixel_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_common_msgs__msg__Point2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_common_msgs__msg__Point2d * dest = ros_message->pixel_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_common_msgs__msg__point2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_perception_msgs__msg__obstacle_common__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ObstacleCommon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._obstacle_common");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ObstacleCommon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__ObstacleCommon * ros_message = (deva_perception_msgs__msg__ObstacleCommon *)raw_ros_message;
  {  // obs_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->obs_name.data,
      strlen(ros_message->obs_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs_name", field);
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
    geometry_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->points.data[i]);
      PyObject * pyitem = geometry_msgs__msg__point__convert_to_py(item);
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
  {  // obs_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->obs_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obs_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dims
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->dims);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dims", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = deva_localization_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->track_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tracking_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bounding_box
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box__convert_to_py(&ros_message->bounding_box);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bounding_box", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // miss_length
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->miss_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "miss_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stable_tracked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stable_tracked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stable_tracked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // in_parking_slot
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_parking_slot ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_parking_slot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // associated_infos
    PyObject * field = NULL;
    size_t size = ros_message->associated_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__AssociatedInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->associated_infos.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__associated_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "associated_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extra_infos
    PyObject * field = NULL;
    size_t size = ros_message->extra_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__ExtraInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->extra_infos.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__extra_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "extra_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pixel_points
    PyObject * field = NULL;
    size_t size = ros_message->pixel_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_common_msgs__msg__Point2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pixel_points.data[i]);
      PyObject * pyitem = deva_common_msgs__msg__point2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pixel_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
