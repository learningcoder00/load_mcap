// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/UIToSTMData.idl
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
#include "deva_function_msgs/msg/detail/ui_to_stm_data__struct.h"
#include "deva_function_msgs/msg/detail/ui_to_stm_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_function_msgs__msg__app_map_info_to_stm_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_function_msgs__msg__app_map_info_to_stm_struct__convert_to_py(void * raw_ros_message);
bool deva_function_msgs__msg__app_to_stm_data_struct__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_function_msgs__msg__app_to_stm_data_struct__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__ui_to_stm_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
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
    assert(strncmp("deva_function_msgs.msg._ui_to_stm_data.UIToSTMData", full_classname_dest, 50) == 0);
  }
  deva_function_msgs__msg__UIToSTMData * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // drvr_assc_sys_btn_push
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_assc_sys_btn_push");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_assc_sys_btn_push = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // swt_disp_on_and_off_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "swt_disp_on_and_off_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->swt_disp_on_and_off_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_frnt_actv_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_frnt_actv_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_frnt_actv_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ihu_fail
    PyObject * field = PyObject_GetAttrString(_pymsg, "ihu_fail");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ihu_fail = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scene_mod_seld
    PyObject * field = PyObject_GetAttrString(_pymsg, "scene_mod_seld");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scene_mod_seld = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // other_ar_psd_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "other_ar_psd_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->other_ar_psd_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rspa_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rspa_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rspa_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rpa_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rpa_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rpa_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_rpa_out_mode_sub_t
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_rpa_out_mode_sub_t");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mob_dev_rpa_req_mob_dev_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "mob_dev_rpa_req_mob_dev_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mob_dev_rpa_req_mob_dev_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rem_straight_prkg_assi_seln_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "rem_straight_prkg_assi_seln_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rem_straight_prkg_assi_seln_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_touch_coorn_req_touch_eve_typ
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_touch_coorn_req_touch_eve_typ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_touch_coorn_req_touch_eve_typ = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_spd_indcd_veh_spd_indcd
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_spd_indcd_veh_spd_indcd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_spd_indcd_veh_spd_indcd = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_aut_prkg_slot_nr_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_aut_prkg_slot_nr_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_aut_prkg_slot_nr_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_prkg_in_or_out_and_cncl
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_prkg_in_or_out_and_cncl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_prkg_in_or_out_and_cncl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_prkg_intrpt_reld_btn
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_prkg_intrpt_reld_btn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_prkg_intrpt_reld_btn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_prkg_fct_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_prkg_fct_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_prkg_fct_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_aut_actv_prkg_fct_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_aut_actv_prkg_fct_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_aut_actv_prkg_fct_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // full_screen_btn_push
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_screen_btn_push");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->full_screen_btn_push = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_sel_push_apa_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_sel_push_apa_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_sel_push_apa_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_hpa_soft_butn_enter_rq
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_hpa_soft_butn_enter_rq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_hpa_soft_butn_enter_rq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_map_build_rq
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_map_build_rq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_map_build_rq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_map_save_rq
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_map_save_rq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_map_save_rq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_map_select_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_map_select_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_map_select_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sm_drvr_assc_sys_park_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "sm_drvr_assc_sys_park_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sm_drvr_assc_sys_park_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // map_build_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_build_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->map_build_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_src_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_src_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_src_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_l2_btn_req_setting_voice_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_l2_btn_req_setting_voice_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req_map_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req_map_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req_map_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_l1_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_l1_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_l1_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_experience_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_experience_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_experience_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lo_spd_drvg_assi_sho_push_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "lo_spd_drvg_assi_sho_push_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lo_spd_drvg_assi_sho_push_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_sho_dst_push_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_sho_dst_push_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_sho_dst_push_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_picture_upload_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_picture_upload_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_picture_upload_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_ins_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_ins_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_ins_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prof_pen_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "prof_pen_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prof_pen_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req2_map_type2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req2_map_type2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req2_map_type2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req2_map_list1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req2_map_list1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req2_map_list1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req2_map_list2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req2_map_list2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req2_map_list2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req2_map_list3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req2_map_list3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req2_map_list3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_oper_req2_map_list4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_oper_req2_map_list4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_oper_req2_map_list4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_l2_pop_btn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_l2_pop_btn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_l2_pop_btn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voice_active_adcu
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_active_adcu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voice_active_adcu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_tr_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_tr_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_tr_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_unlck_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_unlck_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_unlck_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_lock_sts1
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_lock_sts1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_lock_sts1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_tr_sts1_key_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_tr_sts1_key_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_tr_sts1_key_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_unlck_sts1_key_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_unlck_sts1_key_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_unlck_sts1_key_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // btn_lock_sts1_key_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "btn_lock_sts1_key_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->btn_lock_sts1_key_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voice_ctrl_brk
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_ctrl_brk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voice_ctrl_brk = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lo_spd_drvg_assi_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "lo_spd_drvg_assi_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lo_spd_drvg_assi_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_frnt_or_re_select
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_frnt_or_re_select");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_frnt_or_re_select = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracking_back_assi_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracking_back_assi_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracking_back_assi_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_emg_brk_sys_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_emg_brk_sys_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_emg_brk_sys_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_voice_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_voice_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_voice_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lsda_notif_push_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "lsda_notif_push_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lsda_notif_push_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // monr_sys_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "monr_sys_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->monr_sys_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_assc_wisdom_btn
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_assc_wisdom_btn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_assc_wisdom_btn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // scenario_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "scenario_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->scenario_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_voice_typ
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_voice_typ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_voice_typ = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mai_setting
    PyObject * field = PyObject_GetAttrString(_pymsg, "mai_setting");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mai_setting = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_hand_slot_nr_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_hand_slot_nr_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_hand_slot_nr_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_drv_ctrl_typ_dim_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drv_ctrl_typ_dim_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drv_ctrl_typ_dim_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_pilot
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_pilot");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_pilot = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_crs_ctrl_fct_actv_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_crs_ctrl_fct_actv_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_crs_ctrl_fct_actv_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_acc_fct_deactvn_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_acc_fct_deactvn_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_acc_fct_deactvn_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_acc_rs_set_spd_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_acc_rs_set_spd_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_acc_rs_set_spd_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // set_spd_for_crs_ctrl_fct_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_spd_for_crs_ctrl_fct_active");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->set_spd_for_crs_ctrl_fct_active = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_fusn_trfc_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_fusn_trfc_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_fusn_trfc_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crs_ctrl_ti_gap_adj_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "crs_ctrl_ti_gap_adj_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crs_ctrl_ti_gap_adj_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ve_spd_indcd_unit
    PyObject * field = PyObject_GetAttrString(_pymsg, "ve_spd_indcd_unit");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ve_spd_indcd_unit = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_spd_indcd
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_spd_indcd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_spd_indcd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // drv_mod_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drv_mod_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drv_mod_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cam_flts_sts_from_dhu
    PyObject * field = PyObject_GetAttrString(_pymsg, "cam_flts_sts_from_dhu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cam_flts_sts_from_dhu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_dec_sts_from_dhu
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_dec_sts_from_dhu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_dec_sts_from_dhu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_gaze_zone
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_gaze_zone");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_gaze_zone = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_gaze_zone_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_gaze_zone_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_gaze_zone_time = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_on_road_from_dhu
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_on_road_from_dhu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_on_road_from_dhu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_open_deg_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_open_deg_le");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eye_open_from_dhu_eye_open_deg_le = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_open_deg_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_open_deg_ri");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eye_open_from_dhu_eye_open_deg_ri = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_open_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_open_le");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_open_from_dhu_eye_open_le = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_open_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_open_ri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_open_from_dhu_eye_open_ri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_visible_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_visible_le");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_open_from_dhu_eye_visible_le = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_eye_visible_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_eye_visible_ri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_open_from_dhu_eye_visible_ri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // eye_open_from_dhu_face_visible
    PyObject * field = PyObject_GetAttrString(_pymsg, "eye_open_from_dhu_face_visible");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->eye_open_from_dhu_face_visible = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // snsr_drvr_pfmnc_sts_from_dhu
    PyObject * field = PyObject_GetAttrString(_pymsg, "snsr_drvr_pfmnc_sts_from_dhu");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->snsr_drvr_pfmnc_sts_from_dhu = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voice_brst_mod
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_brst_mod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voice_brst_mod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_lane_chg_style_sw_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_lane_chg_style_sw_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_lane_chg_style_sw_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nop_cofm_of_lan_chag_onoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "nop_cofm_of_lan_chag_onoff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nop_cofm_of_lan_chag_onoff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_sod_lan_chg_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_sod_lan_chg_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_sod_lan_chg_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_chg
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_chg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_chg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_noa_upgrade_switch
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_noa_upgrade_switch");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_noa_upgrade_switch = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sfty_hmi_ena
    PyObject * field = PyObject_GetAttrString(_pymsg, "sfty_hmi_ena");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sfty_hmi_ena = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nop_remind_typ_of_chg_lane_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "nop_remind_typ_of_chg_lane_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nop_remind_typ_of_chg_lane_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvr_lane_chg_aut_actv_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvr_lane_chg_aut_actv_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvr_lane_chg_aut_actv_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // auto_lane_chg_with_navi_sw_onoff
    PyObject * field = PyObject_GetAttrString(_pymsg, "auto_lane_chg_with_navi_sw_onoff");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->auto_lane_chg_with_navi_sw_onoff = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // nav_noa_status_change_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "nav_noa_status_change_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->nav_noa_status_change_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_camera_store_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_camera_store_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_camera_store_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // voice_ctrl_prk
    PyObject * field = PyObject_GetAttrString(_pymsg, "voice_ctrl_prk");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->voice_ctrl_prk = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drift_prkg_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "drift_prkg_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drift_prkg_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_cnoa_main_page
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_cnoa_main_page");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_cnoa_main_page = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_cnoa_lrng
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_cnoa_lrng");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_cnoa_lrng = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_finish_lrng
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_finish_lrng");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_finish_lrng = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_cnoa_crs_swt_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_cnoa_crs_swt_on_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_cnoa_crs_swt_on_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_cnoa_sod_lan_chg_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_cnoa_sod_lan_chg_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_cnoa_sod_lan_chg_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_cnoa_auto_lane_chg_style_sw_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_cnoa_auto_lane_chg_style_sw_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_cnoa_auto_lane_chg_style_sw_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_cnoa_lrng_swt_on_off
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_cnoa_lrng_swt_on_off");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_cnoa_lrng_swt_on_off = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_drvr_sod_req_contns_lrng
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_drvr_sod_req_contns_lrng");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_drvr_sod_req_contns_lrng = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // apa_custom_prkg_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "apa_custom_prkg_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->apa_custom_prkg_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // exit_custom_prkg_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "exit_custom_prkg_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->exit_custom_prkg_req = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_angle_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_angle_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_angle_disp = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_end_x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_end_x1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_end_x1 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_end_x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_end_x2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_end_x2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_end_y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_end_y1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_end_y1 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_end_y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_end_y2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_end_y2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_start_x1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_start_x1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_start_x1 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_start_x2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_start_x2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_start_x2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_start_y1
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_start_y1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_start_y1 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cust_prk_slot_posn_start_y2
    PyObject * field = PyObject_GetAttrString(_pymsg, "cust_prk_slot_posn_start_y2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cust_prk_slot_posn_start_y2 = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // screem_oper
    PyObject * field = PyObject_GetAttrString(_pymsg, "screem_oper");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->screem_oper = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hpa_max_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "hpa_max_swt");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->hpa_max_swt = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rpa_select_par_in
    PyObject * field = PyObject_GetAttrString(_pymsg, "rpa_select_par_in");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rpa_select_par_in = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // frnt_and_re_prkg_in_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "frnt_and_re_prkg_in_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frnt_and_re_prkg_in_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // app_map_info_to_stm
    PyObject * field = PyObject_GetAttrString(_pymsg, "app_map_info_to_stm");
    if (!field) {
      return false;
    }
    if (!deva_function_msgs__msg__app_map_info_to_stm_struct__convert_from_py(field, &ros_message->app_map_info_to_stm)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // app_to_stm_data
    PyObject * field = PyObject_GetAttrString(_pymsg, "app_to_stm_data");
    if (!field) {
      return false;
    }
    if (!deva_function_msgs__msg__app_to_stm_data_struct__convert_from_py(field, &ros_message->app_to_stm_data)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // aut_prkg_hand_slot_nr_req_topo_slot_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_hand_slot_nr_req_topo_slot_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_hand_slot_nr_req_topo_slot_id = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_hand_slot_nr_req_topo_slot_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_hand_slot_nr_req_topo_slot_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_hand_slot_nr_req_topo_slot_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_prkg_select_entrance
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_prkg_select_entrance");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_prkg_select_entrance = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_cls_pop
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_cls_pop");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_cls_pop = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_cover_results
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_cover_results");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_cover_results = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_select_d2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_select_d2d");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_select_d2d = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_topo_flr
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_topo_flr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_topo_flr = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // d2d_p_icon_clicked
    PyObject * field = PyObject_GetAttrString(_pymsg, "d2d_p_icon_clicked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d2d_p_icon_clicked = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // d2d_route_push_button_resp
    PyObject * field = PyObject_GetAttrString(_pymsg, "d2d_route_push_button_resp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->d2d_route_push_button_resp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmi_etc_traffic_sw_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmi_etc_traffic_sw_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmi_etc_traffic_sw_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_lrng_sts_hpa_lrng_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_lrng_sts_hpa_lrng_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_lrng_sts_hpa_lrng_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // prkg_slot_typ_select
    PyObject * field = PyObject_GetAttrString(_pymsg, "prkg_slot_typ_select");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->prkg_slot_typ_select = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_aut_drvg_li_swt
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_aut_drvg_li_swt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_aut_drvg_li_swt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_resp_map_id_list1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_resp_map_id_list1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_resp_map_id_list1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_resp_map_id_list2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_resp_map_id_list2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_resp_map_id_list2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_resp_map_id_list3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_resp_map_id_list3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_resp_map_id_list3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_resp_map_id_list4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_resp_map_id_list4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_resp_map_id_list4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_resp_map_id_result
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_resp_map_id_result");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_resp_map_id_result = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_syncn_map_id_list1
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_syncn_map_id_list1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_syncn_map_id_list1 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_syncn_map_id_list2
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_syncn_map_id_list2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_syncn_map_id_list2 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_syncn_map_id_list3
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_syncn_map_id_list3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_syncn_map_id_list3 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_syncn_map_id_list4
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_syncn_map_id_list4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_syncn_map_id_list4 = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // aut_valt_prkg_map_syncn_map_syncn
    PyObject * field = PyObject_GetAttrString(_pymsg, "aut_valt_prkg_map_syncn_map_syncn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->aut_valt_prkg_map_syncn_map_syncn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__ui_to_stm_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UIToSTMData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._ui_to_stm_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UIToSTMData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__UIToSTMData * ros_message = (deva_function_msgs__msg__UIToSTMData *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_assc_sys_btn_push
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_assc_sys_btn_push);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_assc_sys_btn_push", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // swt_disp_on_and_off_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->swt_disp_on_and_off_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "swt_disp_on_and_off_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_frnt_actv_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_frnt_actv_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_frnt_actv_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ihu_fail
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ihu_fail);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ihu_fail", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scene_mod_seld
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scene_mod_seld);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scene_mod_seld", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // other_ar_psd_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->other_ar_psd_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "other_ar_psd_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_rspa_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rspa_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rspa_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_rpa_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rpa_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rpa_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_rpa_out_mode_sub_t
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_rpa_out_mode_sub_t", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mob_dev_rpa_req_mob_dev_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mob_dev_rpa_req_mob_dev_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mob_dev_rpa_req_mob_dev_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rem_straight_prkg_assi_seln_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rem_straight_prkg_assi_seln_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rem_straight_prkg_assi_seln_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_touch_coorn_req_touch_eve_typ
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_touch_coorn_req_touch_eve_typ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_touch_coorn_req_touch_eve_typ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_spd_indcd_veh_spd_indcd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_spd_indcd_veh_spd_indcd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_spd_indcd_veh_spd_indcd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_aut_prkg_slot_nr_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_aut_prkg_slot_nr_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_aut_prkg_slot_nr_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_prkg_in_or_out_and_cncl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_prkg_in_or_out_and_cncl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_prkg_in_or_out_and_cncl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_prkg_intrpt_reld_btn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_prkg_intrpt_reld_btn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_prkg_intrpt_reld_btn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_prkg_fct_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_prkg_fct_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_prkg_fct_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_aut_actv_prkg_fct_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_aut_actv_prkg_fct_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_aut_actv_prkg_fct_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_screen_btn_push
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->full_screen_btn_push);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_screen_btn_push", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_sel_push_apa_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_sel_push_apa_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_sel_push_apa_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_hpa_soft_butn_enter_rq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_hpa_soft_butn_enter_rq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_hpa_soft_butn_enter_rq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_map_build_rq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_map_build_rq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_map_build_rq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_map_save_rq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_map_save_rq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_map_save_rq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_map_select_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_map_select_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_map_select_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sm_drvr_assc_sys_park_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sm_drvr_assc_sys_park_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sm_drvr_assc_sys_park_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_build_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->map_build_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_build_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_src_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_src_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_src_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_l2_btn_req_setting_voice_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_l2_btn_req_setting_voice_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_l2_btn_req_setting_voice_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req_map_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req_map_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req_map_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_l1_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_l1_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_l1_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_experience_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_experience_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_experience_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lo_spd_drvg_assi_sho_push_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lo_spd_drvg_assi_sho_push_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lo_spd_drvg_assi_sho_push_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_sho_dst_push_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_sho_dst_push_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_sho_dst_push_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_picture_upload_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_picture_upload_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_picture_upload_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_ins_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_ins_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_ins_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prof_pen_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prof_pen_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prof_pen_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req2_map_type2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req2_map_type2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req2_map_type2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req2_map_list1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req2_map_list1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req2_map_list1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req2_map_list2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req2_map_list2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req2_map_list2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req2_map_list3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req2_map_list3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req2_map_list3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_oper_req2_map_list4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_oper_req2_map_list4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_oper_req2_map_list4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_l2_pop_btn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_l2_pop_btn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_l2_pop_btn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_active_adcu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voice_active_adcu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_active_adcu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_tr_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_tr_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_tr_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_unlck_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_unlck_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_unlck_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_lock_sts1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_lock_sts1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_lock_sts1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_tr_sts1_key_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_tr_sts1_key_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_tr_sts1_key_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_unlck_sts1_key_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_unlck_sts1_key_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_unlck_sts1_key_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // btn_lock_sts1_key_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->btn_lock_sts1_key_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "btn_lock_sts1_key_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_ctrl_brk
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voice_ctrl_brk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_ctrl_brk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lo_spd_drvg_assi_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lo_spd_drvg_assi_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lo_spd_drvg_assi_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_frnt_or_re_select
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_frnt_or_re_select);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_frnt_or_re_select", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracking_back_assi_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracking_back_assi_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracking_back_assi_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_emg_brk_sys_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_emg_brk_sys_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_emg_brk_sys_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_voice_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_voice_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_voice_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lsda_notif_push_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lsda_notif_push_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lsda_notif_push_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // monr_sys_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->monr_sys_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "monr_sys_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_assc_wisdom_btn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_assc_wisdom_btn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_assc_wisdom_btn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // scenario_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->scenario_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "scenario_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_voice_typ
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_voice_typ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_voice_typ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mai_setting
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mai_setting);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mai_setting", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_hand_slot_nr_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_hand_slot_nr_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_hand_slot_nr_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_drv_ctrl_typ_dim_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_drv_ctrl_typ_dim_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_drv_ctrl_typ_dim_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_pilot
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_pilot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_pilot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_crs_ctrl_fct_actv_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_crs_ctrl_fct_actv_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_crs_ctrl_fct_actv_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_acc_fct_deactvn_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_acc_fct_deactvn_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_acc_fct_deactvn_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_acc_rs_set_spd_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_acc_rs_set_spd_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_acc_rs_set_spd_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_spd_for_crs_ctrl_fct_active
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->set_spd_for_crs_ctrl_fct_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_spd_for_crs_ctrl_fct_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_fusn_trfc_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acc_fusn_trfc_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_fusn_trfc_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crs_ctrl_ti_gap_adj_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crs_ctrl_ti_gap_adj_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crs_ctrl_ti_gap_adj_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ve_spd_indcd_unit
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ve_spd_indcd_unit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ve_spd_indcd_unit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_spd_indcd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_spd_indcd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_spd_indcd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drv_mod_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drv_mod_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drv_mod_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cam_flts_sts_from_dhu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cam_flts_sts_from_dhu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cam_flts_sts_from_dhu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_dec_sts_from_dhu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_dec_sts_from_dhu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_dec_sts_from_dhu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_gaze_zone
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_gaze_zone);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_gaze_zone", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_gaze_zone_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_gaze_zone_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_gaze_zone_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_on_road_from_dhu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_on_road_from_dhu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_on_road_from_dhu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_open_deg_le
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eye_open_from_dhu_eye_open_deg_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_open_deg_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_open_deg_ri
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eye_open_from_dhu_eye_open_deg_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_open_deg_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_open_le
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_open_from_dhu_eye_open_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_open_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_open_ri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_open_from_dhu_eye_open_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_open_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_visible_le
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_open_from_dhu_eye_visible_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_visible_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_eye_visible_ri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_open_from_dhu_eye_visible_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_eye_visible_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // eye_open_from_dhu_face_visible
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->eye_open_from_dhu_face_visible);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eye_open_from_dhu_face_visible", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // snsr_drvr_pfmnc_sts_from_dhu
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->snsr_drvr_pfmnc_sts_from_dhu);
    {
      int rc = PyObject_SetAttrString(_pymessage, "snsr_drvr_pfmnc_sts_from_dhu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_brst_mod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voice_brst_mod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_brst_mod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_lane_chg_style_sw_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_lane_chg_style_sw_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_lane_chg_style_sw_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nop_cofm_of_lan_chag_onoff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nop_cofm_of_lan_chag_onoff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nop_cofm_of_lan_chag_onoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_sod_lan_chg_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_sod_lan_chg_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_sod_lan_chg_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_chg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_chg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_chg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_noa_upgrade_switch
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_noa_upgrade_switch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_noa_upgrade_switch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sfty_hmi_ena
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sfty_hmi_ena);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sfty_hmi_ena", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nop_remind_typ_of_chg_lane_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nop_remind_typ_of_chg_lane_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nop_remind_typ_of_chg_lane_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvr_lane_chg_aut_actv_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvr_lane_chg_aut_actv_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvr_lane_chg_aut_actv_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // auto_lane_chg_with_navi_sw_onoff
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->auto_lane_chg_with_navi_sw_onoff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "auto_lane_chg_with_navi_sw_onoff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nav_noa_status_change_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->nav_noa_status_change_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "nav_noa_status_change_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_camera_store_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_camera_store_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_camera_store_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // voice_ctrl_prk
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->voice_ctrl_prk);
    {
      int rc = PyObject_SetAttrString(_pymessage, "voice_ctrl_prk", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drift_prkg_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drift_prkg_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drift_prkg_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_cnoa_main_page
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_cnoa_main_page);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_cnoa_main_page", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_cnoa_lrng
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_cnoa_lrng);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_cnoa_lrng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_finish_lrng
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_finish_lrng);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_finish_lrng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_cnoa_crs_swt_on_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_cnoa_crs_swt_on_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_cnoa_crs_swt_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_cnoa_sod_lan_chg_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_cnoa_sod_lan_chg_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_cnoa_sod_lan_chg_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_cnoa_auto_lane_chg_style_sw_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_cnoa_auto_lane_chg_style_sw_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_cnoa_auto_lane_chg_style_sw_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_cnoa_lrng_swt_on_off
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_cnoa_lrng_swt_on_off);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_cnoa_lrng_swt_on_off", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_drvr_sod_req_contns_lrng
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_drvr_sod_req_contns_lrng);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_drvr_sod_req_contns_lrng", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // apa_custom_prkg_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->apa_custom_prkg_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "apa_custom_prkg_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // exit_custom_prkg_req
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->exit_custom_prkg_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "exit_custom_prkg_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_angle_disp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_angle_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_angle_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_end_x1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_end_x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_end_x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_end_x2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_end_x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_end_x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_end_y1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_end_y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_end_y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_end_y2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_end_y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_end_y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_start_x1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_start_x1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_start_x1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_start_x2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_start_x2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_start_x2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_start_y1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_start_y1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_start_y1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cust_prk_slot_posn_start_y2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cust_prk_slot_posn_start_y2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cust_prk_slot_posn_start_y2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // screem_oper
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->screem_oper);
    {
      int rc = PyObject_SetAttrString(_pymessage, "screem_oper", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hpa_max_swt
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->hpa_max_swt ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hpa_max_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rpa_select_par_in
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rpa_select_par_in);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rpa_select_par_in", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // frnt_and_re_prkg_in_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->frnt_and_re_prkg_in_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frnt_and_re_prkg_in_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // app_map_info_to_stm
    PyObject * field = NULL;
    field = deva_function_msgs__msg__app_map_info_to_stm_struct__convert_to_py(&ros_message->app_map_info_to_stm);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "app_map_info_to_stm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // app_to_stm_data
    PyObject * field = NULL;
    field = deva_function_msgs__msg__app_to_stm_data_struct__convert_to_py(&ros_message->app_to_stm_data);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "app_to_stm_data", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_hand_slot_nr_req_topo_slot_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_hand_slot_nr_req_topo_slot_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_hand_slot_nr_req_topo_slot_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_hand_slot_nr_req_topo_slot_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_hand_slot_nr_req_topo_slot_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_hand_slot_nr_req_topo_slot_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_prkg_select_entrance
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_prkg_select_entrance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_prkg_select_entrance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_cls_pop
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_cls_pop);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_cls_pop", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_cover_results
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_cover_results);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_cover_results", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_select_d2d
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_select_d2d);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_select_d2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_topo_flr
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->aut_valt_prkg_topo_flr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_topo_flr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d2d_p_icon_clicked
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->d2d_p_icon_clicked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d2d_p_icon_clicked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // d2d_route_push_button_resp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->d2d_route_push_button_resp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "d2d_route_push_button_resp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmi_etc_traffic_sw_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmi_etc_traffic_sw_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmi_etc_traffic_sw_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_lrng_sts_hpa_lrng_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_lrng_sts_hpa_lrng_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_lrng_sts_hpa_lrng_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // prkg_slot_typ_select
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->prkg_slot_typ_select);
    {
      int rc = PyObject_SetAttrString(_pymessage, "prkg_slot_typ_select", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_aut_drvg_li_swt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_aut_drvg_li_swt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_aut_drvg_li_swt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_resp_map_id_list1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_resp_map_id_list1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_resp_map_id_list1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_resp_map_id_list2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_resp_map_id_list2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_resp_map_id_list2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_resp_map_id_list3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_resp_map_id_list3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_resp_map_id_list3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_resp_map_id_list4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_resp_map_id_list4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_resp_map_id_list4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_resp_map_id_result
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_resp_map_id_result);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_resp_map_id_result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_syncn_map_id_list1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_syncn_map_id_list1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_syncn_map_id_list1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_syncn_map_id_list2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_syncn_map_id_list2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_syncn_map_id_list2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_syncn_map_id_list3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_syncn_map_id_list3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_syncn_map_id_list3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_syncn_map_id_list4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_syncn_map_id_list4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_syncn_map_id_list4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aut_valt_prkg_map_syncn_map_syncn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->aut_valt_prkg_map_syncn_map_syncn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aut_valt_prkg_map_syncn_map_syncn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
