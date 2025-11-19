# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/EhpStub.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EhpStub(type):
    """Metaclass of message 'EhpStub'."""

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
                'deva_gaode_routing_msgs.msg.EhpStub')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ehp_stub
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ehp_stub
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ehp_stub
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ehp_stub
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ehp_stub

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EhpStub(metaclass=Metaclass_EhpStub):
    """Message class 'EhpStub'."""

    __slots__ = [
        '_stub_offset',
        '_stub_msg_type',
        '_stub_path_idx',
        '_stub_cyc_cnt',
        '_stub_update',
        '_stub_retr',
        '_stub_stub_path_idx',
        '_stub_func_road_class',
        '_stub_rel_probb',
        '_stub_form_of_way',
        '_stub_cmplx_insct',
        '_stub_part_of_calc_route',
        '_stub_turn_angl',
        '_stub_num_of_lane_drv_dir',
        '_stub_num_of_lane_opp_dir',
        '_stub_rt_of_way',
        '_stub_last_stub',
        '_stub_relative_offset',
    ]

    _fields_and_field_types = {
        'stub_offset': 'uint16',
        'stub_msg_type': 'uint8',
        'stub_path_idx': 'uint8',
        'stub_cyc_cnt': 'uint8',
        'stub_update': 'uint8',
        'stub_retr': 'uint8',
        'stub_stub_path_idx': 'uint8',
        'stub_func_road_class': 'uint8',
        'stub_rel_probb': 'float',
        'stub_form_of_way': 'uint8',
        'stub_cmplx_insct': 'uint8',
        'stub_part_of_calc_route': 'uint8',
        'stub_turn_angl': 'float',
        'stub_num_of_lane_drv_dir': 'uint8',
        'stub_num_of_lane_opp_dir': 'uint8',
        'stub_rt_of_way': 'uint8',
        'stub_last_stub': 'uint8',
        'stub_relative_offset': 'int32',
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.stub_offset = kwargs.get('stub_offset', int())
        self.stub_msg_type = kwargs.get('stub_msg_type', int())
        self.stub_path_idx = kwargs.get('stub_path_idx', int())
        self.stub_cyc_cnt = kwargs.get('stub_cyc_cnt', int())
        self.stub_update = kwargs.get('stub_update', int())
        self.stub_retr = kwargs.get('stub_retr', int())
        self.stub_stub_path_idx = kwargs.get('stub_stub_path_idx', int())
        self.stub_func_road_class = kwargs.get('stub_func_road_class', int())
        self.stub_rel_probb = kwargs.get('stub_rel_probb', float())
        self.stub_form_of_way = kwargs.get('stub_form_of_way', int())
        self.stub_cmplx_insct = kwargs.get('stub_cmplx_insct', int())
        self.stub_part_of_calc_route = kwargs.get('stub_part_of_calc_route', int())
        self.stub_turn_angl = kwargs.get('stub_turn_angl', float())
        self.stub_num_of_lane_drv_dir = kwargs.get('stub_num_of_lane_drv_dir', int())
        self.stub_num_of_lane_opp_dir = kwargs.get('stub_num_of_lane_opp_dir', int())
        self.stub_rt_of_way = kwargs.get('stub_rt_of_way', int())
        self.stub_last_stub = kwargs.get('stub_last_stub', int())
        self.stub_relative_offset = kwargs.get('stub_relative_offset', int())

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
        if self.stub_offset != other.stub_offset:
            return False
        if self.stub_msg_type != other.stub_msg_type:
            return False
        if self.stub_path_idx != other.stub_path_idx:
            return False
        if self.stub_cyc_cnt != other.stub_cyc_cnt:
            return False
        if self.stub_update != other.stub_update:
            return False
        if self.stub_retr != other.stub_retr:
            return False
        if self.stub_stub_path_idx != other.stub_stub_path_idx:
            return False
        if self.stub_func_road_class != other.stub_func_road_class:
            return False
        if self.stub_rel_probb != other.stub_rel_probb:
            return False
        if self.stub_form_of_way != other.stub_form_of_way:
            return False
        if self.stub_cmplx_insct != other.stub_cmplx_insct:
            return False
        if self.stub_part_of_calc_route != other.stub_part_of_calc_route:
            return False
        if self.stub_turn_angl != other.stub_turn_angl:
            return False
        if self.stub_num_of_lane_drv_dir != other.stub_num_of_lane_drv_dir:
            return False
        if self.stub_num_of_lane_opp_dir != other.stub_num_of_lane_opp_dir:
            return False
        if self.stub_rt_of_way != other.stub_rt_of_way:
            return False
        if self.stub_last_stub != other.stub_last_stub:
            return False
        if self.stub_relative_offset != other.stub_relative_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stub_offset(self):
        """Message field 'stub_offset'."""
        return self._stub_offset

    @stub_offset.setter
    def stub_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_offset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'stub_offset' field must be an unsigned integer in [0, 65535]"
        self._stub_offset = value

    @builtins.property
    def stub_msg_type(self):
        """Message field 'stub_msg_type'."""
        return self._stub_msg_type

    @stub_msg_type.setter
    def stub_msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_msg_type' field must be an unsigned integer in [0, 255]"
        self._stub_msg_type = value

    @builtins.property
    def stub_path_idx(self):
        """Message field 'stub_path_idx'."""
        return self._stub_path_idx

    @stub_path_idx.setter
    def stub_path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_path_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_path_idx' field must be an unsigned integer in [0, 255]"
        self._stub_path_idx = value

    @builtins.property
    def stub_cyc_cnt(self):
        """Message field 'stub_cyc_cnt'."""
        return self._stub_cyc_cnt

    @stub_cyc_cnt.setter
    def stub_cyc_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_cyc_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_cyc_cnt' field must be an unsigned integer in [0, 255]"
        self._stub_cyc_cnt = value

    @builtins.property
    def stub_update(self):
        """Message field 'stub_update'."""
        return self._stub_update

    @stub_update.setter
    def stub_update(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_update' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_update' field must be an unsigned integer in [0, 255]"
        self._stub_update = value

    @builtins.property
    def stub_retr(self):
        """Message field 'stub_retr'."""
        return self._stub_retr

    @stub_retr.setter
    def stub_retr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_retr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_retr' field must be an unsigned integer in [0, 255]"
        self._stub_retr = value

    @builtins.property
    def stub_stub_path_idx(self):
        """Message field 'stub_stub_path_idx'."""
        return self._stub_stub_path_idx

    @stub_stub_path_idx.setter
    def stub_stub_path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_stub_path_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_stub_path_idx' field must be an unsigned integer in [0, 255]"
        self._stub_stub_path_idx = value

    @builtins.property
    def stub_func_road_class(self):
        """Message field 'stub_func_road_class'."""
        return self._stub_func_road_class

    @stub_func_road_class.setter
    def stub_func_road_class(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_func_road_class' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_func_road_class' field must be an unsigned integer in [0, 255]"
        self._stub_func_road_class = value

    @builtins.property
    def stub_rel_probb(self):
        """Message field 'stub_rel_probb'."""
        return self._stub_rel_probb

    @stub_rel_probb.setter
    def stub_rel_probb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stub_rel_probb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stub_rel_probb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stub_rel_probb = value

    @builtins.property
    def stub_form_of_way(self):
        """Message field 'stub_form_of_way'."""
        return self._stub_form_of_way

    @stub_form_of_way.setter
    def stub_form_of_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_form_of_way' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_form_of_way' field must be an unsigned integer in [0, 255]"
        self._stub_form_of_way = value

    @builtins.property
    def stub_cmplx_insct(self):
        """Message field 'stub_cmplx_insct'."""
        return self._stub_cmplx_insct

    @stub_cmplx_insct.setter
    def stub_cmplx_insct(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_cmplx_insct' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_cmplx_insct' field must be an unsigned integer in [0, 255]"
        self._stub_cmplx_insct = value

    @builtins.property
    def stub_part_of_calc_route(self):
        """Message field 'stub_part_of_calc_route'."""
        return self._stub_part_of_calc_route

    @stub_part_of_calc_route.setter
    def stub_part_of_calc_route(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_part_of_calc_route' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_part_of_calc_route' field must be an unsigned integer in [0, 255]"
        self._stub_part_of_calc_route = value

    @builtins.property
    def stub_turn_angl(self):
        """Message field 'stub_turn_angl'."""
        return self._stub_turn_angl

    @stub_turn_angl.setter
    def stub_turn_angl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stub_turn_angl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stub_turn_angl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stub_turn_angl = value

    @builtins.property
    def stub_num_of_lane_drv_dir(self):
        """Message field 'stub_num_of_lane_drv_dir'."""
        return self._stub_num_of_lane_drv_dir

    @stub_num_of_lane_drv_dir.setter
    def stub_num_of_lane_drv_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_num_of_lane_drv_dir' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_num_of_lane_drv_dir' field must be an unsigned integer in [0, 255]"
        self._stub_num_of_lane_drv_dir = value

    @builtins.property
    def stub_num_of_lane_opp_dir(self):
        """Message field 'stub_num_of_lane_opp_dir'."""
        return self._stub_num_of_lane_opp_dir

    @stub_num_of_lane_opp_dir.setter
    def stub_num_of_lane_opp_dir(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_num_of_lane_opp_dir' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_num_of_lane_opp_dir' field must be an unsigned integer in [0, 255]"
        self._stub_num_of_lane_opp_dir = value

    @builtins.property
    def stub_rt_of_way(self):
        """Message field 'stub_rt_of_way'."""
        return self._stub_rt_of_way

    @stub_rt_of_way.setter
    def stub_rt_of_way(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_rt_of_way' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_rt_of_way' field must be an unsigned integer in [0, 255]"
        self._stub_rt_of_way = value

    @builtins.property
    def stub_last_stub(self):
        """Message field 'stub_last_stub'."""
        return self._stub_last_stub

    @stub_last_stub.setter
    def stub_last_stub(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_last_stub' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stub_last_stub' field must be an unsigned integer in [0, 255]"
        self._stub_last_stub = value

    @builtins.property
    def stub_relative_offset(self):
        """Message field 'stub_relative_offset'."""
        return self._stub_relative_offset

    @stub_relative_offset.setter
    def stub_relative_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stub_relative_offset' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'stub_relative_offset' field must be an integer in [-2147483648, 2147483647]"
        self._stub_relative_offset = value
