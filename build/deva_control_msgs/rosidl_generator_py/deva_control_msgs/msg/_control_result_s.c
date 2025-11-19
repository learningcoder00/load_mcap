// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/ControlResult.idl
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
#include "deva_control_msgs/msg/detail/control_result__struct.h"
#include "deva_control_msgs/msg/detail/control_result__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__control_valid_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__control_valid_limit__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__control_valid_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__control_valid_limit__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__control_valid_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__control_valid_limit__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__control_valid_limit__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__control_valid_limit__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__control_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_control_msgs.msg._control_result.ControlResult", full_classname_dest, 51) == 0);
  }
  deva_control_msgs__msg__ControlResult * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // protocol_version
    PyObject * field = PyObject_GetAttrString(_pymsg, "protocol_version");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->protocol_version, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // late_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "late_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->late_mode = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // eps_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "eps_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eps_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // front_wheel_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_wheel_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->front_wheel_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steering_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // long_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "long_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->long_mode = (int8_t)PyLong_AsLong(field);
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
  {  // acceleration
    PyObject * field = PyObject_GetAttrString(_pymsg, "acceleration");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acceleration = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longit_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longit_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // limit_command_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "limit_command_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->limit_command_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_angle_rate_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_angle_rate_limit");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__control_valid_limit__convert_from_py(field, &ros_message->steer_angle_rate_limit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // steer_tq_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_tq_limit");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__control_valid_limit__convert_from_py(field, &ros_message->steer_tq_limit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longit_tq_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_tq_limit");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__control_valid_limit__convert_from_py(field, &ros_message->longit_tq_limit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // longit_jerk_limit
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_jerk_limit");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__control_valid_limit__convert_from_py(field, &ros_message->longit_jerk_limit)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // control_ready_false_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_ready_false_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->control_ready_false_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // ready
    PyObject * field = PyObject_GetAttrString(_pymsg, "ready");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ready = (Py_True == field);
    Py_DECREF(field);
  }
  {  // control_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->control_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gear_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear_cmd_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_cmd_val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear_cmd_val = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // lateral_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lateral_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longitudinal_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "longitudinal_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longitudinal_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steering_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "steering_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steering_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__control_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._control_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__ControlResult * ros_message = (deva_control_msgs__msg__ControlResult *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
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
  {  // protocol_version
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->protocol_version.data,
      strlen(ros_message->protocol_version.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "protocol_version", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // late_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->late_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "late_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eps_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eps_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eps_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_wheel_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->front_wheel_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_wheel_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // long_mode
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->long_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "long_mode", field);
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
  {  // acceleration
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acceleration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acceleration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longit_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // limit_command_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->limit_command_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "limit_command_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_angle_rate_limit
    PyObject * field = NULL;
    field = deva_control_msgs__msg__control_valid_limit__convert_to_py(&ros_message->steer_angle_rate_limit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_angle_rate_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_tq_limit
    PyObject * field = NULL;
    field = deva_control_msgs__msg__control_valid_limit__convert_to_py(&ros_message->steer_tq_limit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_tq_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_tq_limit
    PyObject * field = NULL;
    field = deva_control_msgs__msg__control_valid_limit__convert_to_py(&ros_message->longit_tq_limit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_tq_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_jerk_limit
    PyObject * field = NULL;
    field = deva_control_msgs__msg__control_valid_limit__convert_to_py(&ros_message->longit_jerk_limit);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_jerk_limit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_ready_false_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->control_ready_false_reason.data,
      strlen(ros_message->control_ready_false_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_ready_false_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ready
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ready ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ready", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->control_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gear_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear_cmd_val
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->gear_cmd_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_cmd_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lateral_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longitudinal_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longitudinal_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longitudinal_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steering_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steering_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steering_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
