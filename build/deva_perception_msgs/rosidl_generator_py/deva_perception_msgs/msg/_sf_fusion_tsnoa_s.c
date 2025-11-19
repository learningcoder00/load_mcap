// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/SFFusionTSNOA.idl
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
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__struct.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tsnoa__functions.h"

bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__quadrangle_vcs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__quadrangle_vcs__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__quadrangle_img__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__quadrangle_img__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__sf_fusion_tsnoa__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
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
    assert(strncmp("deva_perception_msgs.msg._sf_fusion_tsnoa.SFFusionTSNOA", full_classname_dest, 55) == 0);
  }
  deva_perception_msgs__msg__SFFusionTSNOA * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dstlgttoeve
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlgttoeve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dstlgttoeve = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dstlattoeve
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlattoeve");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dstlattoeve = (float)PyFloat_AS_DOUBLE(field);
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
  {  // direction
    PyObject * field = PyObject_GetAttrString(_pymsg, "direction");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->direction = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // electcsgn
    PyObject * field = PyObject_GetAttrString(_pymsg, "electcsgn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->electcsgn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanelocn
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanelocn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanelocn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // locn
    PyObject * field = PyObject_GetAttrString(_pymsg, "locn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->locn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rlvc
    PyObject * field = PyObject_GetAttrString(_pymsg, "rlvc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rlvc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // notrlvres
    PyObject * field = PyObject_GetAttrString(_pymsg, "notrlvres");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->notrlvres = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // qly
    PyObject * field = PyObject_GetAttrString(_pymsg, "qly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->qly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // typ
    PyObject * field = PyObject_GetAttrString(_pymsg, "typ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->typ = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // val
    PyObject * field = PyObject_GetAttrString(_pymsg, "val");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->val = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spplinfoval
    PyObject * field = PyObject_GetAttrString(_pymsg, "spplinfoval");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spplinfoval = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // spplinfotype
    PyObject * field = PyObject_GetAttrString(_pymsg, "spplinfotype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spplinfotype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tsquadranglevcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "tsquadranglevcs");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__quadrangle_vcs__convert_from_py(field, &ros_message->tsquadranglevcs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tsquadrangleimg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tsquadrangleimg");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__quadrangle_img__convert_from_py(field, &ros_message->tsquadrangleimg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // utmx
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utmy
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utmz
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pole
    PyObject * field = PyObject_GetAttrString(_pymsg, "pole");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pole = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__sf_fusion_tsnoa__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionTSNOA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._sf_fusion_tsnoa");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionTSNOA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__SFFusionTSNOA * ros_message = (deva_perception_msgs__msg__SFFusionTSNOA *)raw_ros_message;
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
  {  // dstlgttoeve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dstlgttoeve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dstlgttoeve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dstlattoeve
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dstlattoeve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dstlattoeve", field);
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
  {  // direction
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->direction);
    {
      int rc = PyObject_SetAttrString(_pymessage, "direction", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // electcsgn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->electcsgn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "electcsgn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanelocn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanelocn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanelocn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // locn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->locn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "locn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rlvc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rlvc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rlvc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // notrlvres
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->notrlvres);
    {
      int rc = PyObject_SetAttrString(_pymessage, "notrlvres", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // qly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->qly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "qly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // typ
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->typ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "typ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // val
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->val);
    {
      int rc = PyObject_SetAttrString(_pymessage, "val", field);
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
  {  // spplinfoval
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spplinfoval);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spplinfoval", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spplinfotype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->spplinfotype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spplinfotype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tsquadranglevcs
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__quadrangle_vcs__convert_to_py(&ros_message->tsquadranglevcs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tsquadranglevcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tsquadrangleimg
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__quadrangle_img__convert_to_py(&ros_message->tsquadrangleimg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tsquadrangleimg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pole
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
