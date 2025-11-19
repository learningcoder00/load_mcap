// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
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
#include "deva_localization_msgs/msg/detail/gnss_best_pose__struct.h"
#include "deva_localization_msgs/msg/detail/gnss_best_pose__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_localization_msgs__msg__gnss_best_pose__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_localization_msgs.msg._gnss_best_pose.GnssBestPose", full_classname_dest, 55) == 0);
  }
  deva_localization_msgs__msg__GnssBestPose * ros_message = _ros_message;
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
  {  // solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_status");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->solution_status, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // position_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_type");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->position_type, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_msl
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_msl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_msl = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // undulation
    PyObject * field = PyObject_GetAttrString(_pymsg, "undulation");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->undulation = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // datum_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "datum_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->datum_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // lat_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lon_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "lon_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lon_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height_sigma
    PyObject * field = PyObject_GetAttrString(_pymsg, "height_sigma");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height_sigma = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // diff_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "diff_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->diff_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // solution_age
    PyObject * field = PyObject_GetAttrString(_pymsg, "solution_age");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->solution_age = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // num_satellites_tracked
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_satellites_tracked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_satellites_tracked = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_satellites_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_satellites_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_satellites_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_gps_and_glonass_l1_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_gps_and_glonass_l1_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_gps_and_glonass_l1_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // num_gps_and_glonass_l1_and_l2_used_in_solution
    PyObject * field = PyObject_GetAttrString(_pymsg, "num_gps_and_glonass_l1_and_l2_used_in_solution");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extended_solution_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "extended_solution_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extended_solution_status = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gps_glonass_used_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "gps_glonass_used_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gps_glonass_used_mask = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // galileo_beidou_used_mask
    PyObject * field = PyObject_GetAttrString(_pymsg, "galileo_beidou_used_mask");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->galileo_beidou_used_mask = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // linear_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__point__convert_from_py(field, &ros_message->linear_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // velocity_latency
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity_latency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity_latency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_localization_msgs__msg__gnss_best_pose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GnssBestPose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_localization_msgs.msg._gnss_best_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GnssBestPose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_localization_msgs__msg__GnssBestPose * ros_message = (deva_localization_msgs__msg__GnssBestPose *)raw_ros_message;
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
  {  // solution_status
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->solution_status.data,
      strlen(ros_message->solution_status.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_type
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->position_type.data,
      strlen(ros_message->position_type.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_msl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_msl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_msl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undulation
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->undulation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "undulation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // datum_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->datum_id.data,
      strlen(ros_message->datum_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "datum_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lon_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lon_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lon_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height_sigma
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height_sigma);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height_sigma", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diff_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->diff_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diff_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // solution_age
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->solution_age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "solution_age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_satellites_tracked
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_satellites_tracked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_satellites_tracked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_satellites_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_satellites_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_satellites_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_gps_and_glonass_l1_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_gps_and_glonass_l1_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_gps_and_glonass_l1_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // num_gps_and_glonass_l1_and_l2_used_in_solution
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution);
    {
      int rc = PyObject_SetAttrString(_pymessage, "num_gps_and_glonass_l1_and_l2_used_in_solution", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extended_solution_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extended_solution_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extended_solution_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gps_glonass_used_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gps_glonass_used_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gps_glonass_used_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // galileo_beidou_used_mask
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->galileo_beidou_used_mask);
    {
      int rc = PyObject_SetAttrString(_pymessage, "galileo_beidou_used_mask", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // linear_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__point__convert_to_py(&ros_message->linear_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity_latency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity_latency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity_latency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
