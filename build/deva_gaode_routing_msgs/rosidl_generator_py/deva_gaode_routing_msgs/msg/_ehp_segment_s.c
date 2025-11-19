// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
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
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__ehp_segment__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._ehp_segment.EhpSegment", full_classname_dest, 51) == 0);
  }
  deva_gaode_routing_msgs__msg__EhpSegment * ros_message = _ros_message;
  {  // seg_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_offset = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_msg_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_msg_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_msg_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_path_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_path_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_path_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_cyc_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_cyc_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_cyc_cnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_update
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_update");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_update = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_retr
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_retr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_retr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_build_up_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_build_up_area");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_build_up_area = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_bridge
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_bridge");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_bridge = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_tunnel
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_tunnel");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_tunnel = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_func_road_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_func_road_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_func_road_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_rel_probb
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_rel_probb");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->seg_rel_probb = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // seg_form_of_way
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_form_of_way");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_form_of_way = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_cmplx_insct
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_cmplx_insct");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_cmplx_insct = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_part_of_calc_route
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_part_of_calc_route");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_part_of_calc_route = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_eff_spd_lmt_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_eff_spd_lmt_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_eff_spd_lmt_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_eff_spd_lmt
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_eff_spd_lmt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_eff_spd_lmt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_num_of_lane_drv_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_num_of_lane_drv_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_num_of_lane_drv_dir = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_num_of_lane_opp_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_num_of_lane_opp_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_num_of_lane_opp_dir = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_divide_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_divide_road");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_divide_road = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seg_relative_offset
    PyObject * field = PyObject_GetAttrString(_pymsg, "seg_relative_offset");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seg_relative_offset = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__ehp_segment__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of EhpSegment */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._ehp_segment");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "EhpSegment");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__EhpSegment * ros_message = (deva_gaode_routing_msgs__msg__EhpSegment *)raw_ros_message;
  {  // seg_offset
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_msg_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_msg_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_msg_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_path_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_path_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_path_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_cyc_cnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_cyc_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_cyc_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_update
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_update);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_update", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_retr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_retr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_retr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_build_up_area
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_build_up_area);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_build_up_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_bridge
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_bridge);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_bridge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_tunnel
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_tunnel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_tunnel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_func_road_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_func_road_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_func_road_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_rel_probb
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->seg_rel_probb);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_rel_probb", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_form_of_way
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_form_of_way);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_form_of_way", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_cmplx_insct
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_cmplx_insct);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_cmplx_insct", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_part_of_calc_route
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_part_of_calc_route);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_part_of_calc_route", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_eff_spd_lmt_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_eff_spd_lmt_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_eff_spd_lmt_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_eff_spd_lmt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_eff_spd_lmt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_eff_spd_lmt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_num_of_lane_drv_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_num_of_lane_drv_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_num_of_lane_drv_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_num_of_lane_opp_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_num_of_lane_opp_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_num_of_lane_opp_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_divide_road
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seg_divide_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_divide_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seg_relative_offset
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->seg_relative_offset);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seg_relative_offset", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
