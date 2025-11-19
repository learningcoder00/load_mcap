# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/LaneType.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneType(type):
    """Metaclass of message 'LaneType'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNKNOWN': 0,
        'DASHED_LINE': 1,
        'SOLID_LINE': 2,
        'L_DASHED_R_SOLID': 3,
        'L_SOLID_R_DASHED': 4,
        'DOUBLE_DASHED': 5,
        'DOUBLE_SOLID': 6,
        'CURB': 7,
        'GUARDRAIL': 8,
        'CENTER_LINE': 9,
        'VIRTUAL_JUNCTION': 10,
        'VIRTUAL': 11,
        'WHITE': 1,
        'YELLOW': 2,
        'DOUBLE_YELLOW': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.LaneType')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_type
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_type
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_type
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_type
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_type

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNKNOWN': cls.__constants['UNKNOWN'],
            'DASHED_LINE': cls.__constants['DASHED_LINE'],
            'SOLID_LINE': cls.__constants['SOLID_LINE'],
            'L_DASHED_R_SOLID': cls.__constants['L_DASHED_R_SOLID'],
            'L_SOLID_R_DASHED': cls.__constants['L_SOLID_R_DASHED'],
            'DOUBLE_DASHED': cls.__constants['DOUBLE_DASHED'],
            'DOUBLE_SOLID': cls.__constants['DOUBLE_SOLID'],
            'CURB': cls.__constants['CURB'],
            'GUARDRAIL': cls.__constants['GUARDRAIL'],
            'CENTER_LINE': cls.__constants['CENTER_LINE'],
            'VIRTUAL_JUNCTION': cls.__constants['VIRTUAL_JUNCTION'],
            'VIRTUAL': cls.__constants['VIRTUAL'],
            'WHITE': cls.__constants['WHITE'],
            'YELLOW': cls.__constants['YELLOW'],
            'DOUBLE_YELLOW': cls.__constants['DOUBLE_YELLOW'],
        }

    @property
    def UNKNOWN(self):
        """Message constant 'UNKNOWN'."""
        return Metaclass_LaneType.__constants['UNKNOWN']

    @property
    def DASHED_LINE(self):
        """Message constant 'DASHED_LINE'."""
        return Metaclass_LaneType.__constants['DASHED_LINE']

    @property
    def SOLID_LINE(self):
        """Message constant 'SOLID_LINE'."""
        return Metaclass_LaneType.__constants['SOLID_LINE']

    @property
    def L_DASHED_R_SOLID(self):
        """Message constant 'L_DASHED_R_SOLID'."""
        return Metaclass_LaneType.__constants['L_DASHED_R_SOLID']

    @property
    def L_SOLID_R_DASHED(self):
        """Message constant 'L_SOLID_R_DASHED'."""
        return Metaclass_LaneType.__constants['L_SOLID_R_DASHED']

    @property
    def DOUBLE_DASHED(self):
        """Message constant 'DOUBLE_DASHED'."""
        return Metaclass_LaneType.__constants['DOUBLE_DASHED']

    @property
    def DOUBLE_SOLID(self):
        """Message constant 'DOUBLE_SOLID'."""
        return Metaclass_LaneType.__constants['DOUBLE_SOLID']

    @property
    def CURB(self):
        """Message constant 'CURB'."""
        return Metaclass_LaneType.__constants['CURB']

    @property
    def GUARDRAIL(self):
        """Message constant 'GUARDRAIL'."""
        return Metaclass_LaneType.__constants['GUARDRAIL']

    @property
    def CENTER_LINE(self):
        """Message constant 'CENTER_LINE'."""
        return Metaclass_LaneType.__constants['CENTER_LINE']

    @property
    def VIRTUAL_JUNCTION(self):
        """Message constant 'VIRTUAL_JUNCTION'."""
        return Metaclass_LaneType.__constants['VIRTUAL_JUNCTION']

    @property
    def VIRTUAL(self):
        """Message constant 'VIRTUAL'."""
        return Metaclass_LaneType.__constants['VIRTUAL']

    @property
    def WHITE(self):
        """Message constant 'WHITE'."""
        return Metaclass_LaneType.__constants['WHITE']

    @property
    def YELLOW(self):
        """Message constant 'YELLOW'."""
        return Metaclass_LaneType.__constants['YELLOW']

    @property
    def DOUBLE_YELLOW(self):
        """Message constant 'DOUBLE_YELLOW'."""
        return Metaclass_LaneType.__constants['DOUBLE_YELLOW']


class LaneType(metaclass=Metaclass_LaneType):
    """
    Message class 'LaneType'.

    Constants:
      UNKNOWN
      DASHED_LINE
      SOLID_LINE
      L_DASHED_R_SOLID
      L_SOLID_R_DASHED
      DOUBLE_DASHED
      DOUBLE_SOLID
      CURB
      GUARDRAIL
      CENTER_LINE
      VIRTUAL_JUNCTION
      VIRTUAL
      WHITE
      YELLOW
      DOUBLE_YELLOW
    """

    __slots__ = [
        '_lane_type',
        '_lane_color',
        '_s_start',
        '_s_end',
    ]

    _fields_and_field_types = {
        'lane_type': 'uint8',
        'lane_color': 'uint8',
        's_start': 'double',
        's_end': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lane_type = kwargs.get('lane_type', int())
        self.lane_color = kwargs.get('lane_color', int())
        self.s_start = kwargs.get('s_start', float())
        self.s_end = kwargs.get('s_end', float())

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
        if self.lane_type != other.lane_type:
            return False
        if self.lane_color != other.lane_color:
            return False
        if self.s_start != other.s_start:
            return False
        if self.s_end != other.s_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lane_type(self):
        """Message field 'lane_type'."""
        return self._lane_type

    @lane_type.setter
    def lane_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_type' field must be an unsigned integer in [0, 255]"
        self._lane_type = value

    @builtins.property
    def lane_color(self):
        """Message field 'lane_color'."""
        return self._lane_color

    @lane_color.setter
    def lane_color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lane_color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lane_color' field must be an unsigned integer in [0, 255]"
        self._lane_color = value

    @builtins.property
    def s_start(self):
        """Message field 's_start'."""
        return self._s_start

    @s_start.setter
    def s_start(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_start' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's_start' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s_start = value

    @builtins.property
    def s_end(self):
        """Message field 's_end'."""
        return self._s_end

    @s_end.setter
    def s_end(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_end' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 's_end' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._s_end = value
