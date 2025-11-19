// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs2:msg/StateContext.idl
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
#include "deva_planning_msgs2/msg/detail/state_context__struct.h"
#include "deva_planning_msgs2/msg/detail/state_context__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_planning_msgs2/msg/detail/lane_bind_info__functions.h"
#include "deva_planning_msgs2/msg/detail/policy_scenario__functions.h"
#include "deva_planning_msgs2/msg/detail/ref2_sl_boundary__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_u_int__functions.h"
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__policy_scenario__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__policy_scenario__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__u_int2_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__u_int2_string__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__lane_bind_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__lane_bind_info__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__ref2_sl_boundary__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__ref2_sl_boundary__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__string2_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__string2_string__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__string2_u_int__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__string2_u_int__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs2__msg__state_context__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("deva_planning_msgs2.msg._state_context.StateContext", full_classname_dest, 51) == 0);
  }
  deva_planning_msgs2__msg__StateContext * ros_message = _ros_message;
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
  {  // behavior_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "behavior_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->behavior_type = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // current_turn_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_turn_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_turn_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_mdriver_ego
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_mdriver_ego");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->use_mdriver_ego = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // target_line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->target_line_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // current_line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_line_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // front_obstacle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_obstacle_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->front_obstacle_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // rear_obstacle_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_obstacle_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->rear_obstacle_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lane_change_task
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_change_task");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_change_task = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // best_tree_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "best_tree_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->best_tree_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // mcts_trees
    PyObject * field = PyObject_GetAttrString(_pymsg, "mcts_trees");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'mcts_trees'");
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
    if (!deva_planning_msgs2__msg__PolicyScenario__Sequence__init(&(ros_message->mcts_trees), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__PolicyScenario__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__PolicyScenario * dest = ros_message->mcts_trees.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__policy_scenario__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tagged_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "tagged_obstacle");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tagged_obstacle'");
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
    if (!deva_planning_msgs2__msg__UInt2String__Sequence__init(&(ros_message->tagged_obstacle), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__UInt2String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__UInt2String * dest = ros_message->tagged_obstacle.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__u_int2_string__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lane_bind_infos
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_bind_infos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lane_bind_infos'");
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
    if (!deva_planning_msgs2__msg__LaneBindInfo__Sequence__init(&(ros_message->lane_bind_infos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__LaneBindInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__LaneBindInfo * dest = ros_message->lane_bind_infos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__lane_bind_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ego_sl_on_ref_lines
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_sl_on_ref_lines");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ego_sl_on_ref_lines'");
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
    if (!deva_planning_msgs2__msg__Ref2SLBoundary__Sequence__init(&(ros_message->ego_sl_on_ref_lines), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__Ref2SLBoundary__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__Ref2SLBoundary * dest = ros_message->ego_sl_on_ref_lines.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__ref2_sl_boundary__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lane_change_cancel_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_change_cancel_reason");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lane_change_cancel_reason = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scalable_flags
    PyObject * field = PyObject_GetAttrString(_pymsg, "scalable_flags");
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
      Py_ssize_t size = view.len / sizeof(uint8_t);
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->scalable_flags), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->scalable_flags.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scalable_flags'");
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
      if (!rosidl_runtime_c__uint8__Sequence__init(&(ros_message->scalable_flags), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create uint8__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      uint8_t * dest = ros_message->scalable_flags.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        uint8_t tmp = (uint8_t)PyLong_AsUnsignedLong(item);

        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // scalable_multimap
    PyObject * field = PyObject_GetAttrString(_pymsg, "scalable_multimap");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scalable_multimap'");
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
    if (!deva_planning_msgs2__msg__String2String__Sequence__init(&(ros_message->scalable_multimap), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__String2String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__String2String * dest = ros_message->scalable_multimap.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__string2_string__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // scalable_stream
    PyObject * field = PyObject_GetAttrString(_pymsg, "scalable_stream");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'scalable_stream'");
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
    if (!deva_planning_msgs2__msg__String2UInt__Sequence__init(&(ros_message->scalable_stream), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__String2UInt__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__String2UInt * dest = ros_message->scalable_stream.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__string2_u_int__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_planning_msgs2__msg__state_context__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of StateContext */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs2.msg._state_context");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "StateContext");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs2__msg__StateContext * ros_message = (deva_planning_msgs2__msg__StateContext *)raw_ros_message;
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
  {  // behavior_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->behavior_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "behavior_type", field);
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
  {  // current_turn_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_turn_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_turn_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_mdriver_ego
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->use_mdriver_ego);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_mdriver_ego", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_line_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->target_line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_line_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->current_line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_obstacle_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->front_obstacle_id.data,
      strlen(ros_message->front_obstacle_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_obstacle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_obstacle_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->rear_obstacle_id.data,
      strlen(ros_message->rear_obstacle_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_obstacle_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_change_task
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_change_task);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_change_task", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // best_tree_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->best_tree_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "best_tree_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mcts_trees
    PyObject * field = NULL;
    size_t size = ros_message->mcts_trees.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__PolicyScenario * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->mcts_trees.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__policy_scenario__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "mcts_trees", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tagged_obstacle
    PyObject * field = NULL;
    size_t size = ros_message->tagged_obstacle.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__UInt2String * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tagged_obstacle.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__u_int2_string__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tagged_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_bind_infos
    PyObject * field = NULL;
    size_t size = ros_message->lane_bind_infos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__LaneBindInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lane_bind_infos.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__lane_bind_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "lane_bind_infos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_sl_on_ref_lines
    PyObject * field = NULL;
    size_t size = ros_message->ego_sl_on_ref_lines.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__Ref2SLBoundary * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ego_sl_on_ref_lines.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__ref2_sl_boundary__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ego_sl_on_ref_lines", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_change_cancel_reason
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lane_change_cancel_reason);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_change_cancel_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scalable_flags
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "scalable_flags");
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
    if (itemsize != sizeof(uint8_t)) {
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
    if (ros_message->scalable_flags.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      uint8_t * src = &(ros_message->scalable_flags.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->scalable_flags.size * sizeof(uint8_t));
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
  {  // scalable_multimap
    PyObject * field = NULL;
    size_t size = ros_message->scalable_multimap.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__String2String * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->scalable_multimap.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__string2_string__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "scalable_multimap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scalable_stream
    PyObject * field = NULL;
    size_t size = ros_message->scalable_stream.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__String2UInt * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->scalable_stream.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__string2_u_int__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "scalable_stream", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
