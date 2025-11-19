// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/VehicleReportCommon.idl
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
#include "deva_control_msgs/msg/detail/vehicle_report_common__struct.h"
#include "deva_control_msgs/msg/detail/vehicle_report_common__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__vehicle_report_pedal__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__vehicle_report_pedal__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__wheel_speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__wheel_speed__convert_to_py(void * raw_ros_message);
bool deva_control_msgs__msg__vehicle_report_belt__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_control_msgs__msg__vehicle_report_belt__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__vehicle_report_common__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("deva_control_msgs.msg._vehicle_report_common.VehicleReportCommon", full_classname_dest, 64) == 0);
  }
  deva_control_msgs__msg__VehicleReportCommon * ros_message = _ros_message;
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
  {  // unix_ts
    PyObject * field = PyObject_GetAttrString(_pymsg, "unix_ts");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->unix_ts = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speed_directivity
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_directivity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->speed_directivity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheelspeed_directivity
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_directivity");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wheelspeed_directivity = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheelspeed_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_valid");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'wheelspeed_valid'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->wheelspeed_valid;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // wheelspeed_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_dir");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 4;
      uint8_t * dest = ros_message->wheelspeed_dir;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // wheelspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 4;
      float * dest = ros_message->wheelspeed;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // gear_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gear_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // epb_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // epb_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_flt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // late_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "late_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->late_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // late_driveover
    PyObject * field = PyObject_GetAttrString(_pymsg, "late_driveover");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->late_driveover = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_angle_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_angle_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steer_angle_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_rotate_angle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_rotate_angle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_rotate_angle_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_torque_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_torque_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->steer_torque_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // steer_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_rotate_torque_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_rotate_torque_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_rotate_torque_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // late_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "late_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->late_flt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // longit_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longit_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longit_driveover
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_driveover");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longit_driveover = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longit_torque_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_torque_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longit_torque_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longit_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longit_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longit_acc_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_acc_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->longit_acc_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // longit_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->longit_acc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // longit_flt
    PyObject * field = PyObject_GetAttrString(_pymsg, "longit_flt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->longit_flt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_lamp_lever_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_lever_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_lamp_lever_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // turn_lamp_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_left");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_lamp_left = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_lamp_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_right");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_lamp_right = (Py_True == field);
    Py_DECREF(field);
  }
  {  // hazard_lamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "hazard_lamp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hazard_lamp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wiper_front
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper_front");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wiper_front = (Py_True == field);
    Py_DECREF(field);
  }
  {  // door_open_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_open_state");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'door_open_state'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 4;
      bool * dest = ros_message->door_open_state;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyBool_Check(item));
        bool tmp = (item == Py_True);
        memcpy(&dest[i], &tmp, sizeof(bool));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // late_acc
    PyObject * field = PyObject_GetAttrString(_pymsg, "late_acc");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->late_acc = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // slope
    PyObject * field = PyObject_GetAttrString(_pymsg, "slope");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->slope = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // standstill
    PyObject * field = PyObject_GetAttrString(_pymsg, "standstill");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->standstill = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pedal_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->pedal_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pedal
    PyObject * field = PyObject_GetAttrString(_pymsg, "pedal");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__vehicle_report_pedal__convert_from_py(field, &ros_message->pedal)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // wheelspeed_rc_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_rc_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wheelspeed_rc_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wheelspeed_rc
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheelspeed_rc");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__wheel_speed__convert_from_py(field, &ros_message->wheelspeed_rc)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // belt_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "belt_valid");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->belt_valid = (Py_True == field);
    Py_DECREF(field);
  }
  {  // belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "belt");
    if (!field) {
      return false;
    }
    if (!deva_control_msgs__msg__vehicle_report_belt__convert_from_py(field, &ros_message->belt)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bywire_exit_reason
    PyObject * field = PyObject_GetAttrString(_pymsg, "bywire_exit_reason");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->bywire_exit_reason, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // request_cancel
    PyObject * field = PyObject_GetAttrString(_pymsg, "request_cancel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->request_cancel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // action_brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_brake");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action_brake = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // action_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_throttle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action_throttle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // action_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "action_steer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action_steer = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // heavy_action_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "heavy_action_steer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->heavy_action_steer = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sustain_action_throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "sustain_action_throttle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sustain_action_throttle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sustain_action_steer
    PyObject * field = PyObject_GetAttrString(_pymsg, "sustain_action_steer");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sustain_action_steer = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__vehicle_report_common__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleReportCommon */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._vehicle_report_common");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleReportCommon");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__VehicleReportCommon * ros_message = (deva_control_msgs__msg__VehicleReportCommon *)raw_ros_message;
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
  {  // unix_ts
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->unix_ts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unix_ts", field);
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
  {  // speed_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_directivity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->speed_directivity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_directivity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_directivity
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wheelspeed_directivity ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_directivity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_valid
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->wheelspeed_valid;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_dir
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wheelspeed_dir");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->wheelspeed_dir[0]);
    memcpy(dst, src, 4 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // wheelspeed
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wheelspeed");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->wheelspeed[0]);
    memcpy(dst, src, 4 * sizeof(float));
    Py_DECREF(field);
  }
  {  // gear_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gear_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->epb_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_flt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->epb_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // late_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->late_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "late_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // late_driveover
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->late_driveover ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "late_driveover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_angle_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steer_angle_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_angle_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_rotate_angle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_rotate_angle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_rotate_angle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_torque_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->steer_torque_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_torque_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_rotate_torque_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_rotate_torque_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_rotate_torque_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // late_flt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->late_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "late_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longit_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_driveover
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longit_driveover ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_driveover", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_torque_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longit_torque_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_torque_valid", field);
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
  {  // longit_acc_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->longit_acc_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_acc_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->longit_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // longit_flt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->longit_flt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "longit_flt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_lever_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_lamp_lever_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_lever_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_left
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_lamp_left ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_left", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_lamp_right
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_lamp_right ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_lamp_right", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hazard_lamp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hazard_lamp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hazard_lamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper_front
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wiper_front ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper_front", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_open_state
    PyObject * field = NULL;
    size_t size = 4;
    bool * src = ros_message->door_open_state;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      int rc = PyList_SetItem(field, i, PyBool_FromLong(src[i] ? 1 : 0));
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_open_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // late_acc
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->late_acc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "late_acc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slope
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->slope);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slope", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // standstill
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->standstill);
    {
      int rc = PyObject_SetAttrString(_pymessage, "standstill", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedal_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->pedal_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pedal
    PyObject * field = NULL;
    field = deva_control_msgs__msg__vehicle_report_pedal__convert_to_py(&ros_message->pedal);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pedal", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_rc_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wheelspeed_rc_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_rc_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheelspeed_rc
    PyObject * field = NULL;
    field = deva_control_msgs__msg__wheel_speed__convert_to_py(&ros_message->wheelspeed_rc);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheelspeed_rc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // belt_valid
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->belt_valid ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "belt_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // belt
    PyObject * field = NULL;
    field = deva_control_msgs__msg__vehicle_report_belt__convert_to_py(&ros_message->belt);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bywire_exit_reason
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->bywire_exit_reason.data,
      strlen(ros_message->bywire_exit_reason.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bywire_exit_reason", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // request_cancel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->request_cancel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "request_cancel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action_brake
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action_brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action_throttle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action_steer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // heavy_action_steer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->heavy_action_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heavy_action_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sustain_action_throttle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sustain_action_throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sustain_action_throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sustain_action_steer
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sustain_action_steer);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sustain_action_steer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
