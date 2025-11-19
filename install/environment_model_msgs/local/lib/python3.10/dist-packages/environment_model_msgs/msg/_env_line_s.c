// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from environment_model_msgs:msg/EnvLine.idl
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
#include "environment_model_msgs/msg/detail/env_line__struct.h"
#include "environment_model_msgs/msg/detail/env_line__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "environment_model_msgs/msg/detail/env_point__functions.h"
#include "environment_model_msgs/msg/detail/map_ids__functions.h"
#include "environment_model_msgs/msg/detail/pair_double_int__functions.h"
#include "environment_model_msgs/msg/detail/pair_int__functions.h"
#include "environment_model_msgs/msg/detail/pair_string__functions.h"
#include "environment_model_msgs/msg/detail/pair_string_double__functions.h"
#include "environment_model_msgs/msg/detail/vec2d__functions.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"
// end nested array functions include
bool environment_model_msgs__msg__env_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__env_point__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_int__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_int__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_double_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_double_int__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__road_struct_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__road_struct_type__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_string__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_string_double__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_string_double__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__navi_score__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__navi_score__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__virtual_line_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__virtual_line_info__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__vec2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__vec2d__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__pair_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__pair_int__convert_to_py(void * raw_ros_message);
bool environment_model_msgs__msg__map_ids__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * environment_model_msgs__msg__map_ids__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool environment_model_msgs__msg__env_line__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("environment_model_msgs.msg._env_line.EnvLine", full_classname_dest, 44) == 0);
  }
  environment_model_msgs__msg__EnvLine * ros_message = _ros_message;
  {  // env_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "env_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'env_points'");
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
    if (!environment_model_msgs__msg__EnvPoint__Sequence__init(&(ros_message->env_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__EnvPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__EnvPoint * dest = ros_message->env_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__env_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // last_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_ids");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'last_ids'");
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
    if (!environment_model_msgs__msg__PairInt__Sequence__init(&(ros_message->last_ids), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__PairInt__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__PairInt * dest = ros_message->last_ids.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__pair_int__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // perception_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "perception_ids");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__pair_int__convert_from_py(field, &ros_message->perception_ids)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ego_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ego_l
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_l");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_l = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_on_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_on_road");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_on_road = (Py_True == field);
    Py_DECREF(field);
  }
  {  // routing_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "routing_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->routing_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_reverse
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_reverse");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_reverse = (Py_True == field);
    Py_DECREF(field);
  }
  {  // enum_turn_scenario
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_turn_scenario");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_turn_scenario = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // merge_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "merge_lines");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->merge_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->merge_lines.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'merge_lines'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->merge_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->merge_lines.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // split_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "split_lines");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->split_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->split_lines.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'split_lines'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->split_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->split_lines.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // merge_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "merge_pos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'merge_pos'");
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
    if (!environment_model_msgs__msg__PairDoubleInt__Sequence__init(&(ros_message->merge_pos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__PairDoubleInt__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__PairDoubleInt * dest = ros_message->merge_pos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__pair_double_int__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lk_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "lk_lines");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->lk_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->lk_lines.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lk_lines'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->lk_lines), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->lk_lines.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // left_ids_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_ids_map");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'left_ids_map'");
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
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&(ros_message->left_ids_map), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__MapIds__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__MapIds * dest = ros_message->left_ids_map.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__map_ids__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // right_ids_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_ids_map");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'right_ids_map'");
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
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&(ros_message->right_ids_map), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__MapIds__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__MapIds * dest = ros_message->right_ids_map.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__map_ids__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // enum_road_struct_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "enum_road_struct_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->enum_road_struct_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_struct_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_struct_type");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__road_struct_type__convert_from_py(field, &ros_message->road_struct_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // signal_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "signal_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'signal_infos'");
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
    if (!environment_model_msgs__msg__PairString__Sequence__init(&(ros_message->signal_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__PairString__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__PairString * dest = ros_message->signal_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__pair_string__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // object_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "object_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'object_infos'");
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
    if (!environment_model_msgs__msg__PairStringDouble__Sequence__init(&(ros_message->object_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__PairStringDouble__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__PairStringDouble * dest = ros_message->object_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__pair_string_double__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // navi_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_score");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__navi_score__convert_from_py(field, &ros_message->navi_score)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // virtual_line_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_line_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'virtual_line_infos'");
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
    if (!environment_model_msgs__msg__VirtualLineInfo__Sequence__init(&(ros_message->virtual_line_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__VirtualLineInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__VirtualLineInfo * dest = ros_message->virtual_line_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__virtual_line_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // left_road_bound_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_road_bound_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'left_road_bound_line'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->left_road_bound_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->left_road_bound_line.data;
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
  {  // right_road_bound_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_road_bound_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'right_road_bound_line'");
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
    if (!environment_model_msgs__msg__Vec2d__Sequence__init(&(ros_message->right_road_bound_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__Vec2d__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__Vec2d * dest = ros_message->right_road_bound_line.data;
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
  {  // lane_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lane_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->lane_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lane_sequence
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_sequence");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_sequence'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->lane_sequence), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->lane_sequence.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // lane_seq_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_seq_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_seq_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // channel_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "channel_id");
    if (!field) {
      return false;
    }
    if (!environment_model_msgs__msg__pair_int__convert_from_py(field, &ros_message->channel_id)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // virtual_line_to
    PyObject * field = PyObject_GetAttrString(_pymsg, "virtual_line_to");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->virtual_line_to = (Py_True == field);
    Py_DECREF(field);
  }
  {  // midd_line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "midd_line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->midd_line_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // overwide_pairs
    PyObject * field = PyObject_GetAttrString(_pymsg, "overwide_pairs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'overwide_pairs'");
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
    if (!environment_model_msgs__msg__MapIds__Sequence__init(&(ros_message->overwide_pairs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create environment_model_msgs__msg__MapIds__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    environment_model_msgs__msg__MapIds * dest = ros_message->overwide_pairs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!environment_model_msgs__msg__map_ids__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // usemdriver
    PyObject * field = PyObject_GetAttrString(_pymsg, "usemdriver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->usemdriver = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * environment_model_msgs__msg__env_line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EnvLine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("environment_model_msgs.msg._env_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EnvLine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  environment_model_msgs__msg__EnvLine * ros_message = (environment_model_msgs__msg__EnvLine *)raw_ros_message;
  {  // env_points
    PyObject * field = NULL;
    size_t size = ros_message->env_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__EnvPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->env_points.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__env_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "env_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_ids
    PyObject * field = NULL;
    size_t size = ros_message->last_ids.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__PairInt * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->last_ids.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__pair_int__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "last_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // perception_ids
    PyObject * field = NULL;
    field = environment_model_msgs__msg__pair_int__convert_to_py(&ros_message->perception_ids);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "perception_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_l
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_l);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_l", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_on_road
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_on_road ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_on_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // routing_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->routing_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "routing_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_reverse
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_reverse ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_reverse", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enum_turn_scenario
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_turn_scenario);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_turn_scenario", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // merge_lines
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "merge_lines");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->merge_lines.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->merge_lines.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->merge_lines.size * sizeof(int32_t));
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
  {  // split_lines
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "split_lines");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->split_lines.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->split_lines.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->split_lines.size * sizeof(int32_t));
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
  {  // merge_pos
    PyObject * field = NULL;
    size_t size = ros_message->merge_pos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__PairDoubleInt * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->merge_pos.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__pair_double_int__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "merge_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lk_lines
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "lk_lines");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->lk_lines.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->lk_lines.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->lk_lines.size * sizeof(int32_t));
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
  {  // left_ids_map
    PyObject * field = NULL;
    size_t size = ros_message->left_ids_map.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__MapIds * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->left_ids_map.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__map_ids__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "left_ids_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_ids_map
    PyObject * field = NULL;
    size_t size = ros_message->right_ids_map.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__MapIds * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->right_ids_map.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__map_ids__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "right_ids_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // enum_road_struct_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->enum_road_struct_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "enum_road_struct_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_struct_type
    PyObject * field = NULL;
    field = environment_model_msgs__msg__road_struct_type__convert_to_py(&ros_message->road_struct_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_struct_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // signal_infos
    PyObject * field = NULL;
    size_t size = ros_message->signal_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__PairString * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->signal_infos.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__pair_string__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "signal_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // object_infos
    PyObject * field = NULL;
    size_t size = ros_message->object_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__PairStringDouble * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->object_infos.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__pair_string_double__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "object_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navi_score
    PyObject * field = NULL;
    field = environment_model_msgs__msg__navi_score__convert_to_py(&ros_message->navi_score);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_line_infos
    PyObject * field = NULL;
    size_t size = ros_message->virtual_line_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__VirtualLineInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->virtual_line_infos.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__virtual_line_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "virtual_line_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_road_bound_line
    PyObject * field = NULL;
    size_t size = ros_message->left_road_bound_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->left_road_bound_line.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "left_road_bound_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_road_bound_line
    PyObject * field = NULL;
    size_t size = ros_message->right_road_bound_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__Vec2d * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->right_road_bound_line.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "right_road_bound_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lane_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->lane_id.data,
      strlen(ros_message->lane_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_sequence
    PyObject * field = NULL;
    size_t size = ros_message->lane_sequence.size;
    rosidl_runtime_c__String * src = ros_message->lane_sequence.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_sequence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_seq_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->lane_seq_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_seq_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // channel_id
    PyObject * field = NULL;
    field = environment_model_msgs__msg__pair_int__convert_to_py(&ros_message->channel_id);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "channel_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // virtual_line_to
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->virtual_line_to ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "virtual_line_to", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // midd_line_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->midd_line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "midd_line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overwide_pairs
    PyObject * field = NULL;
    size_t size = ros_message->overwide_pairs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    environment_model_msgs__msg__MapIds * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->overwide_pairs.data[i]);
      PyObject * pyitem = environment_model_msgs__msg__map_ids__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "overwide_pairs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usemdriver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->usemdriver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usemdriver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
