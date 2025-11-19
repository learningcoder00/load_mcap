// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/MachFsmState.idl
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
#include "deva_function_msgs/msg/detail/mach_fsm_state__struct.h"
#include "deva_function_msgs/msg/detail/mach_fsm_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__mach_fsm_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_function_msgs.msg._mach_fsm_state.MachFsmState", full_classname_dest, 51) == 0);
  }
  deva_function_msgs__msg__MachFsmState * ros_message = _ros_message;
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
  {  // acc_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // icc_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "icc_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->icc_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // noa_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "noa_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->noa_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // d2d_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "d2d_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d2d_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aes_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "aes_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aes_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // magic_carpet_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "magic_carpet_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->magic_carpet_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // calibration_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibration_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calibration_state = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__mach_fsm_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachFsmState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._mach_fsm_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachFsmState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__MachFsmState * ros_message = (deva_function_msgs__msg__MachFsmState *)raw_ros_message;
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
  {  // acc_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acc_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // icc_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->icc_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "icc_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noa_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->noa_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noa_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d2d_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->d2d_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d2d_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aes_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aes_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aes_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // magic_carpet_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->magic_carpet_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "magic_carpet_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // calibration_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calibration_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibration_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
