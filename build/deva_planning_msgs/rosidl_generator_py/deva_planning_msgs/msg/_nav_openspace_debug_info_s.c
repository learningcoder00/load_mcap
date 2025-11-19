// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/NavOpenspaceDebugInfo.idl
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
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.h"
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_planning_msgs/msg/detail/nav_openspace_obstacle__functions.h"
#include "deva_planning_msgs/msg/detail/nav_openspace_parking_slot__functions.h"
#include "deva_planning_msgs/msg/detail/path_data__functions.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__functions.h"
// end nested array functions include
bool deva_planning_msgs__msg__nav_openspace_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__nav_openspace_obstacle__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__nav_openspace_parking_slot__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__nav_openspace_parking_slot__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_data__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__target_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__target_trajectory__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__target_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__target_trajectory__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__path_data__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__path_data__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__target_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__target_trajectory__convert_to_py(void * raw_ros_message);
bool deva_planning_msgs__msg__target_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_planning_msgs__msg__target_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__nav_openspace_debug_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[71];
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
    assert(strncmp("deva_planning_msgs.msg._nav_openspace_debug_info.NavOpenspaceDebugInfo", full_classname_dest, 70) == 0);
  }
  deva_planning_msgs__msg__NavOpenspaceDebugInfo * ros_message = _ros_message;
  {  // x_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // x_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "x_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "y_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // theta_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "theta_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->theta_e = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // xy_bounds
    PyObject * field = PyObject_GetAttrString(_pymsg, "xy_bounds");
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
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->xy_bounds), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->xy_bounds.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'xy_bounds'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->xy_bounds), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->xy_bounds.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // obstacles_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacles_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'obstacles_info'");
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
    if (!deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence__init(&(ros_message->obstacles_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__NavOpenspaceObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__NavOpenspaceObstacle * dest = ros_message->obstacles_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__nav_openspace_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // parking_slots
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_slots");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'parking_slots'");
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
    if (!deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence__init(&(ros_message->parking_slots), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__NavOpenspaceParkingSlot__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__NavOpenspaceParkingSlot * dest = ros_message->parking_slots.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__nav_openspace_parking_slot__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // start_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "start_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->start_gear = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // keep_start_gear_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "keep_start_gear_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->keep_start_gear_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // kappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "kappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->kappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ref_points'");
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
    if (!deva_planning_msgs__msg__PathData__Sequence__init(&(ros_message->ref_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__PathData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__PathData * dest = ros_message->ref_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__path_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // openspace_planning_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "openspace_planning_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->openspace_planning_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // last_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_trajectory");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs__msg__target_trajectory__convert_from_py(field, &ros_message->last_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // last_trajectory_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_trajectory_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->last_trajectory_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // last_internal_trajectory_paths
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_internal_trajectory_paths");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'last_internal_trajectory_paths'");
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
    if (!deva_planning_msgs__msg__TargetTrajectory__Sequence__init(&(ros_message->last_internal_trajectory_paths), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__TargetTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__TargetTrajectory * dest = ros_message->last_internal_trajectory_paths.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__target_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // current_path_index
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_path_index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->current_path_index = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // is_arrived_path_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_arrived_path_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_arrived_path_end = (Py_True == field);
    Py_DECREF(field);
  }
  {  // last_ref_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_ref_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'last_ref_points'");
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
    if (!deva_planning_msgs__msg__PathData__Sequence__init(&(ros_message->last_ref_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__PathData__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__PathData * dest = ros_message->last_ref_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__path_data__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // hybrid_astar_search_results
    PyObject * field = PyObject_GetAttrString(_pymsg, "hybrid_astar_search_results");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'hybrid_astar_search_results'");
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
    if (!deva_planning_msgs__msg__TargetTrajectory__Sequence__init(&(ros_message->hybrid_astar_search_results), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__TargetTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__TargetTrajectory * dest = ros_message->hybrid_astar_search_results.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__target_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // optimization_results
    PyObject * field = PyObject_GetAttrString(_pymsg, "optimization_results");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'optimization_results'");
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
    if (!deva_planning_msgs__msg__TargetTrajectory__Sequence__init(&(ros_message->optimization_results), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_planning_msgs__msg__TargetTrajectory__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_planning_msgs__msg__TargetTrajectory * dest = ros_message->optimization_results.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_planning_msgs__msg__target_trajectory__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * deva_planning_msgs__msg__nav_openspace_debug_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of NavOpenspaceDebugInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._nav_openspace_debug_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "NavOpenspaceDebugInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__NavOpenspaceDebugInfo * ros_message = (deva_planning_msgs__msg__NavOpenspaceDebugInfo *)raw_ros_message;
  {  // x_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // x_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // theta_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->theta_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "theta_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // xy_bounds
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "xy_bounds");
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
    if (itemsize != sizeof(double)) {
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
    if (ros_message->xy_bounds.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->xy_bounds.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->xy_bounds.size * sizeof(double));
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
  {  // obstacles_info
    PyObject * field = NULL;
    size_t size = ros_message->obstacles_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__NavOpenspaceObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->obstacles_info.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__nav_openspace_obstacle__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "obstacles_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_slots
    PyObject * field = NULL;
    size_t size = ros_message->parking_slots.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__NavOpenspaceParkingSlot * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->parking_slots.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__nav_openspace_parking_slot__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "parking_slots", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // start_gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->start_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "start_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // keep_start_gear_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->keep_start_gear_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "keep_start_gear_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // kappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->kappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "kappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_points
    PyObject * field = NULL;
    size_t size = ros_message->ref_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__PathData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ref_points.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__path_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ref_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // openspace_planning_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->openspace_planning_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "openspace_planning_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_trajectory
    PyObject * field = NULL;
    field = deva_planning_msgs__msg__target_trajectory__convert_to_py(&ros_message->last_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_trajectory_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->last_trajectory_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_trajectory_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_internal_trajectory_paths
    PyObject * field = NULL;
    size_t size = ros_message->last_internal_trajectory_paths.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__TargetTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->last_internal_trajectory_paths.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__target_trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "last_internal_trajectory_paths", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_path_index
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->current_path_index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_path_index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_arrived_path_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_arrived_path_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_arrived_path_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_ref_points
    PyObject * field = NULL;
    size_t size = ros_message->last_ref_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__PathData * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->last_ref_points.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__path_data__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "last_ref_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hybrid_astar_search_results
    PyObject * field = NULL;
    size_t size = ros_message->hybrid_astar_search_results.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__TargetTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->hybrid_astar_search_results.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__target_trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "hybrid_astar_search_results", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // optimization_results
    PyObject * field = NULL;
    size_t size = ros_message->optimization_results.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_planning_msgs__msg__TargetTrajectory * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->optimization_results.data[i]);
      PyObject * pyitem = deva_planning_msgs__msg__target_trajectory__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "optimization_results", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
