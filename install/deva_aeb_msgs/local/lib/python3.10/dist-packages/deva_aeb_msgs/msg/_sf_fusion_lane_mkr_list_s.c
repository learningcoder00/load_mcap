// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionLaneMkrList.idl
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
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_lane_mkr_list__functions.h"

bool deva_aeb_msgs__msg__lane_fst_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_fst_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__lane_fst_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_fst_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__lane_sec_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_sec_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__lane_sec_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_sec_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__lane_sec_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_sec_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__lane_sec_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__lane_sec_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__rear_lane_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__rear_lane_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[63];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_fusion_lane_mkr_list.SFFusionLaneMkrList", full_classname_dest, 62) == 0);
  }
  deva_aeb_msgs__msg__SFFusionLaneMkrList * ros_message = _ros_message;
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // framenum
    PyObject * field = PyObject_GetAttrString(_pymsg, "framenum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framenum = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanechg
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanechg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanechg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distostopline
    PyObject * field = PyObject_GetAttrString(_pymsg, "distostopline");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distostopline = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // clsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "clsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_fst_info__convert_from_py(field, &ros_message->clsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // clsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "clsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_fst_info__convert_from_py(field, &ros_message->clsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // secclsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "secclsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_sec_info__convert_from_py(field, &ros_message->secclsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // secclsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "secclsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_sec_info__convert_from_py(field, &ros_message->secclsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // thiclsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "thiclsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_sec_info__convert_from_py(field, &ros_message->thiclsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // thiclsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "thiclsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__lane_sec_info__convert_from_py(field, &ros_message->thiclsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearclsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearclsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearclsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearclsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearclsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearclsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearsecclsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearsecclsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearsecclsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearsecclsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearsecclsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearsecclsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearthiclsle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearthiclsle");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearthiclsle)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rearthiclsri
    PyObject * field = PyObject_GetAttrString(_pymsg, "rearthiclsri");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__rear_lane_info__convert_from_py(field, &ros_message->rearthiclsri)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // isambiguouslinepatternleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "isambiguouslinepatternleft");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->isambiguouslinepatternleft = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // isambiguouslinepatternright
    PyObject * field = PyObject_GetAttrString(_pymsg, "isambiguouslinepatternright");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->isambiguouslinepatternright = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cmpforvisnyaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "cmpforvisnyaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cmpforvisnyaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionLaneMkrList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_fusion_lane_mkr_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionLaneMkrList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFFusionLaneMkrList * ros_message = (deva_aeb_msgs__msg__SFFusionLaneMkrList *)raw_ros_message;
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // framenum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->framenum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framenum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanechg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanechg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanechg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distostopline
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distostopline);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distostopline", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_fst_info__convert_to_py(&ros_message->clsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "clsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_fst_info__convert_to_py(&ros_message->clsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "clsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secclsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_sec_info__convert_to_py(&ros_message->secclsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "secclsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // secclsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_sec_info__convert_to_py(&ros_message->secclsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "secclsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thiclsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_sec_info__convert_to_py(&ros_message->thiclsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thiclsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // thiclsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__lane_sec_info__convert_to_py(&ros_message->thiclsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "thiclsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearclsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearclsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearclsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearclsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearclsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearclsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearsecclsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearsecclsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearsecclsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearsecclsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearsecclsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearsecclsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearthiclsle
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearthiclsle);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearthiclsle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rearthiclsri
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__rear_lane_info__convert_to_py(&ros_message->rearthiclsri);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rearthiclsri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isambiguouslinepatternleft
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->isambiguouslinepatternleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isambiguouslinepatternleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // isambiguouslinepatternright
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->isambiguouslinepatternright);
    {
      int rc = PyObject_SetAttrString(_pymessage, "isambiguouslinepatternright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cmpforvisnyaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cmpforvisnyaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cmpforvisnyaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
