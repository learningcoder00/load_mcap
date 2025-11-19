// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/AppMapInfoToStmStruct.idl
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
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__struct.h"
#include "deva_function_msgs/msg/detail/app_map_info_to_stm_struct__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__app_map_info_to_stm_struct__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[73];
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
    assert(strncmp("deva_function_msgs.msg._app_map_info_to_stm_struct.AppMapInfoToStmStruct", full_classname_dest, 72) == 0);
  }
  deva_function_msgs__msg__AppMapInfoToStmStruct * ros_message = _ros_message;
  {  // route_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "route_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->route_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_upload_use_map_type2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_upload_use_map_type2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_upload_use_map_type2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_upload_use_map_list1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_upload_use_map_list1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_upload_use_map_list1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_upload_use_map_list2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_upload_use_map_list2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_upload_use_map_list2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_upload_use_map_list3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_upload_use_map_list3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_upload_use_map_list3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_upload_use_map_list4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_upload_use_map_list4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_upload_use_map_list4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__app_map_info_to_stm_struct__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of AppMapInfoToStmStruct */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._app_map_info_to_stm_struct");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "AppMapInfoToStmStruct");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__AppMapInfoToStmStruct * ros_message = (deva_function_msgs__msg__AppMapInfoToStmStruct *)raw_ros_message;
  {  // route_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->route_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "route_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_upload_use_map_type2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_upload_use_map_type2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_upload_use_map_type2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_upload_use_map_list1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_upload_use_map_list1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_upload_use_map_list1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_upload_use_map_list2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_upload_use_map_list2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_upload_use_map_list2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_upload_use_map_list3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_upload_use_map_list3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_upload_use_map_list3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_upload_use_map_list4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_upload_use_map_list4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_upload_use_map_list4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
