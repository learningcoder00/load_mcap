// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RVDynObstacle.idl
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
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.h"
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_common_msgs/msg/detail/ground_point__functions.h"
#include "deva_perception_msgs/msg/detail/extra_info__functions.h"
// end nested array functions include
bool deva_perception_msgs__msg__obstacle_common__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__obstacle_common__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__ground_point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__ground_point__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__subclassification_type__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__subclassification_type__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__extra_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__extra_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__rv_dyn_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._rv_dyn_obstacle.RVDynObstacle", full_classname_dest, 55) == 0);
  }
  deva_perception_msgs__msg__RVDynObstacle * ros_message = _ros_message;
  {  // obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__obstacle_common__convert_from_py(field, &ros_message->obstacle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dynamic_obstacle_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_obstacle_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dynamic_obstacle_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // det_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "det_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->det_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // head_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->head_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tail_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail_bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->tail_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ground_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "ground_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ground_points'");
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
    if (!deva_common_msgs__msg__GroundPoint__Sequence__init(&(ros_message->ground_points), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_common_msgs__msg__GroundPoint__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_common_msgs__msg__GroundPoint * dest = ros_message->ground_points.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_common_msgs__msg__ground_point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // full_occ_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_occ_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_occ_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // head_occ_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_occ_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->head_occ_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tail_occ_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail_occ_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tail_occ_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // full_trunc_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_trunc_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_trunc_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // head_trunc_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "head_trunc_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->head_trunc_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tail_trunc_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail_trunc_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tail_trunc_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ped_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "ped_bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->ped_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // subclassification_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "subclassification_type");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__subclassification_type__convert_from_py(field, &ros_message->subclassification_type)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // subclass_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "subclass_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->subclass_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // light_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->light_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->turn_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brake_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brake_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hazard_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hazard_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hazard_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hazard_score = (float)PyFloat_AS_DOUBLE(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__rv_dyn_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RVDynObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._rv_dyn_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RVDynObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RVDynObstacle * ros_message = (deva_perception_msgs__msg__RVDynObstacle *)raw_ros_message;
  {  // obstacle
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__obstacle_common__convert_to_py(&ros_message->obstacle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_obstacle_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dynamic_obstacle_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_obstacle_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // det_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->det_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "det_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->head_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail_bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->tail_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ground_points
    PyObject * field = NULL;
    size_t size = ros_message->ground_points.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_common_msgs__msg__GroundPoint * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ground_points.data[i]);
      PyObject * pyitem = deva_common_msgs__msg__ground_point__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ground_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_occ_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_occ_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_occ_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_occ_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->head_occ_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_occ_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail_occ_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tail_occ_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail_occ_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_trunc_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_trunc_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_trunc_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // head_trunc_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->head_trunc_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "head_trunc_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail_trunc_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tail_trunc_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail_trunc_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ped_bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->ped_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ped_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subclassification_type
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__subclassification_type__convert_to_py(&ros_message->subclassification_type);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "subclassification_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // subclass_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->subclass_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "subclass_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->light_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->turn_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brake_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hazard_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hazard_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_score", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
