// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/TargetTrajectory.idl
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
#include "deva_planning_msgs/msg/detail/target_trajectory__struct.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

// Nested array functions includes
#include "deva_planning_msgs/msg/detail/path_point__functions.h"
#include "deva_planning_msgs/msg/detail/trajectory_point__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__sensor_time__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__sensor_time__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__trajectory_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__trajectory_point__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_point__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__target_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_planning_msgs.msg._target_trajectory.TargetTrajectory", full_classname_dest, 58) == 0);
  }
  deva_planning_msgs__msg__TargetTrajectory * ros_message = _ros_message;
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
  {  // sensor_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_timestamp");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs__msg__sensor_time__convert_from_py(field, &ros_message->sensor_timestamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // start_gnss_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_gnss_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->start_gnss_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_path_length
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_path_length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_path_length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // total_path_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "total_path_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->total_path_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_point");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_point'");
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
    if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(&(ros_message->trajectory_point), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__TrajectoryPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__TrajectoryPoint * dest = ros_message->trajectory_point.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__trajectory_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // path_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_point");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'path_point'");
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
    if (!deva_planning_msgs__msg__PathPoint__Sequence__init(&(ros_message->path_point), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__PathPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__PathPoint * dest = ros_message->path_point.data;
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
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->gear, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_estop
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_estop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_estop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // estop_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "estop_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->estop_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_stop
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_stop");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_stop = (Py_True == field);
    Py_DECREF(field);
  }
  {  // stop_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_pose");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs__msg__path_point__convert_from_py(field, &ros_message->stop_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // stop_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->stop_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // is_replan
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_replan");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_replan = (Py_True == field);
    Py_DECREF(field);
  }
  {  // replan_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "replan_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->replan_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // car_in_dead_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_in_dead_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->car_in_dead_end = (Py_True == field);
    Py_DECREF(field);
  }
  {  // high_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "high_beam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->high_beam = (Py_True == field);
    Py_DECREF(field);
  }
  {  // low_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "low_beam");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->low_beam = (Py_True == field);
    Py_DECREF(field);
  }
  {  // horn
    PyObject * field = PyObject_GetAttrString(_pymsg, "horn");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->horn = (Py_True == field);
    Py_DECREF(field);
  }
  {  // emergency_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "emergency_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->emergency_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // trace_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "trace_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trace_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs__msg__target_trajectory__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TargetTrajectory */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._target_trajectory");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TargetTrajectory");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__TargetTrajectory * ros_message = (deva_planning_msgs__msg__TargetTrajectory *)raw_ros_message;
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
  {  // sensor_timestamp
    PyObject * field = NULL;
    field = deva_planning_msgs__msg__sensor_time__convert_to_py(&ros_message->sensor_timestamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "sensor_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_gnss_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->start_gnss_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_gnss_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_path_length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_path_length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_path_length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // total_path_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->total_path_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "total_path_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_point
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_point.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__TrajectoryPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_point.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__trajectory_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_point
    PyObject * field = NULL;
    size_t size = ros_message->path_point.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__PathPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->path_point.data[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "path_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->gear.data,
      strlen(ros_message->gear.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_estop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_estop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_estop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // estop_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->estop_reason.data,
      strlen(ros_message->estop_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "estop_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_stop
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_stop ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_stop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_pose
    PyObject * field = NULL;
    field = deva_planning_msgs__msg__path_point__convert_to_py(&ros_message->stop_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->stop_reason.data,
      strlen(ros_message->stop_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_replan
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_replan ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_replan", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // replan_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->replan_reason.data,
      strlen(ros_message->replan_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "replan_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_in_dead_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->car_in_dead_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_in_dead_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // high_beam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->high_beam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "high_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // low_beam
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->low_beam ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "low_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horn
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->horn ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emergency_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->emergency_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emergency_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trace_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trace_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trace_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
