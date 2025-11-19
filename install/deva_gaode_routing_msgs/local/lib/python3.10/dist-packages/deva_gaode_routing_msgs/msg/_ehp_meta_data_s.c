// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/EhpMetaData.idl
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
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__ehp_meta_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_gaode_routing_msgs.msg._ehp_meta_data.EhpMetaData", full_classname_dest, 54) == 0);
  }
  deva_gaode_routing_msgs__msg__EhpMetaData * ros_message = _ros_message;
  {  // meta_country_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_country_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_country_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_map_provider
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_map_provider");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_map_provider = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_msg_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_msg_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_msg_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_hw_ver
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_hw_ver");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_hw_ver = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_prot_ver_minor_sub
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_prot_ver_minor_sub");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_prot_ver_minor_sub = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_prot_ver_major
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_prot_ver_major");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_prot_ver_major = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_cyc_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_cyc_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_cyc_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_region_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_region_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_region_code = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_drv_side
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_drv_side");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_drv_side = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_map_ver_year
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_map_ver_year");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_map_ver_year = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_map_ver_qtr
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_map_ver_qtr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_map_ver_qtr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_prot_ver_minor
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_prot_ver_minor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_prot_ver_minor = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // meta_spd_units
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_spd_units");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_spd_units = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__ehp_meta_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EhpMetaData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._ehp_meta_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EhpMetaData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__EhpMetaData * ros_message = (deva_gaode_routing_msgs__msg__EhpMetaData *)raw_ros_message;
  {  // meta_country_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_country_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_country_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_map_provider
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_map_provider);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_map_provider", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_msg_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_msg_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_msg_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_hw_ver
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_hw_ver);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_hw_ver", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_prot_ver_minor_sub
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_prot_ver_minor_sub);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_prot_ver_minor_sub", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_prot_ver_major
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_prot_ver_major);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_prot_ver_major", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_cyc_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_cyc_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_cyc_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_region_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_region_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_region_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_drv_side
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_drv_side);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_drv_side", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_map_ver_year
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_map_ver_year);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_map_ver_year", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_map_ver_qtr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_map_ver_qtr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_map_ver_qtr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_prot_ver_minor
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_prot_ver_minor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_prot_ver_minor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_spd_units
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_spd_units);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_spd_units", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
