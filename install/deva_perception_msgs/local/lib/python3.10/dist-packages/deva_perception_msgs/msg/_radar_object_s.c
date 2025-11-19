// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RadarObject.idl
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
#include "deva_perception_msgs/msg/detail/radar_object__struct.h"
#include "deva_perception_msgs/msg/detail/radar_object__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_with_covariance__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist_with_covariance__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__accel_with_covariance__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__accel_with_covariance__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__radar_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("deva_perception_msgs.msg._radar_object.RadarObject", full_classname_dest, 50) == 0);
  }
  deva_perception_msgs__msg__RadarObject * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position
    PyObject * field = PyObject_GetAttrString(_pymsg, "position");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_with_covariance__convert_from_py(field, &ros_message->position)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_velocity");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__twist_with_covariance__convert_from_py(field, &ros_message->relative_velocity)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // relative_acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "relative_acceleration");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__accel_with_covariance__convert_from_py(field, &ros_message->relative_acceleration)) {
      Py_DECREF(field);
      return false;
    }
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
  {  // dynamic_property
    PyObject * field = PyObject_GetAttrString(_pymsg, "dynamic_property");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dynamic_property = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // quality_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "quality_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->quality_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // meas_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "meas_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meas_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prob_of_exist
    PyObject * field = PyObject_GetAttrString(_pymsg, "prob_of_exist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prob_of_exist = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extended_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "extended_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->extended_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_latitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_latitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_latitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // center_longitude
    PyObject * field = PyObject_GetAttrString(_pymsg, "center_longitude");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->center_longitude = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // orientation_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "orientation_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->orientation_angle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // class_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->class_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__radar_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._radar_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RadarObject * ros_message = (deva_perception_msgs__msg__RadarObject *)raw_ros_message;
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
    field = geometry_msgs__msg__pose_with_covariance__convert_to_py(&ros_message->position);
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
  {  // relative_velocity
    PyObject * field = NULL;
    field = geometry_msgs__msg__twist_with_covariance__convert_to_py(&ros_message->relative_velocity);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relative_acceleration
    PyObject * field = NULL;
    field = geometry_msgs__msg__accel_with_covariance__convert_to_py(&ros_message->relative_acceleration);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "relative_acceleration", field);
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
  {  // quality_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->quality_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "quality_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meas_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meas_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meas_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prob_of_exist
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prob_of_exist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prob_of_exist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extended_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->extended_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extended_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_latitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_latitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_latitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // center_longitude
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->center_longitude);
    {
      int rc = PyObject_SetAttrString(_pymessage, "center_longitude", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orientation_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->orientation_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orientation_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // class_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->class_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
