# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EhpSegment(type):
    """Metaclass of message 'EhpSegment'."""

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
            module = import_type_support('deva_gaode_routing_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_gaode_routing_msgs.msg.EhpSegment')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ehp_segment
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ehp_segment
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ehp_segment
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ehp_segment
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ehp_segment

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EhpSegment(metaclass=Metaclass_EhpSegment):
    """Message class 'EhpSegment'."""

    __slots__ = [
        '_seg_offset',
        '_seg_msg_type',
        '_seg_path_idx',
        '_seg_cyc_cnt',
        '_seg_update',
        '_seg_retr',
        '_seg_build_up_area',
        '_seg_bridge',
        '_seg_tunnel',
        '_seg_func_road_class',
        '_seg_rel_probb',
        '_seg_form_of_way',
        '_seg_cmplx_insct',
        '_seg_part_of_calc_route',
        '_seg_eff_spd_lmt_type',
        '_seg_eff_spd_lmt',
        '_seg_num_of_lane_drv_dir',
        '_seg_num_of_lane_opp_dir',
        '_seg_divide_road',
        '_seg_relative_offset',
    ]

    _fields_and_field_types = {
        'seg_offset': 'uint16',
        'seg_msg_type': 'uint8',
        'seg_path_idx': 'uint8',
        'seg_cyc_cnt': 'uint8',
        'seg_update': 'uint8',
        'seg_retr': 'uint8',
        'seg_build_up_area': 'uint8',
        'seg_bridge': 'uint8',
        'seg_tunnel': 'uint8',
        'seg_func_road_class': 'uint8',
        'seg_rel_probb': 'float',
        'seg_form_of_way': 'uint8',
        'seg_cmplx_insct': 'uint8',
        'seg_part_of_calc_route': 'uint8',
        'seg_eff_spd_lmt_type': 'uint8',
        'seg_eff_spd_lmt': 'uint8',
        'seg_num_of_lane_drv_dir': 'uint8',
        'seg_num_of_lane_opp_dir': 'uint8',
        'seg_divide_road': 'uint8',
        'seg_relative_offset': 'int32',
    }

    SLOT_TYPES = (
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.seg_offset = kwargs.get('seg_offset', int())
        self.seg_msg_type = kwargs.get('seg_msg_type', int())
        self.seg_path_idx = kwargs.get('seg_path_idx', int())
        self.seg_cyc_cnt = kwargs.get('seg_cyc_cnt', int())
        self.seg_update = kwargs.get('seg_update', int())
        self.seg_retr = kwargs.get('seg_retr', int())
        self.seg_build_up_area = kwargs.get('seg_build_up_area', int())
        self.seg_bridge = kwargs.get('seg_bridge', int())
        self.seg_tunnel = kwargs.get('seg_tunnel', int())
        self.seg_func_road_class = kwargs.get('seg_func_road_class', int())
        self.seg_rel_probb = kwargs.get('seg_rel_probb', float())
        self.seg_form_of_way = kwargs.get('seg_form_of_way', int())
        self.seg_cmplx_insct = kwargs.get('seg_cmplx_insct', int())
        self.seg_part_of_calc_route = kwargs.get('seg_part_of_calc_route', int())
        self.seg_eff_spd_lmt_type = kwargs.get('seg_eff_spd_lmt_type', int())
        self.seg_eff_spd_lmt = kwargs.get('seg_eff_spd_lmt', int())
        self.seg_num_of_lane_drv_dir = kwargs.get('seg_num_of_lane_drv_dir', int())
        self.seg_num_of_lane_opp_dir = kwargs.get('seg_num_of_lane_opp_dir', int())
        self.seg_divide_road = kwargs.get('seg_divide_road', int())
        self.seg_relative_offset = kwargs.get('seg_relative_offset', int())

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
        if self.seg_offset != other.seg_offset:
            return False
        if self.seg_msg_type != other.seg_msg_type:
            return False
        if self.seg_path_idx != other.seg_path_idx:
            return False
        if self.seg_cyc_cnt != other.seg_cyc_cnt:
            return False
        if self.seg_update != other.seg_update:
            return False
        if self.seg_retr != other.seg_retr:
            return False
        if self.seg_build_up_area != other.seg_build_up_area:
            return False
        if self.seg_bridge != other.seg_bridge:
            return False
        if self.seg_tunnel != other.seg_tunnel:
            return False
        if self.seg_func_road_class != other.seg_func_road_class:
            return False
        if self.seg_rel_probb != other.seg_rel_probb:
            return False
        if self.seg_form_of_way != other.seg_form_of_way:
            return False
        if self.seg_cmplx_insct != other.seg_cmplx_insct:
            return False
        if self.seg_part_of_calc_route != other.seg_part_of_calc_route:
            return False
        if self.seg_eff_spd_lmt_type != other.seg_eff_spd_lmt_type:
            return False
        if self.seg_eff_spd_lmt != other.seg_eff_spd_lmt:
            return False
        if self.seg_num_of_lane_drv_dir != other.seg_num_of_lane_drv_dir:
            return False
        if self.seg_num_of_lane_opp_dir != other.seg_num_of_lane_opp_dir:
            return False
        if self.seg_divide_road != other.seg_divide_road:
            return False
        if self.seg_relative_offset != other.seg_relative_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def seg_offset(self):
        """Message field 'seg_offset'."""
        return self._seg_offset

    @seg_offset.setter
    def seg_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_offset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'seg_offset' field must be an unsigned integer in [0, 65535]"
        self._seg_offset = value

    @builtins.property
    def seg_msg_type(self):
        """Message field 'seg_msg_type'."""
        return self._seg_msg_type

    @seg_msg_type.setter
    def seg_msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_msg_type' field must be an unsigned integer in [0, 255]"
        self._seg_msg_type = value

    @builtins.property
    def seg_path_idx(self):
        """Message field 'seg_path_idx'."""
        return self._seg_path_idx

    @seg_path_idx.setter
    def seg_path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_path_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_path_idx' field must be an unsigned integer in [0, 255]"
        self._seg_path_idx = value

    @builtins.property
    def seg_cyc_cnt(self):
        """Message field 'seg_cyc_cnt'."""
        return self._seg_cyc_cnt

    @seg_cyc_cnt.setter
    def seg_cyc_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_cyc_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_cyc_cnt' field must be an unsigned integer in [0, 255]"
        self._seg_cyc_cnt = value

    @builtins.property
    def seg_update(self):
        """Message field 'seg_update'."""
        return self._seg_update

    @seg_update.setter
    def seg_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_update' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_update' field must be an unsigned integer in [0, 255]"
        self._seg_update = value

    @builtins.property
    def seg_retr(self):
        """Message field 'seg_retr'."""
        return self._seg_retr

    @seg_retr.setter
    def seg_retr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_retr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_retr' field must be an unsigned integer in [0, 255]"
        self._seg_retr = value

    @builtins.property
    def seg_build_up_area(self):
        """Message field 'seg_build_up_area'."""
        return self._seg_build_up_area

    @seg_build_up_area.setter
    def seg_build_up_area(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_build_up_area' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_build_up_area' field must be an unsigned integer in [0, 255]"
        self._seg_build_up_area = value

    @builtins.property
    def seg_bridge(self):
        """Message field 'seg_bridge'."""
        return self._seg_bridge

    @seg_bridge.setter
    def seg_bridge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_bridge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_bridge' field must be an unsigned integer in [0, 255]"
        self._seg_bridge = value

    @builtins.property
    def seg_tunnel(self):
        """Message field 'seg_tunnel'."""
        return self._seg_tunnel

    @seg_tunnel.setter
    def seg_tunnel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_tunnel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_tunnel' field must be an unsigned integer in [0, 255]"
        self._seg_tunnel = value

    @builtins.property
    def seg_func_road_class(self):
        """Message field 'seg_func_road_class'."""
        return self._seg_func_road_class

    @seg_func_road_class.setter
    def seg_func_road_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_func_road_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_func_road_class' field must be an unsigned integer in [0, 255]"
        self._seg_func_road_class = value

    @builtins.property
    def seg_rel_probb(self):
        """Message field 'seg_rel_probb'."""
        return self._seg_rel_probb

    @seg_rel_probb.setter
    def seg_rel_probb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'seg_rel_probb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'seg_rel_probb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._seg_rel_probb = value

    @builtins.property
    def seg_form_of_way(self):
        """Message field 'seg_form_of_way'."""
        return self._seg_form_of_way

    @seg_form_of_way.setter
    def seg_form_of_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_form_of_way' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_form_of_way' field must be an unsigned integer in [0, 255]"
        self._seg_form_of_way = value

    @builtins.property
    def seg_cmplx_insct(self):
        """Message field 'seg_cmplx_insct'."""
        return self._seg_cmplx_insct

    @seg_cmplx_insct.setter
    def seg_cmplx_insct(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_cmplx_insct' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_cmplx_insct' field must be an unsigned integer in [0, 255]"
        self._seg_cmplx_insct = value

    @builtins.property
    def seg_part_of_calc_route(self):
        """Message field 'seg_part_of_calc_route'."""
        return self._seg_part_of_calc_route

    @seg_part_of_calc_route.setter
    def seg_part_of_calc_route(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_part_of_calc_route' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_part_of_calc_route' field must be an unsigned integer in [0, 255]"
        self._seg_part_of_calc_route = value

    @builtins.property
    def seg_eff_spd_lmt_type(self):
        """Message field 'seg_eff_spd_lmt_type'."""
        return self._seg_eff_spd_lmt_type

    @seg_eff_spd_lmt_type.setter
    def seg_eff_spd_lmt_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_eff_spd_lmt_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_eff_spd_lmt_type' field must be an unsigned integer in [0, 255]"
        self._seg_eff_spd_lmt_type = value

    @builtins.property
    def seg_eff_spd_lmt(self):
        """Message field 'seg_eff_spd_lmt'."""
        return self._seg_eff_spd_lmt

    @seg_eff_spd_lmt.setter
    def seg_eff_spd_lmt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_eff_spd_lmt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_eff_spd_lmt' field must be an unsigned integer in [0, 255]"
        self._seg_eff_spd_lmt = value

    @builtins.property
    def seg_num_of_lane_drv_dir(self):
        """Message field 'seg_num_of_lane_drv_dir'."""
        return self._seg_num_of_lane_drv_dir

    @seg_num_of_lane_drv_dir.setter
    def seg_num_of_lane_drv_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_num_of_lane_drv_dir' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_num_of_lane_drv_dir' field must be an unsigned integer in [0, 255]"
        self._seg_num_of_lane_drv_dir = value

    @builtins.property
    def seg_num_of_lane_opp_dir(self):
        """Message field 'seg_num_of_lane_opp_dir'."""
        return self._seg_num_of_lane_opp_dir

    @seg_num_of_lane_opp_dir.setter
    def seg_num_of_lane_opp_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_num_of_lane_opp_dir' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_num_of_lane_opp_dir' field must be an unsigned integer in [0, 255]"
        self._seg_num_of_lane_opp_dir = value

    @builtins.property
    def seg_divide_road(self):
        """Message field 'seg_divide_road'."""
        return self._seg_divide_road

    @seg_divide_road.setter
    def seg_divide_road(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_divide_road' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'seg_divide_road' field must be an unsigned integer in [0, 255]"
        self._seg_divide_road = value

    @builtins.property
    def seg_relative_offset(self):
        """Message field 'seg_relative_offset'."""
        return self._seg_relative_offset

    @seg_relative_offset.setter
    def seg_relative_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'seg_relative_offset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'seg_relative_offset' field must be an integer in [-2147483648, 2147483647]"
        self._seg_relative_offset = value
