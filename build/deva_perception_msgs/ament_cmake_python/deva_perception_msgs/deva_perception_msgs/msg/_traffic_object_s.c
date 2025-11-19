// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
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
#include "deva_perception_msgs/msg/detail/traffic_object__struct.h"
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/traffic_status__functions.h"
// end nested array functions include
bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_status__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_status__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__traffic_object__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._traffic_object.TrafficObject", full_classname_dest, 54) == 0);
  }
  deva_perception_msgs__msg__TrafficObject * ros_message = _ros_message;
  {  // class_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "class_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->class_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // det_is_focus_light
    PyObject * field = PyObject_GetAttrString(_pymsg, "det_is_focus_light");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->det_is_focus_light = (Py_True == field);
    Py_DECREF(field);
  }
  {  // sign_appx_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sign_appx_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sign_appx_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // region
    PyObject * field = PyObject_GetAttrString(_pymsg, "region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // new_h_region
    PyObject * field = PyObject_GetAttrString(_pymsg, "new_h_region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->new_h_region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'status'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    deva_perception_msgs__msg__TrafficStatus * dest = ros_message->status;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__traffic_status__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f120_ori_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120_ori_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f120_ori_color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f120_ori_color_light_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120_ori_color_light_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f120_ori_color_light_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // light_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // origin_light_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_light_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_light_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // count_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "count_down");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->count_down = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // orig_count_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "orig_count_down");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->orig_count_down = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // has_count_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_count_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->has_count_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // ori_has_count_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "ori_has_count_down");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->ori_has_count_down = (Py_True == field);
    Py_DECREF(field);
  }
  {  // f120_origin_sign_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120_origin_sign_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f120_origin_sign_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // origin_sign_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_sign_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->origin_sign_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sign_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "sign_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sign_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sign_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "sign_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sign_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // digit_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "digit_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->digit_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // digit_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "digit_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->digit_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // digit_class_idx
    PyObject * field = PyObject_GetAttrString(_pymsg, "digit_class_idx");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->digit_class_idx = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ego_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ego_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ego_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ramp_confidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "ramp_confidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ramp_confidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_ramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ramp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ramp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // origin_is_ramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "origin_is_ramp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->origin_is_ramp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_ramp_from_41
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ramp_from_41");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ramp_from_41 = (Py_True == field);
    Py_DECREF(field);
  }
  {  // is_ramp_double_checked
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_ramp_double_checked");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_ramp_double_checked = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pole
    PyObject * field = PyObject_GetAttrString(_pymsg, "pole");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pole = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // is_rechecked_ramp
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_rechecked_ramp");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_rechecked_ramp = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rechecked_ramp_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "rechecked_ramp_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rechecked_ramp_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bind_ramp_region
    PyObject * field = PyObject_GetAttrString(_pymsg, "bind_ramp_region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->bind_ramp_region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ego_x_out
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_x_out");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ego_x_out = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // is_recheck_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "is_recheck_result");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->is_recheck_result = (Py_True == field);
    Py_DECREF(field);
  }
  {  // model_depth
    PyObject * field = PyObject_GetAttrString(_pymsg, "model_depth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->model_depth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tl_oriention
    PyObject * field = PyObject_GetAttrString(_pymsg, "tl_oriention");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tl_oriention = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__traffic_object__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficObject */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._traffic_object");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficObject");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__TrafficObject * ros_message = (deva_perception_msgs__msg__TrafficObject *)raw_ros_message;
  {  // class_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->class_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "class_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // det_is_focus_light
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->det_is_focus_light ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "det_is_focus_light", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sign_appx_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sign_appx_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sign_appx_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // new_h_region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->new_h_region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "new_h_region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__TrafficStatus * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->status[i]);
      PyObject * pyitem = deva_perception_msgs__msg__traffic_status__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120_ori_color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f120_ori_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f120_ori_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120_ori_color_light_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f120_ori_color_light_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f120_ori_color_light_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->light_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_light_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->origin_light_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_light_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // count_down
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->count_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "count_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // orig_count_down
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->orig_count_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "orig_count_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_count_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->has_count_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_count_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ori_has_count_down
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->ori_has_count_down ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ori_has_count_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120_origin_sign_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->f120_origin_sign_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f120_origin_sign_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_sign_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->origin_sign_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_sign_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sign_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->sign_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sign_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sign_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sign_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sign_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digit_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->digit_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "digit_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digit_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->digit_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "digit_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // digit_class_idx
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->digit_class_idx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "digit_class_idx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ramp_confidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ramp_confidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ramp_confidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_ramp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ramp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // origin_is_ramp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->origin_is_ramp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "origin_is_ramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_ramp_from_41
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ramp_from_41 ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ramp_from_41", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_ramp_double_checked
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_ramp_double_checked ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_ramp_double_checked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pole
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_rechecked_ramp
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_rechecked_ramp ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_rechecked_ramp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rechecked_ramp_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rechecked_ramp_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rechecked_ramp_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bind_ramp_region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->bind_ramp_region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bind_ramp_region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_x_out
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ego_x_out);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ego_x_out", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // is_recheck_result
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->is_recheck_result ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "is_recheck_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model_depth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->model_depth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "model_depth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tl_oriention
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tl_oriention);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tl_oriention", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
