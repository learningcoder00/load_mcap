# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/BusToSmData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'rev'
# Member 'key_read_sts_to_asm'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BusToSmData(type):
    """Metaclass of message 'BusToSmData'."""

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
                'deva_function_msgs.msg.BusToSmData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bus_to_sm_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bus_to_sm_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bus_to_sm_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bus_to_sm_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bus_to_sm_data

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BusToSmData(metaclass=Metaclass_BusToSmData):
    """Message class 'BusToSmData'."""

    __slots__ = [
        '_header',
        '_tr_lock_sts',
        '_door_drvr_lock_sts',
        '_door_pass_lock_sts',
        '_door_le_re_lock_sts',
        '_door_ri_re_lock_sts',
        '_brk_sys_sts_brk_sys_capability',
        '_rev',
        '_calltype_and_sts_ecall_status',
        '_blt_lock_st_at_drvr',
        '_blt_lock_st_err_sts_at_drvr',
        '_esc_st_esc_st',
        '_prk_lat_lgt_failr',
        '_road_incln_qly',
        '_veh_mtn_st',
        '_whl_spd_circuml_frnt_le_qf',
        '_whl_spd_circuml_frnt_ri_qf',
        '_whl_spd_circuml_re_le_qf',
        '_whl_spd_circuml_re_ri_qf',
        '_gear_mov',
        '_accr_pedl_psd_accr_pedl_psd',
        '_accr_pedl_psd_sts',
        '_typ_ext_req_to_upd_qf',
        '_trsm_park_lockd',
        '_door_drvr_sts',
        '_door_le_re_sts',
        '_door_pass_sts',
        '_door_ri_re_sts',
        '_hood_sts',
        '_mirr_fold_sts_at_drvr',
        '_mirr_fold_sts_at_pass',
        '_tr_sts',
        '_trlr_prsnt',
        '_veh_mod_mngt_glb_safe1_car_mod_sts1',
        '_veh_mod_mngt_glb_safe1_usg_mod_sts',
        '_steer_sts_to_park_assi',
        '_indcr_typ_ext_req',
        '_rainfall_amnt',
        '_egy_lvl_elec_mai',
        '_le_frnt_tire_msg_p_warn_flg',
        '_le_re_tire_msg_p_warn_flg',
        '_ri_frnt_tire_msg_p_warn_flg',
        '_ri_re_tire_msg_p_warn_flg',
        '_sm_lat_shake_hand_state',
        '_sm_lon_shake_hand_state',
        '_rcv_ctrl_req',
        '_rcv_steertrim_req',
        '_mob_dev_rcv_req1_mob_dev_sts',
        '_dc_dc_actvd',
        '_steer_whl_snsr_ag',
        '_ble_con_sts',
        '_twbr_lockd_posn',
        '_full_elec_twbr_posn',
        '_vtsd_mode_sts',
        '_key_read_sts_to_asm',
        '_mob_dev_rpa_req_rspa_ctrl',
        '_mob_dev_rpa_req_rpa_req',
        '_mob_dev_rpa_req_rpa_out_mode_sub_t',
        '_mob_dev_rpa_req_mob_dev_sts',
        '_crab_mov_mod_sts',
        '_tank_turn_mod_sts',
        '_pass_seat_sts2',
        '_hmi_max_ev_mod',
        '_adcu_max_ev_mod',
        '_lamp_req_by_veh_hld',
        '_ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn',
        '_msg_req_by_hill_dwn_ctrl',
        '_esc_warn_indcn_req_esc_warn_indcn_req',
        '_abs_ctrl_actv_ctrl_sts1',
        '_eng_st1_wd_sts_eng_st1_wd_sts',
        '_crs_ctrl_ovrdn',
        '_veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai',
        '_drvr_steer_whl_hld_qly',
        '_door_drvr_sts_with_fac_qly_door_sts',
        '_door_drvr_sts_with_fac_qly_fac_qly',
        '_lat_ctrl_mod_cfmd',
        '_esc_ctrl_indcn',
        '_pt_drvr_setg_drv_mod_req',
        '_front_four_d_radar_sts_for_dim',
        '_drvr_prsnt_sts',
        '_wipr_actv',
        '_stand_still_mgr_sts_for_hld',
        '_pt_drvr_setg',
        '_tptf_status_error',
        '_tptf_status',
        '_tptf_time_gap',
        '_hmi_sod_lan_chg_switch',
        '_hmi_drvr_sod_req_chg',
        '_turn_indcr_monostable',
        '_drvr_lane_chg_aut_actv_sts',
        '_auto_lane_chg_with_navi_sw_onoff',
        '_nop_cofm_of_lan_chag_onoff',
        '_wipg_spd_info',
        '_asy_safe_stop_sts',
        '_hmi_sup_end_mod',
        '_crash_sts_safe_sts',
        '_gear_park_not_allow',
        '_drvr_seat_sts',
        '_drvr_seat_snsr_sts',
        '_ad_l3_lat_ctrl_sts_ad_mod',
        '_ad_l3_lgt_ctrl_sts_ad_mod',
        '_accr_pedl_sts_flt_sts',
        '_amb_t_raw_amb_t_val',
        '_body_hei',
        '_le_frnt_tire_msg_batt_lo_st',
        '_le_frnt_tire_msg_fast_lose_warn_flg',
        '_le_frnt_tire_msg_msg_old_flg',
        '_le_frnt_tire_msg_p',
        '_le_frnt_tire_msg_sys_warn_flg',
        '_le_frnt_tire_msg_t',
        '_le_frnt_tire_msg_t_warn_flg',
        '_le_frnt_tire_msg_tire_fillg_assi_p_sts',
        '_le_re_tire_msg_batt_lo_st',
        '_le_re_tire_msg_fast_lose_warn_flg',
        '_le_re_tire_msg_msg_old_flg',
        '_le_re_tire_msg_p',
        '_le_re_tire_msg_sys_warn_flg',
        '_le_re_tire_msg_t',
        '_le_re_tire_msg_t_warn_flg',
        '_le_re_tire_msg_tire_fillg_assi_p_sts',
        '_ri_frnt_tire_msg_batt_lo_st',
        '_ri_frnt_tire_msg_fast_lose_warn_flg',
        '_ri_frnt_tire_msg_msg_old_flg',
        '_ri_frnt_tire_msg_p',
        '_ri_frnt_tire_msg_sys_warn_flg',
        '_ri_frnt_tire_msg_t',
        '_ri_frnt_tire_msg_t_warn_flg',
        '_ri_frnt_tire_msg_tire_fillg_assi_p_sts',
        '_ri_re_tire_msg_batt_lo_st',
        '_ri_re_tire_msg_fast_lose_warn_flg',
        '_ri_re_tire_msg_msg_old_flg',
        '_ri_re_tire_msg_p',
        '_ri_re_tire_msg_sys_warn_flg',
        '_ri_re_tire_msg_t',
        '_ri_re_tire_msg_t_warn_flg',
        '_ri_re_tire_msg_tire_fillg_assi_p_sts',
        '_occupy_mon_sts_drvr_sts',
        '_sun_roof_posn_sts',
        '_susp_posn_vert_le1_frnt',
        '_susp_posn_vert_le1_frnt_qf',
        '_susp_posn_vert_le1_re',
        '_susp_posn_vert_le1_re_qf',
        '_susp_posn_vert_ri1_susp_posn_vert_ri_frnt',
        '_susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf',
        '_susp_posn_vert_ri1_susp_posn_vert_ri_re',
        '_susp_posn_vert_ri1_susp_posn_vert_ri_re_qf',
        '_twli_bri_raw_qf',
        '_twli_bri_raw_twli_bri_raw',
        '_win_posn_sts_at_drvr',
        '_win_posn_sts_at_pass',
        '_win_posn_sts_at_re_le',
        '_win_posn_sts_at_re_ri',
        '_brk_sys_sts_ad_l3_brk_fall_bck',
        '_brk_sys_sts_brk_degradation',
        '_brk_sys_sts_brk_sys_mod_cfmd',
        '_tank_turn_mod_sts_tank_turn_mod_sts',
        '_sfty_decel_group_safe_asy_sfty_ena_decel',
        '_steer_tq_addl_for_ema_steer_tq_addl_for_ema',
        '_asy_emgy_lane_keep_aid_sts',
        '_asy_lane_keep_aid_sts',
        '_rcwm_brk_req_rcwm_brk_req',
        '_asy_a_lgt_sts_asy_a_lgt_sts',
        '_asy_a_lat_indcr',
        '_asy_cnoa_crs_sts',
        '_indcr_sts',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'tr_lock_sts': 'uint8',
        'door_drvr_lock_sts': 'uint8',
        'door_pass_lock_sts': 'uint8',
        'door_le_re_lock_sts': 'uint8',
        'door_ri_re_lock_sts': 'uint8',
        'brk_sys_sts_brk_sys_capability': 'uint8',
        'rev': 'uint8[2]',
        'calltype_and_sts_ecall_status': 'uint8',
        'blt_lock_st_at_drvr': 'uint8',
        'blt_lock_st_err_sts_at_drvr': 'uint8',
        'esc_st_esc_st': 'uint8',
        'prk_lat_lgt_failr': 'uint8',
        'road_incln_qly': 'uint8',
        'veh_mtn_st': 'uint8',
        'whl_spd_circuml_frnt_le_qf': 'uint8',
        'whl_spd_circuml_frnt_ri_qf': 'uint8',
        'whl_spd_circuml_re_le_qf': 'uint8',
        'whl_spd_circuml_re_ri_qf': 'uint8',
        'gear_mov': 'uint8',
        'accr_pedl_psd_accr_pedl_psd': 'uint8',
        'accr_pedl_psd_sts': 'uint8',
        'typ_ext_req_to_upd_qf': 'uint8',
        'trsm_park_lockd': 'uint8',
        'door_drvr_sts': 'uint8',
        'door_le_re_sts': 'uint8',
        'door_pass_sts': 'uint8',
        'door_ri_re_sts': 'uint8',
        'hood_sts': 'uint8',
        'mirr_fold_sts_at_drvr': 'uint8',
        'mirr_fold_sts_at_pass': 'uint8',
        'tr_sts': 'uint8',
        'trlr_prsnt': 'uint8',
        'veh_mod_mngt_glb_safe1_car_mod_sts1': 'uint8',
        'veh_mod_mngt_glb_safe1_usg_mod_sts': 'uint8',
        'steer_sts_to_park_assi': 'uint8',
        'indcr_typ_ext_req': 'uint8',
        'rainfall_amnt': 'uint8',
        'egy_lvl_elec_mai': 'uint8',
        'le_frnt_tire_msg_p_warn_flg': 'uint8',
        'le_re_tire_msg_p_warn_flg': 'uint8',
        'ri_frnt_tire_msg_p_warn_flg': 'uint8',
        'ri_re_tire_msg_p_warn_flg': 'uint8',
        'sm_lat_shake_hand_state': 'uint8',
        'sm_lon_shake_hand_state': 'uint8',
        'rcv_ctrl_req': 'uint8',
        'rcv_steertrim_req': 'uint8',
        'mob_dev_rcv_req1_mob_dev_sts': 'uint8',
        'dc_dc_actvd': 'uint8',
        'steer_whl_snsr_ag': 'float',
        'ble_con_sts': 'uint8',
        'twbr_lockd_posn': 'uint8',
        'full_elec_twbr_posn': 'uint8',
        'vtsd_mode_sts': 'uint8',
        'key_read_sts_to_asm': 'uint8[12]',
        'mob_dev_rpa_req_rspa_ctrl': 'uint8',
        'mob_dev_rpa_req_rpa_req': 'uint8',
        'mob_dev_rpa_req_rpa_out_mode_sub_t': 'uint8',
        'mob_dev_rpa_req_mob_dev_sts': 'uint8',
        'crab_mov_mod_sts': 'uint8',
        'tank_turn_mod_sts': 'uint8',
        'pass_seat_sts2': 'uint8',
        'hmi_max_ev_mod': 'uint8',
        'adcu_max_ev_mod': 'uint8',
        'lamp_req_by_veh_hld': 'uint8',
        'ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn': 'uint8',
        'msg_req_by_hill_dwn_ctrl': 'uint8',
        'esc_warn_indcn_req_esc_warn_indcn_req': 'uint8',
        'abs_ctrl_actv_ctrl_sts1': 'uint8',
        'eng_st1_wd_sts_eng_st1_wd_sts': 'uint8',
        'crs_ctrl_ovrdn': 'uint8',
        'veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai': 'uint8',
        'drvr_steer_whl_hld_qly': 'uint8',
        'door_drvr_sts_with_fac_qly_door_sts': 'uint8',
        'door_drvr_sts_with_fac_qly_fac_qly': 'uint8',
        'lat_ctrl_mod_cfmd': 'uint8',
        'esc_ctrl_indcn': 'uint8',
        'pt_drvr_setg_drv_mod_req': 'uint8',
        'front_four_d_radar_sts_for_dim': 'uint8',
        'drvr_prsnt_sts': 'uint8',
        'wipr_actv': 'uint8',
        'stand_still_mgr_sts_for_hld': 'uint8',
        'pt_drvr_setg': 'uint8',
        'tptf_status_error': 'uint8',
        'tptf_status': 'uint8',
        'tptf_time_gap': 'uint8',
        'hmi_sod_lan_chg_switch': 'uint8',
        'hmi_drvr_sod_req_chg': 'uint8',
        'turn_indcr_monostable': 'uint8',
        'drvr_lane_chg_aut_actv_sts': 'uint8',
        'auto_lane_chg_with_navi_sw_onoff': 'uint8',
        'nop_cofm_of_lan_chag_onoff': 'uint8',
        'wipg_spd_info': 'uint8',
        'asy_safe_stop_sts': 'uint8',
        'hmi_sup_end_mod': 'uint8',
        'crash_sts_safe_sts': 'uint8',
        'gear_park_not_allow': 'uint8',
        'drvr_seat_sts': 'uint8',
        'drvr_seat_snsr_sts': 'uint8',
        'ad_l3_lat_ctrl_sts_ad_mod': 'uint8',
        'ad_l3_lgt_ctrl_sts_ad_mod': 'uint8',
        'accr_pedl_sts_flt_sts': 'uint8',
        'amb_t_raw_amb_t_val': 'float',
        'body_hei': 'float',
        'le_frnt_tire_msg_batt_lo_st': 'uint8',
        'le_frnt_tire_msg_fast_lose_warn_flg': 'uint8',
        'le_frnt_tire_msg_msg_old_flg': 'uint8',
        'le_frnt_tire_msg_p': 'float',
        'le_frnt_tire_msg_sys_warn_flg': 'uint8',
        'le_frnt_tire_msg_t': 'float',
        'le_frnt_tire_msg_t_warn_flg': 'uint8',
        'le_frnt_tire_msg_tire_fillg_assi_p_sts': 'uint8',
        'le_re_tire_msg_batt_lo_st': 'uint8',
        'le_re_tire_msg_fast_lose_warn_flg': 'uint8',
        'le_re_tire_msg_msg_old_flg': 'uint8',
        'le_re_tire_msg_p': 'float',
        'le_re_tire_msg_sys_warn_flg': 'uint8',
        'le_re_tire_msg_t': 'float',
        'le_re_tire_msg_t_warn_flg': 'uint8',
        'le_re_tire_msg_tire_fillg_assi_p_sts': 'uint8',
        'ri_frnt_tire_msg_batt_lo_st': 'uint8',
        'ri_frnt_tire_msg_fast_lose_warn_flg': 'uint8',
        'ri_frnt_tire_msg_msg_old_flg': 'uint8',
        'ri_frnt_tire_msg_p': 'float',
        'ri_frnt_tire_msg_sys_warn_flg': 'uint8',
        'ri_frnt_tire_msg_t': 'float',
        'ri_frnt_tire_msg_t_warn_flg': 'uint8',
        'ri_frnt_tire_msg_tire_fillg_assi_p_sts': 'uint8',
        'ri_re_tire_msg_batt_lo_st': 'uint8',
        'ri_re_tire_msg_fast_lose_warn_flg': 'uint8',
        'ri_re_tire_msg_msg_old_flg': 'uint8',
        'ri_re_tire_msg_p': 'float',
        'ri_re_tire_msg_sys_warn_flg': 'uint8',
        'ri_re_tire_msg_t': 'float',
        'ri_re_tire_msg_t_warn_flg': 'uint8',
        'ri_re_tire_msg_tire_fillg_assi_p_sts': 'uint8',
        'occupy_mon_sts_drvr_sts': 'uint8',
        'sun_roof_posn_sts': 'uint8',
        'susp_posn_vert_le1_frnt': 'float',
        'susp_posn_vert_le1_frnt_qf': 'uint8',
        'susp_posn_vert_le1_re': 'float',
        'susp_posn_vert_le1_re_qf': 'uint8',
        'susp_posn_vert_ri1_susp_posn_vert_ri_frnt': 'float',
        'susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf': 'uint8',
        'susp_posn_vert_ri1_susp_posn_vert_ri_re': 'float',
        'susp_posn_vert_ri1_susp_posn_vert_ri_re_qf': 'uint8',
        'twli_bri_raw_qf': 'uint8',
        'twli_bri_raw_twli_bri_raw': 'uint8',
        'win_posn_sts_at_drvr': 'uint8',
        'win_posn_sts_at_pass': 'uint8',
        'win_posn_sts_at_re_le': 'uint8',
        'win_posn_sts_at_re_ri': 'uint8',
        'brk_sys_sts_ad_l3_brk_fall_bck': 'uint8',
        'brk_sys_sts_brk_degradation': 'uint8',
        'brk_sys_sts_brk_sys_mod_cfmd': 'uint8',
        'tank_turn_mod_sts_tank_turn_mod_sts': 'uint8',
        'sfty_decel_group_safe_asy_sfty_ena_decel': 'uint8',
        'steer_tq_addl_for_ema_steer_tq_addl_for_ema': 'float',
        'asy_emgy_lane_keep_aid_sts': 'uint8',
        'asy_lane_keep_aid_sts': 'uint8',
        'rcwm_brk_req_rcwm_brk_req': 'uint8',
        'asy_a_lgt_sts_asy_a_lgt_sts': 'uint8',
        'asy_a_lat_indcr': 'uint8',
        'asy_cnoa_crs_sts': 'uint8',
        'indcr_sts': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
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
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 12),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.tr_lock_sts = kwargs.get('tr_lock_sts', int())
        self.door_drvr_lock_sts = kwargs.get('door_drvr_lock_sts', int())
        self.door_pass_lock_sts = kwargs.get('door_pass_lock_sts', int())
        self.door_le_re_lock_sts = kwargs.get('door_le_re_lock_sts', int())
        self.door_ri_re_lock_sts = kwargs.get('door_ri_re_lock_sts', int())
        self.brk_sys_sts_brk_sys_capability = kwargs.get('brk_sys_sts_brk_sys_capability', int())
        if 'rev' not in kwargs:
            self.rev = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.rev = kwargs.get('rev')
        self.calltype_and_sts_ecall_status = kwargs.get('calltype_and_sts_ecall_status', int())
        self.blt_lock_st_at_drvr = kwargs.get('blt_lock_st_at_drvr', int())
        self.blt_lock_st_err_sts_at_drvr = kwargs.get('blt_lock_st_err_sts_at_drvr', int())
        self.esc_st_esc_st = kwargs.get('esc_st_esc_st', int())
        self.prk_lat_lgt_failr = kwargs.get('prk_lat_lgt_failr', int())
        self.road_incln_qly = kwargs.get('road_incln_qly', int())
        self.veh_mtn_st = kwargs.get('veh_mtn_st', int())
        self.whl_spd_circuml_frnt_le_qf = kwargs.get('whl_spd_circuml_frnt_le_qf', int())
        self.whl_spd_circuml_frnt_ri_qf = kwargs.get('whl_spd_circuml_frnt_ri_qf', int())
        self.whl_spd_circuml_re_le_qf = kwargs.get('whl_spd_circuml_re_le_qf', int())
        self.whl_spd_circuml_re_ri_qf = kwargs.get('whl_spd_circuml_re_ri_qf', int())
        self.gear_mov = kwargs.get('gear_mov', int())
        self.accr_pedl_psd_accr_pedl_psd = kwargs.get('accr_pedl_psd_accr_pedl_psd', int())
        self.accr_pedl_psd_sts = kwargs.get('accr_pedl_psd_sts', int())
        self.typ_ext_req_to_upd_qf = kwargs.get('typ_ext_req_to_upd_qf', int())
        self.trsm_park_lockd = kwargs.get('trsm_park_lockd', int())
        self.door_drvr_sts = kwargs.get('door_drvr_sts', int())
        self.door_le_re_sts = kwargs.get('door_le_re_sts', int())
        self.door_pass_sts = kwargs.get('door_pass_sts', int())
        self.door_ri_re_sts = kwargs.get('door_ri_re_sts', int())
        self.hood_sts = kwargs.get('hood_sts', int())
        self.mirr_fold_sts_at_drvr = kwargs.get('mirr_fold_sts_at_drvr', int())
        self.mirr_fold_sts_at_pass = kwargs.get('mirr_fold_sts_at_pass', int())
        self.tr_sts = kwargs.get('tr_sts', int())
        self.trlr_prsnt = kwargs.get('trlr_prsnt', int())
        self.veh_mod_mngt_glb_safe1_car_mod_sts1 = kwargs.get('veh_mod_mngt_glb_safe1_car_mod_sts1', int())
        self.veh_mod_mngt_glb_safe1_usg_mod_sts = kwargs.get('veh_mod_mngt_glb_safe1_usg_mod_sts', int())
        self.steer_sts_to_park_assi = kwargs.get('steer_sts_to_park_assi', int())
        self.indcr_typ_ext_req = kwargs.get('indcr_typ_ext_req', int())
        self.rainfall_amnt = kwargs.get('rainfall_amnt', int())
        self.egy_lvl_elec_mai = kwargs.get('egy_lvl_elec_mai', int())
        self.le_frnt_tire_msg_p_warn_flg = kwargs.get('le_frnt_tire_msg_p_warn_flg', int())
        self.le_re_tire_msg_p_warn_flg = kwargs.get('le_re_tire_msg_p_warn_flg', int())
        self.ri_frnt_tire_msg_p_warn_flg = kwargs.get('ri_frnt_tire_msg_p_warn_flg', int())
        self.ri_re_tire_msg_p_warn_flg = kwargs.get('ri_re_tire_msg_p_warn_flg', int())
        self.sm_lat_shake_hand_state = kwargs.get('sm_lat_shake_hand_state', int())
        self.sm_lon_shake_hand_state = kwargs.get('sm_lon_shake_hand_state', int())
        self.rcv_ctrl_req = kwargs.get('rcv_ctrl_req', int())
        self.rcv_steertrim_req = kwargs.get('rcv_steertrim_req', int())
        self.mob_dev_rcv_req1_mob_dev_sts = kwargs.get('mob_dev_rcv_req1_mob_dev_sts', int())
        self.dc_dc_actvd = kwargs.get('dc_dc_actvd', int())
        self.steer_whl_snsr_ag = kwargs.get('steer_whl_snsr_ag', float())
        self.ble_con_sts = kwargs.get('ble_con_sts', int())
        self.twbr_lockd_posn = kwargs.get('twbr_lockd_posn', int())
        self.full_elec_twbr_posn = kwargs.get('full_elec_twbr_posn', int())
        self.vtsd_mode_sts = kwargs.get('vtsd_mode_sts', int())
        if 'key_read_sts_to_asm' not in kwargs:
            self.key_read_sts_to_asm = numpy.zeros(12, dtype=numpy.uint8)
        else:
            self.key_read_sts_to_asm = kwargs.get('key_read_sts_to_asm')
        self.mob_dev_rpa_req_rspa_ctrl = kwargs.get('mob_dev_rpa_req_rspa_ctrl', int())
        self.mob_dev_rpa_req_rpa_req = kwargs.get('mob_dev_rpa_req_rpa_req', int())
        self.mob_dev_rpa_req_rpa_out_mode_sub_t = kwargs.get('mob_dev_rpa_req_rpa_out_mode_sub_t', int())
        self.mob_dev_rpa_req_mob_dev_sts = kwargs.get('mob_dev_rpa_req_mob_dev_sts', int())
        self.crab_mov_mod_sts = kwargs.get('crab_mov_mod_sts', int())
        self.tank_turn_mod_sts = kwargs.get('tank_turn_mod_sts', int())
        self.pass_seat_sts2 = kwargs.get('pass_seat_sts2', int())
        self.hmi_max_ev_mod = kwargs.get('hmi_max_ev_mod', int())
        self.adcu_max_ev_mod = kwargs.get('adcu_max_ev_mod', int())
        self.lamp_req_by_veh_hld = kwargs.get('lamp_req_by_veh_hld', int())
        self.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = kwargs.get('ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn', int())
        self.msg_req_by_hill_dwn_ctrl = kwargs.get('msg_req_by_hill_dwn_ctrl', int())
        self.esc_warn_indcn_req_esc_warn_indcn_req = kwargs.get('esc_warn_indcn_req_esc_warn_indcn_req', int())
        self.abs_ctrl_actv_ctrl_sts1 = kwargs.get('abs_ctrl_actv_ctrl_sts1', int())
        self.eng_st1_wd_sts_eng_st1_wd_sts = kwargs.get('eng_st1_wd_sts_eng_st1_wd_sts', int())
        self.crs_ctrl_ovrdn = kwargs.get('crs_ctrl_ovrdn', int())
        self.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = kwargs.get('veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai', int())
        self.drvr_steer_whl_hld_qly = kwargs.get('drvr_steer_whl_hld_qly', int())
        self.door_drvr_sts_with_fac_qly_door_sts = kwargs.get('door_drvr_sts_with_fac_qly_door_sts', int())
        self.door_drvr_sts_with_fac_qly_fac_qly = kwargs.get('door_drvr_sts_with_fac_qly_fac_qly', int())
        self.lat_ctrl_mod_cfmd = kwargs.get('lat_ctrl_mod_cfmd', int())
        self.esc_ctrl_indcn = kwargs.get('esc_ctrl_indcn', int())
        self.pt_drvr_setg_drv_mod_req = kwargs.get('pt_drvr_setg_drv_mod_req', int())
        self.front_four_d_radar_sts_for_dim = kwargs.get('front_four_d_radar_sts_for_dim', int())
        self.drvr_prsnt_sts = kwargs.get('drvr_prsnt_sts', int())
        self.wipr_actv = kwargs.get('wipr_actv', int())
        self.stand_still_mgr_sts_for_hld = kwargs.get('stand_still_mgr_sts_for_hld', int())
        self.pt_drvr_setg = kwargs.get('pt_drvr_setg', int())
        self.tptf_status_error = kwargs.get('tptf_status_error', int())
        self.tptf_status = kwargs.get('tptf_status', int())
        self.tptf_time_gap = kwargs.get('tptf_time_gap', int())
        self.hmi_sod_lan_chg_switch = kwargs.get('hmi_sod_lan_chg_switch', int())
        self.hmi_drvr_sod_req_chg = kwargs.get('hmi_drvr_sod_req_chg', int())
        self.turn_indcr_monostable = kwargs.get('turn_indcr_monostable', int())
        self.drvr_lane_chg_aut_actv_sts = kwargs.get('drvr_lane_chg_aut_actv_sts', int())
        self.auto_lane_chg_with_navi_sw_onoff = kwargs.get('auto_lane_chg_with_navi_sw_onoff', int())
        self.nop_cofm_of_lan_chag_onoff = kwargs.get('nop_cofm_of_lan_chag_onoff', int())
        self.wipg_spd_info = kwargs.get('wipg_spd_info', int())
        self.asy_safe_stop_sts = kwargs.get('asy_safe_stop_sts', int())
        self.hmi_sup_end_mod = kwargs.get('hmi_sup_end_mod', int())
        self.crash_sts_safe_sts = kwargs.get('crash_sts_safe_sts', int())
        self.gear_park_not_allow = kwargs.get('gear_park_not_allow', int())
        self.drvr_seat_sts = kwargs.get('drvr_seat_sts', int())
        self.drvr_seat_snsr_sts = kwargs.get('drvr_seat_snsr_sts', int())
        self.ad_l3_lat_ctrl_sts_ad_mod = kwargs.get('ad_l3_lat_ctrl_sts_ad_mod', int())
        self.ad_l3_lgt_ctrl_sts_ad_mod = kwargs.get('ad_l3_lgt_ctrl_sts_ad_mod', int())
        self.accr_pedl_sts_flt_sts = kwargs.get('accr_pedl_sts_flt_sts', int())
        self.amb_t_raw_amb_t_val = kwargs.get('amb_t_raw_amb_t_val', float())
        self.body_hei = kwargs.get('body_hei', float())
        self.le_frnt_tire_msg_batt_lo_st = kwargs.get('le_frnt_tire_msg_batt_lo_st', int())
        self.le_frnt_tire_msg_fast_lose_warn_flg = kwargs.get('le_frnt_tire_msg_fast_lose_warn_flg', int())
        self.le_frnt_tire_msg_msg_old_flg = kwargs.get('le_frnt_tire_msg_msg_old_flg', int())
        self.le_frnt_tire_msg_p = kwargs.get('le_frnt_tire_msg_p', float())
        self.le_frnt_tire_msg_sys_warn_flg = kwargs.get('le_frnt_tire_msg_sys_warn_flg', int())
        self.le_frnt_tire_msg_t = kwargs.get('le_frnt_tire_msg_t', float())
        self.le_frnt_tire_msg_t_warn_flg = kwargs.get('le_frnt_tire_msg_t_warn_flg', int())
        self.le_frnt_tire_msg_tire_fillg_assi_p_sts = kwargs.get('le_frnt_tire_msg_tire_fillg_assi_p_sts', int())
        self.le_re_tire_msg_batt_lo_st = kwargs.get('le_re_tire_msg_batt_lo_st', int())
        self.le_re_tire_msg_fast_lose_warn_flg = kwargs.get('le_re_tire_msg_fast_lose_warn_flg', int())
        self.le_re_tire_msg_msg_old_flg = kwargs.get('le_re_tire_msg_msg_old_flg', int())
        self.le_re_tire_msg_p = kwargs.get('le_re_tire_msg_p', float())
        self.le_re_tire_msg_sys_warn_flg = kwargs.get('le_re_tire_msg_sys_warn_flg', int())
        self.le_re_tire_msg_t = kwargs.get('le_re_tire_msg_t', float())
        self.le_re_tire_msg_t_warn_flg = kwargs.get('le_re_tire_msg_t_warn_flg', int())
        self.le_re_tire_msg_tire_fillg_assi_p_sts = kwargs.get('le_re_tire_msg_tire_fillg_assi_p_sts', int())
        self.ri_frnt_tire_msg_batt_lo_st = kwargs.get('ri_frnt_tire_msg_batt_lo_st', int())
        self.ri_frnt_tire_msg_fast_lose_warn_flg = kwargs.get('ri_frnt_tire_msg_fast_lose_warn_flg', int())
        self.ri_frnt_tire_msg_msg_old_flg = kwargs.get('ri_frnt_tire_msg_msg_old_flg', int())
        self.ri_frnt_tire_msg_p = kwargs.get('ri_frnt_tire_msg_p', float())
        self.ri_frnt_tire_msg_sys_warn_flg = kwargs.get('ri_frnt_tire_msg_sys_warn_flg', int())
        self.ri_frnt_tire_msg_t = kwargs.get('ri_frnt_tire_msg_t', float())
        self.ri_frnt_tire_msg_t_warn_flg = kwargs.get('ri_frnt_tire_msg_t_warn_flg', int())
        self.ri_frnt_tire_msg_tire_fillg_assi_p_sts = kwargs.get('ri_frnt_tire_msg_tire_fillg_assi_p_sts', int())
        self.ri_re_tire_msg_batt_lo_st = kwargs.get('ri_re_tire_msg_batt_lo_st', int())
        self.ri_re_tire_msg_fast_lose_warn_flg = kwargs.get('ri_re_tire_msg_fast_lose_warn_flg', int())
        self.ri_re_tire_msg_msg_old_flg = kwargs.get('ri_re_tire_msg_msg_old_flg', int())
        self.ri_re_tire_msg_p = kwargs.get('ri_re_tire_msg_p', float())
        self.ri_re_tire_msg_sys_warn_flg = kwargs.get('ri_re_tire_msg_sys_warn_flg', int())
        self.ri_re_tire_msg_t = kwargs.get('ri_re_tire_msg_t', float())
        self.ri_re_tire_msg_t_warn_flg = kwargs.get('ri_re_tire_msg_t_warn_flg', int())
        self.ri_re_tire_msg_tire_fillg_assi_p_sts = kwargs.get('ri_re_tire_msg_tire_fillg_assi_p_sts', int())
        self.occupy_mon_sts_drvr_sts = kwargs.get('occupy_mon_sts_drvr_sts', int())
        self.sun_roof_posn_sts = kwargs.get('sun_roof_posn_sts', int())
        self.susp_posn_vert_le1_frnt = kwargs.get('susp_posn_vert_le1_frnt', float())
        self.susp_posn_vert_le1_frnt_qf = kwargs.get('susp_posn_vert_le1_frnt_qf', int())
        self.susp_posn_vert_le1_re = kwargs.get('susp_posn_vert_le1_re', float())
        self.susp_posn_vert_le1_re_qf = kwargs.get('susp_posn_vert_le1_re_qf', int())
        self.susp_posn_vert_ri1_susp_posn_vert_ri_frnt = kwargs.get('susp_posn_vert_ri1_susp_posn_vert_ri_frnt', float())
        self.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = kwargs.get('susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf', int())
        self.susp_posn_vert_ri1_susp_posn_vert_ri_re = kwargs.get('susp_posn_vert_ri1_susp_posn_vert_ri_re', float())
        self.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = kwargs.get('susp_posn_vert_ri1_susp_posn_vert_ri_re_qf', int())
        self.twli_bri_raw_qf = kwargs.get('twli_bri_raw_qf', int())
        self.twli_bri_raw_twli_bri_raw = kwargs.get('twli_bri_raw_twli_bri_raw', int())
        self.win_posn_sts_at_drvr = kwargs.get('win_posn_sts_at_drvr', int())
        self.win_posn_sts_at_pass = kwargs.get('win_posn_sts_at_pass', int())
        self.win_posn_sts_at_re_le = kwargs.get('win_posn_sts_at_re_le', int())
        self.win_posn_sts_at_re_ri = kwargs.get('win_posn_sts_at_re_ri', int())
        self.brk_sys_sts_ad_l3_brk_fall_bck = kwargs.get('brk_sys_sts_ad_l3_brk_fall_bck', int())
        self.brk_sys_sts_brk_degradation = kwargs.get('brk_sys_sts_brk_degradation', int())
        self.brk_sys_sts_brk_sys_mod_cfmd = kwargs.get('brk_sys_sts_brk_sys_mod_cfmd', int())
        self.tank_turn_mod_sts_tank_turn_mod_sts = kwargs.get('tank_turn_mod_sts_tank_turn_mod_sts', int())
        self.sfty_decel_group_safe_asy_sfty_ena_decel = kwargs.get('sfty_decel_group_safe_asy_sfty_ena_decel', int())
        self.steer_tq_addl_for_ema_steer_tq_addl_for_ema = kwargs.get('steer_tq_addl_for_ema_steer_tq_addl_for_ema', float())
        self.asy_emgy_lane_keep_aid_sts = kwargs.get('asy_emgy_lane_keep_aid_sts', int())
        self.asy_lane_keep_aid_sts = kwargs.get('asy_lane_keep_aid_sts', int())
        self.rcwm_brk_req_rcwm_brk_req = kwargs.get('rcwm_brk_req_rcwm_brk_req', int())
        self.asy_a_lgt_sts_asy_a_lgt_sts = kwargs.get('asy_a_lgt_sts_asy_a_lgt_sts', int())
        self.asy_a_lat_indcr = kwargs.get('asy_a_lat_indcr', int())
        self.asy_cnoa_crs_sts = kwargs.get('asy_cnoa_crs_sts', int())
        self.indcr_sts = kwargs.get('indcr_sts', int())

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
        if self.tr_lock_sts != other.tr_lock_sts:
            return False
        if self.door_drvr_lock_sts != other.door_drvr_lock_sts:
            return False
        if self.door_pass_lock_sts != other.door_pass_lock_sts:
            return False
        if self.door_le_re_lock_sts != other.door_le_re_lock_sts:
            return False
        if self.door_ri_re_lock_sts != other.door_ri_re_lock_sts:
            return False
        if self.brk_sys_sts_brk_sys_capability != other.brk_sys_sts_brk_sys_capability:
            return False
        if any(self.rev != other.rev):
            return False
        if self.calltype_and_sts_ecall_status != other.calltype_and_sts_ecall_status:
            return False
        if self.blt_lock_st_at_drvr != other.blt_lock_st_at_drvr:
            return False
        if self.blt_lock_st_err_sts_at_drvr != other.blt_lock_st_err_sts_at_drvr:
            return False
        if self.esc_st_esc_st != other.esc_st_esc_st:
            return False
        if self.prk_lat_lgt_failr != other.prk_lat_lgt_failr:
            return False
        if self.road_incln_qly != other.road_incln_qly:
            return False
        if self.veh_mtn_st != other.veh_mtn_st:
            return False
        if self.whl_spd_circuml_frnt_le_qf != other.whl_spd_circuml_frnt_le_qf:
            return False
        if self.whl_spd_circuml_frnt_ri_qf != other.whl_spd_circuml_frnt_ri_qf:
            return False
        if self.whl_spd_circuml_re_le_qf != other.whl_spd_circuml_re_le_qf:
            return False
        if self.whl_spd_circuml_re_ri_qf != other.whl_spd_circuml_re_ri_qf:
            return False
        if self.gear_mov != other.gear_mov:
            return False
        if self.accr_pedl_psd_accr_pedl_psd != other.accr_pedl_psd_accr_pedl_psd:
            return False
        if self.accr_pedl_psd_sts != other.accr_pedl_psd_sts:
            return False
        if self.typ_ext_req_to_upd_qf != other.typ_ext_req_to_upd_qf:
            return False
        if self.trsm_park_lockd != other.trsm_park_lockd:
            return False
        if self.door_drvr_sts != other.door_drvr_sts:
            return False
        if self.door_le_re_sts != other.door_le_re_sts:
            return False
        if self.door_pass_sts != other.door_pass_sts:
            return False
        if self.door_ri_re_sts != other.door_ri_re_sts:
            return False
        if self.hood_sts != other.hood_sts:
            return False
        if self.mirr_fold_sts_at_drvr != other.mirr_fold_sts_at_drvr:
            return False
        if self.mirr_fold_sts_at_pass != other.mirr_fold_sts_at_pass:
            return False
        if self.tr_sts != other.tr_sts:
            return False
        if self.trlr_prsnt != other.trlr_prsnt:
            return False
        if self.veh_mod_mngt_glb_safe1_car_mod_sts1 != other.veh_mod_mngt_glb_safe1_car_mod_sts1:
            return False
        if self.veh_mod_mngt_glb_safe1_usg_mod_sts != other.veh_mod_mngt_glb_safe1_usg_mod_sts:
            return False
        if self.steer_sts_to_park_assi != other.steer_sts_to_park_assi:
            return False
        if self.indcr_typ_ext_req != other.indcr_typ_ext_req:
            return False
        if self.rainfall_amnt != other.rainfall_amnt:
            return False
        if self.egy_lvl_elec_mai != other.egy_lvl_elec_mai:
            return False
        if self.le_frnt_tire_msg_p_warn_flg != other.le_frnt_tire_msg_p_warn_flg:
            return False
        if self.le_re_tire_msg_p_warn_flg != other.le_re_tire_msg_p_warn_flg:
            return False
        if self.ri_frnt_tire_msg_p_warn_flg != other.ri_frnt_tire_msg_p_warn_flg:
            return False
        if self.ri_re_tire_msg_p_warn_flg != other.ri_re_tire_msg_p_warn_flg:
            return False
        if self.sm_lat_shake_hand_state != other.sm_lat_shake_hand_state:
            return False
        if self.sm_lon_shake_hand_state != other.sm_lon_shake_hand_state:
            return False
        if self.rcv_ctrl_req != other.rcv_ctrl_req:
            return False
        if self.rcv_steertrim_req != other.rcv_steertrim_req:
            return False
        if self.mob_dev_rcv_req1_mob_dev_sts != other.mob_dev_rcv_req1_mob_dev_sts:
            return False
        if self.dc_dc_actvd != other.dc_dc_actvd:
            return False
        if self.steer_whl_snsr_ag != other.steer_whl_snsr_ag:
            return False
        if self.ble_con_sts != other.ble_con_sts:
            return False
        if self.twbr_lockd_posn != other.twbr_lockd_posn:
            return False
        if self.full_elec_twbr_posn != other.full_elec_twbr_posn:
            return False
        if self.vtsd_mode_sts != other.vtsd_mode_sts:
            return False
        if any(self.key_read_sts_to_asm != other.key_read_sts_to_asm):
            return False
        if self.mob_dev_rpa_req_rspa_ctrl != other.mob_dev_rpa_req_rspa_ctrl:
            return False
        if self.mob_dev_rpa_req_rpa_req != other.mob_dev_rpa_req_rpa_req:
            return False
        if self.mob_dev_rpa_req_rpa_out_mode_sub_t != other.mob_dev_rpa_req_rpa_out_mode_sub_t:
            return False
        if self.mob_dev_rpa_req_mob_dev_sts != other.mob_dev_rpa_req_mob_dev_sts:
            return False
        if self.crab_mov_mod_sts != other.crab_mov_mod_sts:
            return False
        if self.tank_turn_mod_sts != other.tank_turn_mod_sts:
            return False
        if self.pass_seat_sts2 != other.pass_seat_sts2:
            return False
        if self.hmi_max_ev_mod != other.hmi_max_ev_mod:
            return False
        if self.adcu_max_ev_mod != other.adcu_max_ev_mod:
            return False
        if self.lamp_req_by_veh_hld != other.lamp_req_by_veh_hld:
            return False
        if self.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn != other.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn:
            return False
        if self.msg_req_by_hill_dwn_ctrl != other.msg_req_by_hill_dwn_ctrl:
            return False
        if self.esc_warn_indcn_req_esc_warn_indcn_req != other.esc_warn_indcn_req_esc_warn_indcn_req:
            return False
        if self.abs_ctrl_actv_ctrl_sts1 != other.abs_ctrl_actv_ctrl_sts1:
            return False
        if self.eng_st1_wd_sts_eng_st1_wd_sts != other.eng_st1_wd_sts_eng_st1_wd_sts:
            return False
        if self.crs_ctrl_ovrdn != other.crs_ctrl_ovrdn:
            return False
        if self.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai != other.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai:
            return False
        if self.drvr_steer_whl_hld_qly != other.drvr_steer_whl_hld_qly:
            return False
        if self.door_drvr_sts_with_fac_qly_door_sts != other.door_drvr_sts_with_fac_qly_door_sts:
            return False
        if self.door_drvr_sts_with_fac_qly_fac_qly != other.door_drvr_sts_with_fac_qly_fac_qly:
            return False
        if self.lat_ctrl_mod_cfmd != other.lat_ctrl_mod_cfmd:
            return False
        if self.esc_ctrl_indcn != other.esc_ctrl_indcn:
            return False
        if self.pt_drvr_setg_drv_mod_req != other.pt_drvr_setg_drv_mod_req:
            return False
        if self.front_four_d_radar_sts_for_dim != other.front_four_d_radar_sts_for_dim:
            return False
        if self.drvr_prsnt_sts != other.drvr_prsnt_sts:
            return False
        if self.wipr_actv != other.wipr_actv:
            return False
        if self.stand_still_mgr_sts_for_hld != other.stand_still_mgr_sts_for_hld:
            return False
        if self.pt_drvr_setg != other.pt_drvr_setg:
            return False
        if self.tptf_status_error != other.tptf_status_error:
            return False
        if self.tptf_status != other.tptf_status:
            return False
        if self.tptf_time_gap != other.tptf_time_gap:
            return False
        if self.hmi_sod_lan_chg_switch != other.hmi_sod_lan_chg_switch:
            return False
        if self.hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg:
            return False
        if self.turn_indcr_monostable != other.turn_indcr_monostable:
            return False
        if self.drvr_lane_chg_aut_actv_sts != other.drvr_lane_chg_aut_actv_sts:
            return False
        if self.auto_lane_chg_with_navi_sw_onoff != other.auto_lane_chg_with_navi_sw_onoff:
            return False
        if self.nop_cofm_of_lan_chag_onoff != other.nop_cofm_of_lan_chag_onoff:
            return False
        if self.wipg_spd_info != other.wipg_spd_info:
            return False
        if self.asy_safe_stop_sts != other.asy_safe_stop_sts:
            return False
        if self.hmi_sup_end_mod != other.hmi_sup_end_mod:
            return False
        if self.crash_sts_safe_sts != other.crash_sts_safe_sts:
            return False
        if self.gear_park_not_allow != other.gear_park_not_allow:
            return False
        if self.drvr_seat_sts != other.drvr_seat_sts:
            return False
        if self.drvr_seat_snsr_sts != other.drvr_seat_snsr_sts:
            return False
        if self.ad_l3_lat_ctrl_sts_ad_mod != other.ad_l3_lat_ctrl_sts_ad_mod:
            return False
        if self.ad_l3_lgt_ctrl_sts_ad_mod != other.ad_l3_lgt_ctrl_sts_ad_mod:
            return False
        if self.accr_pedl_sts_flt_sts != other.accr_pedl_sts_flt_sts:
            return False
        if self.amb_t_raw_amb_t_val != other.amb_t_raw_amb_t_val:
            return False
        if self.body_hei != other.body_hei:
            return False
        if self.le_frnt_tire_msg_batt_lo_st != other.le_frnt_tire_msg_batt_lo_st:
            return False
        if self.le_frnt_tire_msg_fast_lose_warn_flg != other.le_frnt_tire_msg_fast_lose_warn_flg:
            return False
        if self.le_frnt_tire_msg_msg_old_flg != other.le_frnt_tire_msg_msg_old_flg:
            return False
        if self.le_frnt_tire_msg_p != other.le_frnt_tire_msg_p:
            return False
        if self.le_frnt_tire_msg_sys_warn_flg != other.le_frnt_tire_msg_sys_warn_flg:
            return False
        if self.le_frnt_tire_msg_t != other.le_frnt_tire_msg_t:
            return False
        if self.le_frnt_tire_msg_t_warn_flg != other.le_frnt_tire_msg_t_warn_flg:
            return False
        if self.le_frnt_tire_msg_tire_fillg_assi_p_sts != other.le_frnt_tire_msg_tire_fillg_assi_p_sts:
            return False
        if self.le_re_tire_msg_batt_lo_st != other.le_re_tire_msg_batt_lo_st:
            return False
        if self.le_re_tire_msg_fast_lose_warn_flg != other.le_re_tire_msg_fast_lose_warn_flg:
            return False
        if self.le_re_tire_msg_msg_old_flg != other.le_re_tire_msg_msg_old_flg:
            return False
        if self.le_re_tire_msg_p != other.le_re_tire_msg_p:
            return False
        if self.le_re_tire_msg_sys_warn_flg != other.le_re_tire_msg_sys_warn_flg:
            return False
        if self.le_re_tire_msg_t != other.le_re_tire_msg_t:
            return False
        if self.le_re_tire_msg_t_warn_flg != other.le_re_tire_msg_t_warn_flg:
            return False
        if self.le_re_tire_msg_tire_fillg_assi_p_sts != other.le_re_tire_msg_tire_fillg_assi_p_sts:
            return False
        if self.ri_frnt_tire_msg_batt_lo_st != other.ri_frnt_tire_msg_batt_lo_st:
            return False
        if self.ri_frnt_tire_msg_fast_lose_warn_flg != other.ri_frnt_tire_msg_fast_lose_warn_flg:
            return False
        if self.ri_frnt_tire_msg_msg_old_flg != other.ri_frnt_tire_msg_msg_old_flg:
            return False
        if self.ri_frnt_tire_msg_p != other.ri_frnt_tire_msg_p:
            return False
        if self.ri_frnt_tire_msg_sys_warn_flg != other.ri_frnt_tire_msg_sys_warn_flg:
            return False
        if self.ri_frnt_tire_msg_t != other.ri_frnt_tire_msg_t:
            return False
        if self.ri_frnt_tire_msg_t_warn_flg != other.ri_frnt_tire_msg_t_warn_flg:
            return False
        if self.ri_frnt_tire_msg_tire_fillg_assi_p_sts != other.ri_frnt_tire_msg_tire_fillg_assi_p_sts:
            return False
        if self.ri_re_tire_msg_batt_lo_st != other.ri_re_tire_msg_batt_lo_st:
            return False
        if self.ri_re_tire_msg_fast_lose_warn_flg != other.ri_re_tire_msg_fast_lose_warn_flg:
            return False
        if self.ri_re_tire_msg_msg_old_flg != other.ri_re_tire_msg_msg_old_flg:
            return False
        if self.ri_re_tire_msg_p != other.ri_re_tire_msg_p:
            return False
        if self.ri_re_tire_msg_sys_warn_flg != other.ri_re_tire_msg_sys_warn_flg:
            return False
        if self.ri_re_tire_msg_t != other.ri_re_tire_msg_t:
            return False
        if self.ri_re_tire_msg_t_warn_flg != other.ri_re_tire_msg_t_warn_flg:
            return False
        if self.ri_re_tire_msg_tire_fillg_assi_p_sts != other.ri_re_tire_msg_tire_fillg_assi_p_sts:
            return False
        if self.occupy_mon_sts_drvr_sts != other.occupy_mon_sts_drvr_sts:
            return False
        if self.sun_roof_posn_sts != other.sun_roof_posn_sts:
            return False
        if self.susp_posn_vert_le1_frnt != other.susp_posn_vert_le1_frnt:
            return False
        if self.susp_posn_vert_le1_frnt_qf != other.susp_posn_vert_le1_frnt_qf:
            return False
        if self.susp_posn_vert_le1_re != other.susp_posn_vert_le1_re:
            return False
        if self.susp_posn_vert_le1_re_qf != other.susp_posn_vert_le1_re_qf:
            return False
        if self.susp_posn_vert_ri1_susp_posn_vert_ri_frnt != other.susp_posn_vert_ri1_susp_posn_vert_ri_frnt:
            return False
        if self.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf != other.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf:
            return False
        if self.susp_posn_vert_ri1_susp_posn_vert_ri_re != other.susp_posn_vert_ri1_susp_posn_vert_ri_re:
            return False
        if self.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf != other.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf:
            return False
        if self.twli_bri_raw_qf != other.twli_bri_raw_qf:
            return False
        if self.twli_bri_raw_twli_bri_raw != other.twli_bri_raw_twli_bri_raw:
            return False
        if self.win_posn_sts_at_drvr != other.win_posn_sts_at_drvr:
            return False
        if self.win_posn_sts_at_pass != other.win_posn_sts_at_pass:
            return False
        if self.win_posn_sts_at_re_le != other.win_posn_sts_at_re_le:
            return False
        if self.win_posn_sts_at_re_ri != other.win_posn_sts_at_re_ri:
            return False
        if self.brk_sys_sts_ad_l3_brk_fall_bck != other.brk_sys_sts_ad_l3_brk_fall_bck:
            return False
        if self.brk_sys_sts_brk_degradation != other.brk_sys_sts_brk_degradation:
            return False
        if self.brk_sys_sts_brk_sys_mod_cfmd != other.brk_sys_sts_brk_sys_mod_cfmd:
            return False
        if self.tank_turn_mod_sts_tank_turn_mod_sts != other.tank_turn_mod_sts_tank_turn_mod_sts:
            return False
        if self.sfty_decel_group_safe_asy_sfty_ena_decel != other.sfty_decel_group_safe_asy_sfty_ena_decel:
            return False
        if self.steer_tq_addl_for_ema_steer_tq_addl_for_ema != other.steer_tq_addl_for_ema_steer_tq_addl_for_ema:
            return False
        if self.asy_emgy_lane_keep_aid_sts != other.asy_emgy_lane_keep_aid_sts:
            return False
        if self.asy_lane_keep_aid_sts != other.asy_lane_keep_aid_sts:
            return False
        if self.rcwm_brk_req_rcwm_brk_req != other.rcwm_brk_req_rcwm_brk_req:
            return False
        if self.asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts:
            return False
        if self.asy_a_lat_indcr != other.asy_a_lat_indcr:
            return False
        if self.asy_cnoa_crs_sts != other.asy_cnoa_crs_sts:
            return False
        if self.indcr_sts != other.indcr_sts:
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
    def tr_lock_sts(self):
        """Message field 'tr_lock_sts'."""
        return self._tr_lock_sts

    @tr_lock_sts.setter
    def tr_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tr_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tr_lock_sts' field must be an unsigned integer in [0, 255]"
        self._tr_lock_sts = value

    @builtins.property
    def door_drvr_lock_sts(self):
        """Message field 'door_drvr_lock_sts'."""
        return self._door_drvr_lock_sts

    @door_drvr_lock_sts.setter
    def door_drvr_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_drvr_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_drvr_lock_sts' field must be an unsigned integer in [0, 255]"
        self._door_drvr_lock_sts = value

    @builtins.property
    def door_pass_lock_sts(self):
        """Message field 'door_pass_lock_sts'."""
        return self._door_pass_lock_sts

    @door_pass_lock_sts.setter
    def door_pass_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_pass_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_pass_lock_sts' field must be an unsigned integer in [0, 255]"
        self._door_pass_lock_sts = value

    @builtins.property
    def door_le_re_lock_sts(self):
        """Message field 'door_le_re_lock_sts'."""
        return self._door_le_re_lock_sts

    @door_le_re_lock_sts.setter
    def door_le_re_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_le_re_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_le_re_lock_sts' field must be an unsigned integer in [0, 255]"
        self._door_le_re_lock_sts = value

    @builtins.property
    def door_ri_re_lock_sts(self):
        """Message field 'door_ri_re_lock_sts'."""
        return self._door_ri_re_lock_sts

    @door_ri_re_lock_sts.setter
    def door_ri_re_lock_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_ri_re_lock_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_ri_re_lock_sts' field must be an unsigned integer in [0, 255]"
        self._door_ri_re_lock_sts = value

    @builtins.property
    def brk_sys_sts_brk_sys_capability(self):
        """Message field 'brk_sys_sts_brk_sys_capability'."""
        return self._brk_sys_sts_brk_sys_capability

    @brk_sys_sts_brk_sys_capability.setter
    def brk_sys_sts_brk_sys_capability(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_sys_sts_brk_sys_capability' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_sys_sts_brk_sys_capability' field must be an unsigned integer in [0, 255]"
        self._brk_sys_sts_brk_sys_capability = value

    @builtins.property
    def rev(self):
        """Message field 'rev'."""
        return self._rev

    @rev.setter
    def rev(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'rev' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'rev' numpy.ndarray() must have a size of 2"
            self._rev = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'rev' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._rev = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def calltype_and_sts_ecall_status(self):
        """Message field 'calltype_and_sts_ecall_status'."""
        return self._calltype_and_sts_ecall_status

    @calltype_and_sts_ecall_status.setter
    def calltype_and_sts_ecall_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calltype_and_sts_ecall_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calltype_and_sts_ecall_status' field must be an unsigned integer in [0, 255]"
        self._calltype_and_sts_ecall_status = value

    @builtins.property
    def blt_lock_st_at_drvr(self):
        """Message field 'blt_lock_st_at_drvr'."""
        return self._blt_lock_st_at_drvr

    @blt_lock_st_at_drvr.setter
    def blt_lock_st_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blt_lock_st_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blt_lock_st_at_drvr' field must be an unsigned integer in [0, 255]"
        self._blt_lock_st_at_drvr = value

    @builtins.property
    def blt_lock_st_err_sts_at_drvr(self):
        """Message field 'blt_lock_st_err_sts_at_drvr'."""
        return self._blt_lock_st_err_sts_at_drvr

    @blt_lock_st_err_sts_at_drvr.setter
    def blt_lock_st_err_sts_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'blt_lock_st_err_sts_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'blt_lock_st_err_sts_at_drvr' field must be an unsigned integer in [0, 255]"
        self._blt_lock_st_err_sts_at_drvr = value

    @builtins.property
    def esc_st_esc_st(self):
        """Message field 'esc_st_esc_st'."""
        return self._esc_st_esc_st

    @esc_st_esc_st.setter
    def esc_st_esc_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_st_esc_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_st_esc_st' field must be an unsigned integer in [0, 255]"
        self._esc_st_esc_st = value

    @builtins.property
    def prk_lat_lgt_failr(self):
        """Message field 'prk_lat_lgt_failr'."""
        return self._prk_lat_lgt_failr

    @prk_lat_lgt_failr.setter
    def prk_lat_lgt_failr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prk_lat_lgt_failr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'prk_lat_lgt_failr' field must be an unsigned integer in [0, 255]"
        self._prk_lat_lgt_failr = value

    @builtins.property
    def road_incln_qly(self):
        """Message field 'road_incln_qly'."""
        return self._road_incln_qly

    @road_incln_qly.setter
    def road_incln_qly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'road_incln_qly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'road_incln_qly' field must be an unsigned integer in [0, 255]"
        self._road_incln_qly = value

    @builtins.property
    def veh_mtn_st(self):
        """Message field 'veh_mtn_st'."""
        return self._veh_mtn_st

    @veh_mtn_st.setter
    def veh_mtn_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_mtn_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_mtn_st' field must be an unsigned integer in [0, 255]"
        self._veh_mtn_st = value

    @builtins.property
    def whl_spd_circuml_frnt_le_qf(self):
        """Message field 'whl_spd_circuml_frnt_le_qf'."""
        return self._whl_spd_circuml_frnt_le_qf

    @whl_spd_circuml_frnt_le_qf.setter
    def whl_spd_circuml_frnt_le_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whl_spd_circuml_frnt_le_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'whl_spd_circuml_frnt_le_qf' field must be an unsigned integer in [0, 255]"
        self._whl_spd_circuml_frnt_le_qf = value

    @builtins.property
    def whl_spd_circuml_frnt_ri_qf(self):
        """Message field 'whl_spd_circuml_frnt_ri_qf'."""
        return self._whl_spd_circuml_frnt_ri_qf

    @whl_spd_circuml_frnt_ri_qf.setter
    def whl_spd_circuml_frnt_ri_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whl_spd_circuml_frnt_ri_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'whl_spd_circuml_frnt_ri_qf' field must be an unsigned integer in [0, 255]"
        self._whl_spd_circuml_frnt_ri_qf = value

    @builtins.property
    def whl_spd_circuml_re_le_qf(self):
        """Message field 'whl_spd_circuml_re_le_qf'."""
        return self._whl_spd_circuml_re_le_qf

    @whl_spd_circuml_re_le_qf.setter
    def whl_spd_circuml_re_le_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whl_spd_circuml_re_le_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'whl_spd_circuml_re_le_qf' field must be an unsigned integer in [0, 255]"
        self._whl_spd_circuml_re_le_qf = value

    @builtins.property
    def whl_spd_circuml_re_ri_qf(self):
        """Message field 'whl_spd_circuml_re_ri_qf'."""
        return self._whl_spd_circuml_re_ri_qf

    @whl_spd_circuml_re_ri_qf.setter
    def whl_spd_circuml_re_ri_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whl_spd_circuml_re_ri_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'whl_spd_circuml_re_ri_qf' field must be an unsigned integer in [0, 255]"
        self._whl_spd_circuml_re_ri_qf = value

    @builtins.property
    def gear_mov(self):
        """Message field 'gear_mov'."""
        return self._gear_mov

    @gear_mov.setter
    def gear_mov(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_mov' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_mov' field must be an unsigned integer in [0, 255]"
        self._gear_mov = value

    @builtins.property
    def accr_pedl_psd_accr_pedl_psd(self):
        """Message field 'accr_pedl_psd_accr_pedl_psd'."""
        return self._accr_pedl_psd_accr_pedl_psd

    @accr_pedl_psd_accr_pedl_psd.setter
    def accr_pedl_psd_accr_pedl_psd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accr_pedl_psd_accr_pedl_psd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accr_pedl_psd_accr_pedl_psd' field must be an unsigned integer in [0, 255]"
        self._accr_pedl_psd_accr_pedl_psd = value

    @builtins.property
    def accr_pedl_psd_sts(self):
        """Message field 'accr_pedl_psd_sts'."""
        return self._accr_pedl_psd_sts

    @accr_pedl_psd_sts.setter
    def accr_pedl_psd_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accr_pedl_psd_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accr_pedl_psd_sts' field must be an unsigned integer in [0, 255]"
        self._accr_pedl_psd_sts = value

    @builtins.property
    def typ_ext_req_to_upd_qf(self):
        """Message field 'typ_ext_req_to_upd_qf'."""
        return self._typ_ext_req_to_upd_qf

    @typ_ext_req_to_upd_qf.setter
    def typ_ext_req_to_upd_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'typ_ext_req_to_upd_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'typ_ext_req_to_upd_qf' field must be an unsigned integer in [0, 255]"
        self._typ_ext_req_to_upd_qf = value

    @builtins.property
    def trsm_park_lockd(self):
        """Message field 'trsm_park_lockd'."""
        return self._trsm_park_lockd

    @trsm_park_lockd.setter
    def trsm_park_lockd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trsm_park_lockd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trsm_park_lockd' field must be an unsigned integer in [0, 255]"
        self._trsm_park_lockd = value

    @builtins.property
    def door_drvr_sts(self):
        """Message field 'door_drvr_sts'."""
        return self._door_drvr_sts

    @door_drvr_sts.setter
    def door_drvr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_drvr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_drvr_sts' field must be an unsigned integer in [0, 255]"
        self._door_drvr_sts = value

    @builtins.property
    def door_le_re_sts(self):
        """Message field 'door_le_re_sts'."""
        return self._door_le_re_sts

    @door_le_re_sts.setter
    def door_le_re_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_le_re_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_le_re_sts' field must be an unsigned integer in [0, 255]"
        self._door_le_re_sts = value

    @builtins.property
    def door_pass_sts(self):
        """Message field 'door_pass_sts'."""
        return self._door_pass_sts

    @door_pass_sts.setter
    def door_pass_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_pass_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_pass_sts' field must be an unsigned integer in [0, 255]"
        self._door_pass_sts = value

    @builtins.property
    def door_ri_re_sts(self):
        """Message field 'door_ri_re_sts'."""
        return self._door_ri_re_sts

    @door_ri_re_sts.setter
    def door_ri_re_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_ri_re_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_ri_re_sts' field must be an unsigned integer in [0, 255]"
        self._door_ri_re_sts = value

    @builtins.property
    def hood_sts(self):
        """Message field 'hood_sts'."""
        return self._hood_sts

    @hood_sts.setter
    def hood_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hood_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hood_sts' field must be an unsigned integer in [0, 255]"
        self._hood_sts = value

    @builtins.property
    def mirr_fold_sts_at_drvr(self):
        """Message field 'mirr_fold_sts_at_drvr'."""
        return self._mirr_fold_sts_at_drvr

    @mirr_fold_sts_at_drvr.setter
    def mirr_fold_sts_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirr_fold_sts_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirr_fold_sts_at_drvr' field must be an unsigned integer in [0, 255]"
        self._mirr_fold_sts_at_drvr = value

    @builtins.property
    def mirr_fold_sts_at_pass(self):
        """Message field 'mirr_fold_sts_at_pass'."""
        return self._mirr_fold_sts_at_pass

    @mirr_fold_sts_at_pass.setter
    def mirr_fold_sts_at_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirr_fold_sts_at_pass' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirr_fold_sts_at_pass' field must be an unsigned integer in [0, 255]"
        self._mirr_fold_sts_at_pass = value

    @builtins.property
    def tr_sts(self):
        """Message field 'tr_sts'."""
        return self._tr_sts

    @tr_sts.setter
    def tr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tr_sts' field must be an unsigned integer in [0, 255]"
        self._tr_sts = value

    @builtins.property
    def trlr_prsnt(self):
        """Message field 'trlr_prsnt'."""
        return self._trlr_prsnt

    @trlr_prsnt.setter
    def trlr_prsnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trlr_prsnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trlr_prsnt' field must be an unsigned integer in [0, 255]"
        self._trlr_prsnt = value

    @builtins.property
    def veh_mod_mngt_glb_safe1_car_mod_sts1(self):
        """Message field 'veh_mod_mngt_glb_safe1_car_mod_sts1'."""
        return self._veh_mod_mngt_glb_safe1_car_mod_sts1

    @veh_mod_mngt_glb_safe1_car_mod_sts1.setter
    def veh_mod_mngt_glb_safe1_car_mod_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_mod_mngt_glb_safe1_car_mod_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_mod_mngt_glb_safe1_car_mod_sts1' field must be an unsigned integer in [0, 255]"
        self._veh_mod_mngt_glb_safe1_car_mod_sts1 = value

    @builtins.property
    def veh_mod_mngt_glb_safe1_usg_mod_sts(self):
        """Message field 'veh_mod_mngt_glb_safe1_usg_mod_sts'."""
        return self._veh_mod_mngt_glb_safe1_usg_mod_sts

    @veh_mod_mngt_glb_safe1_usg_mod_sts.setter
    def veh_mod_mngt_glb_safe1_usg_mod_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_mod_mngt_glb_safe1_usg_mod_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_mod_mngt_glb_safe1_usg_mod_sts' field must be an unsigned integer in [0, 255]"
        self._veh_mod_mngt_glb_safe1_usg_mod_sts = value

    @builtins.property
    def steer_sts_to_park_assi(self):
        """Message field 'steer_sts_to_park_assi'."""
        return self._steer_sts_to_park_assi

    @steer_sts_to_park_assi.setter
    def steer_sts_to_park_assi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_sts_to_park_assi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_sts_to_park_assi' field must be an unsigned integer in [0, 255]"
        self._steer_sts_to_park_assi = value

    @builtins.property
    def indcr_typ_ext_req(self):
        """Message field 'indcr_typ_ext_req'."""
        return self._indcr_typ_ext_req

    @indcr_typ_ext_req.setter
    def indcr_typ_ext_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcr_typ_ext_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcr_typ_ext_req' field must be an unsigned integer in [0, 255]"
        self._indcr_typ_ext_req = value

    @builtins.property
    def rainfall_amnt(self):
        """Message field 'rainfall_amnt'."""
        return self._rainfall_amnt

    @rainfall_amnt.setter
    def rainfall_amnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rainfall_amnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rainfall_amnt' field must be an unsigned integer in [0, 255]"
        self._rainfall_amnt = value

    @builtins.property
    def egy_lvl_elec_mai(self):
        """Message field 'egy_lvl_elec_mai'."""
        return self._egy_lvl_elec_mai

    @egy_lvl_elec_mai.setter
    def egy_lvl_elec_mai(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'egy_lvl_elec_mai' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'egy_lvl_elec_mai' field must be an unsigned integer in [0, 255]"
        self._egy_lvl_elec_mai = value

    @builtins.property
    def le_frnt_tire_msg_p_warn_flg(self):
        """Message field 'le_frnt_tire_msg_p_warn_flg'."""
        return self._le_frnt_tire_msg_p_warn_flg

    @le_frnt_tire_msg_p_warn_flg.setter
    def le_frnt_tire_msg_p_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_p_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_p_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_p_warn_flg = value

    @builtins.property
    def le_re_tire_msg_p_warn_flg(self):
        """Message field 'le_re_tire_msg_p_warn_flg'."""
        return self._le_re_tire_msg_p_warn_flg

    @le_re_tire_msg_p_warn_flg.setter
    def le_re_tire_msg_p_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_p_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_p_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_p_warn_flg = value

    @builtins.property
    def ri_frnt_tire_msg_p_warn_flg(self):
        """Message field 'ri_frnt_tire_msg_p_warn_flg'."""
        return self._ri_frnt_tire_msg_p_warn_flg

    @ri_frnt_tire_msg_p_warn_flg.setter
    def ri_frnt_tire_msg_p_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_p_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_p_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_p_warn_flg = value

    @builtins.property
    def ri_re_tire_msg_p_warn_flg(self):
        """Message field 'ri_re_tire_msg_p_warn_flg'."""
        return self._ri_re_tire_msg_p_warn_flg

    @ri_re_tire_msg_p_warn_flg.setter
    def ri_re_tire_msg_p_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_p_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_p_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_p_warn_flg = value

    @builtins.property
    def sm_lat_shake_hand_state(self):
        """Message field 'sm_lat_shake_hand_state'."""
        return self._sm_lat_shake_hand_state

    @sm_lat_shake_hand_state.setter
    def sm_lat_shake_hand_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_lat_shake_hand_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_lat_shake_hand_state' field must be an unsigned integer in [0, 255]"
        self._sm_lat_shake_hand_state = value

    @builtins.property
    def sm_lon_shake_hand_state(self):
        """Message field 'sm_lon_shake_hand_state'."""
        return self._sm_lon_shake_hand_state

    @sm_lon_shake_hand_state.setter
    def sm_lon_shake_hand_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_lon_shake_hand_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_lon_shake_hand_state' field must be an unsigned integer in [0, 255]"
        self._sm_lon_shake_hand_state = value

    @builtins.property
    def rcv_ctrl_req(self):
        """Message field 'rcv_ctrl_req'."""
        return self._rcv_ctrl_req

    @rcv_ctrl_req.setter
    def rcv_ctrl_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rcv_ctrl_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rcv_ctrl_req' field must be an unsigned integer in [0, 255]"
        self._rcv_ctrl_req = value

    @builtins.property
    def rcv_steertrim_req(self):
        """Message field 'rcv_steertrim_req'."""
        return self._rcv_steertrim_req

    @rcv_steertrim_req.setter
    def rcv_steertrim_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rcv_steertrim_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rcv_steertrim_req' field must be an unsigned integer in [0, 255]"
        self._rcv_steertrim_req = value

    @builtins.property
    def mob_dev_rcv_req1_mob_dev_sts(self):
        """Message field 'mob_dev_rcv_req1_mob_dev_sts'."""
        return self._mob_dev_rcv_req1_mob_dev_sts

    @mob_dev_rcv_req1_mob_dev_sts.setter
    def mob_dev_rcv_req1_mob_dev_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mob_dev_rcv_req1_mob_dev_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mob_dev_rcv_req1_mob_dev_sts' field must be an unsigned integer in [0, 255]"
        self._mob_dev_rcv_req1_mob_dev_sts = value

    @builtins.property
    def dc_dc_actvd(self):
        """Message field 'dc_dc_actvd'."""
        return self._dc_dc_actvd

    @dc_dc_actvd.setter
    def dc_dc_actvd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dc_dc_actvd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dc_dc_actvd' field must be an unsigned integer in [0, 255]"
        self._dc_dc_actvd = value

    @builtins.property
    def steer_whl_snsr_ag(self):
        """Message field 'steer_whl_snsr_ag'."""
        return self._steer_whl_snsr_ag

    @steer_whl_snsr_ag.setter
    def steer_whl_snsr_ag(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_whl_snsr_ag' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_whl_snsr_ag' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_whl_snsr_ag = value

    @builtins.property
    def ble_con_sts(self):
        """Message field 'ble_con_sts'."""
        return self._ble_con_sts

    @ble_con_sts.setter
    def ble_con_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ble_con_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ble_con_sts' field must be an unsigned integer in [0, 255]"
        self._ble_con_sts = value

    @builtins.property
    def twbr_lockd_posn(self):
        """Message field 'twbr_lockd_posn'."""
        return self._twbr_lockd_posn

    @twbr_lockd_posn.setter
    def twbr_lockd_posn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'twbr_lockd_posn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'twbr_lockd_posn' field must be an unsigned integer in [0, 255]"
        self._twbr_lockd_posn = value

    @builtins.property
    def full_elec_twbr_posn(self):
        """Message field 'full_elec_twbr_posn'."""
        return self._full_elec_twbr_posn

    @full_elec_twbr_posn.setter
    def full_elec_twbr_posn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'full_elec_twbr_posn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'full_elec_twbr_posn' field must be an unsigned integer in [0, 255]"
        self._full_elec_twbr_posn = value

    @builtins.property
    def vtsd_mode_sts(self):
        """Message field 'vtsd_mode_sts'."""
        return self._vtsd_mode_sts

    @vtsd_mode_sts.setter
    def vtsd_mode_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vtsd_mode_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vtsd_mode_sts' field must be an unsigned integer in [0, 255]"
        self._vtsd_mode_sts = value

    @builtins.property
    def key_read_sts_to_asm(self):
        """Message field 'key_read_sts_to_asm'."""
        return self._key_read_sts_to_asm

    @key_read_sts_to_asm.setter
    def key_read_sts_to_asm(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'key_read_sts_to_asm' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 12, \
                "The 'key_read_sts_to_asm' numpy.ndarray() must have a size of 12"
            self._key_read_sts_to_asm = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'key_read_sts_to_asm' field must be a set or sequence with length 12 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._key_read_sts_to_asm = numpy.array(value, dtype=numpy.uint8)

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
    def crab_mov_mod_sts(self):
        """Message field 'crab_mov_mod_sts'."""
        return self._crab_mov_mod_sts

    @crab_mov_mod_sts.setter
    def crab_mov_mod_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crab_mov_mod_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crab_mov_mod_sts' field must be an unsigned integer in [0, 255]"
        self._crab_mov_mod_sts = value

    @builtins.property
    def tank_turn_mod_sts(self):
        """Message field 'tank_turn_mod_sts'."""
        return self._tank_turn_mod_sts

    @tank_turn_mod_sts.setter
    def tank_turn_mod_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tank_turn_mod_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tank_turn_mod_sts' field must be an unsigned integer in [0, 255]"
        self._tank_turn_mod_sts = value

    @builtins.property
    def pass_seat_sts2(self):
        """Message field 'pass_seat_sts2'."""
        return self._pass_seat_sts2

    @pass_seat_sts2.setter
    def pass_seat_sts2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pass_seat_sts2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pass_seat_sts2' field must be an unsigned integer in [0, 255]"
        self._pass_seat_sts2 = value

    @builtins.property
    def hmi_max_ev_mod(self):
        """Message field 'hmi_max_ev_mod'."""
        return self._hmi_max_ev_mod

    @hmi_max_ev_mod.setter
    def hmi_max_ev_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_max_ev_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_max_ev_mod' field must be an unsigned integer in [0, 255]"
        self._hmi_max_ev_mod = value

    @builtins.property
    def adcu_max_ev_mod(self):
        """Message field 'adcu_max_ev_mod'."""
        return self._adcu_max_ev_mod

    @adcu_max_ev_mod.setter
    def adcu_max_ev_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'adcu_max_ev_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'adcu_max_ev_mod' field must be an unsigned integer in [0, 255]"
        self._adcu_max_ev_mod = value

    @builtins.property
    def lamp_req_by_veh_hld(self):
        """Message field 'lamp_req_by_veh_hld'."""
        return self._lamp_req_by_veh_hld

    @lamp_req_by_veh_hld.setter
    def lamp_req_by_veh_hld(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lamp_req_by_veh_hld' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lamp_req_by_veh_hld' field must be an unsigned integer in [0, 255]"
        self._lamp_req_by_veh_hld = value

    @builtins.property
    def ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(self):
        """Message field 'ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn'."""
        return self._ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn

    @ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn.setter
    def ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn' field must be an unsigned integer in [0, 255]"
        self._ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = value

    @builtins.property
    def msg_req_by_hill_dwn_ctrl(self):
        """Message field 'msg_req_by_hill_dwn_ctrl'."""
        return self._msg_req_by_hill_dwn_ctrl

    @msg_req_by_hill_dwn_ctrl.setter
    def msg_req_by_hill_dwn_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_req_by_hill_dwn_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'msg_req_by_hill_dwn_ctrl' field must be an unsigned integer in [0, 255]"
        self._msg_req_by_hill_dwn_ctrl = value

    @builtins.property
    def esc_warn_indcn_req_esc_warn_indcn_req(self):
        """Message field 'esc_warn_indcn_req_esc_warn_indcn_req'."""
        return self._esc_warn_indcn_req_esc_warn_indcn_req

    @esc_warn_indcn_req_esc_warn_indcn_req.setter
    def esc_warn_indcn_req_esc_warn_indcn_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_warn_indcn_req_esc_warn_indcn_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_warn_indcn_req_esc_warn_indcn_req' field must be an unsigned integer in [0, 255]"
        self._esc_warn_indcn_req_esc_warn_indcn_req = value

    @builtins.property
    def abs_ctrl_actv_ctrl_sts1(self):
        """Message field 'abs_ctrl_actv_ctrl_sts1'."""
        return self._abs_ctrl_actv_ctrl_sts1

    @abs_ctrl_actv_ctrl_sts1.setter
    def abs_ctrl_actv_ctrl_sts1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abs_ctrl_actv_ctrl_sts1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'abs_ctrl_actv_ctrl_sts1' field must be an unsigned integer in [0, 255]"
        self._abs_ctrl_actv_ctrl_sts1 = value

    @builtins.property
    def eng_st1_wd_sts_eng_st1_wd_sts(self):
        """Message field 'eng_st1_wd_sts_eng_st1_wd_sts'."""
        return self._eng_st1_wd_sts_eng_st1_wd_sts

    @eng_st1_wd_sts_eng_st1_wd_sts.setter
    def eng_st1_wd_sts_eng_st1_wd_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eng_st1_wd_sts_eng_st1_wd_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eng_st1_wd_sts_eng_st1_wd_sts' field must be an unsigned integer in [0, 255]"
        self._eng_st1_wd_sts_eng_st1_wd_sts = value

    @builtins.property
    def crs_ctrl_ovrdn(self):
        """Message field 'crs_ctrl_ovrdn'."""
        return self._crs_ctrl_ovrdn

    @crs_ctrl_ovrdn.setter
    def crs_ctrl_ovrdn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crs_ctrl_ovrdn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crs_ctrl_ovrdn' field must be an unsigned integer in [0, 255]"
        self._crs_ctrl_ovrdn = value

    @builtins.property
    def veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(self):
        """Message field 'veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai'."""
        return self._veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai

    @veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai.setter
    def veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai' field must be an unsigned integer in [0, 255]"
        self._veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = value

    @builtins.property
    def drvr_steer_whl_hld_qly(self):
        """Message field 'drvr_steer_whl_hld_qly'."""
        return self._drvr_steer_whl_hld_qly

    @drvr_steer_whl_hld_qly.setter
    def drvr_steer_whl_hld_qly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_steer_whl_hld_qly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_steer_whl_hld_qly' field must be an unsigned integer in [0, 255]"
        self._drvr_steer_whl_hld_qly = value

    @builtins.property
    def door_drvr_sts_with_fac_qly_door_sts(self):
        """Message field 'door_drvr_sts_with_fac_qly_door_sts'."""
        return self._door_drvr_sts_with_fac_qly_door_sts

    @door_drvr_sts_with_fac_qly_door_sts.setter
    def door_drvr_sts_with_fac_qly_door_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_drvr_sts_with_fac_qly_door_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_drvr_sts_with_fac_qly_door_sts' field must be an unsigned integer in [0, 255]"
        self._door_drvr_sts_with_fac_qly_door_sts = value

    @builtins.property
    def door_drvr_sts_with_fac_qly_fac_qly(self):
        """Message field 'door_drvr_sts_with_fac_qly_fac_qly'."""
        return self._door_drvr_sts_with_fac_qly_fac_qly

    @door_drvr_sts_with_fac_qly_fac_qly.setter
    def door_drvr_sts_with_fac_qly_fac_qly(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_drvr_sts_with_fac_qly_fac_qly' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_drvr_sts_with_fac_qly_fac_qly' field must be an unsigned integer in [0, 255]"
        self._door_drvr_sts_with_fac_qly_fac_qly = value

    @builtins.property
    def lat_ctrl_mod_cfmd(self):
        """Message field 'lat_ctrl_mod_cfmd'."""
        return self._lat_ctrl_mod_cfmd

    @lat_ctrl_mod_cfmd.setter
    def lat_ctrl_mod_cfmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lat_ctrl_mod_cfmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lat_ctrl_mod_cfmd' field must be an unsigned integer in [0, 255]"
        self._lat_ctrl_mod_cfmd = value

    @builtins.property
    def esc_ctrl_indcn(self):
        """Message field 'esc_ctrl_indcn'."""
        return self._esc_ctrl_indcn

    @esc_ctrl_indcn.setter
    def esc_ctrl_indcn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_ctrl_indcn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_ctrl_indcn' field must be an unsigned integer in [0, 255]"
        self._esc_ctrl_indcn = value

    @builtins.property
    def pt_drvr_setg_drv_mod_req(self):
        """Message field 'pt_drvr_setg_drv_mod_req'."""
        return self._pt_drvr_setg_drv_mod_req

    @pt_drvr_setg_drv_mod_req.setter
    def pt_drvr_setg_drv_mod_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pt_drvr_setg_drv_mod_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pt_drvr_setg_drv_mod_req' field must be an unsigned integer in [0, 255]"
        self._pt_drvr_setg_drv_mod_req = value

    @builtins.property
    def front_four_d_radar_sts_for_dim(self):
        """Message field 'front_four_d_radar_sts_for_dim'."""
        return self._front_four_d_radar_sts_for_dim

    @front_four_d_radar_sts_for_dim.setter
    def front_four_d_radar_sts_for_dim(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'front_four_d_radar_sts_for_dim' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'front_four_d_radar_sts_for_dim' field must be an unsigned integer in [0, 255]"
        self._front_four_d_radar_sts_for_dim = value

    @builtins.property
    def drvr_prsnt_sts(self):
        """Message field 'drvr_prsnt_sts'."""
        return self._drvr_prsnt_sts

    @drvr_prsnt_sts.setter
    def drvr_prsnt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_prsnt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_prsnt_sts' field must be an unsigned integer in [0, 255]"
        self._drvr_prsnt_sts = value

    @builtins.property
    def wipr_actv(self):
        """Message field 'wipr_actv'."""
        return self._wipr_actv

    @wipr_actv.setter
    def wipr_actv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wipr_actv' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wipr_actv' field must be an unsigned integer in [0, 255]"
        self._wipr_actv = value

    @builtins.property
    def stand_still_mgr_sts_for_hld(self):
        """Message field 'stand_still_mgr_sts_for_hld'."""
        return self._stand_still_mgr_sts_for_hld

    @stand_still_mgr_sts_for_hld.setter
    def stand_still_mgr_sts_for_hld(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stand_still_mgr_sts_for_hld' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stand_still_mgr_sts_for_hld' field must be an unsigned integer in [0, 255]"
        self._stand_still_mgr_sts_for_hld = value

    @builtins.property
    def pt_drvr_setg(self):
        """Message field 'pt_drvr_setg'."""
        return self._pt_drvr_setg

    @pt_drvr_setg.setter
    def pt_drvr_setg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pt_drvr_setg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pt_drvr_setg' field must be an unsigned integer in [0, 255]"
        self._pt_drvr_setg = value

    @builtins.property
    def tptf_status_error(self):
        """Message field 'tptf_status_error'."""
        return self._tptf_status_error

    @tptf_status_error.setter
    def tptf_status_error(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tptf_status_error' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tptf_status_error' field must be an unsigned integer in [0, 255]"
        self._tptf_status_error = value

    @builtins.property
    def tptf_status(self):
        """Message field 'tptf_status'."""
        return self._tptf_status

    @tptf_status.setter
    def tptf_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tptf_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tptf_status' field must be an unsigned integer in [0, 255]"
        self._tptf_status = value

    @builtins.property
    def tptf_time_gap(self):
        """Message field 'tptf_time_gap'."""
        return self._tptf_time_gap

    @tptf_time_gap.setter
    def tptf_time_gap(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tptf_time_gap' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tptf_time_gap' field must be an unsigned integer in [0, 255]"
        self._tptf_time_gap = value

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
    def turn_indcr_monostable(self):
        """Message field 'turn_indcr_monostable'."""
        return self._turn_indcr_monostable

    @turn_indcr_monostable.setter
    def turn_indcr_monostable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_indcr_monostable' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_indcr_monostable' field must be an unsigned integer in [0, 255]"
        self._turn_indcr_monostable = value

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
    def wipg_spd_info(self):
        """Message field 'wipg_spd_info'."""
        return self._wipg_spd_info

    @wipg_spd_info.setter
    def wipg_spd_info(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wipg_spd_info' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'wipg_spd_info' field must be an unsigned integer in [0, 255]"
        self._wipg_spd_info = value

    @builtins.property
    def asy_safe_stop_sts(self):
        """Message field 'asy_safe_stop_sts'."""
        return self._asy_safe_stop_sts

    @asy_safe_stop_sts.setter
    def asy_safe_stop_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_safe_stop_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_safe_stop_sts' field must be an unsigned integer in [0, 255]"
        self._asy_safe_stop_sts = value

    @builtins.property
    def hmi_sup_end_mod(self):
        """Message field 'hmi_sup_end_mod'."""
        return self._hmi_sup_end_mod

    @hmi_sup_end_mod.setter
    def hmi_sup_end_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hmi_sup_end_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hmi_sup_end_mod' field must be an unsigned integer in [0, 255]"
        self._hmi_sup_end_mod = value

    @builtins.property
    def crash_sts_safe_sts(self):
        """Message field 'crash_sts_safe_sts'."""
        return self._crash_sts_safe_sts

    @crash_sts_safe_sts.setter
    def crash_sts_safe_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crash_sts_safe_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crash_sts_safe_sts' field must be an unsigned integer in [0, 255]"
        self._crash_sts_safe_sts = value

    @builtins.property
    def gear_park_not_allow(self):
        """Message field 'gear_park_not_allow'."""
        return self._gear_park_not_allow

    @gear_park_not_allow.setter
    def gear_park_not_allow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_park_not_allow' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_park_not_allow' field must be an unsigned integer in [0, 255]"
        self._gear_park_not_allow = value

    @builtins.property
    def drvr_seat_sts(self):
        """Message field 'drvr_seat_sts'."""
        return self._drvr_seat_sts

    @drvr_seat_sts.setter
    def drvr_seat_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_seat_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_seat_sts' field must be an unsigned integer in [0, 255]"
        self._drvr_seat_sts = value

    @builtins.property
    def drvr_seat_snsr_sts(self):
        """Message field 'drvr_seat_snsr_sts'."""
        return self._drvr_seat_snsr_sts

    @drvr_seat_snsr_sts.setter
    def drvr_seat_snsr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvr_seat_snsr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvr_seat_snsr_sts' field must be an unsigned integer in [0, 255]"
        self._drvr_seat_snsr_sts = value

    @builtins.property
    def ad_l3_lat_ctrl_sts_ad_mod(self):
        """Message field 'ad_l3_lat_ctrl_sts_ad_mod'."""
        return self._ad_l3_lat_ctrl_sts_ad_mod

    @ad_l3_lat_ctrl_sts_ad_mod.setter
    def ad_l3_lat_ctrl_sts_ad_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_l3_lat_ctrl_sts_ad_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_l3_lat_ctrl_sts_ad_mod' field must be an unsigned integer in [0, 255]"
        self._ad_l3_lat_ctrl_sts_ad_mod = value

    @builtins.property
    def ad_l3_lgt_ctrl_sts_ad_mod(self):
        """Message field 'ad_l3_lgt_ctrl_sts_ad_mod'."""
        return self._ad_l3_lgt_ctrl_sts_ad_mod

    @ad_l3_lgt_ctrl_sts_ad_mod.setter
    def ad_l3_lgt_ctrl_sts_ad_mod(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ad_l3_lgt_ctrl_sts_ad_mod' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ad_l3_lgt_ctrl_sts_ad_mod' field must be an unsigned integer in [0, 255]"
        self._ad_l3_lgt_ctrl_sts_ad_mod = value

    @builtins.property
    def accr_pedl_sts_flt_sts(self):
        """Message field 'accr_pedl_sts_flt_sts'."""
        return self._accr_pedl_sts_flt_sts

    @accr_pedl_sts_flt_sts.setter
    def accr_pedl_sts_flt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accr_pedl_sts_flt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accr_pedl_sts_flt_sts' field must be an unsigned integer in [0, 255]"
        self._accr_pedl_sts_flt_sts = value

    @builtins.property
    def amb_t_raw_amb_t_val(self):
        """Message field 'amb_t_raw_amb_t_val'."""
        return self._amb_t_raw_amb_t_val

    @amb_t_raw_amb_t_val.setter
    def amb_t_raw_amb_t_val(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'amb_t_raw_amb_t_val' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'amb_t_raw_amb_t_val' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._amb_t_raw_amb_t_val = value

    @builtins.property
    def body_hei(self):
        """Message field 'body_hei'."""
        return self._body_hei

    @body_hei.setter
    def body_hei(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'body_hei' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'body_hei' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._body_hei = value

    @builtins.property
    def le_frnt_tire_msg_batt_lo_st(self):
        """Message field 'le_frnt_tire_msg_batt_lo_st'."""
        return self._le_frnt_tire_msg_batt_lo_st

    @le_frnt_tire_msg_batt_lo_st.setter
    def le_frnt_tire_msg_batt_lo_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_batt_lo_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_batt_lo_st' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_batt_lo_st = value

    @builtins.property
    def le_frnt_tire_msg_fast_lose_warn_flg(self):
        """Message field 'le_frnt_tire_msg_fast_lose_warn_flg'."""
        return self._le_frnt_tire_msg_fast_lose_warn_flg

    @le_frnt_tire_msg_fast_lose_warn_flg.setter
    def le_frnt_tire_msg_fast_lose_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_fast_lose_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_fast_lose_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_fast_lose_warn_flg = value

    @builtins.property
    def le_frnt_tire_msg_msg_old_flg(self):
        """Message field 'le_frnt_tire_msg_msg_old_flg'."""
        return self._le_frnt_tire_msg_msg_old_flg

    @le_frnt_tire_msg_msg_old_flg.setter
    def le_frnt_tire_msg_msg_old_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_msg_old_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_msg_old_flg' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_msg_old_flg = value

    @builtins.property
    def le_frnt_tire_msg_p(self):
        """Message field 'le_frnt_tire_msg_p'."""
        return self._le_frnt_tire_msg_p

    @le_frnt_tire_msg_p.setter
    def le_frnt_tire_msg_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'le_frnt_tire_msg_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'le_frnt_tire_msg_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._le_frnt_tire_msg_p = value

    @builtins.property
    def le_frnt_tire_msg_sys_warn_flg(self):
        """Message field 'le_frnt_tire_msg_sys_warn_flg'."""
        return self._le_frnt_tire_msg_sys_warn_flg

    @le_frnt_tire_msg_sys_warn_flg.setter
    def le_frnt_tire_msg_sys_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_sys_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_sys_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_sys_warn_flg = value

    @builtins.property
    def le_frnt_tire_msg_t(self):
        """Message field 'le_frnt_tire_msg_t'."""
        return self._le_frnt_tire_msg_t

    @le_frnt_tire_msg_t.setter
    def le_frnt_tire_msg_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'le_frnt_tire_msg_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'le_frnt_tire_msg_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._le_frnt_tire_msg_t = value

    @builtins.property
    def le_frnt_tire_msg_t_warn_flg(self):
        """Message field 'le_frnt_tire_msg_t_warn_flg'."""
        return self._le_frnt_tire_msg_t_warn_flg

    @le_frnt_tire_msg_t_warn_flg.setter
    def le_frnt_tire_msg_t_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_t_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_t_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_t_warn_flg = value

    @builtins.property
    def le_frnt_tire_msg_tire_fillg_assi_p_sts(self):
        """Message field 'le_frnt_tire_msg_tire_fillg_assi_p_sts'."""
        return self._le_frnt_tire_msg_tire_fillg_assi_p_sts

    @le_frnt_tire_msg_tire_fillg_assi_p_sts.setter
    def le_frnt_tire_msg_tire_fillg_assi_p_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_frnt_tire_msg_tire_fillg_assi_p_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_frnt_tire_msg_tire_fillg_assi_p_sts' field must be an unsigned integer in [0, 255]"
        self._le_frnt_tire_msg_tire_fillg_assi_p_sts = value

    @builtins.property
    def le_re_tire_msg_batt_lo_st(self):
        """Message field 'le_re_tire_msg_batt_lo_st'."""
        return self._le_re_tire_msg_batt_lo_st

    @le_re_tire_msg_batt_lo_st.setter
    def le_re_tire_msg_batt_lo_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_batt_lo_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_batt_lo_st' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_batt_lo_st = value

    @builtins.property
    def le_re_tire_msg_fast_lose_warn_flg(self):
        """Message field 'le_re_tire_msg_fast_lose_warn_flg'."""
        return self._le_re_tire_msg_fast_lose_warn_flg

    @le_re_tire_msg_fast_lose_warn_flg.setter
    def le_re_tire_msg_fast_lose_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_fast_lose_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_fast_lose_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_fast_lose_warn_flg = value

    @builtins.property
    def le_re_tire_msg_msg_old_flg(self):
        """Message field 'le_re_tire_msg_msg_old_flg'."""
        return self._le_re_tire_msg_msg_old_flg

    @le_re_tire_msg_msg_old_flg.setter
    def le_re_tire_msg_msg_old_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_msg_old_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_msg_old_flg' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_msg_old_flg = value

    @builtins.property
    def le_re_tire_msg_p(self):
        """Message field 'le_re_tire_msg_p'."""
        return self._le_re_tire_msg_p

    @le_re_tire_msg_p.setter
    def le_re_tire_msg_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'le_re_tire_msg_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'le_re_tire_msg_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._le_re_tire_msg_p = value

    @builtins.property
    def le_re_tire_msg_sys_warn_flg(self):
        """Message field 'le_re_tire_msg_sys_warn_flg'."""
        return self._le_re_tire_msg_sys_warn_flg

    @le_re_tire_msg_sys_warn_flg.setter
    def le_re_tire_msg_sys_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_sys_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_sys_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_sys_warn_flg = value

    @builtins.property
    def le_re_tire_msg_t(self):
        """Message field 'le_re_tire_msg_t'."""
        return self._le_re_tire_msg_t

    @le_re_tire_msg_t.setter
    def le_re_tire_msg_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'le_re_tire_msg_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'le_re_tire_msg_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._le_re_tire_msg_t = value

    @builtins.property
    def le_re_tire_msg_t_warn_flg(self):
        """Message field 'le_re_tire_msg_t_warn_flg'."""
        return self._le_re_tire_msg_t_warn_flg

    @le_re_tire_msg_t_warn_flg.setter
    def le_re_tire_msg_t_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_t_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_t_warn_flg' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_t_warn_flg = value

    @builtins.property
    def le_re_tire_msg_tire_fillg_assi_p_sts(self):
        """Message field 'le_re_tire_msg_tire_fillg_assi_p_sts'."""
        return self._le_re_tire_msg_tire_fillg_assi_p_sts

    @le_re_tire_msg_tire_fillg_assi_p_sts.setter
    def le_re_tire_msg_tire_fillg_assi_p_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'le_re_tire_msg_tire_fillg_assi_p_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'le_re_tire_msg_tire_fillg_assi_p_sts' field must be an unsigned integer in [0, 255]"
        self._le_re_tire_msg_tire_fillg_assi_p_sts = value

    @builtins.property
    def ri_frnt_tire_msg_batt_lo_st(self):
        """Message field 'ri_frnt_tire_msg_batt_lo_st'."""
        return self._ri_frnt_tire_msg_batt_lo_st

    @ri_frnt_tire_msg_batt_lo_st.setter
    def ri_frnt_tire_msg_batt_lo_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_batt_lo_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_batt_lo_st' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_batt_lo_st = value

    @builtins.property
    def ri_frnt_tire_msg_fast_lose_warn_flg(self):
        """Message field 'ri_frnt_tire_msg_fast_lose_warn_flg'."""
        return self._ri_frnt_tire_msg_fast_lose_warn_flg

    @ri_frnt_tire_msg_fast_lose_warn_flg.setter
    def ri_frnt_tire_msg_fast_lose_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_fast_lose_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_fast_lose_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_fast_lose_warn_flg = value

    @builtins.property
    def ri_frnt_tire_msg_msg_old_flg(self):
        """Message field 'ri_frnt_tire_msg_msg_old_flg'."""
        return self._ri_frnt_tire_msg_msg_old_flg

    @ri_frnt_tire_msg_msg_old_flg.setter
    def ri_frnt_tire_msg_msg_old_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_msg_old_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_msg_old_flg' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_msg_old_flg = value

    @builtins.property
    def ri_frnt_tire_msg_p(self):
        """Message field 'ri_frnt_tire_msg_p'."""
        return self._ri_frnt_tire_msg_p

    @ri_frnt_tire_msg_p.setter
    def ri_frnt_tire_msg_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ri_frnt_tire_msg_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ri_frnt_tire_msg_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ri_frnt_tire_msg_p = value

    @builtins.property
    def ri_frnt_tire_msg_sys_warn_flg(self):
        """Message field 'ri_frnt_tire_msg_sys_warn_flg'."""
        return self._ri_frnt_tire_msg_sys_warn_flg

    @ri_frnt_tire_msg_sys_warn_flg.setter
    def ri_frnt_tire_msg_sys_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_sys_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_sys_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_sys_warn_flg = value

    @builtins.property
    def ri_frnt_tire_msg_t(self):
        """Message field 'ri_frnt_tire_msg_t'."""
        return self._ri_frnt_tire_msg_t

    @ri_frnt_tire_msg_t.setter
    def ri_frnt_tire_msg_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ri_frnt_tire_msg_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ri_frnt_tire_msg_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ri_frnt_tire_msg_t = value

    @builtins.property
    def ri_frnt_tire_msg_t_warn_flg(self):
        """Message field 'ri_frnt_tire_msg_t_warn_flg'."""
        return self._ri_frnt_tire_msg_t_warn_flg

    @ri_frnt_tire_msg_t_warn_flg.setter
    def ri_frnt_tire_msg_t_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_t_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_t_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_t_warn_flg = value

    @builtins.property
    def ri_frnt_tire_msg_tire_fillg_assi_p_sts(self):
        """Message field 'ri_frnt_tire_msg_tire_fillg_assi_p_sts'."""
        return self._ri_frnt_tire_msg_tire_fillg_assi_p_sts

    @ri_frnt_tire_msg_tire_fillg_assi_p_sts.setter
    def ri_frnt_tire_msg_tire_fillg_assi_p_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_frnt_tire_msg_tire_fillg_assi_p_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_frnt_tire_msg_tire_fillg_assi_p_sts' field must be an unsigned integer in [0, 255]"
        self._ri_frnt_tire_msg_tire_fillg_assi_p_sts = value

    @builtins.property
    def ri_re_tire_msg_batt_lo_st(self):
        """Message field 'ri_re_tire_msg_batt_lo_st'."""
        return self._ri_re_tire_msg_batt_lo_st

    @ri_re_tire_msg_batt_lo_st.setter
    def ri_re_tire_msg_batt_lo_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_batt_lo_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_batt_lo_st' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_batt_lo_st = value

    @builtins.property
    def ri_re_tire_msg_fast_lose_warn_flg(self):
        """Message field 'ri_re_tire_msg_fast_lose_warn_flg'."""
        return self._ri_re_tire_msg_fast_lose_warn_flg

    @ri_re_tire_msg_fast_lose_warn_flg.setter
    def ri_re_tire_msg_fast_lose_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_fast_lose_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_fast_lose_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_fast_lose_warn_flg = value

    @builtins.property
    def ri_re_tire_msg_msg_old_flg(self):
        """Message field 'ri_re_tire_msg_msg_old_flg'."""
        return self._ri_re_tire_msg_msg_old_flg

    @ri_re_tire_msg_msg_old_flg.setter
    def ri_re_tire_msg_msg_old_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_msg_old_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_msg_old_flg' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_msg_old_flg = value

    @builtins.property
    def ri_re_tire_msg_p(self):
        """Message field 'ri_re_tire_msg_p'."""
        return self._ri_re_tire_msg_p

    @ri_re_tire_msg_p.setter
    def ri_re_tire_msg_p(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ri_re_tire_msg_p' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ri_re_tire_msg_p' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ri_re_tire_msg_p = value

    @builtins.property
    def ri_re_tire_msg_sys_warn_flg(self):
        """Message field 'ri_re_tire_msg_sys_warn_flg'."""
        return self._ri_re_tire_msg_sys_warn_flg

    @ri_re_tire_msg_sys_warn_flg.setter
    def ri_re_tire_msg_sys_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_sys_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_sys_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_sys_warn_flg = value

    @builtins.property
    def ri_re_tire_msg_t(self):
        """Message field 'ri_re_tire_msg_t'."""
        return self._ri_re_tire_msg_t

    @ri_re_tire_msg_t.setter
    def ri_re_tire_msg_t(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ri_re_tire_msg_t' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ri_re_tire_msg_t' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ri_re_tire_msg_t = value

    @builtins.property
    def ri_re_tire_msg_t_warn_flg(self):
        """Message field 'ri_re_tire_msg_t_warn_flg'."""
        return self._ri_re_tire_msg_t_warn_flg

    @ri_re_tire_msg_t_warn_flg.setter
    def ri_re_tire_msg_t_warn_flg(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_t_warn_flg' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_t_warn_flg' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_t_warn_flg = value

    @builtins.property
    def ri_re_tire_msg_tire_fillg_assi_p_sts(self):
        """Message field 'ri_re_tire_msg_tire_fillg_assi_p_sts'."""
        return self._ri_re_tire_msg_tire_fillg_assi_p_sts

    @ri_re_tire_msg_tire_fillg_assi_p_sts.setter
    def ri_re_tire_msg_tire_fillg_assi_p_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ri_re_tire_msg_tire_fillg_assi_p_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ri_re_tire_msg_tire_fillg_assi_p_sts' field must be an unsigned integer in [0, 255]"
        self._ri_re_tire_msg_tire_fillg_assi_p_sts = value

    @builtins.property
    def occupy_mon_sts_drvr_sts(self):
        """Message field 'occupy_mon_sts_drvr_sts'."""
        return self._occupy_mon_sts_drvr_sts

    @occupy_mon_sts_drvr_sts.setter
    def occupy_mon_sts_drvr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'occupy_mon_sts_drvr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'occupy_mon_sts_drvr_sts' field must be an unsigned integer in [0, 255]"
        self._occupy_mon_sts_drvr_sts = value

    @builtins.property
    def sun_roof_posn_sts(self):
        """Message field 'sun_roof_posn_sts'."""
        return self._sun_roof_posn_sts

    @sun_roof_posn_sts.setter
    def sun_roof_posn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sun_roof_posn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sun_roof_posn_sts' field must be an unsigned integer in [0, 255]"
        self._sun_roof_posn_sts = value

    @builtins.property
    def susp_posn_vert_le1_frnt(self):
        """Message field 'susp_posn_vert_le1_frnt'."""
        return self._susp_posn_vert_le1_frnt

    @susp_posn_vert_le1_frnt.setter
    def susp_posn_vert_le1_frnt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'susp_posn_vert_le1_frnt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'susp_posn_vert_le1_frnt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._susp_posn_vert_le1_frnt = value

    @builtins.property
    def susp_posn_vert_le1_frnt_qf(self):
        """Message field 'susp_posn_vert_le1_frnt_qf'."""
        return self._susp_posn_vert_le1_frnt_qf

    @susp_posn_vert_le1_frnt_qf.setter
    def susp_posn_vert_le1_frnt_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'susp_posn_vert_le1_frnt_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'susp_posn_vert_le1_frnt_qf' field must be an unsigned integer in [0, 255]"
        self._susp_posn_vert_le1_frnt_qf = value

    @builtins.property
    def susp_posn_vert_le1_re(self):
        """Message field 'susp_posn_vert_le1_re'."""
        return self._susp_posn_vert_le1_re

    @susp_posn_vert_le1_re.setter
    def susp_posn_vert_le1_re(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'susp_posn_vert_le1_re' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'susp_posn_vert_le1_re' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._susp_posn_vert_le1_re = value

    @builtins.property
    def susp_posn_vert_le1_re_qf(self):
        """Message field 'susp_posn_vert_le1_re_qf'."""
        return self._susp_posn_vert_le1_re_qf

    @susp_posn_vert_le1_re_qf.setter
    def susp_posn_vert_le1_re_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'susp_posn_vert_le1_re_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'susp_posn_vert_le1_re_qf' field must be an unsigned integer in [0, 255]"
        self._susp_posn_vert_le1_re_qf = value

    @builtins.property
    def susp_posn_vert_ri1_susp_posn_vert_ri_frnt(self):
        """Message field 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt'."""
        return self._susp_posn_vert_ri1_susp_posn_vert_ri_frnt

    @susp_posn_vert_ri1_susp_posn_vert_ri_frnt.setter
    def susp_posn_vert_ri1_susp_posn_vert_ri_frnt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._susp_posn_vert_ri1_susp_posn_vert_ri_frnt = value

    @builtins.property
    def susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(self):
        """Message field 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf'."""
        return self._susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf

    @susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf.setter
    def susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf' field must be an unsigned integer in [0, 255]"
        self._susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = value

    @builtins.property
    def susp_posn_vert_ri1_susp_posn_vert_ri_re(self):
        """Message field 'susp_posn_vert_ri1_susp_posn_vert_ri_re'."""
        return self._susp_posn_vert_ri1_susp_posn_vert_ri_re

    @susp_posn_vert_ri1_susp_posn_vert_ri_re.setter
    def susp_posn_vert_ri1_susp_posn_vert_ri_re(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_re' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_re' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._susp_posn_vert_ri1_susp_posn_vert_ri_re = value

    @builtins.property
    def susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(self):
        """Message field 'susp_posn_vert_ri1_susp_posn_vert_ri_re_qf'."""
        return self._susp_posn_vert_ri1_susp_posn_vert_ri_re_qf

    @susp_posn_vert_ri1_susp_posn_vert_ri_re_qf.setter
    def susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_re_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'susp_posn_vert_ri1_susp_posn_vert_ri_re_qf' field must be an unsigned integer in [0, 255]"
        self._susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = value

    @builtins.property
    def twli_bri_raw_qf(self):
        """Message field 'twli_bri_raw_qf'."""
        return self._twli_bri_raw_qf

    @twli_bri_raw_qf.setter
    def twli_bri_raw_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'twli_bri_raw_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'twli_bri_raw_qf' field must be an unsigned integer in [0, 255]"
        self._twli_bri_raw_qf = value

    @builtins.property
    def twli_bri_raw_twli_bri_raw(self):
        """Message field 'twli_bri_raw_twli_bri_raw'."""
        return self._twli_bri_raw_twli_bri_raw

    @twli_bri_raw_twli_bri_raw.setter
    def twli_bri_raw_twli_bri_raw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'twli_bri_raw_twli_bri_raw' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'twli_bri_raw_twli_bri_raw' field must be an unsigned integer in [0, 255]"
        self._twli_bri_raw_twli_bri_raw = value

    @builtins.property
    def win_posn_sts_at_drvr(self):
        """Message field 'win_posn_sts_at_drvr'."""
        return self._win_posn_sts_at_drvr

    @win_posn_sts_at_drvr.setter
    def win_posn_sts_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_drvr' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_drvr = value

    @builtins.property
    def win_posn_sts_at_pass(self):
        """Message field 'win_posn_sts_at_pass'."""
        return self._win_posn_sts_at_pass

    @win_posn_sts_at_pass.setter
    def win_posn_sts_at_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_pass' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_pass' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_pass = value

    @builtins.property
    def win_posn_sts_at_re_le(self):
        """Message field 'win_posn_sts_at_re_le'."""
        return self._win_posn_sts_at_re_le

    @win_posn_sts_at_re_le.setter
    def win_posn_sts_at_re_le(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_re_le' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_re_le' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_re_le = value

    @builtins.property
    def win_posn_sts_at_re_ri(self):
        """Message field 'win_posn_sts_at_re_ri'."""
        return self._win_posn_sts_at_re_ri

    @win_posn_sts_at_re_ri.setter
    def win_posn_sts_at_re_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_re_ri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_re_ri' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_re_ri = value

    @builtins.property
    def brk_sys_sts_ad_l3_brk_fall_bck(self):
        """Message field 'brk_sys_sts_ad_l3_brk_fall_bck'."""
        return self._brk_sys_sts_ad_l3_brk_fall_bck

    @brk_sys_sts_ad_l3_brk_fall_bck.setter
    def brk_sys_sts_ad_l3_brk_fall_bck(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_sys_sts_ad_l3_brk_fall_bck' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_sys_sts_ad_l3_brk_fall_bck' field must be an unsigned integer in [0, 255]"
        self._brk_sys_sts_ad_l3_brk_fall_bck = value

    @builtins.property
    def brk_sys_sts_brk_degradation(self):
        """Message field 'brk_sys_sts_brk_degradation'."""
        return self._brk_sys_sts_brk_degradation

    @brk_sys_sts_brk_degradation.setter
    def brk_sys_sts_brk_degradation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_sys_sts_brk_degradation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_sys_sts_brk_degradation' field must be an unsigned integer in [0, 255]"
        self._brk_sys_sts_brk_degradation = value

    @builtins.property
    def brk_sys_sts_brk_sys_mod_cfmd(self):
        """Message field 'brk_sys_sts_brk_sys_mod_cfmd'."""
        return self._brk_sys_sts_brk_sys_mod_cfmd

    @brk_sys_sts_brk_sys_mod_cfmd.setter
    def brk_sys_sts_brk_sys_mod_cfmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_sys_sts_brk_sys_mod_cfmd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_sys_sts_brk_sys_mod_cfmd' field must be an unsigned integer in [0, 255]"
        self._brk_sys_sts_brk_sys_mod_cfmd = value

    @builtins.property
    def tank_turn_mod_sts_tank_turn_mod_sts(self):
        """Message field 'tank_turn_mod_sts_tank_turn_mod_sts'."""
        return self._tank_turn_mod_sts_tank_turn_mod_sts

    @tank_turn_mod_sts_tank_turn_mod_sts.setter
    def tank_turn_mod_sts_tank_turn_mod_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tank_turn_mod_sts_tank_turn_mod_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tank_turn_mod_sts_tank_turn_mod_sts' field must be an unsigned integer in [0, 255]"
        self._tank_turn_mod_sts_tank_turn_mod_sts = value

    @builtins.property
    def sfty_decel_group_safe_asy_sfty_ena_decel(self):
        """Message field 'sfty_decel_group_safe_asy_sfty_ena_decel'."""
        return self._sfty_decel_group_safe_asy_sfty_ena_decel

    @sfty_decel_group_safe_asy_sfty_ena_decel.setter
    def sfty_decel_group_safe_asy_sfty_ena_decel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sfty_decel_group_safe_asy_sfty_ena_decel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sfty_decel_group_safe_asy_sfty_ena_decel' field must be an unsigned integer in [0, 255]"
        self._sfty_decel_group_safe_asy_sfty_ena_decel = value

    @builtins.property
    def steer_tq_addl_for_ema_steer_tq_addl_for_ema(self):
        """Message field 'steer_tq_addl_for_ema_steer_tq_addl_for_ema'."""
        return self._steer_tq_addl_for_ema_steer_tq_addl_for_ema

    @steer_tq_addl_for_ema_steer_tq_addl_for_ema.setter
    def steer_tq_addl_for_ema_steer_tq_addl_for_ema(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_tq_addl_for_ema_steer_tq_addl_for_ema' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_tq_addl_for_ema_steer_tq_addl_for_ema' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_tq_addl_for_ema_steer_tq_addl_for_ema = value

    @builtins.property
    def asy_emgy_lane_keep_aid_sts(self):
        """Message field 'asy_emgy_lane_keep_aid_sts'."""
        return self._asy_emgy_lane_keep_aid_sts

    @asy_emgy_lane_keep_aid_sts.setter
    def asy_emgy_lane_keep_aid_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_emgy_lane_keep_aid_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_emgy_lane_keep_aid_sts' field must be an unsigned integer in [0, 255]"
        self._asy_emgy_lane_keep_aid_sts = value

    @builtins.property
    def asy_lane_keep_aid_sts(self):
        """Message field 'asy_lane_keep_aid_sts'."""
        return self._asy_lane_keep_aid_sts

    @asy_lane_keep_aid_sts.setter
    def asy_lane_keep_aid_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_lane_keep_aid_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_lane_keep_aid_sts' field must be an unsigned integer in [0, 255]"
        self._asy_lane_keep_aid_sts = value

    @builtins.property
    def rcwm_brk_req_rcwm_brk_req(self):
        """Message field 'rcwm_brk_req_rcwm_brk_req'."""
        return self._rcwm_brk_req_rcwm_brk_req

    @rcwm_brk_req_rcwm_brk_req.setter
    def rcwm_brk_req_rcwm_brk_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rcwm_brk_req_rcwm_brk_req' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rcwm_brk_req_rcwm_brk_req' field must be an unsigned integer in [0, 255]"
        self._rcwm_brk_req_rcwm_brk_req = value

    @builtins.property
    def asy_a_lgt_sts_asy_a_lgt_sts(self):
        """Message field 'asy_a_lgt_sts_asy_a_lgt_sts'."""
        return self._asy_a_lgt_sts_asy_a_lgt_sts

    @asy_a_lgt_sts_asy_a_lgt_sts.setter
    def asy_a_lgt_sts_asy_a_lgt_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_a_lgt_sts_asy_a_lgt_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_a_lgt_sts_asy_a_lgt_sts' field must be an unsigned integer in [0, 255]"
        self._asy_a_lgt_sts_asy_a_lgt_sts = value

    @builtins.property
    def asy_a_lat_indcr(self):
        """Message field 'asy_a_lat_indcr'."""
        return self._asy_a_lat_indcr

    @asy_a_lat_indcr.setter
    def asy_a_lat_indcr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_a_lat_indcr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_a_lat_indcr' field must be an unsigned integer in [0, 255]"
        self._asy_a_lat_indcr = value

    @builtins.property
    def asy_cnoa_crs_sts(self):
        """Message field 'asy_cnoa_crs_sts'."""
        return self._asy_cnoa_crs_sts

    @asy_cnoa_crs_sts.setter
    def asy_cnoa_crs_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_cnoa_crs_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_cnoa_crs_sts' field must be an unsigned integer in [0, 255]"
        self._asy_cnoa_crs_sts = value

    @builtins.property
    def indcr_sts(self):
        """Message field 'indcr_sts'."""
        return self._indcr_sts

    @indcr_sts.setter
    def indcr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcr_sts' field must be an unsigned integer in [0, 255]"
        self._indcr_sts = value
