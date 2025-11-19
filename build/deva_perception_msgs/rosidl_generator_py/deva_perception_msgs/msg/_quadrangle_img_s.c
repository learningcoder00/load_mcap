// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
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
#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.h"
#include "deva_perception_msgs/msg/detail/quadrangle_img__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__quadrangle_img__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._quadrangle_img.QuadrangleImg", full_classname_dest, 54) == 0);
  }
  deva_perception_msgs__msg__QuadrangleImg * ros_message = _ros_message;
  {  // imglupointposu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imglupointposu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imglupointposu = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imglupointposv
    PyObject * field = PyObject_GetAttrString(_pymsg, "imglupointposv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imglupointposv = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgrupointposu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgrupointposu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgrupointposu = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgrupointposv
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgrupointposv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgrupointposv = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgrdpointposu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgrdpointposu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgrdpointposu = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgrdpointposv
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgrdpointposv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgrdpointposv = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgldpointposu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgldpointposu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgldpointposu = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imgldpointposv
    PyObject * field = PyObject_GetAttrString(_pymsg, "imgldpointposv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imgldpointposv = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__quadrangle_img__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QuadrangleImg */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._quadrangle_img");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QuadrangleImg");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__QuadrangleImg * ros_message = (deva_perception_msgs__msg__QuadrangleImg *)raw_ros_message;
  {  // imglupointposu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imglupointposu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imglupointposu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imglupointposv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imglupointposv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imglupointposv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgrupointposu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgrupointposu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgrupointposu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgrupointposv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgrupointposv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgrupointposv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgrdpointposu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgrdpointposu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgrdpointposu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgrdpointposv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgrdpointposv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgrdpointposv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgldpointposu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgldpointposu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgldpointposu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imgldpointposv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->imgldpointposv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imgldpointposv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
