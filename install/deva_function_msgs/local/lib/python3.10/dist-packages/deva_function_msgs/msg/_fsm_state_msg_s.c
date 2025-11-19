// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
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
#include "deva_function_msgs/msg/detail/fsm_state_msg__struct.h"
#include "deva_function_msgs/msg/detail/fsm_state_msg__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__fsm_state_msg__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_function_msgs.msg._fsm_state_msg.FsmStateMsg", full_classname_dest, 49) == 0);
  }
  deva_function_msgs__msg__FsmStateMsg * ros_message = _ros_message;
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
  {  // publish_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "publish_timestamp");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->publish_timestamp = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // fsm_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "fsm_state");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->fsm_state, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // top_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "top_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->top_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acc_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // icc_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "icc_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->icc_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // noa_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "noa_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->noa_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // d2d_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "d2d_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d2d_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // calibra_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "calibra_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->calibra_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mapping_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapping_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mapping_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // parking_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "parking_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->parking_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__fsm_state_msg__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FsmStateMsg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._fsm_state_msg");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FsmStateMsg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__FsmStateMsg * ros_message = (deva_function_msgs__msg__FsmStateMsg *)raw_ros_message;
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
  {  // fsm_state
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->fsm_state.data,
      strlen(ros_message->fsm_state.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fsm_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // top_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->top_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "top_state", field);
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
  {  // calibra_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->calibra_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "calibra_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapping_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mapping_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapping_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parking_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->parking_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "parking_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
