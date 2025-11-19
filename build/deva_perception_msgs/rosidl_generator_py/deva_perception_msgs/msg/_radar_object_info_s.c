// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RadarObjectInfo.idl
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
#include "deva_perception_msgs/msg/detail/radar_object_info__struct.h"
#include "deva_perception_msgs/msg/detail/radar_object_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__radar_object_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("deva_perception_msgs.msg._radar_object_info.RadarObjectInfo", full_classname_dest, 59) == 0);
  }
  deva_perception_msgs__msg__RadarObjectInfo * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // position_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->position_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nearest_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "nearest_point");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->nearest_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // nearest_point_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "nearest_point_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->nearest_point_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_rel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity_rel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_rel_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_rel_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity_rel_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_abs");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_abs_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_abs_std");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist__convert_from_py(field, &ros_message->velocity_abs_std)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_rel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel__convert_from_py(field, &ros_message->acceleration_rel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acceleration_abs
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration_abs");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel__convert_from_py(field, &ros_message->acceleration_abs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dynamic_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dynamic_property = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heading_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // life_cycles
    PyObject * field = PyObject_GetAttrString(_pymsg, "life_cycles");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->life_cycles = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // box_lwh
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_lwh");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->box_lwh)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // box_center_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_center_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->box_center_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // box_center_lgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "box_center_lgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->box_center_lgt = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // snr
    PyObject * field = PyObject_GetAttrString(_pymsg, "snr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->snr = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // classification
    PyObject * field = PyObject_GetAttrString(_pymsg, "classification");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->classification = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // obstacle_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "obstacle_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->obstacle_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // probability_of_existence
    PyObject * field = PyObject_GetAttrString(_pymsg, "probability_of_existence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->probability_of_existence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // mirror_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirror_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->mirror_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // not_real_probability
    PyObject * field = PyObject_GetAttrString(_pymsg, "not_real_probability");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->not_real_probability = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "rcs");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rcs = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_classification_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_classification_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_classification_confidence = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // track_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "track_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->track_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__radar_object_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarObjectInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._radar_object_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarObjectInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RadarObjectInfo * ros_message = (deva_perception_msgs__msg__RadarObjectInfo *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->position);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->position_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nearest_point
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->nearest_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nearest_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nearest_point_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->nearest_point_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nearest_point_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_rel
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity_rel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_rel_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity_rel_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_rel_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_abs
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_abs_std
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist__convert_to_py(&ros_message->velocity_abs_std);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_abs_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_rel
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel__convert_to_py(&ros_message->acceleration_rel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acceleration_abs
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel__convert_to_py(&ros_message->acceleration_abs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration_abs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dynamic_property
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dynamic_property);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dynamic_property", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // life_cycles
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->life_cycles);
    {
      int rc = PyObject_SetAttrString(_pymessage, "life_cycles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_lwh
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->box_lwh);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_lwh", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_center_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->box_center_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_center_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // box_center_lgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->box_center_lgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "box_center_lgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->snr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // classification
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->classification);
    {
      int rc = PyObject_SetAttrString(_pymessage, "classification", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obstacle_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->obstacle_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obstacle_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // probability_of_existence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->probability_of_existence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "probability_of_existence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirror_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->mirror_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirror_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // not_real_probability
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->not_real_probability);
    {
      int rc = PyObject_SetAttrString(_pymessage, "not_real_probability", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rcs
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rcs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_classification_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_classification_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_classification_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // track_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->track_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "track_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
