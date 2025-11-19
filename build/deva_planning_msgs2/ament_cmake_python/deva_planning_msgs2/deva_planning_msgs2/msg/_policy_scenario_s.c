// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs2:msg/PolicyScenario.idl
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
#include "deva_planning_msgs2/msg/detail/policy_scenario__struct.h"
#include "deva_planning_msgs2/msg/detail/policy_scenario__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_planning_msgs2/msg/detail/planning_obstacle__functions.h"
#include "deva_planning_msgs2/msg/detail/semantic_tree_node__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_double__functions.h"
#include "deva_planning_msgs2/msg/detail/string2_string__functions.h"
#include "deva_planning_msgs2/msg/detail/tree_trajectory__functions.h"
#include "deva_planning_msgs2/msg/detail/u_int2_string__functions.h"
// end nested array functions include
bool deva_planning_msgs2__msg__u_int2_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__u_int2_string__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__planning_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__planning_obstacle__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__string2_double__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__string2_double__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__semantic_tree_node__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__semantic_tree_node__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__tree_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__tree_trajectory__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs2__msg__string2_string__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs2__msg__string2_string__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs2__msg__policy_scenario__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs2.msg._policy_scenario.PolicyScenario", full_classname_dest, 55) == 0);
  }
  deva_planning_msgs2__msg__PolicyScenario * ros_message = _ros_message;
  {  // tree_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tree_id = (int32_t)PyLong_AsLong(field);
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
  {  // is_from_mdriver
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_from_mdriver");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_from_mdriver = (Py_True == field);
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
  {  // game_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "game_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'game_obstacles'");
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
    if (!deva_planning_msgs2__msg__UInt2String__Sequence__init(&(ros_message->game_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__UInt2String__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__UInt2String * dest = ros_message->game_obstacles.data;
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
  {  // critical_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "critical_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'critical_obstacles'");
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
    if (!deva_planning_msgs2__msg__PlanningObstacle__Sequence__init(&(ros_message->critical_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__PlanningObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__PlanningObstacle * dest = ros_message->critical_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__planning_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tree_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree_score");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tree_score'");
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
    if (!deva_planning_msgs2__msg__String2Double__Sequence__init(&(ros_message->tree_score), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__String2Double__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__String2Double * dest = ros_message->tree_score.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__string2_double__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // rollout_start_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "rollout_start_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rollout_start_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tree_nodes
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree_nodes");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tree_nodes'");
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
    if (!deva_planning_msgs2__msg__SemanticTreeNode__Sequence__init(&(ros_message->tree_nodes), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__SemanticTreeNode__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__SemanticTreeNode * dest = ros_message->tree_nodes.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__semantic_tree_node__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tree_output_trajs
    PyObject * field = PyObject_GetAttrString(_pymsg, "tree_output_trajs");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tree_output_trajs'");
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
    if (!deva_planning_msgs2__msg__TreeTrajectory__Sequence__init(&(ros_message->tree_output_trajs), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs2__msg__TreeTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs2__msg__TreeTrajectory * dest = ros_message->tree_output_trajs.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs2__msg__tree_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs2__msg__policy_scenario__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PolicyScenario */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs2.msg._policy_scenario");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PolicyScenario");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs2__msg__PolicyScenario * ros_message = (deva_planning_msgs2__msg__PolicyScenario *)raw_ros_message;
  {  // tree_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->tree_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tree_id", field);
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
  {  // is_from_mdriver
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_from_mdriver ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_from_mdriver", field);
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
  {  // game_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->game_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__UInt2String * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->game_obstacles.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "game_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // critical_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->critical_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__PlanningObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->critical_obstacles.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__planning_obstacle__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "critical_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tree_score
    PyObject * field = NULL;
    size_t size = ros_message->tree_score.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__String2Double * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tree_score.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__string2_double__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tree_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rollout_start_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rollout_start_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rollout_start_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tree_nodes
    PyObject * field = NULL;
    size_t size = ros_message->tree_nodes.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__SemanticTreeNode * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tree_nodes.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__semantic_tree_node__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tree_nodes", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tree_output_trajs
    PyObject * field = NULL;
    size_t size = ros_message->tree_output_trajs.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs2__msg__TreeTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tree_output_trajs.data[i]);
      PyObject * pyitem = deva_planning_msgs2__msg__tree_trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tree_output_trajs", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
