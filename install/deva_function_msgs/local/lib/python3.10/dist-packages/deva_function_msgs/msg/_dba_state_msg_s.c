// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/DbaStateMsg.idl
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
#include "deva_function_msgs/msg/detail/dba_state_msg__struct.h"
#include "deva_function_msgs/msg/detail/dba_state_msg__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__dba_state_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("deva_function_msgs.msg._dba_state_msg.DbaStateMsg", full_classname_dest, 49) == 0);
  }
  deva_function_msgs__msg__DbaStateMsg * ros_message = _ros_message;
  {  // publish_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "publish_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->publish_timestamp = PyFloat_AS_DOUBLE(field);
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
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->acc_enable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // brake_enable
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake_enable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->brake_enable = (Py_True == field);
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
  {  // turn_lamp_lever_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_lamp_lever_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_lamp_lever_state = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // belt
    PyObject * field = PyObject_GetAttrString(_pymsg, "belt");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'belt'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = 5;
      bool * dest = ros_message->belt;
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
  {  // command
    PyObject * field = PyObject_GetAttrString(_pymsg, "command");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // save_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "save_map");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->save_map = (Py_True == field);
    Py_DECREF(field);
  }
  {  // slot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "slot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slot_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // park_out_direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "park_out_direction");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->park_out_direction = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // run_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "run_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->run_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__dba_state_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of DbaStateMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._dba_state_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "DbaStateMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__DbaStateMsg * ros_message = (deva_function_msgs__msg__DbaStateMsg *)raw_ros_message;
  {  // publish_timestamp
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->publish_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "publish_timestamp", field);
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
  {  // acc_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->acc_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_enable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake_enable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->brake_enable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake_enable", field);
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
  {  // belt
    PyObject * field = NULL;
    size_t size = 5;
    bool * src = ros_message->belt;
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
      int rc = PyObject_SetAttrString(_pymessage, "belt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // command
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // save_map
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->save_map ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "save_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->slot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // park_out_direction
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->park_out_direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "park_out_direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // run_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->run_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "run_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
