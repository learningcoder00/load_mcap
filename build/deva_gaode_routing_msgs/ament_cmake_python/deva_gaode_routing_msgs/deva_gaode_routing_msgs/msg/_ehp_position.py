# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EhpPosition(type):
    """Metaclass of message 'EhpPosition'."""

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
                'deva_gaode_routing_msgs.msg.EhpPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ehp_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ehp_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ehp_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ehp_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ehp_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EhpPosition(metaclass=Metaclass_EhpPosition):
    """Message class 'EhpPosition'."""

    __slots__ = [
        '_posn_offset',
        '_posn_msg_type',
        '_posn_path_idx',
        '_posn_cyc_cnt',
        '_posn_age',
        '_posn_pos_probb',
        '_posn_idx',
        '_posn_spd',
        '_posn_cur_lane',
        '_posn_pos_confdc',
        '_posn_rehead',
    ]

    _fields_and_field_types = {
        'posn_offset': 'uint16',
        'posn_msg_type': 'uint8',
        'posn_path_idx': 'uint8',
        'posn_cyc_cnt': 'uint8',
        'posn_age': 'uint16',
        'posn_pos_probb': 'float',
        'posn_idx': 'uint8',
        'posn_spd': 'float',
        'posn_cur_lane': 'uint8',
        'posn_pos_confdc': 'uint8',
        'posn_rehead': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.posn_offset = kwargs.get('posn_offset', int())
        self.posn_msg_type = kwargs.get('posn_msg_type', int())
        self.posn_path_idx = kwargs.get('posn_path_idx', int())
        self.posn_cyc_cnt = kwargs.get('posn_cyc_cnt', int())
        self.posn_age = kwargs.get('posn_age', int())
        self.posn_pos_probb = kwargs.get('posn_pos_probb', float())
        self.posn_idx = kwargs.get('posn_idx', int())
        self.posn_spd = kwargs.get('posn_spd', float())
        self.posn_cur_lane = kwargs.get('posn_cur_lane', int())
        self.posn_pos_confdc = kwargs.get('posn_pos_confdc', int())
        self.posn_rehead = kwargs.get('posn_rehead', float())

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
        if self.posn_offset != other.posn_offset:
            return False
        if self.posn_msg_type != other.posn_msg_type:
            return False
        if self.posn_path_idx != other.posn_path_idx:
            return False
        if self.posn_cyc_cnt != other.posn_cyc_cnt:
            return False
        if self.posn_age != other.posn_age:
            return False
        if self.posn_pos_probb != other.posn_pos_probb:
            return False
        if self.posn_idx != other.posn_idx:
            return False
        if self.posn_spd != other.posn_spd:
            return False
        if self.posn_cur_lane != other.posn_cur_lane:
            return False
        if self.posn_pos_confdc != other.posn_pos_confdc:
            return False
        if self.posn_rehead != other.posn_rehead:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def posn_offset(self):
        """Message field 'posn_offset'."""
        return self._posn_offset

    @posn_offset.setter
    def posn_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_offset' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'posn_offset' field must be an unsigned integer in [0, 65535]"
        self._posn_offset = value

    @builtins.property
    def posn_msg_type(self):
        """Message field 'posn_msg_type'."""
        return self._posn_msg_type

    @posn_msg_type.setter
    def posn_msg_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_msg_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_msg_type' field must be an unsigned integer in [0, 255]"
        self._posn_msg_type = value

    @builtins.property
    def posn_path_idx(self):
        """Message field 'posn_path_idx'."""
        return self._posn_path_idx

    @posn_path_idx.setter
    def posn_path_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_path_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_path_idx' field must be an unsigned integer in [0, 255]"
        self._posn_path_idx = value

    @builtins.property
    def posn_cyc_cnt(self):
        """Message field 'posn_cyc_cnt'."""
        return self._posn_cyc_cnt

    @posn_cyc_cnt.setter
    def posn_cyc_cnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_cyc_cnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_cyc_cnt' field must be an unsigned integer in [0, 255]"
        self._posn_cyc_cnt = value

    @builtins.property
    def posn_age(self):
        """Message field 'posn_age'."""
        return self._posn_age

    @posn_age.setter
    def posn_age(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_age' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'posn_age' field must be an unsigned integer in [0, 65535]"
        self._posn_age = value

    @builtins.property
    def posn_pos_probb(self):
        """Message field 'posn_pos_probb'."""
        return self._posn_pos_probb

    @posn_pos_probb.setter
    def posn_pos_probb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posn_pos_probb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posn_pos_probb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posn_pos_probb = value

    @builtins.property
    def posn_idx(self):
        """Message field 'posn_idx'."""
        return self._posn_idx

    @posn_idx.setter
    def posn_idx(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_idx' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_idx' field must be an unsigned integer in [0, 255]"
        self._posn_idx = value

    @builtins.property
    def posn_spd(self):
        """Message field 'posn_spd'."""
        return self._posn_spd

    @posn_spd.setter
    def posn_spd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posn_spd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posn_spd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posn_spd = value

    @builtins.property
    def posn_cur_lane(self):
        """Message field 'posn_cur_lane'."""
        return self._posn_cur_lane

    @posn_cur_lane.setter
    def posn_cur_lane(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_cur_lane' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_cur_lane' field must be an unsigned integer in [0, 255]"
        self._posn_cur_lane = value

    @builtins.property
    def posn_pos_confdc(self):
        """Message field 'posn_pos_confdc'."""
        return self._posn_pos_confdc

    @posn_pos_confdc.setter
    def posn_pos_confdc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'posn_pos_confdc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'posn_pos_confdc' field must be an unsigned integer in [0, 255]"
        self._posn_pos_confdc = value

    @builtins.property
    def posn_rehead(self):
        """Message field 'posn_rehead'."""
        return self._posn_rehead

    @posn_rehead.setter
    def posn_rehead(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'posn_rehead' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'posn_rehead' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._posn_rehead = value
