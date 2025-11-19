// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
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
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__ehp_stub__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[46];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._ehp_stub.EhpStub", full_classname_dest, 45) == 0);
  }
  deva_gaode_routing_msgs__msg__EhpStub * ros_message = _ros_message;
  {  // stub_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_offset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_msg_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_msg_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_msg_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_path_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_path_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_path_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_cyc_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_cyc_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_cyc_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_update = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_retr
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_retr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_retr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_stub_path_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_stub_path_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_stub_path_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_func_road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_func_road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_func_road_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_rel_probb
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_rel_probb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stub_rel_probb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stub_form_of_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_form_of_way");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_form_of_way = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_cmplx_insct
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_cmplx_insct");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_cmplx_insct = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_part_of_calc_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_part_of_calc_route");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_part_of_calc_route = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_turn_angl
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_turn_angl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->stub_turn_angl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stub_num_of_lane_drv_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_num_of_lane_drv_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_num_of_lane_drv_dir = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_num_of_lane_opp_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_num_of_lane_opp_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_num_of_lane_opp_dir = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_rt_of_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_rt_of_way");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_rt_of_way = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_last_stub
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_last_stub");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_last_stub = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stub_relative_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "stub_relative_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stub_relative_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__ehp_stub__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EhpStub */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._ehp_stub");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EhpStub");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__EhpStub * ros_message = (deva_gaode_routing_msgs__msg__EhpStub *)raw_ros_message;
  {  // stub_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_msg_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_msg_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_msg_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_path_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_path_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_path_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_cyc_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_cyc_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_cyc_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_retr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_retr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_retr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_stub_path_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_stub_path_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_stub_path_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_func_road_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_func_road_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_func_road_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_rel_probb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stub_rel_probb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_rel_probb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_form_of_way
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_form_of_way);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_form_of_way", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_cmplx_insct
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_cmplx_insct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_cmplx_insct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_part_of_calc_route
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_part_of_calc_route);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_part_of_calc_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_turn_angl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->stub_turn_angl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_turn_angl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_num_of_lane_drv_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_num_of_lane_drv_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_num_of_lane_drv_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_num_of_lane_opp_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_num_of_lane_opp_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_num_of_lane_opp_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_rt_of_way
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_rt_of_way);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_rt_of_way", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_last_stub
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stub_last_stub);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_last_stub", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stub_relative_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stub_relative_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stub_relative_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
