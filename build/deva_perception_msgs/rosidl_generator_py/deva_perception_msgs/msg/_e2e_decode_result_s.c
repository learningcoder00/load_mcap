// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/E2eDecodeResult.idl
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
#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_decode_result__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__e2e_decode_result__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._e2e_decode_result.E2eDecodeResult", full_classname_dest, 59) == 0);
  }
  deva_perception_msgs__msg__E2eDecodeResult * ros_message = _ros_message;
  {  // pred_category
    PyObject * field = PyObject_GetAttrString(_pymsg, "pred_category");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pred_category = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pred_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "pred_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pred_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__e2e_decode_result__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of E2eDecodeResult */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._e2e_decode_result");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "E2eDecodeResult");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__E2eDecodeResult * ros_message = (deva_perception_msgs__msg__E2eDecodeResult *)raw_ros_message;
  {  // pred_category
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pred_category);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pred_category", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pred_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pred_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pred_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
