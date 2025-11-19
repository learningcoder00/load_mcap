// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
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
#include "deva_perception_msgs/msg/detail/radar_vehicle_info__struct.h"
#include "deva_perception_msgs/msg/detail/radar_vehicle_info__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__radar_vehicle_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("deva_perception_msgs.msg._radar_vehicle_info.RadarVehicleInfo", full_classname_dest, 61) == 0);
  }
  deva_perception_msgs__msg__RadarVehicleInfo * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // position_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // position_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "position_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->position_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_vel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_vel_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_vel_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_vel_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_vel_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rel_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "rel_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rel_acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_acc_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_acc_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_acc_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_acc_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->speed = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // radar_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "radar_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->radar_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__radar_vehicle_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RadarVehicleInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._radar_vehicle_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RadarVehicleInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RadarVehicleInfo * ros_message = (deva_perception_msgs__msg__RadarVehicleInfo *)raw_ros_message;
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
  {  // position_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // position_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->position_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "position_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_vel_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_vel_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_vel_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rel_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rel_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rel_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_acc_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_acc_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_acc_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // radar_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->radar_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "radar_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
