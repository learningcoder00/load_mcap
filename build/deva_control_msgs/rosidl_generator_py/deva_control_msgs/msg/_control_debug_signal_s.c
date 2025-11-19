// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
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
#include "deva_control_msgs/msg/detail/control_debug_signal__struct.h"
#include "deva_control_msgs/msg/detail/control_debug_signal__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_control_msgs__msg__control_debug_signal__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("deva_control_msgs.msg._control_debug_signal.ControlDebugSignal", full_classname_dest, 62) == 0);
  }
  deva_control_msgs__msg__ControlDebugSignal * ros_message = _ros_message;
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
  {  // c0_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "c0_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c0_val = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c1_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "c1_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c1_val = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // c2_val
    PyObject * field = PyObject_GetAttrString(_pymsg, "c2_val");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->c2_val = PyFloat_AS_DOUBLE(field);
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
  {  // speed_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_offset");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_offset = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed_current
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_current");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed_current = PyFloat_AS_DOUBLE(field);
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
  {  // preview_steer_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_steer_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_steer_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // preview_speed_target
    PyObject * field = PyObject_GetAttrString(_pymsg, "preview_speed_target");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->preview_speed_target = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distance_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "distance_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distance_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_error
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_error");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_error = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_7
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_7 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_8
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_8 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // debug_signal_9
    PyObject * field = PyObject_GetAttrString(_pymsg, "debug_signal_9");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->debug_signal_9 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_control_msgs__msg__control_debug_signal__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ControlDebugSignal */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_control_msgs.msg._control_debug_signal");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ControlDebugSignal");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_control_msgs__msg__ControlDebugSignal * ros_message = (deva_control_msgs__msg__ControlDebugSignal *)raw_ros_message;
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
  {  // c0_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c0_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c0_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c1_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c1_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c1_val", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // c2_val
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->c2_val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "c2_val", field);
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
  {  // speed_offset
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed_current
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed_current);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_current", field);
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
  {  // preview_steer_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_steer_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_steer_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // preview_speed_target
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->preview_speed_target);
    {
      int rc = PyObject_SetAttrString(_pymessage, "preview_speed_target", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distance_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distance_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distance_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_error
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_error);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_error", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // debug_signal_9
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->debug_signal_9);
    {
      int rc = PyObject_SetAttrString(_pymessage, "debug_signal_9", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
