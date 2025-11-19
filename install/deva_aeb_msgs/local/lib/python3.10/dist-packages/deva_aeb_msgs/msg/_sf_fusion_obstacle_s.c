// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionObstacle.idl
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
#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_obstacle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_fusion_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_fusion_obstacle.SFFusionObstacle", full_classname_dest, 54) == 0);
  }
  deva_aeb_msgs__msg__SFFusionObstacle * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confi
    PyObject * field = PyObject_GetAttrString(_pymsg, "confi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // laneassignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneassignment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laneassignment = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // overrideflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "overrideflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->overrideflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lifetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifetime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lifetime = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // poslgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // poslat
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // headingangle
    PyObject * field = PyObject_GetAttrString(_pymsg, "headingangle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->headingangle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_fusion_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_fusion_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFFusionObstacle * ros_message = (deva_aeb_msgs__msg__SFFusionObstacle *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneassignment
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->laneassignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laneassignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overrideflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->overrideflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overrideflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lifetime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lifetime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // headingangle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->headingangle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "headingangle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
