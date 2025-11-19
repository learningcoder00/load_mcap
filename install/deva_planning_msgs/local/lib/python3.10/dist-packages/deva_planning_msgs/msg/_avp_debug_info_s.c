// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/AvpDebugInfo.idl
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
#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.h"
#include "deva_planning_msgs/msg/detail/avp_debug_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_planning_msgs/msg/detail/avp_ref_line__functions.h"
#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point_vec__functions.h"
#include "deva_planning_msgs/msg/detail/mpc_path_data__functions.h"
#include "deva_planning_msgs/msg/detail/path_point__functions.h"
// end nested array functions include
bool deva_planning_msgs__msg__avp_ref_line__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__avp_ref_line__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__mpc_path_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__mpc_path_data__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__mpc_path_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__mpc_path_data__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__mpc_path_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__mpc_path_data__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_point__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_point__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__stitch_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__stitch_data__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__avp_debug_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs.msg._avp_debug_info.AvpDebugInfo", full_classname_dest, 51) == 0);
  }
  deva_planning_msgs__msg__AvpDebugInfo * ros_message = _ros_message;
  {  // solve_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "solve_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->solve_num = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // acados_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "acados_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acados_status = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // origin_ref_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_ref_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'origin_ref_line'");
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
    if (!deva_planning_msgs__msg__AvpRefLine__Sequence__init(&(ros_message->origin_ref_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__AvpRefLine__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__AvpRefLine * dest = ros_message->origin_ref_line.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__avp_ref_line__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // smooth_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "smooth_line");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(field, &ros_message->smooth_line)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // used_ref_line_tree
    PyObject * field = PyObject_GetAttrString(_pymsg, "used_ref_line_tree");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'used_ref_line_tree'");
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
    if (!deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__init(&(ros_message->used_ref_line_tree), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__AvpRefLineTreePointVec * dest = ros_message->used_ref_line_tree.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // driver_path
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_path");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'driver_path'");
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
    if (!deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence__init(&(ros_message->driver_path), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__AvpRefLineTreePointVec__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__AvpRefLineTreePointVec * dest = ros_message->driver_path.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // now_mpc_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "now_mpc_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'now_mpc_data'");
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
    if (!deva_planning_msgs__msg__MpcPathData__Sequence__init(&(ros_message->now_mpc_data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__MpcPathData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__MpcPathData * dest = ros_message->now_mpc_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__mpc_path_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // now_path_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "now_path_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'now_path_data'");
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
    if (!deva_planning_msgs__msg__MpcPathData__Sequence__init(&(ros_message->now_path_data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__MpcPathData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__MpcPathData * dest = ros_message->now_path_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__mpc_path_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // past_path_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "past_path_data");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'past_path_data'");
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
    if (!deva_planning_msgs__msg__MpcPathData__Sequence__init(&(ros_message->past_path_data), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__MpcPathData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__MpcPathData * dest = ros_message->past_path_data.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__mpc_path_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // boundary_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "boundary_poses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'boundary_poses'");
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
    if (!deva_planning_msgs__msg__PathPoint__Sequence__init(&(ros_message->boundary_poses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__PathPoint * dest = ros_message->boundary_poses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__path_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // obstacle_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_poses");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacle_poses'");
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
    if (!deva_planning_msgs__msg__PathPoint__Sequence__init(&(ros_message->obstacle_poses), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__PathPoint * dest = ros_message->obstacle_poses.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__path_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // stitch_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "stitch_data");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs__msg__stitch_data__convert_from_py(field, &ros_message->stitch_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs__msg__avp_debug_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AvpDebugInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._avp_debug_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AvpDebugInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__AvpDebugInfo * ros_message = (deva_planning_msgs__msg__AvpDebugInfo *)raw_ros_message;
  {  // solve_num
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->solve_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solve_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acados_status
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->acados_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acados_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_ref_line
    PyObject * field = NULL;
    size_t size = ros_message->origin_ref_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__AvpRefLine * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->origin_ref_line.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__avp_ref_line__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "origin_ref_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // smooth_line
    PyObject * field = NULL;
    field = deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(&ros_message->smooth_line);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "smooth_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // used_ref_line_tree
    PyObject * field = NULL;
    size_t size = ros_message->used_ref_line_tree.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__AvpRefLineTreePointVec * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->used_ref_line_tree.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "used_ref_line_tree", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_path
    PyObject * field = NULL;
    size_t size = ros_message->driver_path.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__AvpRefLineTreePointVec * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->driver_path.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__avp_ref_line_tree_point_vec__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "driver_path", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // now_mpc_data
    PyObject * field = NULL;
    size_t size = ros_message->now_mpc_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__MpcPathData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->now_mpc_data.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__mpc_path_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "now_mpc_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // now_path_data
    PyObject * field = NULL;
    size_t size = ros_message->now_path_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__MpcPathData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->now_path_data.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__mpc_path_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "now_path_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // past_path_data
    PyObject * field = NULL;
    size_t size = ros_message->past_path_data.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__MpcPathData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->past_path_data.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__mpc_path_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "past_path_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // boundary_poses
    PyObject * field = NULL;
    size_t size = ros_message->boundary_poses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->boundary_poses.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__path_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "boundary_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_poses
    PyObject * field = NULL;
    size_t size = ros_message->obstacle_poses.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacle_poses.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__path_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stitch_data
    PyObject * field = NULL;
    field = deva_planning_msgs__msg__stitch_data__convert_to_py(&ros_message->stitch_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stitch_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
