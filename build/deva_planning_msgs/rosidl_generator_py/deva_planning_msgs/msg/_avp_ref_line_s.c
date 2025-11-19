// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/AvpRefLine.idl
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
#include "deva_planning_msgs/msg/detail/avp_ref_line__struct.h"
#include "deva_planning_msgs/msg/detail/avp_ref_line__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__avp_ref_line__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("deva_planning_msgs.msg._avp_ref_line.AvpRefLine", full_classname_dest, 47) == 0);
  }
  deva_planning_msgs__msg__AvpRefLine * ros_message = _ros_message;
  {  // s
    PyObject * field = PyObject_GetAttrString(_pymsg, "s");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->s = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
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
  {  // heading
    PyObject * field = PyObject_GetAttrString(_pymsg, "heading");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->heading = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_boundary_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_boundary_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_boundary_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_boundary_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_boundary_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_boundary_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_boundary_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_boundary_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_boundary_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_boundary_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_boundary_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_boundary_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_boundary_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_boundary_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_boundary_n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_boundary_n
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_boundary_n");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_boundary_n = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_junction
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_junction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->is_junction = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs__msg__avp_ref_line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AvpRefLine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._avp_ref_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AvpRefLine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__AvpRefLine * ros_message = (deva_planning_msgs__msg__AvpRefLine *)raw_ros_message;
  {  // s
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->s);
    {
      int rc = PyObject_SetAttrString(_pymessage, "s", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
  {  // heading
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->heading);
    {
      int rc = PyObject_SetAttrString(_pymessage, "heading", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_boundary_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_boundary_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_boundary_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_boundary_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_boundary_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_boundary_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_boundary_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_boundary_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_boundary_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_boundary_n
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_boundary_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_boundary_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_boundary_n
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_boundary_n);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_boundary_n", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_junction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->is_junction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_junction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
