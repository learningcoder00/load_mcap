// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/VehicleStatusCommand.idl
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
#include "deva_control_msgs/msg/detail/vehicle_status_command__struct.h"
#include "deva_control_msgs/msg/detail/vehicle_status_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__vehicle_status_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("deva_control_msgs.msg._vehicle_status_command.VehicleStatusCommand", full_classname_dest, 66) == 0);
  }
  deva_control_msgs__msg__VehicleStatusCommand * ros_message = _ros_message;
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
  {  // node_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "node_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->node_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // use_gear_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_gear_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_gear_cmd = (Py_True == field);
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
    ros_message->gear_cmd_val = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // use_epb_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_epb_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_epb_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // epb_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->epb_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // epb_cmd_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_cmd_val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_cmd_val = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // use_turn_light_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_turn_light_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_turn_light_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_light_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_light_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->turn_light_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // turn_light_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_light_cmd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_light_cmd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // use_wiper_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_wiper_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_wiper_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wiper_en
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper_en");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wiper_en = (Py_True == field);
    Py_DECREF(field);
  }
  {  // wiper_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "wiper_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->wiper_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // use_bywire_enable_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_bywire_enable_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_bywire_enable_cmd = (Py_True == field);
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
  {  // use_park_cmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "use_park_cmd");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->use_park_cmd = (Py_True == field);
    Py_DECREF(field);
  }
  {  // park_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->park_action = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__vehicle_status_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleStatusCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._vehicle_status_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleStatusCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__VehicleStatusCommand * ros_message = (deva_control_msgs__msg__VehicleStatusCommand *)raw_ros_message;
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
  {  // node_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->node_name.data,
      strlen(ros_message->node_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "node_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_gear_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_gear_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_gear_cmd", field);
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
  {  // use_epb_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_epb_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_epb_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->epb_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_cmd_val
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->epb_cmd_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_cmd_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_turn_light_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_turn_light_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_turn_light_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_light_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->turn_light_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_light_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_light_cmd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->turn_light_cmd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_light_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_wiper_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_wiper_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_wiper_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper_en
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wiper_en ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper_en", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wiper_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->wiper_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "wiper_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // use_bywire_enable_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_bywire_enable_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_bywire_enable_cmd", field);
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
  {  // use_park_cmd
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->use_park_cmd ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "use_park_cmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_action
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->park_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
