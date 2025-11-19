// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
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
#include "deva_control_msgs/msg/detail/control_monitor_msg__struct.h"
#include "deva_control_msgs/msg/detail/control_monitor_msg__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_planning_msgs2__msg__planning_trajectory__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_planning_msgs2__msg__planning_trajectory__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__control_monitor_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("deva_control_msgs.msg._control_monitor_msg.ControlMonitorMsg", full_classname_dest, 60) == 0);
  }
  deva_control_msgs__msg__ControlMonitorMsg * ros_message = _ros_message;
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
  {  // in_auto_drive
    PyObject * field = PyObject_GetAttrString(_pymsg, "in_auto_drive");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->in_auto_drive = (Py_True == field);
    Py_DECREF(field);
  }
  {  // chs_yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chs_yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chs_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chs_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chs_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chs_steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chs_longit_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_longit_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chs_longit_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chs_longit_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_longit_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chs_longit_torque = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chs_gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "chs_gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->chs_gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // loc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_pitch = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_path_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_path_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_path_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_path_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_path_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_path_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_path_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_path_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_path_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_kappa
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_kappa");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_kappa = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_s
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_v");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_v = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // matched_path_a
    PyObject * field = PyObject_GetAttrString(_pymsg, "matched_path_a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->matched_path_a = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_station
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_station");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_station = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // station_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->station_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // station_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "station_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->station_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // current_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_speed_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_speed_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_speed_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_acc_ref
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_acc_ref");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_acc_ref = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // actual_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "actual_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->actual_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lat_d_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "lat_d_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lat_d_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_d_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_d_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_d_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // heading_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_lat_d
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_lat_d");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pre_lat_d = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_lat_theta
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_lat_theta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pre_lat_theta = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_steer");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_steer = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cmd_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmd_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmd_acc = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // control_computation_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "control_computation_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->control_computation_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // loc_header_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "loc_header_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->loc_header_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // chas_header_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "chas_header_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->chas_header_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // planning_header_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "planning_header_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->planning_header_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // openloop_trajectory
    PyObject * field = PyObject_GetAttrString(_pymsg, "openloop_trajectory");
    if (!field) {
      return false;
    }
    if (!deva_planning_msgs2__msg__planning_trajectory__convert_from_py(field, &ros_message->openloop_trajectory)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__control_monitor_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlMonitorMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._control_monitor_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlMonitorMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__ControlMonitorMsg * ros_message = (deva_control_msgs__msg__ControlMonitorMsg *)raw_ros_message;
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
  {  // in_auto_drive
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->in_auto_drive ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "in_auto_drive", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chs_yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chs_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chs_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_longit_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chs_longit_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_longit_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_longit_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chs_longit_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_longit_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chs_gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->chs_gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chs_gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_path_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_path_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_path_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_path_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_path_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_path_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_path_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_path_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_path_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_kappa
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_kappa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_kappa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_v
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_v);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_v", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // matched_path_a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->matched_path_a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "matched_path_a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_station
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_station);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_station", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->station_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // station_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->station_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "station_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_speed_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_speed_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_speed_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_acc_ref
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_acc_ref);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_acc_ref", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // actual_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->actual_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "actual_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lat_d_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lat_d_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lat_d_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_d_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_d_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_d_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heading_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_lat_d
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pre_lat_d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_lat_d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_lat_theta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pre_lat_theta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_lat_theta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_steer
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmd_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmd_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmd_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // control_computation_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->control_computation_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "control_computation_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // loc_header_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->loc_header_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "loc_header_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // chas_header_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->chas_header_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "chas_header_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // planning_header_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->planning_header_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "planning_header_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // openloop_trajectory
    PyObject * field = NULL;
    field = deva_planning_msgs2__msg__planning_trajectory__convert_to_py(&ros_message->openloop_trajectory);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "openloop_trajectory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
