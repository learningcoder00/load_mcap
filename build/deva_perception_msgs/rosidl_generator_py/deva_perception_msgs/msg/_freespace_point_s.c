// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/FreespacePoint.idl
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
#include "deva_perception_msgs/msg/detail/freespace_point__struct.h"
#include "deva_perception_msgs/msg/detail/freespace_point__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__freespace_point__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[57];
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
    assert(strncmp("deva_perception_msgs.msg._freespace_point.FreespacePoint", full_classname_dest, 56) == 0);
  }
  deva_perception_msgs__msg__FreespacePoint * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rfu_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rfu_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rfu_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rfu_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rfu_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rfu_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // azim
    PyObject * field = PyObject_GetAttrString(_pymsg, "azim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->azim = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // range
    PyObject * field = PyObject_GetAttrString(_pymsg, "range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->range = PyFloat_AS_DOUBLE(field);
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
  {  // ins_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ins_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // visible
    PyObject * field = PyObject_GetAttrString(_pymsg, "visible");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->visible = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__freespace_point__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FreespacePoint */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._freespace_point");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FreespacePoint");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__FreespacePoint * ros_message = (deva_perception_msgs__msg__FreespacePoint *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfu_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rfu_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfu_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfu_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rfu_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfu_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfu_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rfu_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rfu_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // azim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->azim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "azim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "range", field);
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
  {  // ins_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ins_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visible
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->visible);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
