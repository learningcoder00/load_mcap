// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvInfo.idl
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
#include "environment_model_msgs/msg/detail/env_info__struct.h"
#include "environment_model_msgs/msg/detail/env_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "environment_model_msgs/msg/detail/env_line__functions.h"
#include "environment_model_msgs/msg/detail/env_link__functions.h"
#include "environment_model_msgs/msg/detail/env_object__functions.h"
#include "environment_model_msgs/msg/detail/env_signal__functions.h"
#include "environment_model_msgs/msg/detail/road_boundary__functions.h"
#include "environment_model_msgs/msg/detail/scenario_info__functions.h"
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
#include "environment_model_msgs/msg/detail/vec2d_array__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__env_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__env_line__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__env_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__env_object__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__env_signal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__env_signal__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d_array__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d_array__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d_array__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d_array__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d_array__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__env_link__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__env_link__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__road_boundary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__road_boundary__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__scenario_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__scenario_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("environment_model_msgs.msg._env_info.EnvInfo", full_classname_dest, 44) == 0);
  }
  environment_model_msgs__msg__EnvInfo * ros_message = _ros_message;
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
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // env_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "env_lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'env_lines'");
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
    if (!environment_model_msgs__msg__EnvLine__Sequence__init(&(ros_message->env_lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__EnvLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__EnvLine * dest = ros_message->env_lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__env_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // env_objects
    PyObject * field = PyObject_GetAttrString(_pymsg, "env_objects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'env_objects'");
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
    if (!environment_model_msgs__msg__EnvObject__Sequence__init(&(ros_message->env_objects), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__EnvObject__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__EnvObject * dest = ros_message->env_objects.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__env_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // env_signals
    PyObject * field = PyObject_GetAttrString(_pymsg, "env_signals");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'env_signals'");
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
    if (!environment_model_msgs__msg__EnvSignal__Sequence__init(&(ros_message->env_signals), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__EnvSignal__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__EnvSignal * dest = ros_message->env_signals.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__env_signal__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // junction_box
    PyObject * field = PyObject_GetAttrString(_pymsg, "junction_box");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'junction_box'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->junction_box), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->junction_box.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // env_start_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "env_start_header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->env_start_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // map_header
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->map_header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // map_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->map_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // routing_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "routing_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->routing_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // navi_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->navi_index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_map");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_map = (Py_True == field);
    Py_DECREF(field);
  }
  {  // passable_space
    PyObject * field = PyObject_GetAttrString(_pymsg, "passable_space");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'passable_space'");
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
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&(ros_message->passable_space), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2dArray * dest = ros_message->passable_space.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // law_space
    PyObject * field = PyObject_GetAttrString(_pymsg, "law_space");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'law_space'");
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
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&(ros_message->law_space), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2dArray * dest = ros_message->law_space.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // roadline_final
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadline_final");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'roadline_final'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->roadline_final), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->roadline_final.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // roadline
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadline");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'roadline'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->roadline), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->roadline.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // law_space_merged
    PyObject * field = PyObject_GetAttrString(_pymsg, "law_space_merged");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'law_space_merged'");
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
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&(ros_message->law_space_merged), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2dArray * dest = ros_message->law_space_merged.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // meg_map_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "meg_map_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meg_map_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // channel_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "channel_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->channel_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // dist_sd_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "dist_sd_junction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dist_sd_junction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hdair_driveline
    PyObject * field = PyObject_GetAttrString(_pymsg, "hdair_driveline");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'hdair_driveline'");
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
    if (!environment_model_msgs__msg__Vec2dArray__Sequence__init(&(ros_message->hdair_driveline), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2dArray__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2dArray * dest = ros_message->hdair_driveline.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__vec2d_array__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // links
    PyObject * field = PyObject_GetAttrString(_pymsg, "links");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'links'");
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
    if (!environment_model_msgs__msg__EnvLink__Sequence__init(&(ros_message->links), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__EnvLink__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__EnvLink * dest = ros_message->links.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__env_link__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
  {  // road_boundaries
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_boundaries");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'road_boundaries'");
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
    if (!environment_model_msgs__msg__RoadBoundary__Sequence__init(&(ros_message->road_boundaries), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__RoadBoundary__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__RoadBoundary * dest = ros_message->road_boundaries.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__road_boundary__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // scenario_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "scenario_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scenario_info'");
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
    if (!environment_model_msgs__msg__ScenarioInfo__Sequence__init(&(ros_message->scenario_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__ScenarioInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__ScenarioInfo * dest = ros_message->scenario_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__scenario_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // highway_scene
    PyObject * field = PyObject_GetAttrString(_pymsg, "highway_scene");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->highway_scene = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__env_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvInfo * ros_message = (environment_model_msgs__msg__EnvInfo *)raw_ros_message;
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
  {  // index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // env_lines
    PyObject * field = NULL;
    size_t size = ros_message->env_lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__EnvLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->env_lines.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__env_line__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "env_lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // env_objects
    PyObject * field = NULL;
    size_t size = ros_message->env_objects.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__EnvObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->env_objects.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__env_object__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "env_objects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // env_signals
    PyObject * field = NULL;
    size_t size = ros_message->env_signals.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__EnvSignal * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->env_signals.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__env_signal__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "env_signals", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // junction_box
    PyObject * field = NULL;
    size_t size = ros_message->junction_box.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->junction_box.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "junction_box", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // env_start_header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->env_start_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "env_start_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->map_header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->map_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // routing_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->routing_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "routing_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navi_index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->navi_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_map
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_map ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // passable_space
    PyObject * field = NULL;
    size_t size = ros_message->passable_space.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->passable_space.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "passable_space", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // law_space
    PyObject * field = NULL;
    size_t size = ros_message->law_space.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->law_space.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "law_space", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadline_final
    PyObject * field = NULL;
    size_t size = ros_message->roadline_final.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->roadline_final.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "roadline_final", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadline
    PyObject * field = NULL;
    size_t size = ros_message->roadline.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->roadline.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "roadline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // law_space_merged
    PyObject * field = NULL;
    size_t size = ros_message->law_space_merged.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->law_space_merged.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "law_space_merged", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meg_map_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meg_map_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meg_map_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channel_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->channel_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "channel_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dist_sd_junction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dist_sd_junction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dist_sd_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hdair_driveline
    PyObject * field = NULL;
    size_t size = ros_message->hdair_driveline.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2dArray * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->hdair_driveline.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__vec2d_array__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "hdair_driveline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // links
    PyObject * field = NULL;
    size_t size = ros_message->links.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__EnvLink * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->links.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__env_link__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "links", field);
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
  {  // road_boundaries
    PyObject * field = NULL;
    size_t size = ros_message->road_boundaries.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__RoadBoundary * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->road_boundaries.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__road_boundary__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "road_boundaries", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scenario_info
    PyObject * field = NULL;
    size_t size = ros_message->scenario_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__ScenarioInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->scenario_info.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__scenario_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "scenario_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // highway_scene
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->highway_scene);
    {
      int rc = PyObject_SetAttrString(_pymessage, "highway_scene", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
