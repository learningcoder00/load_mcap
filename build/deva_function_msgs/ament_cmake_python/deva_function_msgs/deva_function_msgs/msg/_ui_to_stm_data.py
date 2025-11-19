# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/UIToSTMData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UIToSTMData(type):
    """Metaclass of message 'UIToSTMData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.UIToSTMData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ui_to_stm_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ui_to_stm_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ui_to_stm_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ui_to_stm_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ui_to_stm_data

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_function_msgs.msg import APPToStmDataStruct
            if APPToStmDataStruct.__class__._TYPE_SUPPORT is None:
                APPToStmDataStruct.__class__.__import_type_support__()

            from deva_function_msgs.msg import AppMapInfoToStmStruct
            if AppMapInfoToStmStruct.__class__._TYPE_SUPPORT is None:
                AppMapInfoToStmStruct.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UIToSTMData(metaclass=Metaclass_UIToSTMData):
    """Message class 'UIToSTMData'."""

    __slots__ = [
        '_header',
        '_drvr_assc_sys_btn_push',
        '_swt_disp_on_and_off_req',
        '_nav_frnt_actv_sts',
        '_ihu_fail',
        '_scene_mod_seld',
        '_other_ar_psd_req',
        '_mob_dev_rpa_req_rspa_ctrl',
        '_mob_dev_rpa_req_rpa_req',
        '_mob_dev_rpa_req_rpa_out_mode_sub_t',
        '_mob_dev_rpa_req_mob_dev_sts',
        '_rem_straight_prkg_assi_seln_req',
        '_prkg_touch_coorn_req_touch_eve_typ',
        '_veh_spd_indcd_veh_spd_indcd',
        '_sm_aut_prkg_slot_nr_req',
        '_sm_prkg_in_or_out_and_cncl',
        '_sm_prkg_intrpt_reld_btn',
        '_sm_prkg_fct_swt',
        '_sm_aut_actv_prkg_fct_swt',
        '_full_screen_btn_push',
        '_sm_sel_push_apa_info',
        '_sm_hpa_soft_butn_enter_rq',
        '_sm_map_build_rq',
        '_sm_map_save_rq',
        '_sm_map_select_id',
        '_sm_drvr_assc_sys_park_mod',
        '_map_build_sts',
        '_aut_valt_prkg_map_src_req',
        '_aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req',
        '_aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req',
        '_aut_valt_prkg_l2_btn_req_setting_voice_btn_req',
        '_aut_valt_prkg_map_oper_req_map_type',
        '_aut_valt_prkg_l1_btn_req',
        '_aut_valt_prkg_experience_resp',
        '_lo_spd_drvg_assi_sho_push_resp',
        '_aut_valt_prkg_sho_dst_push_swt',
        '_aut_valt_prkg_picture_upload_swt',
        '_aut_valt_prkg_ins_btn_req',
        '_aut_valt_prkg_swt',
        '_prof_pen_sts1',
        '_aut_valt_prkg_map_oper_req2_map_type2',
        '_aut_valt_prkg_map_oper_req2_map_list1',
        '_aut_valt_prkg_map_oper_req2_map_list2',
        '_aut_valt_prkg_map_oper_req2_map_list3',
        '_aut_valt_prkg_map_oper_req2_map_list4',
        '_aut_valt_prkg_l2_pop_btn_req',
        '_voice_active_adcu',
        '_btn_tr_sts1',
        '_btn_unlck_sts1',
        '_btn_lock_sts1',
        '_btn_tr_sts1_key_id',
        '_btn_unlck_sts1_key_id',
        '_btn_lock_sts1_key_id',
        '_voice_ctrl_brk',
        '_lo_spd_drvg_assi_swt',
        '_prkg_frnt_or_re_select',
        '_tracking_back_assi_swt',
        '_prkg_emg_brk_sys_swt',
        '_aut_prkg_voice_swt',
        '_lsda_notif_push_req',
        '_monr_sys_sts',
        '_drvr_assc_wisdom_btn',
        '_scenario_mod',
        '_aut_prkg_voice_typ',
        '_mai_setting',
        '_aut_prkg_hand_slot_nr_req',
        '_asy_aut_drv_ctrl_typ_dim_req',
        '_hmi_drvr_sod_req_pilot',
        '_drvr_crs_ctrl_fct_actv_req',
        '_drvr_acc_fct_deactvn_req',
        '_drvr_acc_rs_set_spd_req',
        '_set_spd_for_crs_ctrl_fct_active',
        '_acc_fusn_trfc_req',
        '_crs_ctrl_ti_gap_adj_req',
        '_ve_spd_indcd_unit',
        '_veh_spd_indcd',
        '_drv_mod_req',
        '_cam_flts_sts_from_dhu',
        '_drvr_dec_sts_from_dhu',
        '_eye_gaze_zone',
        '_eye_gaze_zone_time',
        '_eye_on_road_from_dhu',
        '_eye_open_from_dhu_eye_open_deg_le',
        '_eye_open_from_dhu_eye_open_deg_ri',
        '_eye_open_from_dhu_eye_open_le',
        '_eye_open_from_dhu_eye_open_ri',
        '_eye_open_from_dhu_eye_visible_le',
        '_eye_open_from_dhu_eye_visible_ri',
        '_eye_open_from_dhu_face_visible',
        '_snsr_drvr_pfmnc_sts_from_dhu',
        '_voice_brst_mod',
        '_auto_lane_chg_style_sw_sts',
        '_nop_cofm_of_lan_chag_onoff',
        '_hmi_sod_lan_chg_switch',
        '_hmi_drvr_sod_req_chg',
        '_asy_noa_upgrade_switch',
        '_sfty_hmi_ena',
        '_nop_remind_typ_of_chg_lane_req',
        '_drvr_lane_chg_aut_actv_sts',
        '_auto_lane_chg_with_navi_sw_onoff',
        '_nav_noa_status_change_req',
        '_prkg_camera_store_req',
        '_voice_ctrl_prk',
        '_drift_prkg_req',
        '_hmi_drvr_sod_req_cnoa_main_page',
        '_hmi_drvr_sod_req_cnoa_lrng',
        '_hmi_drvr_sod_req_finish_lrng',
        '_hmi_cnoa_crs_swt_on_off',
        '_hmi_cnoa_sod_lan_chg_swt',
        '_hmi_cnoa_auto_lane_chg_style_sw_sts',
        '_hmi_cnoa_lrng_swt_on_off',
        '_hmi_drvr_sod_req_contns_lrng',
        '_apa_custom_prkg_req',
        '_exit_custom_prkg_req',
        '_cust_prk_slot_posn_angle_disp',
        '_cust_prk_slot_posn_end_x1',
        '_cust_prk_slot_posn_end_x2',
        '_cust_prk_slot_posn_end_y1',
        '_cust_prk_slot_posn_end_y2',
        '_cust_prk_slot_posn_start_x1',
        '_cust_prk_slot_posn_start_x2',
        '_cust_prk_slot_posn_start_y1',
        '_cust_prk_slot_posn_start_y2',
        '_screem_oper',
        '_hpa_max_swt',
        '_rpa_select_par_in',
        '_frnt_and_re_prkg_in_swt',
        '_app_map_info_to_stm',
        '_app_to_stm_data',
        '_aut_prkg_hand_slot_nr_req_topo_slot_id',
        '_aut_prkg_hand_slot_nr_req_topo_slot_status',
        '_aut_prkg_select_entrance',
        '_aut_valt_prkg_cls_pop',
        '_aut_valt_prkg_cover_results',
        '_aut_valt_prkg_select_d2d',
        '_aut_valt_prkg_topo_flr',
        '_d2d_p_icon_clicked',
        '_d2d_route_push_button_resp',
        '_hmi_etc_traffic_sw_sts',
        '_prkg_lrng_sts_hpa_lrng_sts',
        '_prkg_slot_typ_select',
        '_asy_aut_drvg_li_swt',
        '_aut_valt_prkg_map_resp_map_id_list1',
        '_aut_valt_prkg_map_resp_map_id_list2',
        '_aut_valt_prkg_map_resp_map_id_list3',
        '_aut_valt_prkg_map_resp_map_id_list4',
        '_aut_valt_prkg_map_resp_map_id_result',
        '_aut_valt_prkg_map_syncn_map_id_list1',
        '_aut_valt_prkg_map_syncn_map_id_list2',
        '_aut_valt_prkg_map_syncn_map_id_list3',
        '_aut_valt_prkg_map_syncn_map_id_list4',
        '_aut_valt_prkg_map_syncn_map_syncn',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'drvr_assc_sys_btn_push': 'uint8',
        'swt_disp_on_and_off_req': 'uint8',
        'nav_frnt_actv_sts': 'uint8',
        'ihu_fail': 'uint8',
        'scene_mod_seld': 'uint8',
        'other_ar_psd_req': 'uint8',
        'mob_dev_rpa_req_rspa_ctrl': 'uint8',
        'mob_dev_rpa_req_rpa_req': 'uint8',
        'mob_dev_rpa_req_rpa_out_mode_sub_t': 'uint8',
        'mob_dev_rpa_req_mob_dev_sts': 'uint8',
        'rem_straight_prkg_assi_seln_req': 'uint8',
        'prkg_touch_coorn_req_touch_eve_typ': 'uint8',
        'veh_spd_indcd_veh_spd_indcd': 'uint16',
        'sm_aut_prkg_slot_nr_req': 'uint8',
        'sm_prkg_in_or_out_and_cncl': 'uint8',
        'sm_prkg_intrpt_reld_btn': 'uint8',
        'sm_prkg_fct_swt': 'uint8',
        'sm_aut_actv_prkg_fct_swt': 'uint8',
        'full_screen_btn_push': 'uint8',
        'sm_sel_push_apa_info': 'uint8',
        'sm_hpa_soft_butn_enter_rq': 'uint8',
        'sm_map_build_rq': 'uint8',
        'sm_map_save_rq': 'uint8',
        'sm_map_select_id': 'uint8',
        'sm_drvr_assc_sys_park_mod': 'uint8',
        'map_build_sts': 'uint8',
        'aut_valt_prkg_map_src_req': 'uint8',
        'aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req': 'uint8',
        'aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req': 'uint8',
        'aut_valt_prkg_l2_btn_req_setting_voice_btn_req': 'uint8',
        'aut_valt_prkg_map_oper_req_map_type': 'uint8',
        'aut_valt_prkg_l1_btn_req': 'uint8',
        'aut_valt_prkg_experience_resp': 'uint8',
        'lo_spd_drvg_assi_sho_push_resp': 'uint8',
        'aut_valt_prkg_sho_dst_push_swt': 'uint8',
        'aut_valt_prkg_picture_upload_swt': 'uint8',
        'aut_valt_prkg_ins_btn_req': 'uint8',
        'aut_valt_prkg_swt': 'uint8',
        'prof_pen_sts1': 'uint8',
        'aut_valt_prkg_map_oper_req2_map_type2': 'uint8',
        'aut_valt_prkg_map_oper_req2_map_list1': 'uint32',
        'aut_valt_prkg_map_oper_req2_map_list2': 'uint32',
        'aut_valt_prkg_map_oper_req2_map_list3': 'uint32',
        'aut_valt_prkg_map_oper_req2_map_list4': 'uint32',
        'aut_valt_prkg_l2_pop_btn_req': 'uint8',
        'voice_active_adcu': 'uint8',
        'btn_tr_sts1': 'uint8',
        'btn_unlck_sts1': 'uint8',
        'btn_lock_sts1': 'uint8',
        'btn_tr_sts1_key_id': 'uint8',
        'btn_unlck_sts1_key_id': 'uint8',
        'btn_lock_sts1_key_id': 'uint8',
        'voice_ctrl_brk': 'uint8',
        'lo_spd_drvg_assi_swt': 'uint8',
        'prkg_frnt_or_re_select': 'uint8',
        'tracking_back_assi_swt': 'uint8',
        'prkg_emg_brk_sys_swt': 'uint8',
        'aut_prkg_voice_swt': 'uint8',
        'lsda_notif_push_req': 'uint8',
        'monr_sys_sts': 'uint8',
        'drvr_assc_wisdom_btn': 'uint8',
        'scenario_mod': 'uint8',
        'aut_prkg_voice_typ': 'uint8',
        'mai_setting': 'uint8',
        'aut_prkg_hand_slot_nr_req': 'uint8',
        'asy_aut_drv_ctrl_typ_dim_req': 'uint8',
        'hmi_drvr_sod_req_pilot': 'uint8',
        'drvr_crs_ctrl_fct_actv_req': 'uint8',
        'drvr_acc_fct_deactvn_req': 'uint8',
        'drvr_acc_rs_set_spd_req': 'uint8',
        'set_spd_for_crs_ctrl_fct_active': 'float',
        'acc_fusn_trfc_req': 'uint8',
        'crs_ctrl_ti_gap_adj_req': 'uint8',
        've_spd_indcd_unit': 'uint8',
        'veh_spd_indcd': 'float',
        'drv_mod_req': 'uint8',
        'cam_flts_sts_from_dhu': 'uint8',
        'drvr_dec_sts_from_dhu': 'uint8',
        'eye_gaze_zone': 'uint8',
        'eye_gaze_zone_time': 'uint16',
        'eye_on_road_from_dhu': 'uint8',
        'eye_open_from_dhu_eye_open_deg_le': 'float',
        'eye_open_from_dhu_eye_open_deg_ri': 'float',
        'eye_open_from_dhu_eye_open_le': 'uint8',
        'eye_open_from_dhu_eye_open_ri': 'uint8',
        'eye_open_from_dhu_eye_visible_le': 'uint8',
        'eye_open_from_dhu_eye_visible_ri': 'uint8',
        'eye_open_from_dhu_face_visible': 'uint8',
        'snsr_drvr_pfmnc_sts_from_dhu': 'uint8',
        'voice_brst_mod': 'uint8',
        'auto_lane_chg_style_sw_sts': 'uint8',
        'nop_cofm_of_lan_chag_onoff': 'uint8',
        'hmi_sod_lan_chg_switch': 'uint8',
        'hmi_drvr_sod_req_chg': 'uint8',
        'asy_noa_upgrade_switch': 'uint8',
        'sfty_hmi_ena': 'uint8',
        'nop_remind_typ_of_chg_lane_req': 'uint8',
        'drvr_lane_chg_aut_actv_sts': 'uint8',
        'auto_lane_chg_with_navi_sw_onoff': 'uint8',
        'nav_noa_status_change_req': 'uint8',
        'prkg_camera_store_req': 'uint8',
        'voice_ctrl_prk': 'uint8',
        'drift_prkg_req': 'uint8',
        'hmi_drvr_sod_req_cnoa_main_page': 'uint8',
        'hmi_drvr_sod_req_cnoa_lrng': 'uint8',
        'hmi_drvr_sod_req_finish_lrng': 'uint8',
        'hmi_cnoa_crs_swt_on_off': 'uint8',
        'hmi_cnoa_sod_lan_chg_swt': 'uint8',
        'hmi_cnoa_auto_lane_chg_style_sw_sts': 'uint8',
        'hmi_cnoa_lrng_swt_on_off': 'uint8',
        'hmi_drvr_sod_req_contns_lrng': 'uint8',
        'apa_custom_prkg_req': 'uint8',
        'exit_custom_prkg_req': 'uint8',
        'cust_prk_slot_posn_angle_disp': 'int16',
        'cust_prk_slot_posn_end_x1': 'int16',
        'cust_prk_slot_posn_end_x2': 'int16',
        'cust_prk_slot_posn_end_y1': 'int16',
        'cust_prk_slot_posn_end_y2': 'int16',
        'cust_prk_slot_posn_start_x1': 'int16',
        'cust_prk_slot_posn_start_x2': 'int16',
        'cust_prk_slot_posn_start_y1': 'int16',
        'cust_prk_slot_posn_start_y2': 'int16',
        'screem_oper': 'uint8',
        'hpa_max_swt': 'boolean',
        'rpa_select_par_in': 'uint8',
        'frnt_and_re_prkg_in_swt': 'uint8',
        'app_map_info_to_stm': 'deva_function_msgs/AppMapInfoToStmStruct',
        'app_to_stm_data': 'deva_function_msgs/APPToStmDataStruct',
        'aut_prkg_hand_slot_nr_req_topo_slot_id': 'uint8',
        'aut_prkg_hand_slot_nr_req_topo_slot_status': 'uint8',
        'aut_prkg_select_entrance': 'uint8',
        'aut_valt_prkg_cls_pop': 'uint8',
        'aut_valt_prkg_cover_results': 'uint8',
        'aut_valt_prkg_select_d2d': 'uint8',
        'aut_valt_prkg_topo_flr': 'int8',
        'd2d_p_icon_clicked': 'uint8',
        'd2d_route_push_button_resp': 'uint8',
        'hmi_etc_traffic_sw_sts': 'uint8',
        'prkg_lrng_sts_hpa_lrng_sts': 'uint8',
        'prkg_slot_typ_select': 'uint8',
        'asy_aut_drvg_li_swt': 'uint8',
        'aut_valt_prkg_map_resp_map_id_list1': 'uint32',
        'aut_valt_prkg_map_resp_map_id_list2': 'uint32',
        'aut_valt_prkg_map_resp_map_id_list3': 'uint32',
        'aut_valt_prkg_map_resp_map_id_list4': 'uint32',
        'aut_valt_prkg_map_resp_map_id_result': 'uint8',
        'aut_valt_prkg_map_syncn_map_id_list1': 'uint32',
        'aut_valt_prkg_map_syncn_map_id_list2': 'uint32',
        'aut_valt_prkg_map_syncn_map_id_list3': 'uint32',
        'aut_valt_prkg_map_syncn_map_id_list4': 'uint32',
        'aut_valt_prkg_map_syncn_map_syncn': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_function_msgs', 'msg'], 'AppMapInfoToStmStruct'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_function_msgs', 'msg'], 'APPToStmDataStruct'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.drvr_assc_sys_btn_push = kwargs.get('drvr_assc_sys_btn_push', int())
        self.swt_disp_on_and_off_req = kwargs.get('swt_disp_on_and_off_req', int())
        self.nav_frnt_actv_sts = kwargs.get('nav_frnt_actv_sts', int())
        self.ihu_fail = kwargs.get('ihu_fail', int())
        self.scene_mod_seld = kwargs.get('scene_mod_seld', int())
        self.other_ar_psd_req = kwargs.get('other_ar_psd_req', int())
        self.mob_dev_rpa_req_rspa_ctrl = kwargs.get('mob_dev_rpa_req_rspa_ctrl', int())
        self.mob_dev_rpa_req_rpa_req = kwargs.get('mob_dev_rpa_req_rpa_req', int())
        self.mob_dev_rpa_req_rpa_out_mode_sub_t = kwargs.get('mob_dev_rpa_req_rpa_out_mode_sub_t', int())
        self.mob_dev_rpa_req_mob_dev_sts = kwargs.get('mob_dev_rpa_req_mob_dev_sts', int())
        self.rem_straight_prkg_assi_seln_req = kwargs.get('rem_straight_prkg_assi_seln_req', int())
        self.prkg_touch_coorn_req_touch_eve_typ = kwargs.get('prkg_touch_coorn_req_touch_eve_typ', int())
        self.veh_spd_indcd_veh_spd_indcd = kwargs.get('veh_spd_indcd_veh_spd_indcd', int())
        self.sm_aut_prkg_slot_nr_req = kwargs.get('sm_aut_prkg_slot_nr_req', int())
        self.sm_prkg_in_or_out_and_cncl = kwargs.get('sm_prkg_in_or_out_and_cncl', int())
        self.sm_prkg_intrpt_reld_btn = kwargs.get('sm_prkg_intrpt_reld_btn', int())
        self.sm_prkg_fct_swt = kwargs.get('sm_prkg_fct_swt', int())
        self.sm_aut_actv_prkg_fct_swt = kwargs.get('sm_aut_actv_prkg_fct_swt', int())
        self.full_screen_btn_push = kwargs.get('full_screen_btn_push', int())
        self.sm_sel_push_apa_info = kwargs.get('sm_sel_push_apa_info', int())
        self.sm_hpa_soft_butn_enter_rq = kwargs.get('sm_hpa_soft_butn_enter_rq', int())
        self.sm_map_build_rq = kwargs.get('sm_map_build_rq', int())
        self.sm_map_save_rq = kwargs.get('sm_map_save_rq', int())
        self.sm_map_select_id = kwargs.get('sm_map_select_id', int())
        self.sm_drvr_assc_sys_park_mod = kwargs.get('sm_drvr_assc_sys_park_mod', int())
        self.map_build_sts = kwargs.get('map_build_sts', int())
        self.aut_valt_prkg_map_src_req = kwargs.get('aut_valt_prkg_map_src_req', int())
        self.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = kwargs.get('aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req', int())
        self.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = kwargs.get('aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req', int())
        self.aut_valt_prkg_l2_btn_req_setting_voice_btn_req = kwargs.get('aut_valt_prkg_l2_btn_req_setting_voice_btn_req', int())
        self.aut_valt_prkg_map_oper_req_map_type = kwargs.get('aut_valt_prkg_map_oper_req_map_type', int())
        self.aut_valt_prkg_l1_btn_req = kwargs.get('aut_valt_prkg_l1_btn_req', int())
        self.aut_valt_prkg_experience_resp = kwargs.get('aut_valt_prkg_experience_resp', int())
        self.lo_spd_drvg_assi_sho_push_resp = kwargs.get('lo_spd_drvg_assi_sho_push_resp', int())
        self.aut_valt_prkg_sho_dst_push_swt = kwargs.get('aut_valt_prkg_sho_dst_push_swt', int())
        self.aut_valt_prkg_picture_upload_swt = kwargs.get('aut_valt_prkg_picture_upload_swt', int())
        self.aut_valt_prkg_ins_btn_req = kwargs.get('aut_valt_prkg_ins_btn_req', int())
        self.aut_valt_prkg_swt = kwargs.get('aut_valt_prkg_swt', int())
        self.prof_pen_sts1 = kwargs.get('prof_pen_sts1', int())
        self.aut_valt_prkg_map_oper_req2_map_type2 = kwargs.get('aut_valt_prkg_map_oper_req2_map_type2', int())
        self.aut_valt_prkg_map_oper_req2_map_list1 = kwargs.get('aut_valt_prkg_map_oper_req2_map_list1', int())
        self.aut_valt_prkg_map_oper_req2_map_list2 = kwargs.get('aut_valt_prkg_map_oper_req2_map_list2', int())
        self.aut_valt_prkg_map_oper_req2_map_list3 = kwargs.get('aut_valt_prkg_map_oper_req2_map_list3', int())
        self.aut_valt_prkg_map_oper_req2_map_list4 = kwargs.get('aut_valt_prkg_map_oper_req2_map_list4', int())
        self.aut_valt_prkg_l2_pop_btn_req = kwargs.get('aut_valt_prkg_l2_pop_btn_req', int())
        self.voice_active_adcu = kwargs.get('voice_active_adcu', int())
        self.btn_tr_sts1 = kwargs.get('btn_tr_sts1', int())
        self.btn_unlck_sts1 = kwargs.get('btn_unlck_sts1', int())
        self.btn_lock_sts1 = kwargs.get('btn_lock_sts1', int())
        self.btn_tr_sts1_key_id = kwargs.get('btn_tr_sts1_key_id', int())
        self.btn_unlck_sts1_key_id = kwargs.get('btn_unlck_sts1_key_id', int())
        self.btn_lock_sts1_key_id = kwargs.get('btn_lock_sts1_key_id', int())
        self.voice_ctrl_brk = kwargs.get('voice_ctrl_brk', int())
        self.lo_spd_drvg_assi_swt = kwargs.get('lo_spd_drvg_assi_swt', int())
        self.prkg_frnt_or_re_select = kwargs.get('prkg_frnt_or_re_select', int())
        self.tracking_back_assi_swt = kwargs.get('tracking_back_assi_swt', int())
        self.prkg_emg_brk_sys_swt = kwargs.get('prkg_emg_brk_sys_swt', int())
        self.aut_prkg_voice_swt = kwargs.get('aut_prkg_voice_swt', int())
        self.lsda_notif_push_req = kwargs.get('lsda_notif_push_req', int())
        self.monr_sys_sts = kwargs.get('monr_sys_sts', int())
        self.drvr_assc_wisdom_btn = kwargs.get('drvr_assc_wisdom_btn', int())
        self.scenario_mod = kwargs.get('scenario_mod', int())
        self.aut_prkg_voice_typ = kwargs.get('aut_prkg_voice_typ', int())
        self.mai_setting = kwargs.get('mai_setting', int())
        self.aut_prkg_hand_slot_nr_req = kwargs.get('aut_prkg_hand_slot_nr_req', int())
        self.asy_aut_drv_ctrl_typ_dim_req = kwargs.get('asy_aut_drv_ctrl_typ_dim_req', int())
        self.hmi_drvr_sod_req_pilot = kwargs.get('hmi_drvr_sod_req_pilot', int())
        self.drvr_crs_ctrl_fct_actv_req = kwargs.get('drvr_crs_ctrl_fct_actv_req', int())
        self.drvr_acc_fct_deactvn_req = kwargs.get('drvr_acc_fct_deactvn_req', int())
        self.drvr_acc_rs_set_spd_req = kwargs.get('drvr_acc_rs_set_spd_req', int())
        self.set_spd_for_crs_ctrl_fct_active = kwargs.get('set_spd_for_crs_ctrl_fct_active', float())
        self.acc_fusn_trfc_req = kwargs.get('acc_fusn_trfc_req', int())
        self.crs_ctrl_ti_gap_adj_req = kwargs.get('crs_ctrl_ti_gap_adj_req', int())
        self.ve_spd_indcd_unit = kwargs.get('ve_spd_indcd_unit', int())
        self.veh_spd_indcd = kwargs.get('veh_spd_indcd', float())
        self.drv_mod_req = kwargs.get('drv_mod_req', int())
        self.cam_flts_sts_from_dhu = kwargs.get('cam_flts_sts_from_dhu', int())
        self.drvr_dec_sts_from_dhu = kwargs.get('drvr_dec_sts_from_dhu', int())
        self.eye_gaze_zone = kwargs.get('eye_gaze_zone', int())
        self.eye_gaze_zone_time = kwargs.get('eye_gaze_zone_time', int())
        self.eye_on_road_from_dhu = kwargs.get('eye_on_road_from_dhu', int())
        self.eye_open_from_dhu_eye_open_deg_le = kwargs.get('eye_open_from_dhu_eye_open_deg_le', float())
        self.eye_open_from_dhu_eye_open_deg_ri = kwargs.get('eye_open_from_dhu_eye_open_deg_ri', float())
        self.eye_open_from_dhu_eye_open_le = kwargs.get('eye_open_from_dhu_eye_open_le', int())
        self.eye_open_from_dhu_eye_open_ri = kwargs.get('eye_open_from_dhu_eye_open_ri', int())
        self.eye_open_from_dhu_eye_visible_le = kwargs.get('eye_open_from_dhu_eye_visible_le', int())
        self.eye_open_from_dhu_eye_visible_ri = kwargs.get('eye_open_from_dhu_eye_visible_ri', int())
        self.eye_open_from_dhu_face_visible = kwargs.get('eye_open_from_dhu_face_visible', int())
        self.snsr_drvr_pfmnc_sts_from_dhu = kwargs.get('snsr_drvr_pfmnc_sts_from_dhu', int())
        self.voice_brst_mod = kwargs.get('voice_brst_mod', int())
        self.auto_lane_chg_style_sw_sts = kwargs.get('auto_lane_chg_style_sw_sts', int())
        self.nop_cofm_of_lan_chag_onoff = kwargs.get('nop_cofm_of_lan_chag_onoff', int())
        self.hmi_sod_lan_chg_switch = kwargs.get('hmi_sod_lan_chg_switch', int())
        self.hmi_drvr_sod_req_chg = kwargs.get('hmi_drvr_sod_req_chg', int())
        self.asy_noa_upgrade_switch = kwargs.get('asy_noa_upgrade_switch', int())
        self.sfty_hmi_ena = kwargs.get('sfty_hmi_ena', int())
        self.nop_remind_typ_of_chg_lane_req = kwargs.get('nop_remind_typ_of_chg_lane_req', int())
        self.drvr_lane_chg_aut_actv_sts = kwargs.get('drvr_lane_chg_aut_actv_sts', int())
        self.auto_lane_chg_with_navi_sw_onoff = kwargs.get('auto_lane_chg_with_navi_sw_onoff', int())
        self.nav_noa_status_change_req = kwargs.get('nav_noa_status_change_req', int())
        self.prkg_camera_store_req = kwargs.get('prkg_camera_store_req', int())
        self.voice_ctrl_prk = kwargs.get('voice_ctrl_prk', int())
        self.drift_prkg_req = kwargs.get('drift_prkg_req', int())
        self.hmi_drvr_sod_req_cnoa_main_page = kwargs.get('hmi_drvr_sod_req_cnoa_main_page', int())
        self.hmi_drvr_sod_req_cnoa_lrng = kwargs.get('hmi_drvr_sod_req_cnoa_lrng', int())
        self.hmi_drvr_sod_req_finish_lrng = kwargs.get('hmi_drvr_sod_req_finish_lrng', int())
        self.hmi_cnoa_crs_swt_on_off = kwargs.get('hmi_cnoa_crs_swt_on_off', int())
        self.hmi_cnoa_sod_lan_chg_swt = kwargs.get('hmi_cnoa_sod_lan_chg_swt', int())
        self.hmi_cnoa_auto_lane_chg_style_sw_sts = kwargs.get('hmi_cnoa_auto_lane_chg_style_sw_sts', int())
        self.hmi_cnoa_lrng_swt_on_off = kwargs.get('hmi_cnoa_lrng_swt_on_off', int())
        self.hmi_drvr_sod_req_contns_lrng = kwargs.get('hmi_drvr_sod_req_contns_lrng', int())
        self.apa_custom_prkg_req = kwargs.get('apa_custom_prkg_req', int())
        self.exit_custom_prkg_req = kwargs.get('exit_custom_prkg_req', int())
        self.cust_prk_slot_posn_angle_disp = kwargs.get('cust_prk_slot_posn_angle_disp', int())
        self.cust_prk_slot_posn_end_x1 = kwargs.get('cust_prk_slot_posn_end_x1', int())
        self.cust_prk_slot_posn_end_x2 = kwargs.get('cust_prk_slot_posn_end_x2', int())
        self.cust_prk_slot_posn_end_y1 = kwargs.get('cust_prk_slot_posn_end_y1', int())
        self.cust_prk_slot_posn_end_y2 = kwargs.get('cust_prk_slot_posn_end_y2', int())
        self.cust_prk_slot_posn_start_x1 = kwargs.get('cust_prk_slot_posn_start_x1', int())
        self.cust_prk_slot_posn_start_x2 = kwargs.get('cust_prk_slot_posn_start_x2', int())
        self.cust_prk_slot_posn_start_y1 = kwargs.get('cust_prk_slot_posn_start_y1', int())
        self.cust_prk_slot_posn_start_y2 = kwargs.get('cust_prk_slot_posn_start_y2', int())
        self.screem_oper = kwargs.get('screem_oper', int())
        self.hpa_max_swt = kwargs.get('hpa_max_swt', bool())
        self.rpa_select_par_in = kwargs.get('rpa_select_par_in', int())
        self.frnt_and_re_prkg_in_swt = kwargs.get('frnt_and_re_prkg_in_swt', int())
        from deva_function_msgs.msg import AppMapInfoToStmStruct
        self.app_map_info_to_stm = kwargs.get('app_map_info_to_stm', AppMapInfoToStmStruct())
        from deva_function_msgs.msg import APPToStmDataStruct
        self.app_to_stm_data = kwargs.get('app_to_stm_data', APPToStmDataStruct())
        self.aut_prkg_hand_slot_nr_req_topo_slot_id = kwargs.get('aut_prkg_hand_slot_nr_req_topo_slot_id', int())
        self.aut_prkg_hand_slot_nr_req_topo_slot_status = kwargs.get('aut_prkg_hand_slot_nr_req_topo_slot_status', int())
        self.aut_prkg_select_entrance = kwargs.get('aut_prkg_select_entrance', int())
        self.aut_valt_prkg_cls_pop = kwargs.get('aut_valt_prkg_cls_pop', int())
        self.aut_valt_prkg_cover_results = kwargs.get('aut_valt_prkg_cover_results', int())
        self.aut_valt_prkg_select_d2d = kwargs.get('aut_valt_prkg_select_d2d', int())
        self.aut_valt_prkg_topo_flr = kwargs.get('aut_valt_prkg_topo_flr', int())
        self.d2d_p_icon_clicked = kwargs.get('d2d_p_icon_clicked', int())
        self.d2d_route_push_button_resp = kwargs.get('d2d_route_push_button_resp', int())
        self.hmi_etc_traffic_sw_sts = kwargs.get('hmi_etc_traffic_sw_sts', int())
        self.prkg_lrng_sts_hpa_lrng_sts = kwargs.get('prkg_lrng_sts_hpa_lrng_sts', int())
        self.prkg_slot_typ_select = kwargs.get('prkg_slot_typ_select', int())
        self.asy_aut_drvg_li_swt = kwargs.get('asy_aut_drvg_li_swt', int())
        self.aut_valt_prkg_map_resp_map_id_list1 = kwargs.get('aut_valt_prkg_map_resp_map_id_list1', int())
        self.aut_valt_prkg_map_resp_map_id_list2 = kwargs.get('aut_valt_prkg_map_resp_map_id_list2', int())
        self.aut_valt_prkg_map_resp_map_id_list3 = kwargs.get('aut_valt_prkg_map_resp_map_id_list3', int())
        self.aut_valt_prkg_map_resp_map_id_list4 = kwargs.get('aut_valt_prkg_map_resp_map_id_list4', int())
        self.aut_valt_prkg_map_resp_map_id_result = kwargs.get('aut_valt_prkg_map_resp_map_id_result', int())
        self.aut_valt_prkg_map_syncn_map_id_list1 = kwargs.get('aut_valt_prkg_map_syncn_map_id_list1', int())
        self.aut_valt_prkg_map_syncn_map_id_list2 = kwargs.get('aut_valt_prkg_map_syncn_map_id_list2', int())
        self.aut_valt_prkg_map_syncn_map_id_list3 = kwargs.get('aut_valt_prkg_map_syncn_map_id_list3', int())
        self.aut_valt_prkg_map_syncn_map_id_list4 = kwargs.get('aut_valt_prkg_map_syncn_map_id_list4', int())
        self.aut_valt_prkg_map_syncn_map_syncn = kwargs.get('aut_valt_prkg_map_syncn_map_syncn', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.drvr_assc_sys_btn_push != other.drvr_assc_sys_btn_push:
            return False
        if self.swt_disp_on_and_off_req != other.swt_disp_on_and_off_req:
            return False
        if self.nav_frnt_actv_sts != other.nav_frnt_actv_sts:
            return False
        if self.ihu_fail != other.ihu_fail:
            return False
        if self.scene_mod_seld != other.scene_mod_seld:
            return False
        if self.other_ar_psd_req != other.other_ar_psd_req:
            return False
        if self.mob_dev_rpa_req_rspa_ctrl != other.mob_dev_rpa_req_rspa_ctrl:
            return False
        if self.mob_dev_rpa_req_rpa_req != other.mob_dev_rpa_req_rpa_req:
            return False
        if self.mob_dev_rpa_req_rpa_out_mode_sub_t != other.mob_dev_rpa_req_rpa_out_mode_sub_t:
            return False
        if self.mob_dev_rpa_req_mob_dev_sts != other.mob_dev_rpa_req_mob_dev_sts:
            return False
        if self.rem_straight_prkg_assi_seln_req != other.rem_straight_prkg_assi_seln_req:
            return False
        if self.prkg_touch_coorn_req_touch_eve_typ != other.prkg_touch_coorn_req_touch_eve_typ:
            return False
        if self.veh_spd_indcd_veh_spd_indcd != other.veh_spd_indcd_veh_spd_indcd:
            return False
        if self.sm_aut_prkg_slot_nr_req != other.sm_aut_prkg_slot_nr_req:
            return False
        if self.sm_prkg_in_or_out_and_cncl != other.sm_prkg_in_or_out_and_cncl:
            return False
        if self.sm_prkg_intrpt_reld_btn != other.sm_prkg_intrpt_reld_btn:
            return False
        if self.sm_prkg_fct_swt != other.sm_prkg_fct_swt:
            return False
        if self.sm_aut_actv_prkg_fct_swt != other.sm_aut_actv_prkg_fct_swt:
            return False
        if self.full_screen_btn_push != other.full_screen_btn_push:
            return False
        if self.sm_sel_push_apa_info != other.sm_sel_push_apa_info:
            return False
        if self.sm_hpa_soft_butn_enter_rq != other.sm_hpa_soft_butn_enter_rq:
            return False
        if self.sm_map_build_rq != other.sm_map_build_rq:
            return False
        if self.sm_map_save_rq != other.sm_map_save_rq:
            return False
        if self.sm_map_select_id != other.sm_map_select_id:
            return False
        if self.sm_drvr_assc_sys_park_mod != other.sm_drvr_assc_sys_park_mod:
            return False
        if self.map_build_sts != other.map_build_sts:
            return False
        if self.aut_valt_prkg_map_src_req != other.aut_valt_prkg_map_src_req:
            return False
        if self.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req != other.aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req:
            return False
        if self.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req != other.aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req:
            return False
        if self.aut_valt_prkg_l2_btn_req_setting_voice_btn_req != other.aut_valt_prkg_l2_btn_req_setting_voice_btn_req:
            return False
        if self.aut_valt_prkg_map_oper_req_map_type != other.aut_valt_prkg_map_oper_req_map_type:
            return False
        if self.aut_valt_prkg_l1_btn_req != other.aut_valt_prkg_l1_btn_req:
            return False
        if self.aut_valt_prkg_experience_resp != other.aut_valt_prkg_experience_resp:
            return False
        if self.lo_spd_drvg_assi_sho_push_resp != other.lo_spd_drvg_assi_sho_push_resp:
            return False
        if self.aut_valt_prkg_sho_dst_push_swt != other.aut_valt_prkg_sho_dst_push_swt:
            return False
        if self.aut_valt_prkg_picture_upload_swt != other.aut_valt_prkg_picture_upload_swt:
            return False
        if self.aut_valt_prkg_ins_btn_req != other.aut_valt_prkg_ins_btn_req:
            return False
        if self.aut_valt_prkg_swt != other.aut_valt_prkg_swt:
            return False
        if self.prof_pen_sts1 != other.prof_pen_sts1:
            return False
        if self.aut_valt_prkg_map_oper_req2_map_type2 != other.aut_valt_prkg_map_oper_req2_map_type2:
            return False
        if self.aut_valt_prkg_map_oper_req2_map_list1 != other.aut_valt_prkg_map_oper_req2_map_list1:
            return False
        if self.aut_valt_prkg_map_oper_req2_map_list2 != other.aut_valt_prkg_map_oper_req2_map_list2:
            return False
        if self.aut_valt_prkg_map_oper_req2_map_list3 != other.aut_valt_prkg_map_oper_req2_map_list3:
            return False
        if self.aut_valt_prkg_map_oper_req2_map_list4 != other.aut_valt_prkg_map_oper_req2_map_list4:
            return False
        if self.aut_valt_prkg_l2_pop_btn_req != other.aut_valt_prkg_l2_pop_btn_req:
            return False
        if self.voice_active_adcu != other.voice_active_adcu:
            return False
        if self.btn_tr_sts1 != other.btn_tr_sts1:
            return False
        if self.btn_unlck_sts1 != other.btn_unlck_sts1:
            return False
        if self.btn_lock_sts1 != other.btn_lock_sts1:
            return False
        if self.btn_tr_sts1_key_id != other.btn_tr_sts1_key_id:
            return False
        if self.btn_unlck_sts1_key_id != other.btn_unlck_sts1_key_id:
            return False
        if self.btn_lock_sts1_key_id != other.btn_lock_sts1_key_id:
            return False
        if self.voice_ctrl_brk != other.voice_ctrl_brk:
            return False
        if self.lo_spd_drvg_assi_swt != other.lo_spd_drvg_assi_swt:
            return False
        if self.prkg_frnt_or_re_select != other.prkg_frnt_or_re_select:
            return False
        if self.tracking_back_assi_swt != other.tracking_back_assi_swt:
            return False
        if self.prkg_emg_brk_sys_swt != other.prkg_emg_brk_sys_swt:
            return False
        if self.aut_prkg_voice_swt != other.aut_prkg_voice_swt:
            return False
        if self.lsda_notif_push_req != other.lsda_notif_push_req:
            return False
        if self.monr_sys_sts != other.monr_sys_sts:
            return False
        if self.drvr_assc_wisdom_btn != other.drvr_assc_wisdom_btn:
            return False
        if self.scenario_mod != other.scenario_mod:
            return False
        if self.aut_prkg_voice_typ != other.aut_prkg_voice_typ:
            return False
        if self.mai_setting != other.mai_setting:
            return False
        if self.aut_prkg_hand_slot_nr_req != other.aut_prkg_hand_slot_nr_req:
            return False
        if self.asy_aut_drv_ctrl_typ_dim_req != other.asy_aut_drv_ctrl_typ_dim_req:
            return False
        if self.hmi_drvr_sod_req_pilot != other.hmi_drvr_sod_req_pilot:
            return False
        if self.drvr_crs_ctrl_fct_actv_req != other.drvr_crs_ctrl_fct_actv_req:
            return False
        if self.drvr_acc_fct_deactvn_req != other.drvr_acc_fct_deactvn_req:
            return False
        if self.drvr_acc_rs_set_spd_req != other.drvr_acc_rs_set_spd_req:
            return False
        if self.set_spd_for_crs_ctrl_fct_active != other.set_spd_for_crs_ctrl_fct_active:
            return False
        if self.acc_fusn_trfc_req != other.acc_fusn_trfc_req:
            return False
        if self.crs_ctrl_ti_gap_adj_req != other.crs_ctrl_ti_gap_adj_req:
            return False
        if self.ve_spd_indcd_unit != other.ve_spd_indcd_unit:
            return False
        if self.veh_spd_indcd != other.veh_spd_indcd:
            return False
        if self.drv_mod_req != other.drv_mod_req:
            return False
        if self.cam_flts_sts_from_dhu != other.cam_flts_sts_from_dhu:
            return False
        if self.drvr_dec_sts_from_dhu != other.drvr_dec_sts_from_dhu:
            return False
        if self.eye_gaze_zone != other.eye_gaze_zone:
            return False
        if self.eye_gaze_zone_time != other.eye_gaze_zone_time:
            return False
        if self.eye_on_road_from_dhu != other.eye_on_road_from_dhu:
            return False
        if self.eye_open_from_dhu_eye_open_deg_le != other.eye_open_from_dhu_eye_open_deg_le:
            return False
        if self.eye_open_from_dhu_eye_open_deg_ri != other.eye_open_from_dhu_eye_open_deg_ri:
            return False
        if self.eye_open_from_dhu_eye_open_le != other.eye_open_from_dhu_eye_open_le:
            return False
        if self.eye_open_from_dhu_eye_open_ri != other.eye_open_from_dhu_eye_open_ri:
            return False
        if self.eye_open_from_dhu_eye_visible_le != other.eye_open_from_dhu_eye_visible_le:
            return False
        if self.eye_open_from_dhu_eye_visible_ri != other.eye_open_from_dhu_eye_visible_ri:
            return False
        if self.eye_open_from_dhu_face_visible != other.eye_open_from_dhu_face_visible:
            return False
        if self.snsr_drvr_pfmnc_sts_from_dhu != other.snsr_drvr_pfmnc_sts_from_dhu:
            return False
        if self.voice_brst_mod != other.voice_brst_mod:
            return False
        if self.auto_lane_chg_style_sw_sts != other.auto_lane_chg_style_sw_sts:
            return False
        if self.nop_cofm_of_lan_chag_onoff != other.nop_cofm_of_lan_chag_onoff:
            return False
        if self.hmi_sod_lan_chg_switch != other.hmi_sod_lan_chg_switch:
            return False
        if self.hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg:
            return False
        if self.asy_noa_upgrade_switch != other.asy_noa_upgrade_switch:
            return False
        if self.sfty_hmi_ena != other.sfty_hmi_ena:
            return False
        if self.nop_remind_typ_of_chg_lane_req != other.nop_remind_typ_of_chg_lane_req:
            return False
        if self.drvr_lane_chg_aut_actv_sts != other.drvr_lane_chg_aut_actv_sts:
            return False
        if self.auto_lane_chg_with_navi_sw_onoff != other.auto_lane_chg_with_navi_sw_onoff:
            return False
        if self.nav_noa_status_change_req != other.nav_noa_status_change_req:
            return False
        if self.prkg_camera_store_req != other.prkg_camera_store_req:
            return False
        if self.voice_ctrl_prk != other.voice_ctrl_prk:
            return False
        if self.drift_prkg_req != other.drift_prkg_req:
            return False
        if self.hmi_drvr_sod_req_cnoa_main_page != other.hmi_drvr_sod_req_cnoa_main_page:
            return False
        if self.hmi_drvr_sod_req_cnoa_lrng != other.hmi_drvr_sod_req_cnoa_lrng:
            return False
        if self.hmi_drvr_sod_req_finish_lrng != other.hmi_drvr_sod_req_finish_lrng:
            return False
        if self.hmi_cnoa_crs_swt_on_off != other.hmi_cnoa_crs_swt_on_off:
            return False
        if self.hmi_cnoa_sod_lan_chg_swt != other.hmi_cnoa_sod_lan_chg_swt:
            return False
        if self.hmi_cnoa_auto_lane_chg_style_sw_sts != other.hmi_cnoa_auto_lane_chg_style_sw_sts:
            return False
        if self.hmi_cnoa_lrng_swt_on_off != other.hmi_cnoa_lrng_swt_on_off:
            return False
        if self.hmi_drvr_sod_req_contns_lrng != other.hmi_drvr_sod_req_contns_lrng:
            return False
        if self.apa_custom_prkg_req != other.apa_custom_prkg_req:
            return False
        if self.exit_custom_prkg_req != other.exit_custom_prkg_req:
            return False
        if self.cust_prk_slot_posn_angle_disp != other.cust_prk_slot_posn_angle_disp:
            return False
        if self.cust_prk_slot_posn_end_x1 != other.cust_prk_slot_posn_end_x1:
            return False
        if self.cust_prk_slot_posn_end_x2 != other.cust_prk_slot_posn_end_x2:
            return False
        if self.cust_prk_slot_posn_end_y1 != other.cust_prk_slot_posn_end_y1:
            return False
        if self.cust_prk_slot_posn_end_y2 != other.cust_prk_slot_posn_end_y2:
            return False
        if self.cust_prk_slot_posn_start_x1 != other.cust_prk_slot_posn_start_x1:
            return False
        if self.cust_prk_slot_posn_start_x2 != other.cust_prk_slot_posn_start_x2:
            return False
        if self.cust_prk_slot_posn_start_y1 != other.cust_prk_slot_posn_start_y1:
            return False
        if self.cust_prk_slot_posn_start_y2 != other.cust_prk_slot_posn_start_y2:
            return False
        if self.screem_oper != other.screem_oper:
            return False
        if self.hpa_max_swt != other.hpa_max_swt:
            return False
        if self.rpa_select_par_in != other.rpa_select_par_in:
            return False
        if self.frnt_and_re_prkg_in_swt != other.frnt_and_re_prkg_in_swt:
            return False
        if self.app_map_info_to_stm != other.app_map_info_to_stm:
            return False
        if self.app_to_stm_data != other.app_to_stm_data:
            return False
        if self.aut_prkg_hand_slot_nr_req_topo_slot_id != other.aut_prkg_hand_slot_nr_req_topo_slot_id:
            return False
        if self.aut_prkg_hand_slot_nr_req_topo_slot_status != other.aut_prkg_hand_slot_nr_req_topo_slot_status:
            return False
        if self.aut_prkg_select_entrance != other.aut_prkg_select_entrance:
            return False
        if self.aut_valt_prkg_cls_pop != other.aut_valt_prkg_cls_pop:
            return False
        if self.aut_valt_prkg_cover_results != other.aut_valt_prkg_cover_results:
            return False
        if self.aut_valt_prkg_select_d2d != other.aut_valt_prkg_select_d2d:
            return False
        if self.aut_valt_prkg_topo_flr != other.aut_valt_prkg_topo_flr:
            return False
        if self.d2d_p_icon_clicked != other.d2d_p_icon_clicked:
            return False
        if self.d2d_route_push_button_resp != other.d2d_route_push_button_resp:
            return False
        if self.hmi_etc_traffic_sw_sts != other.hmi_etc_traffic_sw_sts:
            return False
        if self.prkg_lrng_sts_hpa_lrng_sts != other.prkg_lrng_sts_hpa_lrng_sts:
            return False
        if self.prkg_slot_typ_select != other.prkg_slot_typ_select:
            return False
        if self.asy_aut_drvg_li_swt != other.asy_aut_drvg_li_swt:
            return False
        if self.aut_valt_prkg_map_resp_map_id_list1 != other.aut_valt_prkg_map_resp_map_id_list1:
            return False
        if self.aut_valt_prkg_map_resp_map_id_list2 != other.aut_valt_prkg_map_resp_map_id_list2:
            return False
        if self.aut_valt_prkg_map_resp_map_id_list3 != other.aut_valt_prkg_map_resp_map_id_list3:
            return False
        if self.aut_valt_prkg_map_resp_map_id_list4 != other.aut_valt_prkg_map_resp_map_id_list4:
            return False
        if self.aut_valt_prkg_map_resp_map_id_result != other.aut_valt_prkg_map_resp_map_id_result:
            return False
        if self.aut_valt_prkg_map_syncn_map_id_list1 != other.aut_valt_prkg_map_syncn_map_id_list1:
            return False
        if self.aut_valt_prkg_map_syncn_map_id_list2 != other.aut_valt_prkg_map_syncn_map_id_list2:
            return False
        if self.aut_valt_prkg_map_syncn_map_id_list3 != other.aut_valt_prkg_map_syncn_map_id_list3:
            return False
        if self.aut_valt_prkg_map_syncn_map_id_list4 != other.aut_valt_prkg_map_syncn_map_id_list4:
            return False
        if self.aut_valt_prkg_map_syncn_map_syncn != other.aut_valt_prkg_map_syncn_map_syncn:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def drvr_assc_sys_btn_push(self):
        """Message field 'drvr_assc_sys_btn_push'."""
        return self._drvr_assc_sys_btn_push

    @drvr_assc_sys_btn_push.setter
    def drvr_assc_sys_btn_push(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_assc_sys_btn_push' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_assc_sys_btn_push' field must be an unsigned integer in [0, 255]"
        self._drvr_assc_sys_btn_push = value

    @builtins.property
    def swt_disp_on_and_off_req(self):
        """Message field 'swt_disp_on_and_off_req'."""
        return self._swt_disp_on_and_off_req

    @swt_disp_on_and_off_req.setter
    def swt_disp_on_and_off_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'swt_disp_on_and_off_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'swt_disp_on_and_off_req' field must be an unsigned integer in [0, 255]"
        self._swt_disp_on_and_off_req = value

    @builtins.property
    def nav_frnt_actv_sts(self):
        """Message field 'nav_frnt_actv_sts'."""
        return self._nav_frnt_actv_sts

    @nav_frnt_actv_sts.setter
    def nav_frnt_actv_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_frnt_actv_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_frnt_actv_sts' field must be an unsigned integer in [0, 255]"
        self._nav_frnt_actv_sts = value

    @builtins.property
    def ihu_fail(self):
        """Message field 'ihu_fail'."""
        return self._ihu_fail

    @ihu_fail.setter
    def ihu_fail(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ihu_fail' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ihu_fail' field must be an unsigned integer in [0, 255]"
        self._ihu_fail = value

    @builtins.property
    def scene_mod_seld(self):
        """Message field 'scene_mod_seld'."""
        return self._scene_mod_seld

    @scene_mod_seld.setter
    def scene_mod_seld(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scene_mod_seld' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scene_mod_seld' field must be an unsigned integer in [0, 255]"
        self._scene_mod_seld = value

    @builtins.property
    def other_ar_psd_req(self):
        """Message field 'other_ar_psd_req'."""
        return self._other_ar_psd_req

    @other_ar_psd_req.setter
    def other_ar_psd_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'other_ar_psd_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'other_ar_psd_req' field must be an unsigned integer in [0, 255]"
        self._other_ar_psd_req = value

    @builtins.property
    def mob_dev_rpa_req_rspa_ctrl(self):
        """Message field 'mob_dev_rpa_req_rspa_ctrl'."""
        return self._mob_dev_rpa_req_rspa_ctrl

    @mob_dev_rpa_req_rspa_ctrl.setter
    def mob_dev_rpa_req_rspa_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_req_rspa_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_req_rspa_ctrl' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_req_rspa_ctrl = value

    @builtins.property
    def mob_dev_rpa_req_rpa_req(self):
        """Message field 'mob_dev_rpa_req_rpa_req'."""
        return self._mob_dev_rpa_req_rpa_req

    @mob_dev_rpa_req_rpa_req.setter
    def mob_dev_rpa_req_rpa_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_req_rpa_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_req_rpa_req' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_req_rpa_req = value

    @builtins.property
    def mob_dev_rpa_req_rpa_out_mode_sub_t(self):
        """Message field 'mob_dev_rpa_req_rpa_out_mode_sub_t'."""
        return self._mob_dev_rpa_req_rpa_out_mode_sub_t

    @mob_dev_rpa_req_rpa_out_mode_sub_t.setter
    def mob_dev_rpa_req_rpa_out_mode_sub_t(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_req_rpa_out_mode_sub_t' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_req_rpa_out_mode_sub_t' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_req_rpa_out_mode_sub_t = value

    @builtins.property
    def mob_dev_rpa_req_mob_dev_sts(self):
        """Message field 'mob_dev_rpa_req_mob_dev_sts'."""
        return self._mob_dev_rpa_req_mob_dev_sts

    @mob_dev_rpa_req_mob_dev_sts.setter
    def mob_dev_rpa_req_mob_dev_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rpa_req_mob_dev_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rpa_req_mob_dev_sts' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rpa_req_mob_dev_sts = value

    @builtins.property
    def rem_straight_prkg_assi_seln_req(self):
        """Message field 'rem_straight_prkg_assi_seln_req'."""
        return self._rem_straight_prkg_assi_seln_req

    @rem_straight_prkg_assi_seln_req.setter
    def rem_straight_prkg_assi_seln_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rem_straight_prkg_assi_seln_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rem_straight_prkg_assi_seln_req' field must be an unsigned integer in [0, 255]"
        self._rem_straight_prkg_assi_seln_req = value

    @builtins.property
    def prkg_touch_coorn_req_touch_eve_typ(self):
        """Message field 'prkg_touch_coorn_req_touch_eve_typ'."""
        return self._prkg_touch_coorn_req_touch_eve_typ

    @prkg_touch_coorn_req_touch_eve_typ.setter
    def prkg_touch_coorn_req_touch_eve_typ(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_touch_coorn_req_touch_eve_typ' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_touch_coorn_req_touch_eve_typ' field must be an unsigned integer in [0, 255]"
        self._prkg_touch_coorn_req_touch_eve_typ = value

    @builtins.property
    def veh_spd_indcd_veh_spd_indcd(self):
        """Message field 'veh_spd_indcd_veh_spd_indcd'."""
        return self._veh_spd_indcd_veh_spd_indcd

    @veh_spd_indcd_veh_spd_indcd.setter
    def veh_spd_indcd_veh_spd_indcd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_spd_indcd_veh_spd_indcd' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'veh_spd_indcd_veh_spd_indcd' field must be an unsigned integer in [0, 65535]"
        self._veh_spd_indcd_veh_spd_indcd = value

    @builtins.property
    def sm_aut_prkg_slot_nr_req(self):
        """Message field 'sm_aut_prkg_slot_nr_req'."""
        return self._sm_aut_prkg_slot_nr_req

    @sm_aut_prkg_slot_nr_req.setter
    def sm_aut_prkg_slot_nr_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_aut_prkg_slot_nr_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_aut_prkg_slot_nr_req' field must be an unsigned integer in [0, 255]"
        self._sm_aut_prkg_slot_nr_req = value

    @builtins.property
    def sm_prkg_in_or_out_and_cncl(self):
        """Message field 'sm_prkg_in_or_out_and_cncl'."""
        return self._sm_prkg_in_or_out_and_cncl

    @sm_prkg_in_or_out_and_cncl.setter
    def sm_prkg_in_or_out_and_cncl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_prkg_in_or_out_and_cncl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_prkg_in_or_out_and_cncl' field must be an unsigned integer in [0, 255]"
        self._sm_prkg_in_or_out_and_cncl = value

    @builtins.property
    def sm_prkg_intrpt_reld_btn(self):
        """Message field 'sm_prkg_intrpt_reld_btn'."""
        return self._sm_prkg_intrpt_reld_btn

    @sm_prkg_intrpt_reld_btn.setter
    def sm_prkg_intrpt_reld_btn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_prkg_intrpt_reld_btn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_prkg_intrpt_reld_btn' field must be an unsigned integer in [0, 255]"
        self._sm_prkg_intrpt_reld_btn = value

    @builtins.property
    def sm_prkg_fct_swt(self):
        """Message field 'sm_prkg_fct_swt'."""
        return self._sm_prkg_fct_swt

    @sm_prkg_fct_swt.setter
    def sm_prkg_fct_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_prkg_fct_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_prkg_fct_swt' field must be an unsigned integer in [0, 255]"
        self._sm_prkg_fct_swt = value

    @builtins.property
    def sm_aut_actv_prkg_fct_swt(self):
        """Message field 'sm_aut_actv_prkg_fct_swt'."""
        return self._sm_aut_actv_prkg_fct_swt

    @sm_aut_actv_prkg_fct_swt.setter
    def sm_aut_actv_prkg_fct_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_aut_actv_prkg_fct_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_aut_actv_prkg_fct_swt' field must be an unsigned integer in [0, 255]"
        self._sm_aut_actv_prkg_fct_swt = value

    @builtins.property
    def full_screen_btn_push(self):
        """Message field 'full_screen_btn_push'."""
        return self._full_screen_btn_push

    @full_screen_btn_push.setter
    def full_screen_btn_push(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'full_screen_btn_push' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'full_screen_btn_push' field must be an unsigned integer in [0, 255]"
        self._full_screen_btn_push = value

    @builtins.property
    def sm_sel_push_apa_info(self):
        """Message field 'sm_sel_push_apa_info'."""
        return self._sm_sel_push_apa_info

    @sm_sel_push_apa_info.setter
    def sm_sel_push_apa_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_sel_push_apa_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_sel_push_apa_info' field must be an unsigned integer in [0, 255]"
        self._sm_sel_push_apa_info = value

    @builtins.property
    def sm_hpa_soft_butn_enter_rq(self):
        """Message field 'sm_hpa_soft_butn_enter_rq'."""
        return self._sm_hpa_soft_butn_enter_rq

    @sm_hpa_soft_butn_enter_rq.setter
    def sm_hpa_soft_butn_enter_rq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_hpa_soft_butn_enter_rq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_hpa_soft_butn_enter_rq' field must be an unsigned integer in [0, 255]"
        self._sm_hpa_soft_butn_enter_rq = value

    @builtins.property
    def sm_map_build_rq(self):
        """Message field 'sm_map_build_rq'."""
        return self._sm_map_build_rq

    @sm_map_build_rq.setter
    def sm_map_build_rq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_map_build_rq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_map_build_rq' field must be an unsigned integer in [0, 255]"
        self._sm_map_build_rq = value

    @builtins.property
    def sm_map_save_rq(self):
        """Message field 'sm_map_save_rq'."""
        return self._sm_map_save_rq

    @sm_map_save_rq.setter
    def sm_map_save_rq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_map_save_rq' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_map_save_rq' field must be an unsigned integer in [0, 255]"
        self._sm_map_save_rq = value

    @builtins.property
    def sm_map_select_id(self):
        """Message field 'sm_map_select_id'."""
        return self._sm_map_select_id

    @sm_map_select_id.setter
    def sm_map_select_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_map_select_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_map_select_id' field must be an unsigned integer in [0, 255]"
        self._sm_map_select_id = value

    @builtins.property
    def sm_drvr_assc_sys_park_mod(self):
        """Message field 'sm_drvr_assc_sys_park_mod'."""
        return self._sm_drvr_assc_sys_park_mod

    @sm_drvr_assc_sys_park_mod.setter
    def sm_drvr_assc_sys_park_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_drvr_assc_sys_park_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_drvr_assc_sys_park_mod' field must be an unsigned integer in [0, 255]"
        self._sm_drvr_assc_sys_park_mod = value

    @builtins.property
    def map_build_sts(self):
        """Message field 'map_build_sts'."""
        return self._map_build_sts

    @map_build_sts.setter
    def map_build_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_build_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'map_build_sts' field must be an unsigned integer in [0, 255]"
        self._map_build_sts = value

    @builtins.property
    def aut_valt_prkg_map_src_req(self):
        """Message field 'aut_valt_prkg_map_src_req'."""
        return self._aut_valt_prkg_map_src_req

    @aut_valt_prkg_map_src_req.setter
    def aut_valt_prkg_map_src_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_src_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_src_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_src_req = value

    @builtins.property
    def aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req(self):
        """Message field 'aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req'."""
        return self._aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req

    @aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req.setter
    def aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_l2_btn_req_setting_fct_push_btn_req = value

    @builtins.property
    def aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req(self):
        """Message field 'aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req'."""
        return self._aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req

    @aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req.setter
    def aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_l2_btn_req_setting_no_sence_btn_req = value

    @builtins.property
    def aut_valt_prkg_l2_btn_req_setting_voice_btn_req(self):
        """Message field 'aut_valt_prkg_l2_btn_req_setting_voice_btn_req'."""
        return self._aut_valt_prkg_l2_btn_req_setting_voice_btn_req

    @aut_valt_prkg_l2_btn_req_setting_voice_btn_req.setter
    def aut_valt_prkg_l2_btn_req_setting_voice_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_l2_btn_req_setting_voice_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_l2_btn_req_setting_voice_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_l2_btn_req_setting_voice_btn_req = value

    @builtins.property
    def aut_valt_prkg_map_oper_req_map_type(self):
        """Message field 'aut_valt_prkg_map_oper_req_map_type'."""
        return self._aut_valt_prkg_map_oper_req_map_type

    @aut_valt_prkg_map_oper_req_map_type.setter
    def aut_valt_prkg_map_oper_req_map_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req_map_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_oper_req_map_type' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_oper_req_map_type = value

    @builtins.property
    def aut_valt_prkg_l1_btn_req(self):
        """Message field 'aut_valt_prkg_l1_btn_req'."""
        return self._aut_valt_prkg_l1_btn_req

    @aut_valt_prkg_l1_btn_req.setter
    def aut_valt_prkg_l1_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_l1_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_l1_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_l1_btn_req = value

    @builtins.property
    def aut_valt_prkg_experience_resp(self):
        """Message field 'aut_valt_prkg_experience_resp'."""
        return self._aut_valt_prkg_experience_resp

    @aut_valt_prkg_experience_resp.setter
    def aut_valt_prkg_experience_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_experience_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_experience_resp' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_experience_resp = value

    @builtins.property
    def lo_spd_drvg_assi_sho_push_resp(self):
        """Message field 'lo_spd_drvg_assi_sho_push_resp'."""
        return self._lo_spd_drvg_assi_sho_push_resp

    @lo_spd_drvg_assi_sho_push_resp.setter
    def lo_spd_drvg_assi_sho_push_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lo_spd_drvg_assi_sho_push_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lo_spd_drvg_assi_sho_push_resp' field must be an unsigned integer in [0, 255]"
        self._lo_spd_drvg_assi_sho_push_resp = value

    @builtins.property
    def aut_valt_prkg_sho_dst_push_swt(self):
        """Message field 'aut_valt_prkg_sho_dst_push_swt'."""
        return self._aut_valt_prkg_sho_dst_push_swt

    @aut_valt_prkg_sho_dst_push_swt.setter
    def aut_valt_prkg_sho_dst_push_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_sho_dst_push_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_sho_dst_push_swt' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_sho_dst_push_swt = value

    @builtins.property
    def aut_valt_prkg_picture_upload_swt(self):
        """Message field 'aut_valt_prkg_picture_upload_swt'."""
        return self._aut_valt_prkg_picture_upload_swt

    @aut_valt_prkg_picture_upload_swt.setter
    def aut_valt_prkg_picture_upload_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_picture_upload_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_picture_upload_swt' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_picture_upload_swt = value

    @builtins.property
    def aut_valt_prkg_ins_btn_req(self):
        """Message field 'aut_valt_prkg_ins_btn_req'."""
        return self._aut_valt_prkg_ins_btn_req

    @aut_valt_prkg_ins_btn_req.setter
    def aut_valt_prkg_ins_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_ins_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_ins_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_ins_btn_req = value

    @builtins.property
    def aut_valt_prkg_swt(self):
        """Message field 'aut_valt_prkg_swt'."""
        return self._aut_valt_prkg_swt

    @aut_valt_prkg_swt.setter
    def aut_valt_prkg_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_swt' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_swt = value

    @builtins.property
    def prof_pen_sts1(self):
        """Message field 'prof_pen_sts1'."""
        return self._prof_pen_sts1

    @prof_pen_sts1.setter
    def prof_pen_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prof_pen_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prof_pen_sts1' field must be an unsigned integer in [0, 255]"
        self._prof_pen_sts1 = value

    @builtins.property
    def aut_valt_prkg_map_oper_req2_map_type2(self):
        """Message field 'aut_valt_prkg_map_oper_req2_map_type2'."""
        return self._aut_valt_prkg_map_oper_req2_map_type2

    @aut_valt_prkg_map_oper_req2_map_type2.setter
    def aut_valt_prkg_map_oper_req2_map_type2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req2_map_type2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_oper_req2_map_type2' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_oper_req2_map_type2 = value

    @builtins.property
    def aut_valt_prkg_map_oper_req2_map_list1(self):
        """Message field 'aut_valt_prkg_map_oper_req2_map_list1'."""
        return self._aut_valt_prkg_map_oper_req2_map_list1

    @aut_valt_prkg_map_oper_req2_map_list1.setter
    def aut_valt_prkg_map_oper_req2_map_list1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req2_map_list1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_oper_req2_map_list1' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_oper_req2_map_list1 = value

    @builtins.property
    def aut_valt_prkg_map_oper_req2_map_list2(self):
        """Message field 'aut_valt_prkg_map_oper_req2_map_list2'."""
        return self._aut_valt_prkg_map_oper_req2_map_list2

    @aut_valt_prkg_map_oper_req2_map_list2.setter
    def aut_valt_prkg_map_oper_req2_map_list2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req2_map_list2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_oper_req2_map_list2' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_oper_req2_map_list2 = value

    @builtins.property
    def aut_valt_prkg_map_oper_req2_map_list3(self):
        """Message field 'aut_valt_prkg_map_oper_req2_map_list3'."""
        return self._aut_valt_prkg_map_oper_req2_map_list3

    @aut_valt_prkg_map_oper_req2_map_list3.setter
    def aut_valt_prkg_map_oper_req2_map_list3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req2_map_list3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_oper_req2_map_list3' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_oper_req2_map_list3 = value

    @builtins.property
    def aut_valt_prkg_map_oper_req2_map_list4(self):
        """Message field 'aut_valt_prkg_map_oper_req2_map_list4'."""
        return self._aut_valt_prkg_map_oper_req2_map_list4

    @aut_valt_prkg_map_oper_req2_map_list4.setter
    def aut_valt_prkg_map_oper_req2_map_list4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_oper_req2_map_list4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_oper_req2_map_list4' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_oper_req2_map_list4 = value

    @builtins.property
    def aut_valt_prkg_l2_pop_btn_req(self):
        """Message field 'aut_valt_prkg_l2_pop_btn_req'."""
        return self._aut_valt_prkg_l2_pop_btn_req

    @aut_valt_prkg_l2_pop_btn_req.setter
    def aut_valt_prkg_l2_pop_btn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_l2_pop_btn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_l2_pop_btn_req' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_l2_pop_btn_req = value

    @builtins.property
    def voice_active_adcu(self):
        """Message field 'voice_active_adcu'."""
        return self._voice_active_adcu

    @voice_active_adcu.setter
    def voice_active_adcu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voice_active_adcu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voice_active_adcu' field must be an unsigned integer in [0, 255]"
        self._voice_active_adcu = value

    @builtins.property
    def btn_tr_sts1(self):
        """Message field 'btn_tr_sts1'."""
        return self._btn_tr_sts1

    @btn_tr_sts1.setter
    def btn_tr_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_tr_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_tr_sts1' field must be an unsigned integer in [0, 255]"
        self._btn_tr_sts1 = value

    @builtins.property
    def btn_unlck_sts1(self):
        """Message field 'btn_unlck_sts1'."""
        return self._btn_unlck_sts1

    @btn_unlck_sts1.setter
    def btn_unlck_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_unlck_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_unlck_sts1' field must be an unsigned integer in [0, 255]"
        self._btn_unlck_sts1 = value

    @builtins.property
    def btn_lock_sts1(self):
        """Message field 'btn_lock_sts1'."""
        return self._btn_lock_sts1

    @btn_lock_sts1.setter
    def btn_lock_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_lock_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_lock_sts1' field must be an unsigned integer in [0, 255]"
        self._btn_lock_sts1 = value

    @builtins.property
    def btn_tr_sts1_key_id(self):
        """Message field 'btn_tr_sts1_key_id'."""
        return self._btn_tr_sts1_key_id

    @btn_tr_sts1_key_id.setter
    def btn_tr_sts1_key_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_tr_sts1_key_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_tr_sts1_key_id' field must be an unsigned integer in [0, 255]"
        self._btn_tr_sts1_key_id = value

    @builtins.property
    def btn_unlck_sts1_key_id(self):
        """Message field 'btn_unlck_sts1_key_id'."""
        return self._btn_unlck_sts1_key_id

    @btn_unlck_sts1_key_id.setter
    def btn_unlck_sts1_key_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_unlck_sts1_key_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_unlck_sts1_key_id' field must be an unsigned integer in [0, 255]"
        self._btn_unlck_sts1_key_id = value

    @builtins.property
    def btn_lock_sts1_key_id(self):
        """Message field 'btn_lock_sts1_key_id'."""
        return self._btn_lock_sts1_key_id

    @btn_lock_sts1_key_id.setter
    def btn_lock_sts1_key_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'btn_lock_sts1_key_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'btn_lock_sts1_key_id' field must be an unsigned integer in [0, 255]"
        self._btn_lock_sts1_key_id = value

    @builtins.property
    def voice_ctrl_brk(self):
        """Message field 'voice_ctrl_brk'."""
        return self._voice_ctrl_brk

    @voice_ctrl_brk.setter
    def voice_ctrl_brk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voice_ctrl_brk' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voice_ctrl_brk' field must be an unsigned integer in [0, 255]"
        self._voice_ctrl_brk = value

    @builtins.property
    def lo_spd_drvg_assi_swt(self):
        """Message field 'lo_spd_drvg_assi_swt'."""
        return self._lo_spd_drvg_assi_swt

    @lo_spd_drvg_assi_swt.setter
    def lo_spd_drvg_assi_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lo_spd_drvg_assi_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lo_spd_drvg_assi_swt' field must be an unsigned integer in [0, 255]"
        self._lo_spd_drvg_assi_swt = value

    @builtins.property
    def prkg_frnt_or_re_select(self):
        """Message field 'prkg_frnt_or_re_select'."""
        return self._prkg_frnt_or_re_select

    @prkg_frnt_or_re_select.setter
    def prkg_frnt_or_re_select(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_frnt_or_re_select' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_frnt_or_re_select' field must be an unsigned integer in [0, 255]"
        self._prkg_frnt_or_re_select = value

    @builtins.property
    def tracking_back_assi_swt(self):
        """Message field 'tracking_back_assi_swt'."""
        return self._tracking_back_assi_swt

    @tracking_back_assi_swt.setter
    def tracking_back_assi_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tracking_back_assi_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tracking_back_assi_swt' field must be an unsigned integer in [0, 255]"
        self._tracking_back_assi_swt = value

    @builtins.property
    def prkg_emg_brk_sys_swt(self):
        """Message field 'prkg_emg_brk_sys_swt'."""
        return self._prkg_emg_brk_sys_swt

    @prkg_emg_brk_sys_swt.setter
    def prkg_emg_brk_sys_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_emg_brk_sys_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_emg_brk_sys_swt' field must be an unsigned integer in [0, 255]"
        self._prkg_emg_brk_sys_swt = value

    @builtins.property
    def aut_prkg_voice_swt(self):
        """Message field 'aut_prkg_voice_swt'."""
        return self._aut_prkg_voice_swt

    @aut_prkg_voice_swt.setter
    def aut_prkg_voice_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_voice_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_voice_swt' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_voice_swt = value

    @builtins.property
    def lsda_notif_push_req(self):
        """Message field 'lsda_notif_push_req'."""
        return self._lsda_notif_push_req

    @lsda_notif_push_req.setter
    def lsda_notif_push_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lsda_notif_push_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lsda_notif_push_req' field must be an unsigned integer in [0, 255]"
        self._lsda_notif_push_req = value

    @builtins.property
    def monr_sys_sts(self):
        """Message field 'monr_sys_sts'."""
        return self._monr_sys_sts

    @monr_sys_sts.setter
    def monr_sys_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'monr_sys_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'monr_sys_sts' field must be an unsigned integer in [0, 255]"
        self._monr_sys_sts = value

    @builtins.property
    def drvr_assc_wisdom_btn(self):
        """Message field 'drvr_assc_wisdom_btn'."""
        return self._drvr_assc_wisdom_btn

    @drvr_assc_wisdom_btn.setter
    def drvr_assc_wisdom_btn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_assc_wisdom_btn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_assc_wisdom_btn' field must be an unsigned integer in [0, 255]"
        self._drvr_assc_wisdom_btn = value

    @builtins.property
    def scenario_mod(self):
        """Message field 'scenario_mod'."""
        return self._scenario_mod

    @scenario_mod.setter
    def scenario_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scenario_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scenario_mod' field must be an unsigned integer in [0, 255]"
        self._scenario_mod = value

    @builtins.property
    def aut_prkg_voice_typ(self):
        """Message field 'aut_prkg_voice_typ'."""
        return self._aut_prkg_voice_typ

    @aut_prkg_voice_typ.setter
    def aut_prkg_voice_typ(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_voice_typ' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_voice_typ' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_voice_typ = value

    @builtins.property
    def mai_setting(self):
        """Message field 'mai_setting'."""
        return self._mai_setting

    @mai_setting.setter
    def mai_setting(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mai_setting' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mai_setting' field must be an unsigned integer in [0, 255]"
        self._mai_setting = value

    @builtins.property
    def aut_prkg_hand_slot_nr_req(self):
        """Message field 'aut_prkg_hand_slot_nr_req'."""
        return self._aut_prkg_hand_slot_nr_req

    @aut_prkg_hand_slot_nr_req.setter
    def aut_prkg_hand_slot_nr_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_hand_slot_nr_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_hand_slot_nr_req' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_hand_slot_nr_req = value

    @builtins.property
    def asy_aut_drv_ctrl_typ_dim_req(self):
        """Message field 'asy_aut_drv_ctrl_typ_dim_req'."""
        return self._asy_aut_drv_ctrl_typ_dim_req

    @asy_aut_drv_ctrl_typ_dim_req.setter
    def asy_aut_drv_ctrl_typ_dim_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_drv_ctrl_typ_dim_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_drv_ctrl_typ_dim_req' field must be an unsigned integer in [0, 255]"
        self._asy_aut_drv_ctrl_typ_dim_req = value

    @builtins.property
    def hmi_drvr_sod_req_pilot(self):
        """Message field 'hmi_drvr_sod_req_pilot'."""
        return self._hmi_drvr_sod_req_pilot

    @hmi_drvr_sod_req_pilot.setter
    def hmi_drvr_sod_req_pilot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_pilot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_pilot' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_pilot = value

    @builtins.property
    def drvr_crs_ctrl_fct_actv_req(self):
        """Message field 'drvr_crs_ctrl_fct_actv_req'."""
        return self._drvr_crs_ctrl_fct_actv_req

    @drvr_crs_ctrl_fct_actv_req.setter
    def drvr_crs_ctrl_fct_actv_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_crs_ctrl_fct_actv_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_crs_ctrl_fct_actv_req' field must be an unsigned integer in [0, 255]"
        self._drvr_crs_ctrl_fct_actv_req = value

    @builtins.property
    def drvr_acc_fct_deactvn_req(self):
        """Message field 'drvr_acc_fct_deactvn_req'."""
        return self._drvr_acc_fct_deactvn_req

    @drvr_acc_fct_deactvn_req.setter
    def drvr_acc_fct_deactvn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_acc_fct_deactvn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_acc_fct_deactvn_req' field must be an unsigned integer in [0, 255]"
        self._drvr_acc_fct_deactvn_req = value

    @builtins.property
    def drvr_acc_rs_set_spd_req(self):
        """Message field 'drvr_acc_rs_set_spd_req'."""
        return self._drvr_acc_rs_set_spd_req

    @drvr_acc_rs_set_spd_req.setter
    def drvr_acc_rs_set_spd_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_acc_rs_set_spd_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_acc_rs_set_spd_req' field must be an unsigned integer in [0, 255]"
        self._drvr_acc_rs_set_spd_req = value

    @builtins.property
    def set_spd_for_crs_ctrl_fct_active(self):
        """Message field 'set_spd_for_crs_ctrl_fct_active'."""
        return self._set_spd_for_crs_ctrl_fct_active

    @set_spd_for_crs_ctrl_fct_active.setter
    def set_spd_for_crs_ctrl_fct_active(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'set_spd_for_crs_ctrl_fct_active' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'set_spd_for_crs_ctrl_fct_active' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._set_spd_for_crs_ctrl_fct_active = value

    @builtins.property
    def acc_fusn_trfc_req(self):
        """Message field 'acc_fusn_trfc_req'."""
        return self._acc_fusn_trfc_req

    @acc_fusn_trfc_req.setter
    def acc_fusn_trfc_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_fusn_trfc_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acc_fusn_trfc_req' field must be an unsigned integer in [0, 255]"
        self._acc_fusn_trfc_req = value

    @builtins.property
    def crs_ctrl_ti_gap_adj_req(self):
        """Message field 'crs_ctrl_ti_gap_adj_req'."""
        return self._crs_ctrl_ti_gap_adj_req

    @crs_ctrl_ti_gap_adj_req.setter
    def crs_ctrl_ti_gap_adj_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crs_ctrl_ti_gap_adj_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crs_ctrl_ti_gap_adj_req' field must be an unsigned integer in [0, 255]"
        self._crs_ctrl_ti_gap_adj_req = value

    @builtins.property
    def ve_spd_indcd_unit(self):
        """Message field 've_spd_indcd_unit'."""
        return self._ve_spd_indcd_unit

    @ve_spd_indcd_unit.setter
    def ve_spd_indcd_unit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 've_spd_indcd_unit' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 've_spd_indcd_unit' field must be an unsigned integer in [0, 255]"
        self._ve_spd_indcd_unit = value

    @builtins.property
    def veh_spd_indcd(self):
        """Message field 'veh_spd_indcd'."""
        return self._veh_spd_indcd

    @veh_spd_indcd.setter
    def veh_spd_indcd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_spd_indcd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'veh_spd_indcd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._veh_spd_indcd = value

    @builtins.property
    def drv_mod_req(self):
        """Message field 'drv_mod_req'."""
        return self._drv_mod_req

    @drv_mod_req.setter
    def drv_mod_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drv_mod_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drv_mod_req' field must be an unsigned integer in [0, 255]"
        self._drv_mod_req = value

    @builtins.property
    def cam_flts_sts_from_dhu(self):
        """Message field 'cam_flts_sts_from_dhu'."""
        return self._cam_flts_sts_from_dhu

    @cam_flts_sts_from_dhu.setter
    def cam_flts_sts_from_dhu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cam_flts_sts_from_dhu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'cam_flts_sts_from_dhu' field must be an unsigned integer in [0, 255]"
        self._cam_flts_sts_from_dhu = value

    @builtins.property
    def drvr_dec_sts_from_dhu(self):
        """Message field 'drvr_dec_sts_from_dhu'."""
        return self._drvr_dec_sts_from_dhu

    @drvr_dec_sts_from_dhu.setter
    def drvr_dec_sts_from_dhu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_dec_sts_from_dhu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_dec_sts_from_dhu' field must be an unsigned integer in [0, 255]"
        self._drvr_dec_sts_from_dhu = value

    @builtins.property
    def eye_gaze_zone(self):
        """Message field 'eye_gaze_zone'."""
        return self._eye_gaze_zone

    @eye_gaze_zone.setter
    def eye_gaze_zone(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_gaze_zone' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_gaze_zone' field must be an unsigned integer in [0, 255]"
        self._eye_gaze_zone = value

    @builtins.property
    def eye_gaze_zone_time(self):
        """Message field 'eye_gaze_zone_time'."""
        return self._eye_gaze_zone_time

    @eye_gaze_zone_time.setter
    def eye_gaze_zone_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_gaze_zone_time' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'eye_gaze_zone_time' field must be an unsigned integer in [0, 65535]"
        self._eye_gaze_zone_time = value

    @builtins.property
    def eye_on_road_from_dhu(self):
        """Message field 'eye_on_road_from_dhu'."""
        return self._eye_on_road_from_dhu

    @eye_on_road_from_dhu.setter
    def eye_on_road_from_dhu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_on_road_from_dhu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_on_road_from_dhu' field must be an unsigned integer in [0, 255]"
        self._eye_on_road_from_dhu = value

    @builtins.property
    def eye_open_from_dhu_eye_open_deg_le(self):
        """Message field 'eye_open_from_dhu_eye_open_deg_le'."""
        return self._eye_open_from_dhu_eye_open_deg_le

    @eye_open_from_dhu_eye_open_deg_le.setter
    def eye_open_from_dhu_eye_open_deg_le(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eye_open_from_dhu_eye_open_deg_le' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eye_open_from_dhu_eye_open_deg_le' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eye_open_from_dhu_eye_open_deg_le = value

    @builtins.property
    def eye_open_from_dhu_eye_open_deg_ri(self):
        """Message field 'eye_open_from_dhu_eye_open_deg_ri'."""
        return self._eye_open_from_dhu_eye_open_deg_ri

    @eye_open_from_dhu_eye_open_deg_ri.setter
    def eye_open_from_dhu_eye_open_deg_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eye_open_from_dhu_eye_open_deg_ri' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eye_open_from_dhu_eye_open_deg_ri' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eye_open_from_dhu_eye_open_deg_ri = value

    @builtins.property
    def eye_open_from_dhu_eye_open_le(self):
        """Message field 'eye_open_from_dhu_eye_open_le'."""
        return self._eye_open_from_dhu_eye_open_le

    @eye_open_from_dhu_eye_open_le.setter
    def eye_open_from_dhu_eye_open_le(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_open_from_dhu_eye_open_le' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_open_from_dhu_eye_open_le' field must be an unsigned integer in [0, 255]"
        self._eye_open_from_dhu_eye_open_le = value

    @builtins.property
    def eye_open_from_dhu_eye_open_ri(self):
        """Message field 'eye_open_from_dhu_eye_open_ri'."""
        return self._eye_open_from_dhu_eye_open_ri

    @eye_open_from_dhu_eye_open_ri.setter
    def eye_open_from_dhu_eye_open_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_open_from_dhu_eye_open_ri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_open_from_dhu_eye_open_ri' field must be an unsigned integer in [0, 255]"
        self._eye_open_from_dhu_eye_open_ri = value

    @builtins.property
    def eye_open_from_dhu_eye_visible_le(self):
        """Message field 'eye_open_from_dhu_eye_visible_le'."""
        return self._eye_open_from_dhu_eye_visible_le

    @eye_open_from_dhu_eye_visible_le.setter
    def eye_open_from_dhu_eye_visible_le(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_open_from_dhu_eye_visible_le' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_open_from_dhu_eye_visible_le' field must be an unsigned integer in [0, 255]"
        self._eye_open_from_dhu_eye_visible_le = value

    @builtins.property
    def eye_open_from_dhu_eye_visible_ri(self):
        """Message field 'eye_open_from_dhu_eye_visible_ri'."""
        return self._eye_open_from_dhu_eye_visible_ri

    @eye_open_from_dhu_eye_visible_ri.setter
    def eye_open_from_dhu_eye_visible_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_open_from_dhu_eye_visible_ri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_open_from_dhu_eye_visible_ri' field must be an unsigned integer in [0, 255]"
        self._eye_open_from_dhu_eye_visible_ri = value

    @builtins.property
    def eye_open_from_dhu_face_visible(self):
        """Message field 'eye_open_from_dhu_face_visible'."""
        return self._eye_open_from_dhu_face_visible

    @eye_open_from_dhu_face_visible.setter
    def eye_open_from_dhu_face_visible(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eye_open_from_dhu_face_visible' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eye_open_from_dhu_face_visible' field must be an unsigned integer in [0, 255]"
        self._eye_open_from_dhu_face_visible = value

    @builtins.property
    def snsr_drvr_pfmnc_sts_from_dhu(self):
        """Message field 'snsr_drvr_pfmnc_sts_from_dhu'."""
        return self._snsr_drvr_pfmnc_sts_from_dhu

    @snsr_drvr_pfmnc_sts_from_dhu.setter
    def snsr_drvr_pfmnc_sts_from_dhu(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'snsr_drvr_pfmnc_sts_from_dhu' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'snsr_drvr_pfmnc_sts_from_dhu' field must be an unsigned integer in [0, 255]"
        self._snsr_drvr_pfmnc_sts_from_dhu = value

    @builtins.property
    def voice_brst_mod(self):
        """Message field 'voice_brst_mod'."""
        return self._voice_brst_mod

    @voice_brst_mod.setter
    def voice_brst_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voice_brst_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voice_brst_mod' field must be an unsigned integer in [0, 255]"
        self._voice_brst_mod = value

    @builtins.property
    def auto_lane_chg_style_sw_sts(self):
        """Message field 'auto_lane_chg_style_sw_sts'."""
        return self._auto_lane_chg_style_sw_sts

    @auto_lane_chg_style_sw_sts.setter
    def auto_lane_chg_style_sw_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_lane_chg_style_sw_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auto_lane_chg_style_sw_sts' field must be an unsigned integer in [0, 255]"
        self._auto_lane_chg_style_sw_sts = value

    @builtins.property
    def nop_cofm_of_lan_chag_onoff(self):
        """Message field 'nop_cofm_of_lan_chag_onoff'."""
        return self._nop_cofm_of_lan_chag_onoff

    @nop_cofm_of_lan_chag_onoff.setter
    def nop_cofm_of_lan_chag_onoff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nop_cofm_of_lan_chag_onoff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nop_cofm_of_lan_chag_onoff' field must be an unsigned integer in [0, 255]"
        self._nop_cofm_of_lan_chag_onoff = value

    @builtins.property
    def hmi_sod_lan_chg_switch(self):
        """Message field 'hmi_sod_lan_chg_switch'."""
        return self._hmi_sod_lan_chg_switch

    @hmi_sod_lan_chg_switch.setter
    def hmi_sod_lan_chg_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_sod_lan_chg_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_sod_lan_chg_switch' field must be an unsigned integer in [0, 255]"
        self._hmi_sod_lan_chg_switch = value

    @builtins.property
    def hmi_drvr_sod_req_chg(self):
        """Message field 'hmi_drvr_sod_req_chg'."""
        return self._hmi_drvr_sod_req_chg

    @hmi_drvr_sod_req_chg.setter
    def hmi_drvr_sod_req_chg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_chg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_chg' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_chg = value

    @builtins.property
    def asy_noa_upgrade_switch(self):
        """Message field 'asy_noa_upgrade_switch'."""
        return self._asy_noa_upgrade_switch

    @asy_noa_upgrade_switch.setter
    def asy_noa_upgrade_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_noa_upgrade_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_noa_upgrade_switch' field must be an unsigned integer in [0, 255]"
        self._asy_noa_upgrade_switch = value

    @builtins.property
    def sfty_hmi_ena(self):
        """Message field 'sfty_hmi_ena'."""
        return self._sfty_hmi_ena

    @sfty_hmi_ena.setter
    def sfty_hmi_ena(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sfty_hmi_ena' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sfty_hmi_ena' field must be an unsigned integer in [0, 255]"
        self._sfty_hmi_ena = value

    @builtins.property
    def nop_remind_typ_of_chg_lane_req(self):
        """Message field 'nop_remind_typ_of_chg_lane_req'."""
        return self._nop_remind_typ_of_chg_lane_req

    @nop_remind_typ_of_chg_lane_req.setter
    def nop_remind_typ_of_chg_lane_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nop_remind_typ_of_chg_lane_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nop_remind_typ_of_chg_lane_req' field must be an unsigned integer in [0, 255]"
        self._nop_remind_typ_of_chg_lane_req = value

    @builtins.property
    def drvr_lane_chg_aut_actv_sts(self):
        """Message field 'drvr_lane_chg_aut_actv_sts'."""
        return self._drvr_lane_chg_aut_actv_sts

    @drvr_lane_chg_aut_actv_sts.setter
    def drvr_lane_chg_aut_actv_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_lane_chg_aut_actv_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_lane_chg_aut_actv_sts' field must be an unsigned integer in [0, 255]"
        self._drvr_lane_chg_aut_actv_sts = value

    @builtins.property
    def auto_lane_chg_with_navi_sw_onoff(self):
        """Message field 'auto_lane_chg_with_navi_sw_onoff'."""
        return self._auto_lane_chg_with_navi_sw_onoff

    @auto_lane_chg_with_navi_sw_onoff.setter
    def auto_lane_chg_with_navi_sw_onoff(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'auto_lane_chg_with_navi_sw_onoff' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'auto_lane_chg_with_navi_sw_onoff' field must be an unsigned integer in [0, 255]"
        self._auto_lane_chg_with_navi_sw_onoff = value

    @builtins.property
    def nav_noa_status_change_req(self):
        """Message field 'nav_noa_status_change_req'."""
        return self._nav_noa_status_change_req

    @nav_noa_status_change_req.setter
    def nav_noa_status_change_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_noa_status_change_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_noa_status_change_req' field must be an unsigned integer in [0, 255]"
        self._nav_noa_status_change_req = value

    @builtins.property
    def prkg_camera_store_req(self):
        """Message field 'prkg_camera_store_req'."""
        return self._prkg_camera_store_req

    @prkg_camera_store_req.setter
    def prkg_camera_store_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_camera_store_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_camera_store_req' field must be an unsigned integer in [0, 255]"
        self._prkg_camera_store_req = value

    @builtins.property
    def voice_ctrl_prk(self):
        """Message field 'voice_ctrl_prk'."""
        return self._voice_ctrl_prk

    @voice_ctrl_prk.setter
    def voice_ctrl_prk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'voice_ctrl_prk' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'voice_ctrl_prk' field must be an unsigned integer in [0, 255]"
        self._voice_ctrl_prk = value

    @builtins.property
    def drift_prkg_req(self):
        """Message field 'drift_prkg_req'."""
        return self._drift_prkg_req

    @drift_prkg_req.setter
    def drift_prkg_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drift_prkg_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drift_prkg_req' field must be an unsigned integer in [0, 255]"
        self._drift_prkg_req = value

    @builtins.property
    def hmi_drvr_sod_req_cnoa_main_page(self):
        """Message field 'hmi_drvr_sod_req_cnoa_main_page'."""
        return self._hmi_drvr_sod_req_cnoa_main_page

    @hmi_drvr_sod_req_cnoa_main_page.setter
    def hmi_drvr_sod_req_cnoa_main_page(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_cnoa_main_page' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_cnoa_main_page' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_cnoa_main_page = value

    @builtins.property
    def hmi_drvr_sod_req_cnoa_lrng(self):
        """Message field 'hmi_drvr_sod_req_cnoa_lrng'."""
        return self._hmi_drvr_sod_req_cnoa_lrng

    @hmi_drvr_sod_req_cnoa_lrng.setter
    def hmi_drvr_sod_req_cnoa_lrng(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_cnoa_lrng' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_cnoa_lrng' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_cnoa_lrng = value

    @builtins.property
    def hmi_drvr_sod_req_finish_lrng(self):
        """Message field 'hmi_drvr_sod_req_finish_lrng'."""
        return self._hmi_drvr_sod_req_finish_lrng

    @hmi_drvr_sod_req_finish_lrng.setter
    def hmi_drvr_sod_req_finish_lrng(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_finish_lrng' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_finish_lrng' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_finish_lrng = value

    @builtins.property
    def hmi_cnoa_crs_swt_on_off(self):
        """Message field 'hmi_cnoa_crs_swt_on_off'."""
        return self._hmi_cnoa_crs_swt_on_off

    @hmi_cnoa_crs_swt_on_off.setter
    def hmi_cnoa_crs_swt_on_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_cnoa_crs_swt_on_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_cnoa_crs_swt_on_off' field must be an unsigned integer in [0, 255]"
        self._hmi_cnoa_crs_swt_on_off = value

    @builtins.property
    def hmi_cnoa_sod_lan_chg_swt(self):
        """Message field 'hmi_cnoa_sod_lan_chg_swt'."""
        return self._hmi_cnoa_sod_lan_chg_swt

    @hmi_cnoa_sod_lan_chg_swt.setter
    def hmi_cnoa_sod_lan_chg_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_cnoa_sod_lan_chg_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_cnoa_sod_lan_chg_swt' field must be an unsigned integer in [0, 255]"
        self._hmi_cnoa_sod_lan_chg_swt = value

    @builtins.property
    def hmi_cnoa_auto_lane_chg_style_sw_sts(self):
        """Message field 'hmi_cnoa_auto_lane_chg_style_sw_sts'."""
        return self._hmi_cnoa_auto_lane_chg_style_sw_sts

    @hmi_cnoa_auto_lane_chg_style_sw_sts.setter
    def hmi_cnoa_auto_lane_chg_style_sw_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_cnoa_auto_lane_chg_style_sw_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_cnoa_auto_lane_chg_style_sw_sts' field must be an unsigned integer in [0, 255]"
        self._hmi_cnoa_auto_lane_chg_style_sw_sts = value

    @builtins.property
    def hmi_cnoa_lrng_swt_on_off(self):
        """Message field 'hmi_cnoa_lrng_swt_on_off'."""
        return self._hmi_cnoa_lrng_swt_on_off

    @hmi_cnoa_lrng_swt_on_off.setter
    def hmi_cnoa_lrng_swt_on_off(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_cnoa_lrng_swt_on_off' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_cnoa_lrng_swt_on_off' field must be an unsigned integer in [0, 255]"
        self._hmi_cnoa_lrng_swt_on_off = value

    @builtins.property
    def hmi_drvr_sod_req_contns_lrng(self):
        """Message field 'hmi_drvr_sod_req_contns_lrng'."""
        return self._hmi_drvr_sod_req_contns_lrng

    @hmi_drvr_sod_req_contns_lrng.setter
    def hmi_drvr_sod_req_contns_lrng(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_drvr_sod_req_contns_lrng' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_drvr_sod_req_contns_lrng' field must be an unsigned integer in [0, 255]"
        self._hmi_drvr_sod_req_contns_lrng = value

    @builtins.property
    def apa_custom_prkg_req(self):
        """Message field 'apa_custom_prkg_req'."""
        return self._apa_custom_prkg_req

    @apa_custom_prkg_req.setter
    def apa_custom_prkg_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'apa_custom_prkg_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'apa_custom_prkg_req' field must be an unsigned integer in [0, 255]"
        self._apa_custom_prkg_req = value

    @builtins.property
    def exit_custom_prkg_req(self):
        """Message field 'exit_custom_prkg_req'."""
        return self._exit_custom_prkg_req

    @exit_custom_prkg_req.setter
    def exit_custom_prkg_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'exit_custom_prkg_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'exit_custom_prkg_req' field must be an unsigned integer in [0, 255]"
        self._exit_custom_prkg_req = value

    @builtins.property
    def cust_prk_slot_posn_angle_disp(self):
        """Message field 'cust_prk_slot_posn_angle_disp'."""
        return self._cust_prk_slot_posn_angle_disp

    @cust_prk_slot_posn_angle_disp.setter
    def cust_prk_slot_posn_angle_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_angle_disp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_angle_disp' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_angle_disp = value

    @builtins.property
    def cust_prk_slot_posn_end_x1(self):
        """Message field 'cust_prk_slot_posn_end_x1'."""
        return self._cust_prk_slot_posn_end_x1

    @cust_prk_slot_posn_end_x1.setter
    def cust_prk_slot_posn_end_x1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_end_x1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_end_x1' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_end_x1 = value

    @builtins.property
    def cust_prk_slot_posn_end_x2(self):
        """Message field 'cust_prk_slot_posn_end_x2'."""
        return self._cust_prk_slot_posn_end_x2

    @cust_prk_slot_posn_end_x2.setter
    def cust_prk_slot_posn_end_x2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_end_x2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_end_x2' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_end_x2 = value

    @builtins.property
    def cust_prk_slot_posn_end_y1(self):
        """Message field 'cust_prk_slot_posn_end_y1'."""
        return self._cust_prk_slot_posn_end_y1

    @cust_prk_slot_posn_end_y1.setter
    def cust_prk_slot_posn_end_y1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_end_y1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_end_y1' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_end_y1 = value

    @builtins.property
    def cust_prk_slot_posn_end_y2(self):
        """Message field 'cust_prk_slot_posn_end_y2'."""
        return self._cust_prk_slot_posn_end_y2

    @cust_prk_slot_posn_end_y2.setter
    def cust_prk_slot_posn_end_y2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_end_y2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_end_y2' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_end_y2 = value

    @builtins.property
    def cust_prk_slot_posn_start_x1(self):
        """Message field 'cust_prk_slot_posn_start_x1'."""
        return self._cust_prk_slot_posn_start_x1

    @cust_prk_slot_posn_start_x1.setter
    def cust_prk_slot_posn_start_x1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_start_x1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_start_x1' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_start_x1 = value

    @builtins.property
    def cust_prk_slot_posn_start_x2(self):
        """Message field 'cust_prk_slot_posn_start_x2'."""
        return self._cust_prk_slot_posn_start_x2

    @cust_prk_slot_posn_start_x2.setter
    def cust_prk_slot_posn_start_x2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_start_x2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_start_x2' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_start_x2 = value

    @builtins.property
    def cust_prk_slot_posn_start_y1(self):
        """Message field 'cust_prk_slot_posn_start_y1'."""
        return self._cust_prk_slot_posn_start_y1

    @cust_prk_slot_posn_start_y1.setter
    def cust_prk_slot_posn_start_y1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_start_y1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_start_y1' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_start_y1 = value

    @builtins.property
    def cust_prk_slot_posn_start_y2(self):
        """Message field 'cust_prk_slot_posn_start_y2'."""
        return self._cust_prk_slot_posn_start_y2

    @cust_prk_slot_posn_start_y2.setter
    def cust_prk_slot_posn_start_y2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cust_prk_slot_posn_start_y2' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'cust_prk_slot_posn_start_y2' field must be an integer in [-32768, 32767]"
        self._cust_prk_slot_posn_start_y2 = value

    @builtins.property
    def screem_oper(self):
        """Message field 'screem_oper'."""
        return self._screem_oper

    @screem_oper.setter
    def screem_oper(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'screem_oper' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'screem_oper' field must be an unsigned integer in [0, 255]"
        self._screem_oper = value

    @builtins.property
    def hpa_max_swt(self):
        """Message field 'hpa_max_swt'."""
        return self._hpa_max_swt

    @hpa_max_swt.setter
    def hpa_max_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hpa_max_swt' field must be of type 'bool'"
        self._hpa_max_swt = value

    @builtins.property
    def rpa_select_par_in(self):
        """Message field 'rpa_select_par_in'."""
        return self._rpa_select_par_in

    @rpa_select_par_in.setter
    def rpa_select_par_in(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rpa_select_par_in' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rpa_select_par_in' field must be an unsigned integer in [0, 255]"
        self._rpa_select_par_in = value

    @builtins.property
    def frnt_and_re_prkg_in_swt(self):
        """Message field 'frnt_and_re_prkg_in_swt'."""
        return self._frnt_and_re_prkg_in_swt

    @frnt_and_re_prkg_in_swt.setter
    def frnt_and_re_prkg_in_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frnt_and_re_prkg_in_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frnt_and_re_prkg_in_swt' field must be an unsigned integer in [0, 255]"
        self._frnt_and_re_prkg_in_swt = value

    @builtins.property
    def app_map_info_to_stm(self):
        """Message field 'app_map_info_to_stm'."""
        return self._app_map_info_to_stm

    @app_map_info_to_stm.setter
    def app_map_info_to_stm(self, value):
        if __debug__:
            from deva_function_msgs.msg import AppMapInfoToStmStruct
            assert \
                isinstance(value, AppMapInfoToStmStruct), \
                "The 'app_map_info_to_stm' field must be a sub message of type 'AppMapInfoToStmStruct'"
        self._app_map_info_to_stm = value

    @builtins.property
    def app_to_stm_data(self):
        """Message field 'app_to_stm_data'."""
        return self._app_to_stm_data

    @app_to_stm_data.setter
    def app_to_stm_data(self, value):
        if __debug__:
            from deva_function_msgs.msg import APPToStmDataStruct
            assert \
                isinstance(value, APPToStmDataStruct), \
                "The 'app_to_stm_data' field must be a sub message of type 'APPToStmDataStruct'"
        self._app_to_stm_data = value

    @builtins.property
    def aut_prkg_hand_slot_nr_req_topo_slot_id(self):
        """Message field 'aut_prkg_hand_slot_nr_req_topo_slot_id'."""
        return self._aut_prkg_hand_slot_nr_req_topo_slot_id

    @aut_prkg_hand_slot_nr_req_topo_slot_id.setter
    def aut_prkg_hand_slot_nr_req_topo_slot_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_hand_slot_nr_req_topo_slot_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_hand_slot_nr_req_topo_slot_id' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_hand_slot_nr_req_topo_slot_id = value

    @builtins.property
    def aut_prkg_hand_slot_nr_req_topo_slot_status(self):
        """Message field 'aut_prkg_hand_slot_nr_req_topo_slot_status'."""
        return self._aut_prkg_hand_slot_nr_req_topo_slot_status

    @aut_prkg_hand_slot_nr_req_topo_slot_status.setter
    def aut_prkg_hand_slot_nr_req_topo_slot_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_hand_slot_nr_req_topo_slot_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_hand_slot_nr_req_topo_slot_status' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_hand_slot_nr_req_topo_slot_status = value

    @builtins.property
    def aut_prkg_select_entrance(self):
        """Message field 'aut_prkg_select_entrance'."""
        return self._aut_prkg_select_entrance

    @aut_prkg_select_entrance.setter
    def aut_prkg_select_entrance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_prkg_select_entrance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_prkg_select_entrance' field must be an unsigned integer in [0, 255]"
        self._aut_prkg_select_entrance = value

    @builtins.property
    def aut_valt_prkg_cls_pop(self):
        """Message field 'aut_valt_prkg_cls_pop'."""
        return self._aut_valt_prkg_cls_pop

    @aut_valt_prkg_cls_pop.setter
    def aut_valt_prkg_cls_pop(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_cls_pop' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_cls_pop' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_cls_pop = value

    @builtins.property
    def aut_valt_prkg_cover_results(self):
        """Message field 'aut_valt_prkg_cover_results'."""
        return self._aut_valt_prkg_cover_results

    @aut_valt_prkg_cover_results.setter
    def aut_valt_prkg_cover_results(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_cover_results' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_cover_results' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_cover_results = value

    @builtins.property
    def aut_valt_prkg_select_d2d(self):
        """Message field 'aut_valt_prkg_select_d2d'."""
        return self._aut_valt_prkg_select_d2d

    @aut_valt_prkg_select_d2d.setter
    def aut_valt_prkg_select_d2d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_select_d2d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_select_d2d' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_select_d2d = value

    @builtins.property
    def aut_valt_prkg_topo_flr(self):
        """Message field 'aut_valt_prkg_topo_flr'."""
        return self._aut_valt_prkg_topo_flr

    @aut_valt_prkg_topo_flr.setter
    def aut_valt_prkg_topo_flr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_topo_flr' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'aut_valt_prkg_topo_flr' field must be an integer in [-128, 127]"
        self._aut_valt_prkg_topo_flr = value

    @builtins.property
    def d2d_p_icon_clicked(self):
        """Message field 'd2d_p_icon_clicked'."""
        return self._d2d_p_icon_clicked

    @d2d_p_icon_clicked.setter
    def d2d_p_icon_clicked(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'd2d_p_icon_clicked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'd2d_p_icon_clicked' field must be an unsigned integer in [0, 255]"
        self._d2d_p_icon_clicked = value

    @builtins.property
    def d2d_route_push_button_resp(self):
        """Message field 'd2d_route_push_button_resp'."""
        return self._d2d_route_push_button_resp

    @d2d_route_push_button_resp.setter
    def d2d_route_push_button_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'd2d_route_push_button_resp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'd2d_route_push_button_resp' field must be an unsigned integer in [0, 255]"
        self._d2d_route_push_button_resp = value

    @builtins.property
    def hmi_etc_traffic_sw_sts(self):
        """Message field 'hmi_etc_traffic_sw_sts'."""
        return self._hmi_etc_traffic_sw_sts

    @hmi_etc_traffic_sw_sts.setter
    def hmi_etc_traffic_sw_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_etc_traffic_sw_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_etc_traffic_sw_sts' field must be an unsigned integer in [0, 255]"
        self._hmi_etc_traffic_sw_sts = value

    @builtins.property
    def prkg_lrng_sts_hpa_lrng_sts(self):
        """Message field 'prkg_lrng_sts_hpa_lrng_sts'."""
        return self._prkg_lrng_sts_hpa_lrng_sts

    @prkg_lrng_sts_hpa_lrng_sts.setter
    def prkg_lrng_sts_hpa_lrng_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_lrng_sts_hpa_lrng_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_lrng_sts_hpa_lrng_sts' field must be an unsigned integer in [0, 255]"
        self._prkg_lrng_sts_hpa_lrng_sts = value

    @builtins.property
    def prkg_slot_typ_select(self):
        """Message field 'prkg_slot_typ_select'."""
        return self._prkg_slot_typ_select

    @prkg_slot_typ_select.setter
    def prkg_slot_typ_select(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prkg_slot_typ_select' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prkg_slot_typ_select' field must be an unsigned integer in [0, 255]"
        self._prkg_slot_typ_select = value

    @builtins.property
    def asy_aut_drvg_li_swt(self):
        """Message field 'asy_aut_drvg_li_swt'."""
        return self._asy_aut_drvg_li_swt

    @asy_aut_drvg_li_swt.setter
    def asy_aut_drvg_li_swt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_aut_drvg_li_swt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_aut_drvg_li_swt' field must be an unsigned integer in [0, 255]"
        self._asy_aut_drvg_li_swt = value

    @builtins.property
    def aut_valt_prkg_map_resp_map_id_list1(self):
        """Message field 'aut_valt_prkg_map_resp_map_id_list1'."""
        return self._aut_valt_prkg_map_resp_map_id_list1

    @aut_valt_prkg_map_resp_map_id_list1.setter
    def aut_valt_prkg_map_resp_map_id_list1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_resp_map_id_list1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_resp_map_id_list1' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_resp_map_id_list1 = value

    @builtins.property
    def aut_valt_prkg_map_resp_map_id_list2(self):
        """Message field 'aut_valt_prkg_map_resp_map_id_list2'."""
        return self._aut_valt_prkg_map_resp_map_id_list2

    @aut_valt_prkg_map_resp_map_id_list2.setter
    def aut_valt_prkg_map_resp_map_id_list2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_resp_map_id_list2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_resp_map_id_list2' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_resp_map_id_list2 = value

    @builtins.property
    def aut_valt_prkg_map_resp_map_id_list3(self):
        """Message field 'aut_valt_prkg_map_resp_map_id_list3'."""
        return self._aut_valt_prkg_map_resp_map_id_list3

    @aut_valt_prkg_map_resp_map_id_list3.setter
    def aut_valt_prkg_map_resp_map_id_list3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_resp_map_id_list3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_resp_map_id_list3' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_resp_map_id_list3 = value

    @builtins.property
    def aut_valt_prkg_map_resp_map_id_list4(self):
        """Message field 'aut_valt_prkg_map_resp_map_id_list4'."""
        return self._aut_valt_prkg_map_resp_map_id_list4

    @aut_valt_prkg_map_resp_map_id_list4.setter
    def aut_valt_prkg_map_resp_map_id_list4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_resp_map_id_list4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_resp_map_id_list4' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_resp_map_id_list4 = value

    @builtins.property
    def aut_valt_prkg_map_resp_map_id_result(self):
        """Message field 'aut_valt_prkg_map_resp_map_id_result'."""
        return self._aut_valt_prkg_map_resp_map_id_result

    @aut_valt_prkg_map_resp_map_id_result.setter
    def aut_valt_prkg_map_resp_map_id_result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_resp_map_id_result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_resp_map_id_result' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_resp_map_id_result = value

    @builtins.property
    def aut_valt_prkg_map_syncn_map_id_list1(self):
        """Message field 'aut_valt_prkg_map_syncn_map_id_list1'."""
        return self._aut_valt_prkg_map_syncn_map_id_list1

    @aut_valt_prkg_map_syncn_map_id_list1.setter
    def aut_valt_prkg_map_syncn_map_id_list1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_syncn_map_id_list1' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_syncn_map_id_list1' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_syncn_map_id_list1 = value

    @builtins.property
    def aut_valt_prkg_map_syncn_map_id_list2(self):
        """Message field 'aut_valt_prkg_map_syncn_map_id_list2'."""
        return self._aut_valt_prkg_map_syncn_map_id_list2

    @aut_valt_prkg_map_syncn_map_id_list2.setter
    def aut_valt_prkg_map_syncn_map_id_list2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_syncn_map_id_list2' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_syncn_map_id_list2' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_syncn_map_id_list2 = value

    @builtins.property
    def aut_valt_prkg_map_syncn_map_id_list3(self):
        """Message field 'aut_valt_prkg_map_syncn_map_id_list3'."""
        return self._aut_valt_prkg_map_syncn_map_id_list3

    @aut_valt_prkg_map_syncn_map_id_list3.setter
    def aut_valt_prkg_map_syncn_map_id_list3(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_syncn_map_id_list3' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_syncn_map_id_list3' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_syncn_map_id_list3 = value

    @builtins.property
    def aut_valt_prkg_map_syncn_map_id_list4(self):
        """Message field 'aut_valt_prkg_map_syncn_map_id_list4'."""
        return self._aut_valt_prkg_map_syncn_map_id_list4

    @aut_valt_prkg_map_syncn_map_id_list4.setter
    def aut_valt_prkg_map_syncn_map_id_list4(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_syncn_map_id_list4' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'aut_valt_prkg_map_syncn_map_id_list4' field must be an unsigned integer in [0, 4294967295]"
        self._aut_valt_prkg_map_syncn_map_id_list4 = value

    @builtins.property
    def aut_valt_prkg_map_syncn_map_syncn(self):
        """Message field 'aut_valt_prkg_map_syncn_map_syncn'."""
        return self._aut_valt_prkg_map_syncn_map_syncn

    @aut_valt_prkg_map_syncn_map_syncn.setter
    def aut_valt_prkg_map_syncn_map_syncn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aut_valt_prkg_map_syncn_map_syncn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aut_valt_prkg_map_syncn_map_syncn' field must be an unsigned integer in [0, 255]"
        self._aut_valt_prkg_map_syncn_map_syncn = value
